//==========================================================================
// attention.cpp
//==========================================================================
// @brief: Attention layer for BitNet LLM

#include "attention.h"
#include "layer.h"
#include "data_include.h"

//----------------------------------------------------------
// dut
//----------------------------------------------------------
void dut(hls::stream<st_fixed32_t> &strm_in, hls::stream<st_fixed32_t> &strm_out) {
  attn_fixed_t input[SEQ_LEN_DECODE][HS_COLS_BASIC];
  attn_fixed_t output[SEQ_LEN_DECODE][PROJ_COLS_BASIC]; 

  // input processing
  for (int i = 0; i < SEQ_LEN_DECODE; i++)
    for (int j = 0; j < HS_COLS_BASIC; j++){
      input[i][j] = (attn_fixed_t)strm_in.read();
    }

  // call attention
  attention<
    CACHE_SIZE_INIT,
    SEQ_LEN_DECODE,
    HS_COLS_BASIC,
    PROJ_COLS_BASIC,
    NUM_HEADS_BASIC,
    HEAD_DIM_BASIC
  > (
    input,
    output,
    q_weights,
    q_scale,
    k_weights,
    k_scale,
    v_weights,
    v_scale,
    o_weights,
    o_scale,
    k_cache,
    v_cache,
    ln_weight_in,
    ln_weight,
    P_ID
  );

  // output processing
  for (int i = 0; i < SEQ_LEN_DECODE; i++)
    for (int j = 0; j < PROJ_COLS_BASIC; j++)
      strm_out.write((st_fixed32_t)output[i][j]);
}

//----------------------------------------------------------
// attention
//----------------------------------------------------------
template <
  int CACHE_SIZE_INIT,
  int SEQ_LEN,
  int HS_COLS,
  int PROJ_COLS,
  int NUM_HEADS,
  int HEAD_DIM
> void attention (
  attn_fixed_t hidden_states[SEQ_LEN][HS_COLS],
  attn_fixed_t final_output[SEQ_LEN][PROJ_COLS],
  const uint8_t q_weights[HS_COLS/4][PROJ_COLS],
  const attn_fixed_t q_scale,
  const uint8_t k_weights[HS_COLS/4][PROJ_COLS],
  const attn_fixed_t k_scale,
  const uint8_t v_weights[HS_COLS/4][PROJ_COLS],
  const attn_fixed_t v_scale,
  const uint8_t o_weights[HS_COLS/4][PROJ_COLS],
  const attn_fixed_t o_scale,
  const attn_fixed_t k_cache[NUM_HEADS][CACHE_SIZE_INIT][HEAD_DIM],
  const attn_fixed_t v_cache[NUM_HEADS][CACHE_SIZE_INIT][HEAD_DIM],
  const attn_fixed_t ln_weight_in[HS_COLS],
  const attn_fixed_t ln_weight[PROJ_COLS],
  const attn_fixed_t p_id
) {

  // step 1: apply layer normalization
  RMS_NORM_LOOP_1: for (int s = 0; s < SEQ_LEN; s++) {
    rms_norm<HS_COLS>(
      hidden_states[s], 
      ln_weight_in,
      NORM_EPSILON
    );
  }

  // step 2: quantize input activations
  sbit8_t quantized_hidden_states[SEQ_LEN][HS_COLS/4][4];
  attn_fixed_t scales[SEQ_LEN];

  init_3d_mem<SEQ_LEN, HS_COLS/4, 4, sbit8_t>(quantized_hidden_states, 0);
  init_1d_mem<SEQ_LEN, attn_fixed_t>(scales, 1);

  quantize_activation<SEQ_LEN, HS_COLS>(
    hidden_states,
    quantized_hidden_states,
    scales,
    8
  );

  // step 3: linear transformation
  attn_fixed_t q_proj_re[SEQ_LEN][PROJ_COLS];
  attn_fixed_t k_proj_re[SEQ_LEN][PROJ_COLS];
  attn_fixed_t v_proj_re[SEQ_LEN][PROJ_COLS];

  init_2d_mem<SEQ_LEN, PROJ_COLS, attn_fixed_t>(q_proj_re, 0);
  init_2d_mem<SEQ_LEN, PROJ_COLS, attn_fixed_t>(k_proj_re, 0);
  init_2d_mem<SEQ_LEN, PROJ_COLS, attn_fixed_t>(v_proj_re, 0);

  linear_forward_no_mul<SEQ_LEN, HS_COLS, PROJ_COLS>(
    quantized_hidden_states,
    q_proj_re,
    scales,
    q_weights,
    q_scale
  );
  linear_forward_no_mul<SEQ_LEN, HS_COLS, PROJ_COLS>(
    quantized_hidden_states,
    k_proj_re,
    scales,
    k_weights,
    k_scale
  );
  linear_forward_no_mul<SEQ_LEN, HS_COLS, PROJ_COLS>(
    quantized_hidden_states,
    v_proj_re,
    scales,
    v_weights,
    v_scale
  );

  attn_fixed_t q_proj[NUM_HEADS][SEQ_LEN][HEAD_DIM];
  attn_fixed_t k_proj[NUM_HEADS][SEQ_LEN][HEAD_DIM];
  attn_fixed_t v_proj[NUM_HEADS][SEQ_LEN][HEAD_DIM];

  reshape_2D_to_3D<SEQ_LEN, NUM_HEADS, HEAD_DIM>(q_proj_re, q_proj);
  reshape_2D_to_3D<SEQ_LEN, NUM_HEADS, HEAD_DIM>(k_proj_re, k_proj);
  reshape_2D_to_3D<SEQ_LEN, NUM_HEADS, HEAD_DIM>(v_proj_re, v_proj);

  // step 4: apply rotary embedding
  attn_fixed_t q_embed[NUM_HEADS][SEQ_LEN][HEAD_DIM];
  attn_fixed_t k_embed[NUM_HEADS][SEQ_LEN][HEAD_DIM];
  apply_rotary_pos_emb<SEQ_LEN, NUM_HEADS, HEAD_DIM>(
    q_proj, k_proj, q_embed, k_embed, p_id
  );
  attn_fixed_t k_cache_upd[NUM_HEADS][CACHE_SIZE_INIT+1][HEAD_DIM];
  attn_fixed_t v_cache_upd[NUM_HEADS][CACHE_SIZE_INIT+1][HEAD_DIM];
  cache_update<NUM_HEADS, CACHE_SIZE_INIT, HEAD_DIM>(
    k_cache, k_cache_upd, k_embed
  );
  cache_update<NUM_HEADS, CACHE_SIZE_INIT, HEAD_DIM>(
    v_cache, v_cache_upd, v_proj
  );
  // step 5: transpose K for correct multiplication
  attn_fixed_t k_proj_transposed[NUM_HEADS][HEAD_DIM][CACHE_SIZE_INIT+1];
  transpose_last_two_dims<CACHE_SIZE_INIT+1, NUM_HEADS, HEAD_DIM>(k_cache_upd, k_proj_transposed);

  // step 6: calculate attention scores
  attn_fixed_t attn_weights[NUM_HEADS][SEQ_LEN][CACHE_SIZE_INIT+1];
  GEMM_3D_float<
    NUM_HEADS,
    SEQ_LEN,
    HEAD_DIM,
    NUM_HEADS,
    HEAD_DIM,
    CACHE_SIZE_INIT+1
  > (
    q_embed,
    k_proj_transposed,
    attn_weights
  );

  SF_LOOP_1: for (int h = 0; h < NUM_HEADS; ++h)
    SF_LOOP_2: for (int s = 0; s < SEQ_LEN; ++s)
      SF_LOOP_3: for (int d = 0; d < CACHE_SIZE_INIT+1; ++d)
        attn_weights[h][s][d] /= HEAD_DIM_BASIC_SQRT;

  attn_fixed_t causal_mask[SEQ_LEN][SEQ_LEN];
  create_causal_mask<SEQ_LEN>(causal_mask);
  CM_LOOP_1: for (int h = 0; h < NUM_HEADS; ++h)
    CM_LOOP_2: for (int s = 0; s < SEQ_LEN; ++s)
      CM_LOOP_3: for (int d = 0; d < SEQ_LEN; ++d)
        attn_weights[h][s][d] += causal_mask[s][d];

  // step 7: apply softmax
  softmax<SEQ_LEN, NUM_HEADS, CACHE_SIZE_INIT+1>(attn_weights);

  // step 8: multiply with V
  attn_fixed_t attn_output[NUM_HEADS][SEQ_LEN][HEAD_DIM];
  GEMM_3D_float<
    NUM_HEADS,
    SEQ_LEN,
    CACHE_SIZE_INIT+1,
    NUM_HEADS,
    CACHE_SIZE_INIT+1,
    HEAD_DIM
  > (
    attn_weights,
    v_cache_upd,
    attn_output
  );

  attn_fixed_t attn_output_2D[SEQ_LEN][PROJ_COLS];
  init_2d_mem<SEQ_LEN, PROJ_COLS, attn_fixed_t>(attn_output_2D, 0);
  ATTN_2D_LOOP_1: for (int s = 0; s < SEQ_LEN; ++s)
    ATTN_2D_LOOP_2: for (int h = 0; h < NUM_HEADS; ++h)
      ATTN_2D_LOOP_3: for (int d = 0; d < HEAD_DIM; ++d)
        attn_output_2D[s][h * HEAD_DIM + d] = attn_output[h][s][d];

  // step 9: apply RMS normalization before projection
  RMS_NORM_LOOP_2: for (int s = 0; s < SEQ_LEN; ++s)
    rms_norm<PROJ_COLS>(
      attn_output_2D[s],
      ln_weight,
      NORM_EPSILON
    );
  
  // step 10: final output projection using quantized GEMM (forward_no_mul)
  // quantize attention output before final projection
  sbit8_t quantized_final_output[SEQ_LEN][PROJ_COLS/4][4];
  attn_fixed_t final_scales[SEQ_LEN];
  init_3d_mem<SEQ_LEN, PROJ_COLS/4, 4, sbit8_t>(quantized_final_output, 0);
  init_1d_mem<SEQ_LEN, attn_fixed_t>(final_scales, 1);
  quantize_activation<SEQ_LEN, PROJ_COLS>(
    attn_output_2D,
    quantized_final_output,
    final_scales,
    8
  );

  init_2d_mem<SEQ_LEN, PROJ_COLS, attn_fixed_t>(final_output, 0);
  linear_forward_no_mul<SEQ_LEN, PROJ_COLS, PROJ_COLS>(
    quantized_final_output,
    final_output,
    final_scales,
    o_weights,
    o_scale
  );
}

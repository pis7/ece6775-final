//==========================================================================
// attention.cpp
//==========================================================================
// @brief: Attention layer for BitNet LLM

#include "attention.h"
#include "layer.h"

//----------------------------------------------------------
// dut
//----------------------------------------------------------
void dut(hls::stream<fixed32_t> &strm_in, hls::stream<fixed32_t> &strm_out) {
  fixed32_t input[SEQ_LEN_DECODE][HS_COLS_BASIC];
  fixed32_t output[SEQ_LEN_DECODE][PROJ_COLS_BASIC]; 

  // input processing
  for (int i = 0; i < SEQ_LEN_DECODE; i++)
    for (int j = 0; j < HS_COLS_BASIC; j++)
      input[i][j] = strm_in.read();

  // call attention
  attention<
    SEQ_LEN_DECODE,
    HS_COLS_BASIC,
    PROJ_COLS_BASIC,
    NUM_HEADS_BASIC,
    HEAD_DIM_BASIC
  > (
    input,
    output,
    q_weights1,
    k_weights1,
    v_weights1,
    o_weights1,
    inv_freq1,
    ln_weights_in1,
    ln_weights1,
    P_ID
  );

  // output processing
  for (int i = 0; i < SEQ_LEN_DECODE; i++)
    for (int j = 0; j < PROJ_COLS_BASIC; j++)
      strm_out.write(output[i][j]);
}

//----------------------------------------------------------
// attention
//----------------------------------------------------------
template <
  int SEQ_LEN,
  int HS_COLS,
  int PROJ_COLS,
  int NUM_HEADS,
  int HEAD_DIM
> void attention (
  fixed32_t hidden_states[SEQ_LEN][HS_COLS],
  fixed32_t final_output[SEQ_LEN][PROJ_COLS],
  const sbit8_t q_weights[SEQ_LEN/4][PROJ_COLS],
  const sbit8_t k_weights[SEQ_LEN/4][PROJ_COLS],
  const sbit8_t v_weights[SEQ_LEN/4][PROJ_COLS],
  const sbit8_t o_weights[SEQ_LEN/4][PROJ_COLS],
  const fixed32_t inv_freq[HEAD_DIM/2],
  const fixed32_t ln_weights_in[HS_COLS],
  const fixed32_t ln_weights[PROJ_COLS],
  const fixed32_t p_id
) {

  // step 1: apply layer normalization
  for (int s = 0; s < SEQ_LEN; s++) {
    rms_norm<HS_COLS>(
      hidden_states[s], 
      ln_weights_in,
      NORM_EPSILON
    );
  }

  // step 2: quantize input activations
  sbit8_t quantized_hidden_states[SEQ_LEN][HS_COLS];
  fixed32_t scales[SEQ_LEN];

  init_2d_mem<SEQ_LEN, HS_COLS, sbit8_t>(quantized_hidden_states, 0);
  init_1d_mem<SEQ_LEN, fixed32_t>(scales, 1);

  quantize_activation<SEQ_LEN, HS_COLS>(
    hidden_states,
    quantized_hidden_states,
    scales,
    8
  );

  // step 3: linear transformation
  fixed32_t q_proj_re[SEQ_LEN][PROJ_COLS];
  fixed32_t k_proj_re[SEQ_LEN][PROJ_COLS];
  fixed32_t v_proj_re[SEQ_LEN][PROJ_COLS];

  init_2d_mem<SEQ_LEN, PROJ_COLS, fixed32_t>(q_proj_re, 0);
  init_2d_mem<SEQ_LEN, PROJ_COLS, fixed32_t>(k_proj_re, 0);
  init_2d_mem<SEQ_LEN, PROJ_COLS, fixed32_t>(v_proj_re, 0);

  linear_forward_no_mul<SEQ_LEN, HS_COLS, PROJ_COLS>(
    quantized_hidden_states,
    q_proj_re,
    scales,
    q_weights,
    W_SCALE
  );
  linear_forward_no_mul<SEQ_LEN, HS_COLS, PROJ_COLS>(
    quantized_hidden_states,
    k_proj_re,
    scales,
    k_weights,
    W_SCALE
  );
  linear_forward_no_mul<SEQ_LEN, HS_COLS, PROJ_COLS>(
    quantized_hidden_states,
    v_proj_re,
    scales,
    v_weights,
    W_SCALE
  );

  fixed32_t q_proj[NUM_HEADS][SEQ_LEN][HEAD_DIM];
  fixed32_t k_proj[NUM_HEADS][SEQ_LEN][HEAD_DIM];
  fixed32_t v_proj[NUM_HEADS][SEQ_LEN][HEAD_DIM];

  reshape_2D_to_3D<SEQ_LEN, NUM_HEADS, HEAD_DIM>(q_proj_re, q_proj);
  reshape_2D_to_3D<SEQ_LEN, NUM_HEADS, HEAD_DIM>(k_proj_re, k_proj);
  reshape_2D_to_3D<SEQ_LEN, NUM_HEADS, HEAD_DIM>(v_proj_re, v_proj);

  // step 4: apply rotary embedding
  fixed32_t cos[SEQ_LEN][HEAD_DIM];
  fixed32_t sin[SEQ_LEN][HEAD_DIM];
  fixed32_t q_embed[NUM_HEADS][SEQ_LEN][HEAD_DIM];
  fixed32_t k_embed[NUM_HEADS][SEQ_LEN][HEAD_DIM];
  rotary_embedding<SEQ_LEN, NUM_HEADS, HEAD_DIM>(inv_freq, cos, sin, p_id);
  apply_rotary_pos_emb<SEQ_LEN, NUM_HEADS, HEAD_DIM>(
    q_proj, k_proj, q_embed, k_embed, cos, sin
  );
  // TODO: add cache

  // step 5: transpose K for correct multiplication
  fixed32_t k_proj_transposed[NUM_HEADS][HEAD_DIM][SEQ_LEN];
  transpose_last_two_dims<SEQ_LEN, NUM_HEADS, HEAD_DIM>(k_embed, k_proj_transposed);

  // step 6: calculate attention scores
  fixed32_t attn_weights[NUM_HEADS][SEQ_LEN][HEAD_DIM];
  GEMM_3D_float<
    SEQ_LEN,
    NUM_HEADS,
    HEAD_DIM,
    HEAD_DIM,
    NUM_HEADS,
    SEQ_LEN
  > (
    q_embed,
    k_proj_transposed,
    attn_weights
  );

  fixed32_t scale_factor = hls::sqrt(HEAD_DIM);
  for (int h = 0; h < NUM_HEADS; ++h)
    for (int s = 0; s < SEQ_LEN; ++s)
      for (int d = 0; d < HEAD_DIM; ++d)
        attn_weights[h][s][d] /= scale_factor;

  fixed32_t causal_mask[SEQ_LEN][SEQ_LEN];
  create_causal_mask<SEQ_LEN>(causal_mask);
  for (int h = 0; h < NUM_HEADS; ++h)
    for (int s = 0; s < SEQ_LEN; ++s)
      for (int d = 0; d < SEQ_LEN; ++d)
        attn_weights[h][s][d] += causal_mask[s][d];

  // step 7: apply softmax
  softmax<SEQ_LEN, NUM_HEADS, HEAD_DIM>(attn_weights);

  // step 8: multiply with V
  fixed32_t attn_output[NUM_HEADS][SEQ_LEN][HEAD_DIM];
  GEMM_3D_float<
    SEQ_LEN,
    NUM_HEADS,
    HEAD_DIM,
    SEQ_LEN,
    NUM_HEADS,
    HEAD_DIM
  > (
    attn_weights,
    v_proj,
    attn_output
  );

  fixed32_t attn_output_2D[SEQ_LEN][PROJ_COLS];
  init_2d_mem<SEQ_LEN, PROJ_COLS, fixed32_t>(attn_output_2D, 0);
  for (int s = 0; s < SEQ_LEN; ++s)
    for (int h = 0; h < NUM_HEADS; ++h)
      for (int d = 0; d < HEAD_DIM; ++d)
        attn_output_2D[s][h * HEAD_DIM + d] = attn_output[h][s][d];

  // step 9: apply RMS normalization before projection
  for (int s = 0; s < SEQ_LEN; ++s)
    rms_norm<PROJ_COLS>(
      attn_output_2D[s],
      ln_weights,
      NORM_EPSILON
    );
  
  // step 10: final output projection using quantized GEMM (forward_no_mul)
  // quantize attention output before final projection
  sbit8_t quantized_final_output[SEQ_LEN][PROJ_COLS];
  fixed32_t final_scales[SEQ_LEN];
  init_2d_mem<SEQ_LEN, PROJ_COLS, sbit8_t>(quantized_final_output, 0);
  init_1d_mem<SEQ_LEN, fixed32_t>(final_scales, 1);
  quantize_activation<SEQ_LEN, PROJ_COLS>(
    attn_output_2D,
    quantized_final_output,
    final_scales,
    8
  );

  init_2d_mem<SEQ_LEN, PROJ_COLS, fixed32_t>(final_output, 0);
  linear_forward_no_mul<SEQ_LEN, PROJ_COLS, PROJ_COLS>(
    quantized_final_output,
    final_output,
    final_scales,
    o_weights,
    W_SCALE
  );
}

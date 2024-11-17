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
  fixed32_t input[I_WIDTH1][I_WIDTH1];
  fixed32_t output[I_WIDTH1][O_WIDTH1]; 

  // input processing
  for (int i = 0; i < I_WIDTH1; i++) {
    for (int j = 0; j < I_WIDTH1; j++)
      input[i][j] = strm_in.read();
  }

  // call attention
  attention<
    SEQ_LEN_DECODE,
    HS_COLS_BASIC,
    PROJ_COLS_BASIC,
    NUM_HEADS_BASIC,
    HEAD_DIM_BASIC
  > (
    input,
    q_weights1,
    k_weights1,
    v_weights1,
    inv_freq1,
    ln_weights_in1,
    P_ID
  );

  // output processing
  for (int i = 0; i < I_WIDTH1; i++) {
    for (int j = 0; j < O_WIDTH1; j++)
      strm_out.write(input[i][j]);
  }
}

//----------------------------------------------------------
// attention
//----------------------------------------------------------
template <
  int CACHE_SIZE,
  int SEQ_LEN,
  int HS_COLS,
  int PROJ_COLS,
  int NUM_HEADS,
  int HEAD_DIM
> void attention (
  fixed32_t hidden_states[SEQ_LEN][HS_COLS],
  const sbit8_t q_weights[SEQ_LEN/4][PROJ_COLS],
  const sbit8_t k_weights[SEQ_LEN/4][PROJ_COLS],
  const sbit8_t v_weights[SEQ_LEN/4][PROJ_COLS],
  const fixed32_t inv_freq[HEAD_DIM/2],
  const fixed32_t ln_weight_in[HS_COLS],
  fixed32_t k_cache[]
  const fixed32_t p_id
) {

  // initialize caches


  // step 1: apply layer normalization
  for (int i = 0; i < SEQ_LEN; i++) {
    rms_norm<HS_COLS>(
      hidden_states[i], 
      ln_weight_in,
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

  // step 4: reshape Q, K, V for attention calculation
  fixed32_t q_proj[NUM_HEADS][SEQ_LEN][HEAD_DIM];
  fixed32_t k_proj[NUM_HEADS][SEQ_LEN][HEAD_DIM];
  fixed32_t v_proj[NUM_HEADS][SEQ_LEN][HEAD_DIM];

  reshape_2D_to_3D<SEQ_LEN, NUM_HEADS, HEAD_DIM>(q_proj_re, q_proj);
  reshape_2D_to_3D<SEQ_LEN, NUM_HEADS, HEAD_DIM>(k_proj_re, k_proj);
  reshape_2D_to_3D<SEQ_LEN, NUM_HEADS, HEAD_DIM>(v_proj_re, v_proj);

  // step 5: apply rotary embedding
  fixed32_t cos[SEQ_LEN][HEAD_DIM];
  fixed32_t sin[SEQ_LEN][HEAD_DIM];
  fixed32_t q_embed[NUM_HEADS][SEQ_LEN][HEAD_DIM];
  fixed32_t k_embed[NUM_HEADS][SEQ_LEN][HEAD_DIM];
  rotary_embedding<SEQ_LEN, NUM_HEADS, HEAD_DIM>(inv_freq, cos, sin, p_id);
  apply_rotary_pos_emb<SEQ_LEN, NUM_HEADS, HEAD_DIM>(
    q_proj, k_proj, q_embed, k_embed, cos, sin
  );
  

}

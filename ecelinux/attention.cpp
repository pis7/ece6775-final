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
  attention<I_WIDTH1, I_WIDTH1, O_WIDTH1, NUM_HEADS1, HEAD_DIM1>(input);

  // output processing
  for (int i = 0; i < I_WIDTH1; i++) {
    for (int j = 0; j < O_WIDTH1; j++)
      strm_out.write(input[i][j]);
  }
}

//----------------------------------------------------------
// attention
//----------------------------------------------------------
template <int HS_ROWS, int HS_COLS, int PROJ_COLS, int NUM_HEADS, int HEAD_DIM>
void attention(
  fixed32_t hidden_states[HS_ROWS][HS_COLS]
) {

  // step 1: apply layer normalization
  for (int i = 0; i < HS_ROWS; i++) {
    rms_norm<HS_COLS>(
      hidden_states[i], 
      ln_weights_in1,
      norm_epsilon1
    );
  }

  // step 2: quantize input activations
  sbit8_t quantized_hidden_states[HS_ROWS][HS_COLS];
  fixed32_t scales[HS_ROWS];

  init_2d_mem<HS_ROWS, HS_COLS, sbit8_t>(quantized_hidden_states, 0);
  init_1d_mem<HS_ROWS, fixed32_t>(scales, 1);

  quantize_activation<HS_ROWS, HS_COLS>(
    hidden_states,
    quantized_hidden_states,
    scales,
    8
  );

  // step 3: linear transformation
  fixed32_t q_proj_re[HS_ROWS][PROJ_COLS];
  fixed32_t k_proj_re[HS_ROWS][PROJ_COLS];
  fixed32_t v_proj_re[HS_ROWS][PROJ_COLS];

  init_2d_mem<HS_ROWS, PROJ_COLS, fixed32_t>(q_proj_re, 0);
  init_2d_mem<HS_ROWS, PROJ_COLS, fixed32_t>(k_proj_re, 0);
  init_2d_mem<HS_ROWS, PROJ_COLS, fixed32_t>(v_proj_re, 0);

  linear_forward_no_mul<HS_ROWS, HS_COLS, PROJ_COLS>(
    quantized_hidden_states,
    q_proj_re,
    scales,
    q_weights,
    w_scale1
  );
  linear_forward_no_mul<HS_ROWS, HS_COLS, PROJ_COLS>(
    quantized_hidden_states,
    k_proj_re,
    scales,
    k_weights,
    w_scale1
  );
  linear_forward_no_mul<HS_ROWS, HS_COLS, PROJ_COLS>(
    quantized_hidden_states,
    v_proj_re,
    scales,
    v_weights,
    w_scale1
  );

  // step 4: reshape Q, K, V for attention calculation
  fixed32_t q_proj[NUM_HEADS][HS_ROWS][HEAD_DIM];
  fixed32_t k_proj[NUM_HEADS][HS_ROWS][HEAD_DIM];
  fixed32_t v_proj[NUM_HEADS][HS_ROWS][HEAD_DIM];

  reshape_2D_to_3D<HS_ROWS, NUM_HEADS, HEAD_DIM>(q_proj_re, q_proj);
  reshape_2D_to_3D<HS_ROWS, NUM_HEADS, HEAD_DIM>(k_proj_re, k_proj);
  reshape_2D_to_3D<HS_ROWS, NUM_HEADS, HEAD_DIM>(v_proj_re, v_proj);


}

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
  fixed32_t output[I_WIDTH1*3][O_WIDTH1]; 

  // input processing
  for (int i = 0; i < I_WIDTH1; i++) {
    for (int j = 0; j < I_WIDTH1; j++)
      input[i][j] = strm_in.read();
  }

  // call attention
  attention(input, output);

  // output processing
  for (int i = 0; i < I_WIDTH1*3; i++) {
    for (int j = 0; j < O_WIDTH1; j++)
      strm_out.write(output[i][j]);
  }
}

//----------------------------------------------------------
// attention
//----------------------------------------------------------
void attention(
  fixed32_t hidden_states[I_WIDTH1][I_WIDTH1],
  fixed32_t output[I_WIDTH1*3][O_WIDTH1]
) {

  // step 1: apply layer normalization
  for (int i = 0; i < I_WIDTH1; i++) {
    rms_norm<I_WIDTH1>(
      hidden_states[i], 
      ln_weights_in1,
      norm_epsilon1
    );
  }

  // step 2: quantize input activations
  sbit8_t quantized_hidden_states[I_WIDTH1][I_WIDTH1];
  fixed32_t scales[I_WIDTH1];

  init_2d_mem<I_WIDTH1, I_WIDTH1, sbit8_t>(quantized_hidden_states, 0);
  init_1d_mem<I_WIDTH1, fixed32_t>(scales, 1);

  quantize_activation<I_WIDTH1>(
    hidden_states,
    quantized_hidden_states,
    scales,
    8
  );

  // step 3: linear transformation
  fixed32_t q_proj_re[I_WIDTH1][O_WIDTH1];
  fixed32_t k_proj_re[I_WIDTH1][O_WIDTH1];
  fixed32_t v_proj_re[I_WIDTH1][O_WIDTH1];

  init_2d_mem<I_WIDTH1, O_WIDTH1, fixed32_t>(q_proj_re, 0);
  init_2d_mem<I_WIDTH1, O_WIDTH1, fixed32_t>(k_proj_re, 0);
  init_2d_mem<I_WIDTH1, O_WIDTH1, fixed32_t>(v_proj_re, 0);

  linear_forward_no_mul<I_WIDTH1, O_WIDTH1>(
    quantized_hidden_states,
    q_proj_re,
    scales,
    q_weights,
    w_scale1
  );
  linear_forward_no_mul<I_WIDTH1, O_WIDTH1>(
    quantized_hidden_states,
    k_proj_re,
    scales,
    k_weights,
    w_scale1
  );
  linear_forward_no_mul<I_WIDTH1, O_WIDTH1>(
    quantized_hidden_states,
    v_proj_re,
    scales,
    v_weights,
    w_scale1
  );

  for (int i = 0; i < I_WIDTH1; i++) {
    for (int j = 0; j < O_WIDTH1; j++) {
      output[i][j] = q_proj_re[i][j];
    }
  }
  for (int i = 0; i < I_WIDTH1; i++) {
    for (int j = 0; j < O_WIDTH1; j++) {
      output[i+I_WIDTH1][j] = k_proj_re[i][j];
    }
  }
  for (int i = 0; i < I_WIDTH1; i++) {
    for (int j = 0; j < O_WIDTH1; j++) {
      output[i+I_WIDTH1*2][j] = v_proj_re[i][j];
    }
  }
}

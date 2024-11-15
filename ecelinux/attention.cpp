//==========================================================================
// attention.cpp
//==========================================================================
// @brief: Attention layer for BitNet LLM

#include "attention.h"
#include "layer.h"

//----------------------------------------------------------
// dut
//----------------------------------------------------------
void dut(hls::stream<bit32_t> &strm_in, hls::stream<bit32_t> &strm_out) {
  bit8_t input[I_WIDTH1][I_WIDTH1];
  bit32_t output[I_WIDTH1*3][O_WIDTH1]; 

  // input processing
  for (int i = 0; i < I_WIDTH1; i++) {
    bit32_t strm_input = strm_in.read();
    for (int j = 0; j < I_WIDTH1; j+=4) {
      input[i][j]   = strm_input(7, 0);
      input[i][j+1] = strm_input(15, 8);
      input[i][j+2] = strm_input(23, 16);
      input[i][j+3] = strm_input(31, 24);
    }
  }

  // call attention
  attention(input, output);

  // output processing
  for (int i = 0; i < I_WIDTH1*3; i++) {
    for (int j = 0; j < O_WIDTH1; j++) {
      strm_out.write(output[i][j]);
    }
  }
}

//----------------------------------------------------------
// attention
//----------------------------------------------------------
void attention(
  bit8_t hidden_states[I_WIDTH1][I_WIDTH1],
  bit32_t output[I_WIDTH1*3][O_WIDTH1]
) {
  bit32_t q_proj_re[I_WIDTH1][O_WIDTH1];
  bit32_t k_proj_re[I_WIDTH1][O_WIDTH1];
  bit32_t v_proj_re[I_WIDTH1][O_WIDTH1];

  init_mem<I_WIDTH1, O_WIDTH1, 32>(q_proj_re);
  init_mem<I_WIDTH1, O_WIDTH1, 32>(k_proj_re);
  init_mem<I_WIDTH1, O_WIDTH1, 32>(v_proj_re);

  linear_forward_no_mul<I_WIDTH1, O_WIDTH1>(
    hidden_states,
    q_proj_re,
    scales1,
    q_weights,
    w_scale1
  );

  for (int i = 0; i < I_WIDTH1; i++) {
    for (int j = 0; j < O_WIDTH1; j++) {
      output[i][j] = q_proj_re[i][j];
    }
  }

  linear_forward_no_mul<I_WIDTH1, O_WIDTH1>(
    hidden_states,
    k_proj_re,
    scales1,
    k_weights,
    w_scale1
  );

  for (int i = 0; i < I_WIDTH1; i++) {
    for (int j = 0; j < O_WIDTH1; j++) {
      output[I_WIDTH1 + i][j] = k_proj_re[i][j];
    }
  }

  linear_forward_no_mul<I_WIDTH1, O_WIDTH1>(
    hidden_states,
    v_proj_re,
    scales1,
    v_weights,
    w_scale1
  );

  for (int i = 0; i < I_WIDTH1; i++) {
    for (int j = 0; j < O_WIDTH1; j++) {
      output[I_WIDTH1*2 + i][j] = v_proj_re[i][j];
    }
  }

}

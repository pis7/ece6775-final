//===========================================================================
// layer.h
//===========================================================================
// @brief: This header file defines the interface for the core functions.

#ifndef LAYER_H
#define LAYER_H

#include "model.h"
#include "typedefs.h"
#include <hls_math.h>
#include <iostream>
#include <cassert>
typedef  ap_uint<32>  HLS_SIZE_T;
#include "hls/hls_video_mem.h"

//----------------------------------------------------------
// init_1d_mem
//----------------------------------------------------------
template <int M, typename S>
void init_1d_mem (
  S mem[M],
  S val
) {
  for (int i = 0; i < M; i++)
    mem[i] = val;
}

//----------------------------------------------------------
// init_2d_mem
//----------------------------------------------------------
template <int M, int N, typename S>
void init_2d_mem (
  S mem[M][N],
  S val
) {
  for (int i = 0; i < M; i++) {
    for (int j = 0; j < N; j++)
      mem[i][j] = val;
  }
}

//----------------------------------------------------------
// rms_norm
//----------------------------------------------------------
template <int M>
void rms_norm(
  fixed32_t input[M],
  const fixed32_t weight[M],
  fixed32_t epsilon
) {
  fixed32_t variance = 0.0;
  for (int i = 0; i < M; i++)
    variance += input[i] * input[i];

  variance = static_cast<fixed32_t>(1.0) / hls::sqrt(
    variance / static_cast<fixed32_t>(M) + epsilon);

  for (int i = 0; i < M; i++)
    input[i] *= variance * weight[i];
}

//----------------------------------------------------------
// quantize_activation
//----------------------------------------------------------
template <int M>
void quantize_activation(
  fixed32_t input[M][M],
  sbit8_t output_states[M][M],
  fixed32_t output_scales[M],
  sbit8_t num_bits
) {
  fixed32_t Qn = -(1 << (num_bits - 1));
  fixed32_t Qp = (1 << (num_bits - 1)) - 1;

  for (int i = 0; i < M; ++i) {
    
      // Calculate the scale for each row
      fixed32_t max_val = 0.0;
      for (int j = 0; j < M; ++j) {
          max_val = std::max(max_val, hls::abs(input[i][j]));
      }
      fixed32_t max_v = std::max(max_val, static_cast<fixed32_t>(1e-5));
      fixed32_t scale = Qp / max_v;
      output_scales[i] = scale;

      // Quantize each element in the row
      for (int j = 0; j < M; ++j) {
          fixed32_t quantized_value = static_cast<fixed32_t>(hls::round(input[i][j] * scale));
          sbit8_t quantized_value_clamped = (quantized_value < Qn) ? Qn : ((quantized_value > Qp) ? Qp : quantized_value);
          output_states[i][j] = static_cast<sbit8_t>(quantized_value_clamped);
      }
  }
}

//----------------------------------------------------------
// linear_forward_no_mul
//----------------------------------------------------------
template <int M, int N>
void linear_forward_no_mul (
  sbit8_t input[M][M],
  fixed32_t output[M][N],
  const fixed32_t scales[M],
  const sbit8_t packed_weights[M/4][N],
  const fixed32_t w_scale
) {
  for (int i = 0; i < M; i++) {
    for (int j = 0; j < N; j++) {
      for(int k = 0; k < M; k+=4) {
        sbit8_t packed_val = packed_weights[k/4][j];

        for (int l = 0; l < 4 && (k + l) < M; l++) {
          sbit8_t extract_val = (packed_val >> (2 * l)) & 0b11;
          if (extract_val == 0b01) output[i][j] += input[i][k + l];
          else if (extract_val == 0b10) output[i][j] -= input[i][k + l];
        }
      }
      output[i][j] /= (scales[i] * w_scale);
    }
  }
}

#endif

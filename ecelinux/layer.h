//===========================================================================
// layer.h
//===========================================================================
// @brief: This header file defines the interface for the core functions.

#ifndef LAYER_H
#define LAYER_H

#include "model.h"
#include "typedefs.h"
#include "hls_math.h"
#include <iostream>
#include <cassert>
typedef  ap_uint<32>  HLS_SIZE_T;
#include "hls/hls_video_mem.h"

//----------------------------------------------------------
// init_1d_mem
//----------------------------------------------------------
template <int I, typename T>
void init_1d_mem (
  T mem[I],
  T val
) {
  for (int i = 0; i < I; i++)
    mem[i] = val;
}

//----------------------------------------------------------
// init_2d_mem
//----------------------------------------------------------
template <int R, int C, typename T>
void init_2d_mem (
  T mem[R][C],
  T val
) {
  for (int i = 0; i < R; i++)
    for (int j = 0; j < C; j++)
      mem[i][j] = val;
}

//----------------------------------------------------------
// rms_norm
//----------------------------------------------------------
template <int I>
void rms_norm(
  fixed32_t input[I],
  const fixed32_t weight[I],
  fixed32_t epsilon
) {
  fixed32_t variance = 0.0;
  for (int i = 0; i < I; i++)
    variance += input[i] * input[i];

  variance = static_cast<fixed32_t>(1.0) / hls::sqrt(
    variance / static_cast<fixed32_t>(I) + epsilon);

  for (int i = 0; i < I; i++)
    input[i] *= variance * weight[i];
}

//----------------------------------------------------------
// quantize_activation
//----------------------------------------------------------
template <int R, int C>
void quantize_activation(
  fixed32_t input[R][C],
  sbit8_t output_states[R][C],
  fixed32_t output_scales[R],
  sbit8_t num_bits
) {
  fixed32_t Qn = -(1 << (num_bits - 1));
  fixed32_t Qp = (1 << (num_bits - 1)) - 1;

  for (int i = 0; i < R; ++i) {
    
      // Calculate the scale for each row
      fixed32_t max_val = 0.0;
      for (int j = 0; j < C; ++j) {
          max_val = std::max(max_val, hls::abs(input[i][j]));
      }
      fixed32_t max_v = std::max(max_val, static_cast<fixed32_t>(1e-5));
      fixed32_t scale = Qp / max_v;
      output_scales[i] = scale;

      // Quantize each element in the row
      for (int j = 0; j < C; ++j) {
          fixed32_t quantized_value = static_cast<fixed32_t>(hls::round(input[i][j] * scale));
          sbit8_t quantized_value_clamped = (quantized_value < Qn) ? Qn : ((quantized_value > Qp) ? Qp : quantized_value);
          output_states[i][j] = static_cast<sbit8_t>(quantized_value_clamped);
      }
  }
}

//----------------------------------------------------------
// linear_forward_no_mul
//----------------------------------------------------------
template <int R, int IN_C, int OUT_C>
void linear_forward_no_mul (
  sbit8_t input[R][IN_C],
  fixed32_t output[R][OUT_C],
  const fixed32_t scales[R],
  const sbit8_t packed_weights[R/4][OUT_C],
  const fixed32_t w_scale
) {
  for (int i = 0; i < R; i++) {
    for (int j = 0; j < OUT_C; j++) {
      for(int k = 0; k < IN_C; k+=4) {
        sbit8_t packed_val = packed_weights[k/4][j];

        for (int l = 0; l < 4 && (k + l) < IN_C; l++) {
          sbit8_t extract_val = (packed_val >> (2 * l)) & 0b11;
          if (extract_val == 0b01) output[i][j] += input[i][k + l];
          else if (extract_val == 0b10) output[i][j] -= input[i][k + l];
        }
      }
      output[i][j] /= (scales[i] * w_scale);
    }
  }
}

//----------------------------------------------------------
// reshape_2D_to_3D
//----------------------------------------------------------
template <int SEQ_LEN, int NUM_HEADS, int HEAD_DIM>
void reshape_2D_to_3D (
  fixed32_t input [SEQ_LEN][NUM_HEADS*HEAD_DIM],
  fixed32_t output [NUM_HEADS][SEQ_LEN][HEAD_DIM]
) {
  for (size_t s = 0; s < SEQ_LEN; ++s)
    for (size_t h = 0; h < NUM_HEADS; ++h)
      for (size_t d = 0; d < HEAD_DIM; ++d)
        output[h][s][d] = input[s][h * HEAD_DIM + d];
}

//----------------------------------------------------------
// rotary_embedding
//----------------------------------------------------------
template <int SEQ_LEN, int NUM_HEADS, int HEAD_DIM>
void rotary_embedding (
  const fixed32_t inv_freq[HEAD_DIM/2],
  fixed32_t cos[SEQ_LEN][HEAD_DIM],
  fixed32_t sin[SEQ_LEN][HEAD_DIM],
  fixed32_t p_id
) {
  fixed32_t angle;
  for (size_t h = 0; h < NUM_HEADS; ++h) {
    for (size_t s = 0; s < SEQ_LEN; ++s) {
      for (size_t d = 0; d < HEAD_DIM / 2; ++d) {
        angle = inv_freq[d] * p_id;
        std::cout << "angle: " << angle << std::endl;
        cos[s][d] = hls::cos(angle);
        cos[s][d + HEAD_DIM / 2] = cos[s][d];
        sin[s][d] = hls::sin(angle);
        sin[s][d + HEAD_DIM / 2] = sin[s][d];
      }
    }
  }
}

//----------------------------------------------------------
// apply_rotary_pos_emb
//----------------------------------------------------------
template <int SEQ_LEN, int NUM_HEADS, int HEAD_DIM>
void apply_rotary_pos_emb (
  fixed32_t input_q[NUM_HEADS][SEQ_LEN][HEAD_DIM],
  fixed32_t input_k[NUM_HEADS][SEQ_LEN][HEAD_DIM],
  fixed32_t output_q[NUM_HEADS][SEQ_LEN][HEAD_DIM],
  fixed32_t output_k[NUM_HEADS][SEQ_LEN][HEAD_DIM],
  fixed32_t cos[SEQ_LEN][HEAD_DIM],
  fixed32_t sin[SEQ_LEN][HEAD_DIM]
) {
  
  // half rotate
  fixed32_t rotated_q[NUM_HEADS][SEQ_LEN][HEAD_DIM];
  fixed32_t rotated_k[NUM_HEADS][SEQ_LEN][HEAD_DIM];
  for (size_t h = 0; h < NUM_HEADS; ++h) {
    for (size_t s = 0; s < SEQ_LEN; ++s) {
      for (size_t d = 0; d < HEAD_DIM / 2; ++d) {
        rotated_q[h][s][d] = - input_q[h][s][d + HEAD_DIM / 2];
        rotated_k[h][s][d] = - input_k[h][s][d + HEAD_DIM / 2];
        rotated_q[h][s][d + HEAD_DIM / 2] = input_q[h][s][d];
        rotated_k[h][s][d + HEAD_DIM / 2] = input_k[h][s][d];
      }
    }
  }
  
  // apply rotation
  for (size_t h = 0; h < NUM_HEADS; ++h) {
    for (size_t s = 0; s < SEQ_LEN; ++s) {
      for (size_t d = 0; d < HEAD_DIM; ++d) {
        output_q[h][s][d] = input_q[h][s][d] * cos[s][d] + rotated_q[h][s][d] * sin[s][d];
        output_k[h][s][d] = input_k[h][s][d] * cos[s][d] + rotated_k[h][s][d] * sin[s][d];
      }
    }
  }
}

#endif
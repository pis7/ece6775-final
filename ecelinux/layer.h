//===========================================================================
// layer.h
//===========================================================================
// @brief: This header file defines the interface for the core functions.

#ifndef LAYER_H
#define LAYER_H

typedef bit32_t HLS_SIZE_T;

#include "model.h"
#include "hls_math.h"
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
// init_3d_mem
//----------------------------------------------------------
template <int P, int R, int C, typename T>
void init_3d_mem (
  T mem[P][R][C],
  T val
) {
  for (int i = 0; i < P; i++)
    for (int j = 0; j < R; j++)
      for (int k = 0; k < C; k++)
        mem[i][j][k] = val;
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
          fixed32_t quantized_value = 
            static_cast<fixed32_t>(hls::round(input[i][j] * scale));
          sbit8_t quantized_value_clamped = 
            (quantized_value < Qn) ? 
              Qn : ((quantized_value > Qp) ? Qp : quantized_value);
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
template <int P, int R, int C>
void reshape_2D_to_3D (
  fixed32_t input [P][R*C],
  fixed32_t output [R][P][C]
) {
  for (int s = 0; s < P; ++s)
    for (int h = 0; h < R; ++h)
      for (int d = 0; d < C; ++d)
        output[h][s][d] = input[s][h * C + d];
}

//----------------------------------------------------------
// rotary_embedding
//----------------------------------------------------------
template <int P, int R, int C>
void rotary_embedding (
  const fixed32_t inv_freq[C/2],
  fixed32_t cos[P][C],
  fixed32_t sin[P][C],
  fixed32_t p_id
) {
  fixed32_t angle;
  for (int h = 0; h < R; ++h) {
    for (int s = 0; s < P; ++s) {
      for (int d = 0; d < C / 2; ++d) {
        angle = inv_freq[d] * p_id;
        cos[s][d] = hls::cos(angle);
        cos[s][d + C / 2] = cos[s][d];
        sin[s][d] = hls::sin(angle);
        sin[s][d + C / 2] = sin[s][d];
      }
    }
  }
}

//----------------------------------------------------------
// apply_rotary_pos_emb
//----------------------------------------------------------
template <int P, int R, int C>
void apply_rotary_pos_emb (
  fixed32_t input_q[R][P][C],
  fixed32_t input_k[R][P][C],
  fixed32_t output_q[R][P][C],
  fixed32_t output_k[R][P][C],
  fixed32_t cos[P][C],
  fixed32_t sin[P][C]
) {
  
  // half rotate
  fixed32_t rotated_q[R][P][C];
  fixed32_t rotated_k[R][P][C];
  for (int h = 0; h < R; ++h) {
    for (int s = 0; s < P; ++s) {
      for (int d = 0; d < C / 2; ++d) {
        rotated_q[h][s][d] = - input_q[h][s][d + C / 2];
        rotated_k[h][s][d] = - input_k[h][s][d + C / 2];
        rotated_q[h][s][d + C / 2] = input_q[h][s][d];
        rotated_k[h][s][d + C / 2] = input_k[h][s][d];
      }
    }
  }
  
  // apply rotation
  for (int h = 0; h < R; ++h) {
    for (int s = 0; s < P; ++s) {
      for (int d = 0; d < C; ++d) {
        output_q[h][s][d] = 
          input_q[h][s][d] * cos[s][d] + rotated_q[h][s][d] * sin[s][d];
        output_k[h][s][d] = 
          input_k[h][s][d] * cos[s][d] + rotated_k[h][s][d] * sin[s][d];
      }
    }
  }
}

//----------------------------------------------------------
// transpose_last_two_dims
//----------------------------------------------------------
template <int P, int R, int C>
void transpose_last_two_dims (
  fixed32_t input[R][P][C],
  fixed32_t output[R][C][P]
) {
  for (int h = 0; h < R; ++h)
    for (int s = 0; s < P; ++s)
      for (int d = 0; d < C; ++d)
        output[h][d][s] = input[h][s][d];
}

//----------------------------------------------------------
// GEMM_3D_float
//----------------------------------------------------------
template <
  int P1,
  int R1,
  int C1,
  int P2,
  int R2,
  int C2
> void GEMM_3D_float (
  fixed32_t input_1[P1][R1][C1],
  fixed32_t input_2[P2][R2][C2],
  fixed32_t output[P1][R1][C2]
) {
  for (int h = 0; h < P1; ++h) {
    for (int s = 0; s < R1; ++s) {
      for (int d = 0; d < C2; ++d) {
        output[h][s][d] = 0;
        for (int k = 0; k < C1; ++k)
          output[h][s][d] += input_1[h][s][k] * input_2[h][k][d];
      }
    }
  }
}

//----------------------------------------------------------
// create_causal_mask
//----------------------------------------------------------
template <int P>
void create_causal_mask (
  fixed32_t mask[P][P]
) {
  for (int i = 0; i < P; i++)
    for (int j = 0; j < P; j++)
      mask[i][j] = (j <= i) ? static_cast<fixed32_t>(0.0) : FIXED32_MIN;
}

//----------------------------------------------------------
// softmax
//----------------------------------------------------------
template <int P, int R, int C>
void softmax (
  fixed32_t input[R][P][C]
) {
  for (int h = 0; h < R; ++h) {
    for (int s = 0; s < P; ++s) {
      fixed32_t max_val = input[h][s][0];
      for (int d = 1; d < C; ++d)
        max_val = std::max(max_val, input[h][s][d]);
      fixed32_t sum = 0.0;
      for (int d = 0; d < C; ++d) {
        input[h][s][d] = hls::exp(input[h][s][d] - max_val);
        sum += input[h][s][d];
      }
      for (int d = 0; d < C; ++d)
        input[h][s][d] /= sum;
    }
  }
}

#endif

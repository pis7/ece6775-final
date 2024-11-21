//===========================================================================
// layer.h
//===========================================================================
// @brief: This header file defines the interface for the core functions.

#ifndef LAYER_H
#define LAYER_H

typedef bit32_t HLS_SIZE_T;

#include "model.h"
#include "data_short/cos_tab.h"
#include "data_short/sin_tab.h"

//----------------------------------------------------------
// init_1d_mem
//----------------------------------------------------------
template <int C, typename T>
void init_1d_mem (
  T mem[C],
  T val
) {
  for (int i = 0; i < C; i++)
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
// attention_inv_sqrt
//----------------------------------------------------------
fixed32_t attention_inv_sqrt(fixed32_t in) {
  fixed32_t xhalf = (fixed32_t)0.5 * in;
  sbit16_t i = *(sbit16_t*)&in;
  i = 0x5f3759df - (i >> 1);
  in = *(fixed32_t*)&i;
  in = in * ((fixed32_t)1.5 - xhalf * in * in);
  return in;
}

//----------------------------------------------------------
// rms_norm
//----------------------------------------------------------
template <int C>
void rms_norm(
  fixed32_t input[C],
  const fixed32_t weight[C],
  fixed32_t epsilon
) {
  fixed32_t variance = 0.0;
  for (int i = 0; i < C; i++)
    variance += input[i] * input[i];

  variance = attention_inv_sqrt(variance / (fixed32_t)C + epsilon);

  for (int i = 0; i < C; i++)
    input[i] *= variance * weight[i];
}

//----------------------------------------------------------
// attention_max
//----------------------------------------------------------
template <typename T>
T attention_max(T a, T b) {
  return (a > b) ? a : b;
}

//----------------------------------------------------------
// attention_abs
//----------------------------------------------------------
fixed32_t attention_abs(fixed32_t a) {
  return (a < (fixed32_t)0.0) ? (fixed32_t)(-a) : a;
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

  for (int i = 0; i < R; i++) {
    
      // Calculate the scale for each row
      fixed32_t max_val = 0.0;
      for (int j = 0; j < C; j++) {
          max_val = attention_max<fixed32_t>(max_val, attention_abs(input[i][j]));
      }
      fixed32_t max_v = attention_max<fixed32_t>(max_val, (fixed32_t)(1e-5));
      fixed32_t scale = Qp / max_v;
      output_scales[i] = scale;

      // Quantize each element in the row
      for (int j = 0; j < C; j++) {
          fixed32_t quantized_value = input[i][j] * scale;
          sbit8_t quantized_value_clamped = 
            (quantized_value < Qn) ? 
              Qn : ((quantized_value > Qp) ? Qp : quantized_value);
          output_states[i][j] = (sbit8_t)quantized_value_clamped;
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
  for (int j = 0; j < P; j++)
    for (int i = 0; i < R; i++)
      for (int k = 0; k < C; k++)
        output[i][j][k] = input[j][i * C + k];
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
  fixed32_t p_id
) {
  
  // half rotate
  fixed32_t rotated_q[R][P][C];
  fixed32_t rotated_k[R][P][C];
  for (int i = 0; i < R; i++) {
    for (int j = 0; j < P; j++) {
      for (int k = 0; k < C / 2; k++) {
        rotated_q[i][j][k] = - input_q[i][j][k + C / 2];
        rotated_k[i][j][k] = - input_k[i][j][k + C / 2];
        rotated_q[i][j][k + C / 2] = input_q[i][j][k];
        rotated_k[i][j][k + C / 2] = input_k[i][j][k];
      }
    }
  }
  
  // apply rotation
  for (int i = 0; i < R; i++) {
    for (int j = 0; j < P; j++) {
      for (int k = 0; k < C; k++) {
        output_q[i][j][k] = 
          input_q[i][j][k] * cos_tab[p_id][k] + rotated_q[i][j][k] * sin_tab[p_id][k];
        output_k[i][j][k] = 
          input_k[i][j][k] * cos_tab[p_id][k] + rotated_k[i][j][k] * sin_tab[p_id][k];
      }
    }
  }
}

//----------------------------------------------------------
// cache_update
//----------------------------------------------------------
template <int P, int R, int C>
void cache_update (
  const fixed32_t cache_in[P][R][C],
  fixed32_t cache_out[P][R+1][C],
  fixed32_t update[P][1][C]
) {
  for (int i = 0; i < P; i++)
    for (int j = 0; j < R+1; j++)
      if (j != R)
        for (int k = 0; k < C; k++)
          cache_out[i][j][k] = cache_in[i][j][k];
      else
        for (int k = 0; k < C; k++)
          cache_out[i][j][k] = update[i][0][k];
}

//----------------------------------------------------------
// transpose_last_two_dims
//----------------------------------------------------------
template <int P, int R, int C>
void transpose_last_two_dims (
  fixed32_t input[R][P][C],
  fixed32_t output[R][C][P]
) {
  for (int i = 0; i < R; i++)
    for (int j = 0; j < P; j++)
      for (int k = 0; k < C; k++)
        output[i][k][j] = input[i][j][k];
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
  for (int i = 0; i < P1; i++) {
    for (int j = 0; j < R1; j++) {
      for (int k = 0; k < C2; k++) {
        output[i][j][k] = 0;
        for (int k = 0; k < C1; k++)
          output[i][j][k] += input_1[i][j][k] * input_2[i][k][k];
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
      mask[i][j] = (j <= i) ? (fixed32_t)0.0 : FIXED32_MIN;
}

//----------------------------------------------------------
// attention_exp
//----------------------------------------------------------
fixed32_t attention_exp(fixed32_t in) {
  fixed32_t res = 1.0;
  fixed32_t term = 1.0;
  sbit16_t n = 1;
  while (attention_abs(term) > (fixed32_t)1e-10) {
    term *= in / n;
    res += term;
    n++;
  }
  return res;
}

//----------------------------------------------------------
// softmax
//----------------------------------------------------------
template <int P, int R, int C>
void softmax (
  fixed32_t input[R][P][C]
) {
  for (int i = 0; i < R; i++) {
    for (int j = 0; j < P; j++) {
      fixed32_t max_val = input[i][j][0];
      for (int k = 1; k < C; k++)
        max_val = attention_max<fixed32_t>(max_val, input[i][j][k]);
      fixed32_t sum = 0.0;
      for (int k = 0; k < C; k++) {
        input[i][j][k] = attention_exp(input[i][j][k] - max_val);
        sum += input[i][j][k];
      }
      for (int k = 0; k < C; k++)
        input[i][j][k] /= sum;
    }
  }
}

#endif

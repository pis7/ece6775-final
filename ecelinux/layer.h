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
  INIT_1D_MEM_LOOP_1: for (int i = 0; i < C; i++)
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
  INIT_2D_MEM_LOOP_1: for (int i = 0; i < R; i++)
    INIT_2D_MEM_LOOP_2: for (int j = 0; j < C; j++)
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
  INIT_3D_MEM_LOOP_1: for (int i = 0; i < P; i++)
    INIT_3D_MEM_LOOP_2: for (int j = 0; j < R; j++)
      INIT_3D_MEM_LOOP_3: for (int k = 0; k < C; k++)
        mem[i][j][k] = val;
}

//----------------------------------------------------------
// attention_abs
//----------------------------------------------------------
fixed32_t attention_abs(fixed32_t a) {
  return (a < (fixed32_t)0.0) ? (fixed32_t)(-a) : a;
}

//----------------------------------------------------------
// attention_sqrt
//----------------------------------------------------------
fixed32_t attention_sqrt(fixed32_t in) {
    fixed32_t guess = in / (fixed32_t)2.0; // Initial guess
    fixed32_t epsilon = 0.0001; // Convergence tolerance

    ATTENTION_SQRT_LOOP_1: for (int i = 0; i < 10; ++i) {
        guess = (guess + in / guess) / (fixed32_t)2.0;
        if (attention_abs(guess * guess - in) < epsilon) break;
    }

    return guess;
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
  RMS_NORM_LOOP_1: for (int i = 0; i < C; i++)
    variance += input[i] * input[i];

  variance = (fixed32_t)1.0 / attention_sqrt(variance / (fixed32_t)C + epsilon);

  RMS_NORM_LOOP_2: for (int i = 0; i < C; i++)
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
// attention_round
//----------------------------------------------------------
fixed32_t attention_round(fixed32_t a) {
  return (a > (fixed32_t)0.0) ? (fixed32_t)(a + (fixed32_t)0.5) : (fixed32_t)(a - (fixed32_t)0.5);
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
  sbit32_t Qn = -(1 << (num_bits - 1));
  sbit32_t Qp = (1 << (num_bits - 1)) - 1;

  QUANTIZE_ACTIVATION_LOOP_1: for (int i = 0; i < R; i++) {
    
      // Calculate the scale for each row
      fixed32_t max_val = 0.0;
      QUANTIZE_ACTIVATION_LOOP_2: for (int j = 0; j < C; j++)
          max_val = attention_max<fixed32_t>(max_val, attention_abs(input[i][j]));
      fixed32_t max_v = attention_max<fixed32_t>(max_val, (fixed32_t)(1e-5));
      fixed32_t scale = (fixed32_t)Qp / max_v;
      output_scales[i] = scale;

      // Quantize each element in the row
      QUANTIZE_ACTIVATION_LOOP_3: for (int j = 0; j < C; j++) {
          sbit32_t quantized_value = attention_round(input[i][j] * scale);
          sbit8_t quantized_value_clamped = (quantized_value < Qn) ? Qn : ((quantized_value > Qp) ? Qp : quantized_value);
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
  const sbit8_t packed_weights[IN_C/4][OUT_C],
  const fixed32_t w_scale
) {
  LINEAR_FORWARD_NO_MUL_LOOP_1: for (int i = 0; i < R; i++) {
    LINEAR_FORWARD_NO_MUL_LOOP_2: for (int j = 0; j < OUT_C; j++) {
      LINEAR_FORWARD_NO_MUL_LOOP_3: for (int k = 0; k < IN_C; k+=4) {
        sbit8_t packed_val = packed_weights[k/4][j];

        LINEAR_FORWARD_NO_MUL_LOOP_4: for (int l = 0; l < 4 && (k + l) < IN_C; l++) {
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
  fixed32_t input[P][R*C],
  fixed32_t output[R][P][C]
) {
  RESHAPE_2D_TO_3D_LOOP_1: for (int j = 0; j < P; j++)
    RESHAPE_2D_TO_3D_LOOP_2: for (int i = 0; i < R; i++)
      RESHAPE_2D_TO_3D_LOOP_3: for (int k = 0; k < C; k++)
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
  APPLY_ROTARY_POS_EMB_LOOP_1: for (int i = 0; i < R; i++) {
    APPLY_ROTARY_POS_EMB_LOOP_2: for (int j = 0; j < P; j++) {
      APPLY_ROTARY_POS_EMB_LOOP_3: for (int k = 0; k < C / 2; k++) {
        rotated_q[i][j][k] = - input_q[i][j][k + C / 2];
        rotated_k[i][j][k] = - input_k[i][j][k + C / 2];
        rotated_q[i][j][k + C / 2] = input_q[i][j][k];
        rotated_k[i][j][k + C / 2] = input_k[i][j][k];
      }
    }
  }
  
  // apply rotation
  APPLY_ROTARY_POS_EMB_LOOP_4: for (int i = 0; i < R; i++) {
    APPLY_ROTARY_POS_EMB_LOOP_5: for (int j = 0; j < P; j++) {
      APPLY_ROTARY_POS_EMB_LOOP_6: for (int k = 0; k < C; k++) {
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
  CACHE_UPDATE_LOOP_1: for (int i = 0; i < P; i++)
    CACHE_UPDATE_LOOP_2: for (int j = 0; j < R+1; j++)
      CACHE_UPDATE_LOOP_3: for (int k = 0; k < C; k++)
        if (j != R) cache_out[i][j][k] = cache_in[i][j][k];
        else cache_out[i][j][k] = update[i][0][k];
}

//----------------------------------------------------------
// transpose_last_two_dims
//----------------------------------------------------------
template <int P, int R, int C>
void transpose_last_two_dims (
  fixed32_t input[R][P][C],
  fixed32_t output[R][C][P]
) {
  TRANSPOSE_LAST_TWO_DIMS_LOOP_1: for (int i = 0; i < R; i++)
    TRANSPOSE_LAST_TWO_DIMS_LOOP_2: for (int j = 0; j < P; j++)
      TRANSPOSE_LAST_TWO_DIMS_LOOP_3: for (int k = 0; k < C; k++)
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
  GEMM_3D_FLOAT_LOOP_1: for (int i = 0; i < P1; i++) {
    GEMM_3D_FLOAT_LOOP_2: for (int j = 0; j < R1; j++) {
      GEMM_3D_FLOAT_LOOP_3: for (int k = 0; k < C2; k++) {
        output[i][j][k] = 0;
        GEMM_3D_FLOAT_LOOP_4: for (int l = 0; l < C1; l++)
          output[i][j][k] += input_1[i][j][l] * input_2[i][l][k];
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
  CREATE_CAUSAL_MASK_LOOP_1: for (int i = 0; i < P; i++)
    CREATE_CAUSAL_MASK_LOOP_2: for (int j = 0; j < P; j++)
      mask[i][j] = (j <= i) ? (fixed32_t)0.0 : FIXED32_MIN;
}

//----------------------------------------------------------
// attention_exp
//----------------------------------------------------------
fixed32_t attention_exp(fixed32_t in) {
    const fixed32_t tolerance = 1e-10;
    const int MAX_TERMS = 5;  // Limit the number of terms to reduce complexity

    fixed32_t res = 1.0;
    fixed32_t term = 1.0;

    for (int n = 1; n <= MAX_TERMS; ++n) {
        term *= in / n;
        if (attention_abs(term) < tolerance) break;  // Break if the term is too small to add
        res += term;
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
  SOFTMAX_LOOP_1: for (int i = 0; i < R; i++) {
    SOFTMAX_LOOP_2: for (int j = 0; j < P; j++) {
      fixed32_t max_val = input[i][j][0];
      SOFTMAX_LOOP_3: for (int k = 1; k < C; k++)
        max_val = attention_max<fixed32_t>(max_val, input[i][j][k]);
      fixed32_t sum = 0.0;
      SOFTMAX_LOOP_4: for (int k = 0; k < C; k++) {
        input[i][j][k] = attention_exp(input[i][j][k] - max_val);
        sum += input[i][j][k];
      }
      SOFTMAX_LOOP_5: for (int k = 0; k < C; k++)
        input[i][j][k] /= sum;
    }
  }
}

#endif

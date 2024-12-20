//===========================================================================
// layer.h
//===========================================================================
// @brief: This header file defines the interface for the core functions.

#ifndef LAYER_H
#define LAYER_H

typedef bit32_t HLS_SIZE_T;

#include <stdint.h>
#include <iostream>
#include <ac_math.h>
#include <cmath>  // Include standard math library for sqrt
#include "model.h"
#include "data_include.h"

using namespace std;

//----------------------------------------------------------
// init_2d_mem
//----------------------------------------------------------
template <int R, int C, typename T>
void init_2d_mem (
  T mem[R][C],
  const T val
) {
  INIT_2D_MEM_LOOP_1: for (int i = 0; i < R; i++)
    INIT_2D_MEM_LOOP_2: for (int j = 0; j < C; j++)
      mem[i][j] = val;
}

//----------------------------------------------------------
// attention_abs
//----------------------------------------------------------
inline attn_fixed_t attention_abs(const attn_fixed_t a) {
  return (a < (attn_fixed_t)0.0) ? (attn_fixed_t)(-a) : a;
}

//----------------------------------------------------------
// attention_exp
//----------------------------------------------------------

inline attn_fixed_t attention_exp(attn_fixed_t x) {
    attn_fixed_t x_half = x >> 1; // Fixed-point division by 2
    attn_fixed_t exp_half = 1 + x_half + ((x_half * x_half) >> 1)
                            + ((x_half * x_half * x_half) >> 2)
                            + ((x_half * x_half * x_half * x_half) >> 4 )
                            + ((x_half * x_half * x_half * x_half * x_half) >> 7 );
    return exp_half * exp_half; // Multiply results for e^x
}
// Assuming a fixed range for exp(x), and scale values for LUTs
#define EXP_LUT_SIZE 256  // Size of the LUT
attn_fixed_t exp_lut[EXP_LUT_SIZE];

// Function to initialize the exponential LUT
void init_exp_lut() {
    for (int i = 0; i < EXP_LUT_SIZE; i++) {
        exp_lut[i] = attention_exp(i / 100.0);  // Populate with precomputed exponential values
    }
}

// Optimized attention_exp using LUT
inline attn_fixed_t attention_exp_optimized(attn_fixed_t x) {
    // Clip input to fit within the LUT range (e.g., -2.5 to 2.5)
    if (x < -2.5) x = -2.5;
    if (x > 2.5) x = 2.5;

    // Map the value to an index in the LUT
    int index = ((x + (attn_fixed_t)2.5) * 100).to_int();  // Scale to LUT size, assuming range [-2.5, 2.5]
    return exp_lut[index];  // Return the precomputed exponential value from LUT
}



//----------------------------------------------------------
// attention_sqrt
//----------------------------------------------------------
inline attn_fixed_t attention_sqrt(attn_fixed_t input) {

    attn_fixed_t input_abs = attention_abs(input);
    attn_fixed_t guess = input_abs >> 1;  // Equivalent to input_abs / 2

    // Newton's method iterations
    const int max_iterations = 20;
    for (int i = 0; i < max_iterations; ++i) {
        attn_fixed_t guess_inv = input_abs * (1 / guess);  // Reciprocal multiplication
        guess = (guess + guess_inv) >> 1;  // Equivalent to dividing by 2
    }

    return guess;
}

//----------------------------------------------------------
// rms_norm
//----------------------------------------------------------
template <int C>
void rms_norm(
  attn_fixed_t input[C],
  const attn_fixed_t weight[C],
  const attn_fixed_t epsilon
) {
  attn_fixed_t variance = 0.0;
  RMS_NORM_LOOP_1: for (int i = 0; i < C; i++){
    variance += input[i] * input[i];
  }
  attn_fixed_t val = variance / C + epsilon ; 
  // int val_double = val.to_int();
  // int var_sqrt = sqrt(val_double);
  attn_fixed_t var_sqrt = attention_sqrt(val);
  // cout<<"var_sqrt = "<<var_sqrt<<endl;
  variance = (attn_fixed_t)1.0 / var_sqrt;
  RMS_NORM_LOOP_2: for (int i = 0; i < C; i++)
  {
    input[i] *= variance * (attn_fixed_t)weight[i];
    //cout<<"input["<<i<<"]"<<input[i]<<endl;
  }
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
inline attn_fixed_t attention_round(attn_fixed_t a) {
    return ((a > (attn_fixed_t)0.0) ? (attn_fixed_t)(a + (attn_fixed_t)0.5) : (attn_fixed_t)(a - (attn_fixed_t)0.5));
}

//----------------------------------------------------------
// quantize_activation
//----------------------------------------------------------
template <int R, int C>
void quantize_activation(
  const attn_fixed_t input[R][C],
  sbit8_t output_states[R][C/4][4],
  attn_fixed_t output_scales[R],
  const sbit8_t num_bits
) {
  sbit32_t Qn = -(1 << (num_bits - 1));
  sbit32_t Qp = (1 << (num_bits - 1)) - 1;

  QUANTIZE_ACTIVATION_LOOP_1: for (int i = 0; i < R; i++) { 

      // Calculate the scale for each row
      attn_fixed_t max_val = attention_abs(input[i][0]);
      // cout<<"max_val ="<<max_val<<endl;
      QUANTIZE_ACTIVATION_LOOP_2: for (int j = 1; j < C; j++)
        if (attention_abs(input[i][j]) > max_val) max_val = attention_abs(input[i][j]);
      attn_fixed_t max_v = attention_max<attn_fixed_t>(max_val, (attn_fixed_t)(1e-5));
      // cout<<"max_v ="<<max_v<<endl;
      attn_fixed_t scale = (attn_fixed_t)Qp / max_v;
      output_scales[i] = scale;
      // cout<<"output_scales["<<i<<"]="<<output_scales[i]<<endl;
      // Quantize each element in the row
      QUANTIZE_ACTIVATION_LOOP_3: for (int jo = 0; jo < (C/4)/(C/24); jo++) {
        QUANTIZE_ACTIVATION_LOOP_4: for (int ji = 0; ji < (C/24); ji++) {
          int j = jo * (C/24) + ji;
          QUANTIZE_ACTIVATION_LOOP_5: for (int k = 0; k < 4; k++){
            attn_fixed_t quant_val = attention_round(input[i][(j << 2) + k] * scale);
            int quantized_val_int = quant_val.to_int();
            sbit32_t quantized_value = (sbit32_t)quantized_val_int;
            cout<<"Quant val = "<<quantized_value;
            sbit8_t quantized_value_clamped = (quantized_value < Qn) ? Qn : ((quantized_value > Qp) ? Qp : quantized_value);
            output_states[i][j][k] = (sbit8_t)quantized_value_clamped;
            //cout<<"output_states["<<i<<"]["<<j<<"]["<<k<<"]="<<output_states[i][j][k]<<endl;
          }
        }
      }
  }
}

//----------------------------------------------------------
// linear_forward_no_mul
//----------------------------------------------------------
template <int R, int IN_C, int OUT_C>
void linear_forward_no_mul (
  sbit8_t input[R][IN_C/4][4],
  attn_fixed_t output[R][OUT_C],
  const attn_fixed_t scales[R],
  const uint8_t packed_weights[IN_C/4][OUT_C],
  const attn_fixed_t w_scale
) {
  
  LINEAR_FORWARD_NO_MUL_LOOP_1: for (int i = 0; i < R; i++) {
    LINEAR_FORWARD_NO_MUL_LOOP_2: for (int j = 0; j < OUT_C; j++) {
      LINEAR_FORWARD_NO_MUL_LOOP_3: for (int ko = 0; ko < (IN_C/4)/(IN_C/24); ko++) {
        LINEAR_FORWARD_NO_MUL_LOOP_4: for (int ki = 0; ki < (IN_C/24); ki++) {
          int k = ko * (IN_C/24) + ki;
          // cout<<"LF: k = "<<k<<endl;
          uint8_t packed_val = packed_weights[k][j];
          // cout<<"LF: packed_val = "<<packed_val<<endl;
          LINEAR_FORWARD_NO_MUL_LOOP_5: for (int l = 0; l < 4; l++) {
            int8_t weight_val = (packed_val / (1 << (2 * l))) % 4;
            sbit8_t new_val = 0;
            if (weight_val == 0b01) new_val += input[i][k][l];
            else if (weight_val == 0b10) new_val -= input[i][k][l];
            output[i][j] += new_val;
          }
        }
      }
      // cout<<"LF: output["<<i<<"]["<<j<<"]"<<output[i][j]<<endl;
      output[i][j] /= (scales[i] * w_scale);
      //cout<<"LF: output["<<i<<"]["<<j<<"]/values = "<<output[i][j]<<endl;
    }
  }
}

//----------------------------------------------------------
// reshape_2D_to_3D
//----------------------------------------------------------
template <int P, int R, int C>
void reshape_2D_to_3D (
  const attn_fixed_t input[P][R*C],
  attn_fixed_t output[R][P][C]
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
  attn_fixed_t input_q[R][P][C],
  attn_fixed_t input_k[R][P][C],
  attn_fixed_t output_q[R][P][C],
  attn_fixed_t output_k[R][P][C],
  const uint8_t p_id
) {
  
  // half rotate
  attn_fixed_t rotated_q[R][P][C];
  attn_fixed_t rotated_k[R][P][C];
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
  // int p_id_int = static_cast<int>(p_id.to_int());
  // int p_id_int = p_id.to_int();
  // apply rotation
  #pragma HLS RESOURCE variable=sinval core=RAM_1P_BRAM
  APPLY_ROTARY_POS_EMB_LOOP_4: for (int i = 0; i < R; i++) {
    APPLY_ROTARY_POS_EMB_LOOP_5: for (int j = 0; j < P; j++) {
      APPLY_ROTARY_POS_EMB_LOOP_6: for (int k = 0; k < C; k++) {
        attn_fixed_t sinval = sin_tab[p_id][k];
        attn_fixed_t cosval = cos_tab[p_id][k];
        output_q[i][j][k] = attn_fixed_t((input_q[i][j][k]*cosval) + (rotated_q[i][j][k]*sinval));
        output_k[i][j][k] = attn_fixed_t((input_k[i][j][k]*cosval) + (rotated_k[i][j][k]*sinval));
        // cout<<"output_k["<<i<<"]["<<j<<"]["<<k<<"]="<<output_k[i][j][k]<<endl;
        // cout<<"output_q["<<i<<"]["<<j<<"]["<<k<<"]="<<output_k[i][j][k]<<endl;
      }
    }
  }
}

//----------------------------------------------------------
// cache_update
//----------------------------------------------------------
template <int P, int R, int C>
void cache_update (
  const attn_fixed_t cache_in[P][R][C],
  attn_fixed_t cache_out[P][R+1][C],
  attn_fixed_t update[P][1][C]
) {
  CACHE_UPDATE_LOOP_1: for (int i = 0; i < P; i++)
    CACHE_UPDATE_LOOP_2: for (int j = 0; j < R+1; j++)
      CACHE_UPDATE_LOOP_3: for (int k = 0; k < C; k++)
      {
        cache_out[i][j][k] = (j != R) ? cache_in[i][j][k] : update[i][0][k];
        // cout<<"CacheUpdate["<<i<<"]["<<j<<"]["<<k<<"]="<<cache_out[i][j][k]<<endl;
      }
}

//----------------------------------------------------------
// transpose_last_two_dims
//----------------------------------------------------------
template <int P, int R, int C>
void transpose_last_two_dims (
  attn_fixed_t input[R][P][C],
  attn_fixed_t output[R][C][P]
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
  attn_fixed_t input_1[P1][R1][C1],
  attn_fixed_t input_2[P2][R2][C2],
  attn_fixed_t output[P1][R1][C2]
) {
  GEMM_3D_FLOAT_LOOP_1: for (int i = 0; i < P1; i++) {
    GEMM_3D_FLOAT_LOOP_2: for (int j = 0; j < R1; j++) {
      GEMM_3D_FLOAT_LOOP_3: for (int k = 0; k < C2; k++) {
        output[i][j][k] = 0;
        GEMM_3D_FLOAT_LOOP_4: for (int l = 0; l < C1; l++)
          output[i][j][k] += input_1[i][j][l] * input_2[i][l][k];
          // cout<<"GEMM: output["<<i<<"]["<<j<<"]["<<k<<"]="<<output[i][j][k]<<endl;
      }
    }
  }
}

//----------------------------------------------------------
// create_causal_mask
//----------------------------------------------------------
template <int P>
void create_causal_mask (
  attn_fixed_t mask[P][P]
) {
  CREATE_CAUSAL_MASK_LOOP_1: for (int i = 0; i < P; i++)
    CREATE_CAUSAL_MASK_LOOP_2: for (int j = 0; j < P; j++)
      mask[i][j] = (j <= i) ? (attn_fixed_t)0.0 : FIXED32_MIN;
}

//----------------------------------------------------------
// softmax
//----------------------------------------------------------
template <int P, int R, int C>
void softmax (
  attn_fixed_t input[R][P][C]
) {
  attn_fixed_t max_val, sum;
  // attn_fixed_t log2e = 1.4425;
  SOFTMAX_LOOP_1: for (int i = 0; i < R; i++) {
    SOFTMAX_LOOP_2: for (int j = 0; j < P; j++) {
      max_val = input[i][j][0];
      SOFTMAX_LOOP_3: for (int k = 1; k < C; k++){
        if (input[i][j][k] > max_val) max_val = input[i][j][k];
      }
      sum = 0.0;
      SOFTMAX_LOOP_4: for (int k = 0; k < C; k++) {
        attn_fixed_t x = input[i][j][k] - max_val;
        // Clip x to avoid overflow in exponential computation
        if (x > 10) x = 10;
        else if (x < -10) x = -10;
        input[i][j][k] = attention_exp(x);    
        // cout<<"Softmax: input["<<i<<"]["<<j<<"]["<<k<<"]="<<input[i][j][k]<<endl;
        sum += input[i][j][k];
      }
      SOFTMAX_LOOP_5: for (int k = 0; k < C; k++)
      {
        input[i][j][k] /= sum;
        //cout<<"Softmax:input/sum["<<i<<"]["<<j<<"]["<<k<<"]="<<input[i][j][k]<<endl;
      }
    }
  }
}

#endif
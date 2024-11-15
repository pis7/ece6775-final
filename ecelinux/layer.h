//===========================================================================
// layer.h
//===========================================================================
// @brief: This header file defines the interface for the core functions.

#ifndef LAYER_H
#define LAYER_H

#include "model.h"
#include "typedefs.h"
#include <cassert>
typedef  ap_uint<32>  HLS_SIZE_T;
#include "hls/hls_video_mem.h"

template <int M, int N, int S>
void init_mem (
  ap_uint<S> mem[M][N]
) {
  for (int i = 0; i < M; i++) {
    for (int j = 0; j < N; j++) {
      mem[i][j] = 0;
    }
  }
}

//----------------------------------------------------------
// linear_forward_no_mul
//----------------------------------------------------------
template <int M, int N>
void linear_forward_no_mul (
  bit8_t input[M][M],
  bit32_t output[M][N],
  const bit32_t scales[M],
  const bit8_t packed_weights[M/4][N],
  const bit32_t w_scale
) {
  for (int i = 0; i < M; i++) {
    for (int j = 0; j < N; j++) {
      for(int k = 0; k < M; k+=4) {
        bit8_t packed_val = packed_weights[k/4][j];

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

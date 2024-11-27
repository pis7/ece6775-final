//===========================================================================
// attention.h
//===========================================================================
// @brief: This header file defines the interface for the core functions.

#ifndef ATTENTION_H
#define ATTENTION_H

#include "model.h"
#include <stdint.h>
#include <hls_stream.h>

// Top function for synthesis
void dut(hls::stream<st_fixed32_t> &strm_in, hls::stream<st_fixed32_t> &strm_out);

// Top function for attention layer
template <
  int CACHE_SIZE_INIT,
  int SEQ_LEN,
  int HS_COLS,
  int PROJ_COLS,
  int NUM_HEADS,
  int HEAD_DIM
> void attention (
  attn_fixed_t hidden_states[SEQ_LEN][HS_COLS],
  attn_fixed_t final_output[SEQ_LEN][PROJ_COLS],
  const uint8_t q_weights[HS_COLS/4][PROJ_COLS],
  const attn_fixed_t q_scale,
  const uint8_t k_weights[HS_COLS/4][PROJ_COLS],
  const attn_fixed_t k_scale,
  const uint8_t v_weights[HS_COLS/4][PROJ_COLS],
  const attn_fixed_t v_scale,
  const uint8_t o_weights[HS_COLS/4][PROJ_COLS],
  const attn_fixed_t o_scale,
  const float k_cache[NUM_HEADS][CACHE_SIZE_INIT][HEAD_DIM],
  const float v_cache[NUM_HEADS][CACHE_SIZE_INIT][HEAD_DIM],
  const float ln_weight_in[HS_COLS],
  const float ln_weight[PROJ_COLS],
  const attn_fixed_t p_id
);

#endif

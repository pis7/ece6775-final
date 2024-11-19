//===========================================================================
// attention.h
//===========================================================================
// @brief: This header file defines the interface for the core functions.

#ifndef ATTENTION_H
#define ATTENTION_H

#include "model.h"
#include <hls_stream.h>

// Top function for synthesis
void dut(hls::stream<fixed32_t> &strm_in, hls::stream<fixed32_t> &strm_out);

// Top function for attention layer
template <
  int CACHE_SIZE_INIT,
  int SEQ_LEN,
  int HS_COLS,
  int PROJ_COLS,
  int NUM_HEADS,
  int HEAD_DIM
> void attention (
  fixed32_t hidden_states[SEQ_LEN][HS_COLS],
  fixed32_t final_output[SEQ_LEN][PROJ_COLS],
  const sbit8_t q_weights[HS_COLS/4][PROJ_COLS],
  const fixed32_t q_scale,
  const sbit8_t k_weights[HS_COLS/4][PROJ_COLS],
  const fixed32_t k_scale,
  const sbit8_t v_weights[HS_COLS/4][PROJ_COLS],
  const fixed32_t v_scale,
  const sbit8_t o_weights[HS_COLS/4][PROJ_COLS],
  const fixed32_t o_scale,
  const fixed32_t k_cache[NUM_HEADS][CACHE_SIZE_INIT][HEAD_DIM],
  const fixed32_t v_cache[NUM_HEADS][CACHE_SIZE_INIT][HEAD_DIM],
  const fixed32_t ln_weight_in[HS_COLS],
  const fixed32_t ln_weight[PROJ_COLS],
  const fixed32_t p_id
);

#endif

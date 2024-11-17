//===========================================================================
// attention.h
//===========================================================================
// @brief: This header file defines the interface for the core functions.

#ifndef ATTENTION_H
#define ATTENTION_H
#include "model.h"
#include "typedefs.h"
#include <hls_stream.h>

// Top function for synthesis
void dut(hls::stream<fixed32_t> &strm_in, hls::stream<fixed32_t> &strm_out);

// Top function for attention layer
template <
  int SEQ_LEN,
  int HS_COLS,
  int PROJ_COLS,
  int NUM_HEADS,
  int HEAD_DIM
> void attention (
  fixed32_t hidden_states[SEQ_LEN][HS_COLS],
  const sbit8_t q_weights[SEQ_LEN/4][PROJ_COLS],
  const sbit8_t k_weights[SEQ_LEN/4][PROJ_COLS],
  const sbit8_t v_weights[SEQ_LEN/4][PROJ_COLS],
  const fixed32_t inv_freq[HEAD_DIM/2],
  const fixed32_t ln_weight_in[HS_COLS],
  const fixed32_t p_id
);

#endif

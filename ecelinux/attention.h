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
template <int HS_ROWS, int HS_COLS, int PROJ_COLS, int NUM_HEADS, int HEAD_DIM>
void attention(
  fixed32_t hidden_states[HS_ROWS][HS_COLS]
);

#endif

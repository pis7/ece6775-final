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
void attention(
  fixed32_t hidden_states[I_WIDTH1][I_WIDTH1],
  fixed32_t output[I_WIDTH1*3][O_WIDTH1]
);

#endif

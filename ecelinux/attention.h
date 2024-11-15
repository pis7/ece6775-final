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
void dut(hls::stream<bit32_t> &strm_in, hls::stream<bit32_t> &strm_out);

// Top function for attention layer
void attention(
  bit8_t att_input[I_WIDTH1][I_WIDTH1],
  bit32_t att_output[I_WIDTH1][O_WIDTH1]
);

#endif

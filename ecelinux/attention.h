//===========================================================================
// attention.h
//===========================================================================
// @brief: This header file defines the interface for the core functions.

#ifndef ATTENTION_H
#define ATTENTION_H

#include <hls_stream.h>

#include "typedefs.h"
#include "training_data.h"

// Top function for synthesis
void dut(hls::stream<bit32_t> &strm_in, hls::stream<bit32_t> &strm_out);

// Top function for attention layer
bit4_t attention(digit input);

#endif

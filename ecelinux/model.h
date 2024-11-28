//===========================================================================
// model.h
//===========================================================================
// @brief: This header file include the parameters for Attention

#ifndef MODEL_ATTN
#define MODEL_ATTN

#include "typedefs.h"

const int CACHE_SIZE_INIT    = 2;
const int SEQ_LEN_DECODE     = 1;   // must be multiple of 4
const int HS_COLS_BASIC      = 16;
const int PROJ_COLS_BASIC    = 16; // PROJ_COLS == NUM_HEADS * HEAD_DIM
const int NUM_HEADS_BASIC    = 4;
const int HEAD_DIM_BASIC     = 4;
const attn_fixed_t HEAD_DIM_BASIC_SQRT = 2; // sqrt(HEAD_DIM)
const attn_fixed_t NORM_EPSILON = 1e-5;
const int P_ID               = CACHE_SIZE_INIT; // based on Kaixin's prefill prompt
const attn_fixed_t FIXED32_MIN  = -32768.0;

#endif

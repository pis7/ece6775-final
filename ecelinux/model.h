//===========================================================================
// model.h
//===========================================================================
// @brief: This header file include the parameters for Attention

#ifndef MODEL_CONV
#define MODEL_CONV

#include "typedefs.h"

const int CACHE_SIZE_INIT    = 5;
const int SEQ_LEN_DECODE     = 1;   // must be multiple of 4
const int HS_COLS_BASIC      = 1536;
const int PROJ_COLS_BASIC    = 1536; // PROJ_COLS == NUM_HEADS * HEAD_DIM
const int NUM_HEADS_BASIC    = 4;
const int HEAD_DIM_BASIC     = 4;
const fixed32_t NORM_EPSILON = 1e-5;
const int P_ID               = 6; // based on Kaixin's prefill prompt

const fixed32_t FIXED32_MIN  = -32768.0;

#endif

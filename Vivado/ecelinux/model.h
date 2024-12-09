//===========================================================================
// model.h
//===========================================================================
// @brief: This header file include the parameters for Attention

#ifndef MODEL_ATTN
#define MODEL_ATTN

#include "typedefs.h"

const int CACHE_SIZE_INIT    = 5;
const int SEQ_LEN_DECODE     = 1;   // must be multiple of 4

#ifdef FULL

const int HS_COLS_BASIC      = 1536;
const int PROJ_COLS_BASIC    = 1536; // PROJ_COLS == NUM_HEADS * HEAD_DIM
const int NUM_HEADS_BASIC    = 16;
const int HEAD_DIM_BASIC     = 96;
const attn_fixed_t HEAD_DIM_BASIC_SQRT = 9.79795897; // sqrt(HEAD_DIM)

#endif

#ifdef FOURTH

const int HS_COLS_BASIC      = 384;
const int PROJ_COLS_BASIC    = 384; // PROJ_COLS == NUM_HEADS * HEAD_DIM
const int NUM_HEADS_BASIC    = 8;
const int HEAD_DIM_BASIC     = 48;
const attn_fixed_t HEAD_DIM_BASIC_SQRT = 6.92820323; // sqrt(HEAD_DIM)

#endif

#ifdef SIXTEENTH

const int HS_COLS_BASIC      = 96;
const int PROJ_COLS_BASIC    = 96; // PROJ_COLS == NUM_HEADS * HEAD_DIM
const int NUM_HEADS_BASIC    = 4;
const int HEAD_DIM_BASIC     = 24;
const attn_fixed_t HEAD_DIM_BASIC_SQRT = 4.89897949; // sqrt(HEAD_DIM)

#endif

#ifdef SIXTYFOURTH

const int HS_COLS_BASIC      = 24;
const int PROJ_COLS_BASIC    = 24; // PROJ_COLS == NUM_HEADS * HEAD_DIM
const int NUM_HEADS_BASIC    = 2;
const int HEAD_DIM_BASIC     = 12;
const attn_fixed_t HEAD_DIM_BASIC_SQRT = 3.46410162; // sqrt(HEAD_DIM)

#endif

const attn_fixed_t NORM_EPSILON = 1e-5;
const int P_ID                  = CACHE_SIZE_INIT; // based on Kaixin's prefill prompt
const attn_fixed_t FIXED32_MIN  = -32768.0;

#endif

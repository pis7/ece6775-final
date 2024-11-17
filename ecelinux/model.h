//===========================================================================
// model.h
//===========================================================================
// @brief: This header file include the parameters for BNN

#ifndef MODEL_CONV
#define MODEL_CONV

#include "typedefs.h"

const int SEQ_LEN_DECODE = 1;   // must be multiple of 4
const int HS_COLS_BASIC = 16;
const int PROJ_COLS_BASIC = 16; // PROJ_COLS == NUM_HEADS * HEAD_DIM
const int NUM_HEADS_BASIC = 4;
const int HEAD_DIM_BASIC = 4;
const bit32_t W_SCALE = 1256;
const fixed32_t NORM_EPSILON = 1e-5;
const int P_ID = 0;

const fixed32_t FIXED32_MIN = -32768.0;

const fixed32_t ln_weights_in1[HS_COLS_BASIC] = {
#include "data/ln_weights_in1"
};

const fixed32_t ln_weights1[PROJ_COLS_BASIC] = {
#include "data/ln_weights1"
};

const sbit8_t q_weights1[1][PROJ_COLS_BASIC] = {
#include "data/q_weights1"
};

const sbit8_t k_weights1[1][PROJ_COLS_BASIC] = {
#include "data/k_weights1"
};

const sbit8_t v_weights1[1][PROJ_COLS_BASIC] = {
#include "data/v_weights1"
};

const sbit8_t o_weights1[1][PROJ_COLS_BASIC] = {
#include "data/o_weights1"
};

const fixed32_t inv_freq1[HEAD_DIM_BASIC/2] = {
#include "data/inv_freq1"
};

const fixed32_t test_att_input1[SEQ_LEN_DECODE][HS_COLS_BASIC] = {
#include "data/test_att_input1"
};

#endif

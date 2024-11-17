//===========================================================================
// model.h
//===========================================================================
// @brief: This header file include the parameters for BNN

#ifndef MODEL_CONV
#define MODEL_CONV

#include "typedefs.h"

const int CACHE_SIZE_BASIC = 10;
const int SEQ_LEN_DECODE = 1;   // must be multiple of 4
const int HS_COLS_BASIC = 16;
const int PROJ_COLS_BASIC = 16; // PROJ_COLS == NUM_HEADS * HEAD_DIM
const int NUM_HEADS_BASIC = 4;
const int HEAD_DIM_BASIC = 4;
const bit32_t W_SCALE = 1256;
const fixed32_t NORM_EPSILON = 1e-5;
const int P_ID = 0;

const fixed32_t ln_weights_in1[I_WIDTH1] = {
#include "data/ln_weights_in1"
};

const sbit8_t q_weights1[I_WIDTH1/4][O_WIDTH1] = {
#include "data/q_weights1"
};

const sbit8_t k_weights1[I_WIDTH1/4][O_WIDTH1] = {
#include "data/k_weights1"
};

const sbit8_t v_weights1[I_WIDTH1/4][O_WIDTH1] = {
#include "data/v_weights1"
};

const fixed32_t inv_freq1[HEAD_DIM1/2] = {
#include "data/inv_freq1"
};

const fixed32_t test_att_input1[I_WIDTH1][I_WIDTH1] = {
#include "data/test_att_input1"
};

#endif

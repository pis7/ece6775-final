//===========================================================================
// model.h
//===========================================================================
// @brief: This header file include the parameters for BNN

#ifndef MODEL_CONV
#define MODEL_CONV

#include "typedefs.h"

const int I_WIDTH1 = 16;   // must be multiple of 4
const int O_WIDTH1 = 16;

const bit32_t w_scale1 = 1256;

const bit32_t scales1[I_WIDTH1] = {
#include "data/scales1"
};

const bit8_t q_weights[I_WIDTH1/4][O_WIDTH1] = {
#include "data/q_weights"
};

const bit8_t k_weights[I_WIDTH1/4][O_WIDTH1] = {
#include "data/k_weights"
};

const bit8_t v_weights[I_WIDTH1/4][O_WIDTH1] = {
#include "data/v_weights"
};

const bit8_t test_att_input1[I_WIDTH1][I_WIDTH1] = {
#include "data/test_att_input1"
};

#endif

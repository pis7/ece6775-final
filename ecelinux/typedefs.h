//===========================================================================
// typedefs.h
//===========================================================================
// @brief: This header defines the shorthand of several ap data types.

#ifndef TYPEDEFS_H
#define TYPEDEFS_H

#include <ap_int.h>
#include <ap_fixed.h>

#ifndef BUS_TOT_W
#define BUS_TOT_W 38
#endif

#ifndef BUS_INT_W
#define BUS_INT_W 18
#endif

typedef ap_uint<4> bit4_t;
typedef ap_uint<6> bit6_t;
typedef ap_uint<8> bit8_t;
typedef ap_int<8> sbit8_t;
typedef ap_int<16> sbit16_t;
typedef ap_uint<32> bit32_t;
typedef ap_int<32> sbit32_t;
typedef ap_uint<64> bit64_t;
typedef ap_fixed<32, 14> st_fixed32_t;
typedef ap_fixed<BUS_TOT_W, BUS_INT_W> attn_fixed_t;

#endif

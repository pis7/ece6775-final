//===========================================================================
// typedefs.h
//===========================================================================
// @brief: This header defines the shorthand of several ap data types.

#ifndef TYPEDEFS_H
#define TYPEDEFS_H

#include <ac_int.h>
#include <ac_fixed.h>

#ifndef BUS_TOT_W
#define BUS_TOT_W 40
#endif

#ifndef BUS_INT_W
#define BUS_INT_W 24
#endif
typedef ac_int<4, false> bit4_t;
typedef ac_int<6, false> bit6_t;
typedef ac_int<8, false> bit8_t;
typedef ac_int<8, true> sbit8_t;
typedef ac_int<16, true> sbit16_t;
typedef ac_int<32, false> bit32_t;
typedef ac_int<32, false> sbit32_t;
typedef ac_int<64, false> bit64_t;
typedef ac_fixed<32, 14> st_fixed32_t;
// typedef ac_fixed<40, 24> attn_fixed_t;
typedef ac_fixed<BUS_TOT_W, BUS_INT_W> attn_fixed_t;
#endif

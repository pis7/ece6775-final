//===========================================================================
// typedefs.h
//===========================================================================
// @brief: This header defines the shorthand of several ap data types.

#ifndef TYPEDEFS_H
#define TYPEDEFS_H

#include <ap_int.h>
#include <ap_fixed.h>

typedef ap_uint<4> bit4_t;
typedef ap_uint<6> bit6_t;
typedef ap_uint<8> bit8_t;
typedef ap_int<8> sbit8_t;
typedef ap_int<16> sbit16_t;
typedef ap_uint<32> bit32_t;
typedef ap_int<32> sbit32_t;
typedef ap_uint<64> bit64_t;
typedef ap_fixed<32, 10> fixed32_t;
typedef ap_fixed<64, 16> fixed64_t;

#endif

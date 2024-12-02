// ccs_block_macros.h
#include "ccs_testbench.h"

#ifndef EXCLUDE_CCS_BLOCK_INTERCEPT
#ifndef INCLUDE_CCS_BLOCK_INTERCEPT
#define INCLUDE_CCS_BLOCK_INTERCEPT
#ifdef  CCS_DESIGN_FUNC_dut
#define ccs_intercept_dut_20 \
  dut(ac_channel<ac_fixed<32, 14, true, AC_TRN, AC_WRAP> > &strm_in, ac_channel<ac_fixed<32, 14, true, AC_TRN, AC_WRAP> > &strm_out);\
  extern void mc_testbench_capture_IN( ac_channel<ac_fixed<32, 14, true, AC_TRN, AC_WRAP> > &strm_in, ac_channel<ac_fixed<32, 14, true, AC_TRN, AC_WRAP> > &strm_out );\
  extern void mc_testbench_capture_OUT( ac_channel<ac_fixed<32, 14, true, AC_TRN, AC_WRAP> > &strm_in, ac_channel<ac_fixed<32, 14, true, AC_TRN, AC_WRAP> > &strm_out );\
  void ccs_real_dut(ac_channel<ac_fixed<32, 14, true, AC_TRN, AC_WRAP> > &strm_in, ac_channel<ac_fixed<32, 14, true, AC_TRN, AC_WRAP> > &strm_out);\
  void dut(ac_channel<ac_fixed<32, 14, true, AC_TRN, AC_WRAP> > &strm_in, ac_channel<ac_fixed<32, 14, true, AC_TRN, AC_WRAP> > &strm_out)\
  {\
    static bool ccs_intercept_flag = false;\
    if (!ccs_intercept_flag) {\
      std::cout << "SCVerify intercepting C++ function 'dut' for RTL block 'dut'" << std::endl;\
      ccs_intercept_flag=true;\
    }\
    mc_testbench_wait_for_idle_sync();\
    mc_testbench_capture_IN(strm_in, strm_out);\
    ccs_real_dut(strm_in, strm_out);\
    mc_testbench_capture_OUT(strm_in, strm_out);\
  }\
  void ccs_real_dut
#else
#define ccs_intercept_dut_20 dut
#endif //CCS_DESIGN_FUNC_dut
#endif //INCLUDE_CCS_BLOCK_INTERCEPT
#endif //EXCLUDE_CCS_BLOCK_INTERCEPT

// attention_abs 61 INLINE
#define ccs_intercept_attention_abs_61 attention_abs
// compute_sqrt 89 INLINE
#define ccs_intercept_compute_sqrt_89 compute_sqrt
// attention_round 121 INLINE
#define ccs_intercept_attention_round_121 attention_round
// rms_norm 130 INLINE
#define ccs_intercept_rms_norm_130 rms_norm
// init_2d_mem 35 INLINE
#define ccs_intercept_init_2d_mem_35 init_2d_mem
// init_1d_mem 23 INLINE
#define ccs_intercept_init_1d_mem_23 init_1d_mem
// quantize_activation 149 INLINE
#define ccs_intercept_quantize_activation_149 quantize_activation
// attention_max 114 INLINE
#define ccs_intercept_attention_max_114 attention_max
// linear_forward_no_mul 183 INLINE
#define ccs_intercept_linear_forward_no_mul_183 linear_forward_no_mul
// reshape_2D_to_3D 213 INLINE
#define ccs_intercept_reshape_2D_to_3D_213 reshape_2D_to_3D
// apply_rotary_pos_emb 227 INLINE
#define ccs_intercept_apply_rotary_pos_emb_227 apply_rotary_pos_emb
// cache_update 266 INLINE
#define ccs_intercept_cache_update_266 cache_update
// transpose_last_two_dims 281 INLINE
#define ccs_intercept_transpose_last_two_dims_281 transpose_last_two_dims
// GEMM_3D_float 301 INLINE
#define ccs_intercept_GEMM_3D_float_301 GEMM_3D_float
// create_causal_mask 321 INLINE
#define ccs_intercept_create_causal_mask_321 create_causal_mask
// softmax 333 INLINE
#define ccs_intercept_softmax_333 softmax
// attention 72 INLINE
#define ccs_intercept_attention_72 attention

// ccs_block_macros.h
#include "ccs_testbench.h"

#ifndef EXCLUDE_CCS_BLOCK_INTERCEPT
#ifndef INCLUDE_CCS_BLOCK_INTERCEPT
#define INCLUDE_CCS_BLOCK_INTERCEPT
#ifdef  CCS_DESIGN_FUNC_dut
#define ccs_intercept_dut_13 \
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
#define ccs_intercept_dut_13 dut
#endif //CCS_DESIGN_FUNC_dut
#endif //INCLUDE_CCS_BLOCK_INTERCEPT
#endif //EXCLUDE_CCS_BLOCK_INTERCEPT

// attention_abs 36 INLINE
#define ccs_intercept_attention_abs_36 attention_abs
// compute_sqrt 40 INLINE
#define ccs_intercept_compute_sqrt_40 compute_sqrt
// attention_round 91 INLINE
#define ccs_intercept_attention_round_91 attention_round
// rms_norm 59 INLINE
#define ccs_intercept_rms_norm_59 rms_norm
// quantize_activation 99 INLINE
#define ccs_intercept_quantize_activation_99 quantize_activation
// attention_max 84 INLINE
#define ccs_intercept_attention_max_84 attention_max
// init_2d_mem 24 INLINE
#define ccs_intercept_init_2d_mem_24 init_2d_mem
// linear_forward_no_mul 142 INLINE
#define ccs_intercept_linear_forward_no_mul_142 linear_forward_no_mul
// reshape_2D_to_3D 174 INLINE
#define ccs_intercept_reshape_2D_to_3D_174 reshape_2D_to_3D
// apply_rotary_pos_emb 188 INLINE
#define ccs_intercept_apply_rotary_pos_emb_188 apply_rotary_pos_emb
// cache_update 230 INLINE
#define ccs_intercept_cache_update_230 cache_update
// transpose_last_two_dims 245 INLINE
#define ccs_intercept_transpose_last_two_dims_245 transpose_last_two_dims
// GEMM_3D_float 265 INLINE
#define ccs_intercept_GEMM_3D_float_265 GEMM_3D_float
// create_causal_mask 285 INLINE
#define ccs_intercept_create_causal_mask_285 create_causal_mask
// softmax 297 INLINE
#define ccs_intercept_softmax_297 softmax
// attention 65 INLINE
#define ccs_intercept_attention_65 attention

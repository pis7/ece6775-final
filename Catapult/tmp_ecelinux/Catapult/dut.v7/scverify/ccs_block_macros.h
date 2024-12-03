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

// attention_abs 33 INLINE
#define ccs_intercept_attention_abs_33 attention_abs
// compute_sqrt 37 INLINE
#define ccs_intercept_compute_sqrt_37 compute_sqrt
// attention_round 85 INLINE
#define ccs_intercept_attention_round_85 attention_round
// rms_norm 56 INLINE
#define ccs_intercept_rms_norm_56 rms_norm
// quantize_activation 93 INLINE
#define ccs_intercept_quantize_activation_93 quantize_activation
// attention_max 78 INLINE
#define ccs_intercept_attention_max_78 attention_max
// init_2d_mem 21 INLINE
#define ccs_intercept_init_2d_mem_21 init_2d_mem
// linear_forward_no_mul 132 INLINE
#define ccs_intercept_linear_forward_no_mul_132 linear_forward_no_mul
// reshape_2D_to_3D 164 INLINE
#define ccs_intercept_reshape_2D_to_3D_164 reshape_2D_to_3D
// apply_rotary_pos_emb 178 INLINE
#define ccs_intercept_apply_rotary_pos_emb_178 apply_rotary_pos_emb
// cache_update 218 INLINE
#define ccs_intercept_cache_update_218 cache_update
// transpose_last_two_dims 233 INLINE
#define ccs_intercept_transpose_last_two_dims_233 transpose_last_two_dims
// GEMM_3D_float 253 INLINE
#define ccs_intercept_GEMM_3D_float_253 GEMM_3D_float
// create_causal_mask 273 INLINE
#define ccs_intercept_create_causal_mask_273 create_causal_mask
// softmax 285 INLINE
#define ccs_intercept_softmax_285 softmax
// attention 65 INLINE
#define ccs_intercept_attention_65 attention

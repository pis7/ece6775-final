// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and OpenCL
// Version: 2019.2
// Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _cache_update_HH_
#define _cache_update_HH_

#include "systemc.h"
#include "AESL_pkg.h"


namespace ap_rtl {

struct cache_update : public sc_module {
    // Port declarations 16
    sc_in_clk ap_clk;
    sc_in< sc_logic > ap_rst;
    sc_in< sc_logic > ap_start;
    sc_out< sc_logic > ap_done;
    sc_out< sc_logic > ap_idle;
    sc_out< sc_logic > ap_ready;
    sc_out< sc_lv<13> > v193_address0;
    sc_out< sc_logic > v193_ce0;
    sc_in< sc_lv<32> > v193_q0;
    sc_out< sc_lv<11> > v194_0_address0;
    sc_out< sc_logic > v194_0_ce0;
    sc_in< sc_lv<32> > v194_0_q0;
    sc_out< sc_lv<14> > v195_address0;
    sc_out< sc_logic > v195_ce0;
    sc_out< sc_logic > v195_we0;
    sc_out< sc_lv<32> > v195_d0;


    // Module declarations
    cache_update(sc_module_name name);
    SC_HAS_PROCESS(cache_update);

    ~cache_update();

    sc_trace_file* mVcdFile;

    sc_signal< sc_lv<6> > ap_CS_fsm;
    sc_signal< sc_logic > ap_CS_fsm_state1;
    sc_signal< sc_lv<5> > i4_fu_181_p2;
    sc_signal< sc_lv<5> > i4_reg_478;
    sc_signal< sc_logic > ap_CS_fsm_state2;
    sc_signal< sc_lv<8> > add_ln322_fu_203_p2;
    sc_signal< sc_lv<8> > add_ln322_reg_483;
    sc_signal< sc_lv<1> > icmp_ln316_fu_175_p2;
    sc_signal< sc_lv<12> > sub_ln327_fu_229_p2;
    sc_signal< sc_lv<12> > sub_ln327_reg_488;
    sc_signal< sc_lv<10> > sext_ln323_fu_265_p1;
    sc_signal< sc_lv<10> > sext_ln323_reg_493;
    sc_signal< sc_lv<15> > add_ln328_1_fu_299_p2;
    sc_signal< sc_lv<15> > add_ln328_1_reg_498;
    sc_signal< sc_lv<3> > j3_fu_311_p2;
    sc_signal< sc_lv<3> > j3_reg_506;
    sc_signal< sc_logic > ap_CS_fsm_state3;
    sc_signal< sc_lv<1> > v199_fu_317_p2;
    sc_signal< sc_lv<1> > v199_reg_511;
    sc_signal< sc_lv<1> > icmp_ln317_fu_305_p2;
    sc_signal< sc_lv<14> > sub_ln322_fu_360_p2;
    sc_signal< sc_lv<14> > sub_ln322_reg_515;
    sc_signal< sc_lv<15> > sub_ln323_1_fu_391_p2;
    sc_signal< sc_lv<15> > sub_ln323_1_reg_520;
    sc_signal< sc_lv<7> > k1_fu_403_p2;
    sc_signal< sc_lv<7> > k1_reg_528;
    sc_signal< sc_logic > ap_CS_fsm_state4;
    sc_signal< sc_lv<1> > icmp_ln321_fu_397_p2;
    sc_signal< sc_lv<15> > add_ln323_1_fu_427_p2;
    sc_signal< sc_lv<15> > add_ln323_1_reg_538;
    sc_signal< sc_lv<7> > k2_fu_438_p2;
    sc_signal< sc_lv<7> > k2_reg_546;
    sc_signal< sc_lv<1> > icmp_ln326_fu_432_p2;
    sc_signal< sc_lv<15> > add_ln328_2_fu_462_p2;
    sc_signal< sc_lv<15> > add_ln328_2_reg_556;
    sc_signal< sc_lv<5> > i4_0_reg_131;
    sc_signal< sc_lv<3> > val_assign_reg_142;
    sc_signal< sc_lv<7> > k1_0_reg_153;
    sc_signal< sc_logic > ap_CS_fsm_state5;
    sc_signal< sc_lv<7> > k2_0_reg_164;
    sc_signal< sc_logic > ap_CS_fsm_state6;
    sc_signal< sc_lv<64> > zext_ln322_7_fu_422_p1;
    sc_signal< sc_lv<64> > sext_ln327_fu_457_p1;
    sc_signal< sc_lv<64> > zext_ln323_2_fu_467_p1;
    sc_signal< sc_lv<64> > sext_ln328_fu_471_p1;
    sc_signal< sc_lv<7> > tmp_21_fu_191_p3;
    sc_signal< sc_lv<8> > zext_ln322_fu_187_p1;
    sc_signal< sc_lv<8> > zext_ln322_1_fu_199_p1;
    sc_signal< sc_lv<10> > tmp_23_fu_217_p3;
    sc_signal< sc_lv<12> > tmp_22_fu_209_p3;
    sc_signal< sc_lv<12> > zext_ln327_fu_225_p1;
    sc_signal< sc_lv<8> > tmp_24_fu_235_p3;
    sc_signal< sc_lv<6> > tmp_25_fu_247_p3;
    sc_signal< sc_lv<9> > zext_ln323_fu_243_p1;
    sc_signal< sc_lv<9> > zext_ln323_1_fu_255_p1;
    sc_signal< sc_lv<9> > sub_ln323_fu_259_p2;
    sc_signal< sc_lv<14> > tmp_26_fu_269_p3;
    sc_signal< sc_lv<11> > tmp_27_fu_281_p3;
    sc_signal< sc_lv<15> > zext_ln328_1_fu_289_p1;
    sc_signal< sc_lv<15> > zext_ln328_fu_277_p1;
    sc_signal< sc_lv<15> > add_ln328_fu_293_p2;
    sc_signal< sc_lv<8> > zext_ln322_3_fu_327_p1;
    sc_signal< sc_lv<8> > add_ln322_1_fu_331_p2;
    sc_signal< sc_lv<7> > trunc_ln322_fu_336_p1;
    sc_signal< sc_lv<13> > tmp_41_fu_348_p3;
    sc_signal< sc_lv<14> > p_shl_cast_fu_340_p3;
    sc_signal< sc_lv<14> > zext_ln322_4_fu_356_p1;
    sc_signal< sc_lv<10> > zext_ln322_2_fu_323_p1;
    sc_signal< sc_lv<10> > add_ln323_fu_366_p2;
    sc_signal< sc_lv<8> > trunc_ln323_fu_371_p1;
    sc_signal< sc_lv<15> > p_shl8_cast_fu_375_p3;
    sc_signal< sc_lv<15> > p_shl9_cast_fu_383_p3;
    sc_signal< sc_lv<14> > zext_ln322_6_fu_413_p1;
    sc_signal< sc_lv<14> > add_ln322_2_fu_417_p2;
    sc_signal< sc_lv<15> > zext_ln322_5_fu_409_p1;
    sc_signal< sc_lv<12> > zext_ln327_2_fu_448_p1;
    sc_signal< sc_lv<12> > add_ln327_fu_452_p2;
    sc_signal< sc_lv<15> > zext_ln327_1_fu_444_p1;
    sc_signal< sc_lv<6> > ap_NS_fsm;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<6> ap_ST_fsm_state1;
    static const sc_lv<6> ap_ST_fsm_state2;
    static const sc_lv<6> ap_ST_fsm_state3;
    static const sc_lv<6> ap_ST_fsm_state4;
    static const sc_lv<6> ap_ST_fsm_state5;
    static const sc_lv<6> ap_ST_fsm_state6;
    static const sc_lv<32> ap_const_lv32_0;
    static const sc_lv<32> ap_const_lv32_1;
    static const sc_lv<1> ap_const_lv1_0;
    static const sc_lv<32> ap_const_lv32_2;
    static const sc_lv<32> ap_const_lv32_3;
    static const sc_lv<1> ap_const_lv1_1;
    static const sc_lv<5> ap_const_lv5_0;
    static const sc_lv<3> ap_const_lv3_0;
    static const sc_lv<32> ap_const_lv32_4;
    static const sc_lv<7> ap_const_lv7_0;
    static const sc_lv<32> ap_const_lv32_5;
    static const sc_lv<5> ap_const_lv5_10;
    static const sc_lv<5> ap_const_lv5_1;
    static const sc_lv<2> ap_const_lv2_0;
    static const sc_lv<9> ap_const_lv9_0;
    static const sc_lv<6> ap_const_lv6_0;
    static const sc_lv<15> ap_const_lv15_1E0;
    static const sc_lv<3> ap_const_lv3_6;
    static const sc_lv<3> ap_const_lv3_1;
    static const sc_lv<3> ap_const_lv3_5;
    static const sc_lv<7> ap_const_lv7_60;
    static const sc_lv<7> ap_const_lv7_1;
    static const bool ap_const_boolean_1;
    // Thread declarations
    void thread_ap_clk_no_reset_();
    void thread_add_ln322_1_fu_331_p2();
    void thread_add_ln322_2_fu_417_p2();
    void thread_add_ln322_fu_203_p2();
    void thread_add_ln323_1_fu_427_p2();
    void thread_add_ln323_fu_366_p2();
    void thread_add_ln327_fu_452_p2();
    void thread_add_ln328_1_fu_299_p2();
    void thread_add_ln328_2_fu_462_p2();
    void thread_add_ln328_fu_293_p2();
    void thread_ap_CS_fsm_state1();
    void thread_ap_CS_fsm_state2();
    void thread_ap_CS_fsm_state3();
    void thread_ap_CS_fsm_state4();
    void thread_ap_CS_fsm_state5();
    void thread_ap_CS_fsm_state6();
    void thread_ap_done();
    void thread_ap_idle();
    void thread_ap_ready();
    void thread_i4_fu_181_p2();
    void thread_icmp_ln316_fu_175_p2();
    void thread_icmp_ln317_fu_305_p2();
    void thread_icmp_ln321_fu_397_p2();
    void thread_icmp_ln326_fu_432_p2();
    void thread_j3_fu_311_p2();
    void thread_k1_fu_403_p2();
    void thread_k2_fu_438_p2();
    void thread_p_shl8_cast_fu_375_p3();
    void thread_p_shl9_cast_fu_383_p3();
    void thread_p_shl_cast_fu_340_p3();
    void thread_sext_ln323_fu_265_p1();
    void thread_sext_ln327_fu_457_p1();
    void thread_sext_ln328_fu_471_p1();
    void thread_sub_ln322_fu_360_p2();
    void thread_sub_ln323_1_fu_391_p2();
    void thread_sub_ln323_fu_259_p2();
    void thread_sub_ln327_fu_229_p2();
    void thread_tmp_21_fu_191_p3();
    void thread_tmp_22_fu_209_p3();
    void thread_tmp_23_fu_217_p3();
    void thread_tmp_24_fu_235_p3();
    void thread_tmp_25_fu_247_p3();
    void thread_tmp_26_fu_269_p3();
    void thread_tmp_27_fu_281_p3();
    void thread_tmp_41_fu_348_p3();
    void thread_trunc_ln322_fu_336_p1();
    void thread_trunc_ln323_fu_371_p1();
    void thread_v193_address0();
    void thread_v193_ce0();
    void thread_v194_0_address0();
    void thread_v194_0_ce0();
    void thread_v195_address0();
    void thread_v195_ce0();
    void thread_v195_d0();
    void thread_v195_we0();
    void thread_v199_fu_317_p2();
    void thread_zext_ln322_1_fu_199_p1();
    void thread_zext_ln322_2_fu_323_p1();
    void thread_zext_ln322_3_fu_327_p1();
    void thread_zext_ln322_4_fu_356_p1();
    void thread_zext_ln322_5_fu_409_p1();
    void thread_zext_ln322_6_fu_413_p1();
    void thread_zext_ln322_7_fu_422_p1();
    void thread_zext_ln322_fu_187_p1();
    void thread_zext_ln323_1_fu_255_p1();
    void thread_zext_ln323_2_fu_467_p1();
    void thread_zext_ln323_fu_243_p1();
    void thread_zext_ln327_1_fu_444_p1();
    void thread_zext_ln327_2_fu_448_p1();
    void thread_zext_ln327_fu_225_p1();
    void thread_zext_ln328_1_fu_289_p1();
    void thread_zext_ln328_fu_277_p1();
    void thread_ap_NS_fsm();
};

}

using namespace ap_rtl;

#endif
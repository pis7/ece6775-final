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

#include "cache_update_k_cakbM.h"

namespace ap_rtl {

struct cache_update : public sc_module {
    // Port declarations 13
    sc_in_clk ap_clk;
    sc_in< sc_logic > ap_rst;
    sc_in< sc_logic > ap_start;
    sc_out< sc_logic > ap_done;
    sc_out< sc_logic > ap_idle;
    sc_out< sc_logic > ap_ready;
    sc_out< sc_lv<10> > cache_out_V_address0;
    sc_out< sc_logic > cache_out_V_ce0;
    sc_out< sc_logic > cache_out_V_we0;
    sc_out< sc_lv<40> > cache_out_V_d0;
    sc_out< sc_lv<7> > update_0_V_address0;
    sc_out< sc_logic > update_0_V_ce0;
    sc_in< sc_lv<40> > update_0_V_q0;


    // Module declarations
    cache_update(sc_module_name name);
    SC_HAS_PROCESS(cache_update);

    ~cache_update();

    sc_trace_file* mVcdFile;

    cache_update_k_cakbM* k_cache_V_U;
    sc_signal< sc_lv<5> > ap_CS_fsm;
    sc_signal< sc_logic > ap_CS_fsm_state1;
    sc_signal< sc_lv<9> > k_cache_V_address0;
    sc_signal< sc_logic > k_cache_V_ce0;
    sc_signal< sc_lv<20> > k_cache_V_q0;
    sc_signal< sc_lv<3> > i_fu_142_p2;
    sc_signal< sc_lv<3> > i_reg_382;
    sc_signal< sc_logic > ap_CS_fsm_state2;
    sc_signal< sc_lv<6> > add_ln245_fu_164_p2;
    sc_signal< sc_lv<6> > add_ln245_reg_387;
    sc_signal< sc_lv<1> > icmp_ln242_fu_136_p2;
    sc_signal< sc_lv<8> > sext_ln203_fu_204_p1;
    sc_signal< sc_lv<8> > sext_ln203_reg_392;
    sc_signal< sc_lv<8> > sub_ln245_fu_216_p2;
    sc_signal< sc_lv<8> > sub_ln245_reg_397;
    sc_signal< sc_lv<3> > j_fu_228_p2;
    sc_signal< sc_lv<3> > j_reg_405;
    sc_signal< sc_logic > ap_CS_fsm_state3;
    sc_signal< sc_lv<10> > sub_ln245_2_fu_271_p2;
    sc_signal< sc_lv<10> > sub_ln245_2_reg_410;
    sc_signal< sc_lv<1> > icmp_ln243_fu_222_p2;
    sc_signal< sc_lv<11> > sub_ln203_5_fu_302_p2;
    sc_signal< sc_lv<11> > sub_ln203_5_reg_415;
    sc_signal< sc_lv<1> > icmp_ln245_fu_308_p2;
    sc_signal< sc_lv<1> > icmp_ln245_reg_420;
    sc_signal< sc_lv<5> > k_fu_320_p2;
    sc_signal< sc_lv<5> > k_reg_428;
    sc_signal< sc_logic > ap_CS_fsm_state4;
    sc_signal< sc_lv<1> > icmp_ln244_fu_314_p2;
    sc_signal< sc_lv<11> > add_ln203_5_fu_348_p2;
    sc_signal< sc_lv<11> > add_ln203_5_reg_438;
    sc_signal< sc_lv<3> > i_0_reg_103;
    sc_signal< sc_lv<3> > j_0_reg_114;
    sc_signal< sc_lv<5> > k_0_reg_125;
    sc_signal< sc_logic > ap_CS_fsm_state5;
    sc_signal< sc_lv<64> > zext_ln245_17_fu_343_p1;
    sc_signal< sc_lv<64> > sext_ln245_fu_358_p1;
    sc_signal< sc_lv<64> > zext_ln203_15_fu_363_p1;
    sc_signal< sc_lv<5> > tmp_63_fu_152_p3;
    sc_signal< sc_lv<6> > zext_ln245_fu_148_p1;
    sc_signal< sc_lv<6> > zext_ln245_10_fu_160_p1;
    sc_signal< sc_lv<6> > tmp_64_fu_170_p3;
    sc_signal< sc_lv<4> > tmp_65_fu_186_p3;
    sc_signal< sc_lv<7> > zext_ln203_13_fu_182_p1;
    sc_signal< sc_lv<7> > zext_ln203_14_fu_194_p1;
    sc_signal< sc_lv<7> > sub_ln203_fu_198_p2;
    sc_signal< sc_lv<8> > tmp_66_fu_208_p3;
    sc_signal< sc_lv<8> > zext_ln203_fu_178_p1;
    sc_signal< sc_lv<6> > zext_ln245_12_fu_238_p1;
    sc_signal< sc_lv<6> > add_ln245_4_fu_242_p2;
    sc_signal< sc_lv<5> > trunc_ln245_fu_247_p1;
    sc_signal< sc_lv<9> > tmp_85_fu_259_p3;
    sc_signal< sc_lv<10> > p_shl7_cast_fu_251_p3;
    sc_signal< sc_lv<10> > zext_ln245_13_fu_267_p1;
    sc_signal< sc_lv<8> > zext_ln245_11_fu_234_p1;
    sc_signal< sc_lv<8> > add_ln203_fu_277_p2;
    sc_signal< sc_lv<6> > trunc_ln203_fu_282_p1;
    sc_signal< sc_lv<11> > p_shl5_cast_fu_286_p3;
    sc_signal< sc_lv<11> > p_shl6_cast_fu_294_p3;
    sc_signal< sc_lv<10> > zext_ln245_16_fu_334_p1;
    sc_signal< sc_lv<10> > add_ln245_5_fu_338_p2;
    sc_signal< sc_lv<11> > zext_ln245_15_fu_330_p1;
    sc_signal< sc_lv<8> > zext_ln245_14_fu_326_p1;
    sc_signal< sc_lv<8> > add_ln245_6_fu_353_p2;
    sc_signal< sc_lv<40> > sext_ln203_3_fu_367_p1;
    sc_signal< sc_lv<5> > ap_NS_fsm;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<5> ap_ST_fsm_state1;
    static const sc_lv<5> ap_ST_fsm_state2;
    static const sc_lv<5> ap_ST_fsm_state3;
    static const sc_lv<5> ap_ST_fsm_state4;
    static const sc_lv<5> ap_ST_fsm_state5;
    static const sc_lv<32> ap_const_lv32_0;
    static const sc_lv<32> ap_const_lv32_1;
    static const sc_lv<1> ap_const_lv1_0;
    static const sc_lv<32> ap_const_lv32_2;
    static const sc_lv<32> ap_const_lv32_3;
    static const sc_lv<1> ap_const_lv1_1;
    static const sc_lv<3> ap_const_lv3_0;
    static const sc_lv<5> ap_const_lv5_0;
    static const sc_lv<32> ap_const_lv32_4;
    static const sc_lv<3> ap_const_lv3_4;
    static const sc_lv<3> ap_const_lv3_1;
    static const sc_lv<2> ap_const_lv2_0;
    static const sc_lv<3> ap_const_lv3_6;
    static const sc_lv<3> ap_const_lv3_5;
    static const sc_lv<5> ap_const_lv5_18;
    static const sc_lv<5> ap_const_lv5_1;
    static const bool ap_const_boolean_1;
    // Thread declarations
    void thread_ap_clk_no_reset_();
    void thread_add_ln203_5_fu_348_p2();
    void thread_add_ln203_fu_277_p2();
    void thread_add_ln245_4_fu_242_p2();
    void thread_add_ln245_5_fu_338_p2();
    void thread_add_ln245_6_fu_353_p2();
    void thread_add_ln245_fu_164_p2();
    void thread_ap_CS_fsm_state1();
    void thread_ap_CS_fsm_state2();
    void thread_ap_CS_fsm_state3();
    void thread_ap_CS_fsm_state4();
    void thread_ap_CS_fsm_state5();
    void thread_ap_done();
    void thread_ap_idle();
    void thread_ap_ready();
    void thread_cache_out_V_address0();
    void thread_cache_out_V_ce0();
    void thread_cache_out_V_d0();
    void thread_cache_out_V_we0();
    void thread_i_fu_142_p2();
    void thread_icmp_ln242_fu_136_p2();
    void thread_icmp_ln243_fu_222_p2();
    void thread_icmp_ln244_fu_314_p2();
    void thread_icmp_ln245_fu_308_p2();
    void thread_j_fu_228_p2();
    void thread_k_cache_V_address0();
    void thread_k_cache_V_ce0();
    void thread_k_fu_320_p2();
    void thread_p_shl5_cast_fu_286_p3();
    void thread_p_shl6_cast_fu_294_p3();
    void thread_p_shl7_cast_fu_251_p3();
    void thread_sext_ln203_3_fu_367_p1();
    void thread_sext_ln203_fu_204_p1();
    void thread_sext_ln245_fu_358_p1();
    void thread_sub_ln203_5_fu_302_p2();
    void thread_sub_ln203_fu_198_p2();
    void thread_sub_ln245_2_fu_271_p2();
    void thread_sub_ln245_fu_216_p2();
    void thread_tmp_63_fu_152_p3();
    void thread_tmp_64_fu_170_p3();
    void thread_tmp_65_fu_186_p3();
    void thread_tmp_66_fu_208_p3();
    void thread_tmp_85_fu_259_p3();
    void thread_trunc_ln203_fu_282_p1();
    void thread_trunc_ln245_fu_247_p1();
    void thread_update_0_V_address0();
    void thread_update_0_V_ce0();
    void thread_zext_ln203_13_fu_182_p1();
    void thread_zext_ln203_14_fu_194_p1();
    void thread_zext_ln203_15_fu_363_p1();
    void thread_zext_ln203_fu_178_p1();
    void thread_zext_ln245_10_fu_160_p1();
    void thread_zext_ln245_11_fu_234_p1();
    void thread_zext_ln245_12_fu_238_p1();
    void thread_zext_ln245_13_fu_267_p1();
    void thread_zext_ln245_14_fu_326_p1();
    void thread_zext_ln245_15_fu_330_p1();
    void thread_zext_ln245_16_fu_334_p1();
    void thread_zext_ln245_17_fu_343_p1();
    void thread_zext_ln245_fu_148_p1();
    void thread_ap_NS_fsm();
};

}

using namespace ap_rtl;

#endif
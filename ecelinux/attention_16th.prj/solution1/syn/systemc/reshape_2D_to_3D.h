// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and OpenCL
// Version: 2019.2
// Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _reshape_2D_to_3D_HH_
#define _reshape_2D_to_3D_HH_

#include "systemc.h"
#include "AESL_pkg.h"


namespace ap_rtl {

struct reshape_2D_to_3D : public sc_module {
    // Port declarations 13
    sc_in_clk ap_clk;
    sc_in< sc_logic > ap_rst;
    sc_in< sc_logic > ap_start;
    sc_out< sc_logic > ap_done;
    sc_out< sc_logic > ap_idle;
    sc_out< sc_logic > ap_ready;
    sc_out< sc_lv<7> > input_0_V_address0;
    sc_out< sc_logic > input_0_V_ce0;
    sc_in< sc_lv<40> > input_0_V_q0;
    sc_out< sc_lv<7> > output_0_V_address0;
    sc_out< sc_logic > output_0_V_ce0;
    sc_out< sc_logic > output_0_V_we0;
    sc_out< sc_lv<40> > output_0_V_d0;


    // Module declarations
    reshape_2D_to_3D(sc_module_name name);
    SC_HAS_PROCESS(reshape_2D_to_3D);

    ~reshape_2D_to_3D();

    sc_trace_file* mVcdFile;

    sc_signal< sc_lv<4> > ap_CS_fsm;
    sc_signal< sc_logic > ap_CS_fsm_state1;
    sc_signal< sc_lv<3> > add_ln189_fu_99_p2;
    sc_signal< sc_lv<3> > add_ln189_reg_207;
    sc_signal< sc_logic > ap_CS_fsm_state2;
    sc_signal< sc_lv<8> > sub_ln203_fu_125_p2;
    sc_signal< sc_lv<8> > sub_ln203_reg_212;
    sc_signal< sc_lv<1> > icmp_ln189_fu_93_p2;
    sc_signal< sc_lv<8> > sub_ln191_fu_159_p2;
    sc_signal< sc_lv<8> > sub_ln191_reg_217;
    sc_signal< sc_lv<5> > add_ln190_fu_175_p2;
    sc_signal< sc_lv<5> > add_ln190_reg_225;
    sc_signal< sc_logic > ap_CS_fsm_state3;
    sc_signal< sc_lv<8> > add_ln203_fu_181_p2;
    sc_signal< sc_lv<8> > add_ln203_reg_230;
    sc_signal< sc_lv<1> > icmp_ln190_fu_169_p2;
    sc_signal< sc_lv<3> > i_0_0_reg_71;
    sc_signal< sc_lv<5> > k_0_0_reg_82;
    sc_signal< sc_logic > ap_CS_fsm_state4;
    sc_signal< sc_lv<64> > zext_ln191_2_fu_195_p1;
    sc_signal< sc_lv<64> > sext_ln203_fu_200_p1;
    sc_signal< sc_lv<6> > tmp_55_fu_113_p3;
    sc_signal< sc_lv<8> > tmp_54_fu_105_p3;
    sc_signal< sc_lv<8> > zext_ln203_fu_121_p1;
    sc_signal< sc_lv<2> > trunc_ln191_fu_131_p1;
    sc_signal< sc_lv<7> > shl_ln_fu_135_p3;
    sc_signal< sc_lv<5> > shl_ln191_1_fu_147_p3;
    sc_signal< sc_lv<8> > zext_ln191_fu_143_p1;
    sc_signal< sc_lv<8> > zext_ln191_1_fu_155_p1;
    sc_signal< sc_lv<8> > zext_ln190_fu_165_p1;
    sc_signal< sc_lv<8> > add_ln191_fu_186_p2;
    sc_signal< sc_lv<32> > sext_ln191_fu_191_p1;
    sc_signal< sc_lv<4> > ap_NS_fsm;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<4> ap_ST_fsm_state1;
    static const sc_lv<4> ap_ST_fsm_state2;
    static const sc_lv<4> ap_ST_fsm_state3;
    static const sc_lv<4> ap_ST_fsm_state4;
    static const sc_lv<32> ap_const_lv32_0;
    static const sc_lv<32> ap_const_lv32_1;
    static const sc_lv<1> ap_const_lv1_0;
    static const sc_lv<32> ap_const_lv32_2;
    static const sc_lv<3> ap_const_lv3_0;
    static const sc_lv<1> ap_const_lv1_1;
    static const sc_lv<5> ap_const_lv5_0;
    static const sc_lv<32> ap_const_lv32_3;
    static const sc_lv<3> ap_const_lv3_4;
    static const sc_lv<3> ap_const_lv3_1;
    static const sc_lv<5> ap_const_lv5_18;
    static const sc_lv<5> ap_const_lv5_1;
    static const bool ap_const_boolean_1;
    // Thread declarations
    void thread_ap_clk_no_reset_();
    void thread_add_ln189_fu_99_p2();
    void thread_add_ln190_fu_175_p2();
    void thread_add_ln191_fu_186_p2();
    void thread_add_ln203_fu_181_p2();
    void thread_ap_CS_fsm_state1();
    void thread_ap_CS_fsm_state2();
    void thread_ap_CS_fsm_state3();
    void thread_ap_CS_fsm_state4();
    void thread_ap_done();
    void thread_ap_idle();
    void thread_ap_ready();
    void thread_icmp_ln189_fu_93_p2();
    void thread_icmp_ln190_fu_169_p2();
    void thread_input_0_V_address0();
    void thread_input_0_V_ce0();
    void thread_output_0_V_address0();
    void thread_output_0_V_ce0();
    void thread_output_0_V_d0();
    void thread_output_0_V_we0();
    void thread_sext_ln191_fu_191_p1();
    void thread_sext_ln203_fu_200_p1();
    void thread_shl_ln191_1_fu_147_p3();
    void thread_shl_ln_fu_135_p3();
    void thread_sub_ln191_fu_159_p2();
    void thread_sub_ln203_fu_125_p2();
    void thread_tmp_54_fu_105_p3();
    void thread_tmp_55_fu_113_p3();
    void thread_trunc_ln191_fu_131_p1();
    void thread_zext_ln190_fu_165_p1();
    void thread_zext_ln191_1_fu_155_p1();
    void thread_zext_ln191_2_fu_195_p1();
    void thread_zext_ln191_fu_143_p1();
    void thread_zext_ln203_fu_121_p1();
    void thread_ap_NS_fsm();
};

}

using namespace ap_rtl;

#endif
// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and OpenCL
// Version: 2019.2
// Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _init_3d_mem_HH_
#define _init_3d_mem_HH_

#include "systemc.h"
#include "AESL_pkg.h"


namespace ap_rtl {

struct init_3d_mem : public sc_module {
    // Port declarations 22
    sc_in_clk ap_clk;
    sc_in< sc_logic > ap_rst;
    sc_in< sc_logic > ap_start;
    sc_out< sc_logic > ap_done;
    sc_out< sc_logic > ap_idle;
    sc_out< sc_logic > ap_ready;
    sc_out< sc_lv<3> > mem_0_0_V_address0;
    sc_out< sc_logic > mem_0_0_V_ce0;
    sc_out< sc_logic > mem_0_0_V_we0;
    sc_out< sc_lv<8> > mem_0_0_V_d0;
    sc_out< sc_lv<3> > mem_1_0_V_address0;
    sc_out< sc_logic > mem_1_0_V_ce0;
    sc_out< sc_logic > mem_1_0_V_we0;
    sc_out< sc_lv<8> > mem_1_0_V_d0;
    sc_out< sc_lv<3> > mem_2_0_V_address0;
    sc_out< sc_logic > mem_2_0_V_ce0;
    sc_out< sc_logic > mem_2_0_V_we0;
    sc_out< sc_lv<8> > mem_2_0_V_d0;
    sc_out< sc_lv<3> > mem_3_0_V_address0;
    sc_out< sc_logic > mem_3_0_V_ce0;
    sc_out< sc_logic > mem_3_0_V_we0;
    sc_out< sc_lv<8> > mem_3_0_V_d0;


    // Module declarations
    init_3d_mem(sc_module_name name);
    SC_HAS_PROCESS(init_3d_mem);

    ~init_3d_mem();

    sc_trace_file* mVcdFile;

    sc_signal< sc_lv<3> > ap_CS_fsm;
    sc_signal< sc_logic > ap_CS_fsm_state1;
    sc_signal< sc_lv<3> > add_ln50_fu_124_p2;
    sc_signal< sc_lv<3> > add_ln50_reg_157;
    sc_signal< sc_logic > ap_CS_fsm_state2;
    sc_signal< sc_lv<3> > mem_0_0_V_addr_reg_162;
    sc_signal< sc_lv<1> > icmp_ln50_fu_118_p2;
    sc_signal< sc_lv<3> > mem_1_0_V_addr_reg_167;
    sc_signal< sc_lv<3> > mem_2_0_V_addr_reg_172;
    sc_signal< sc_lv<3> > mem_3_0_V_addr_reg_177;
    sc_signal< sc_lv<3> > add_ln51_fu_144_p2;
    sc_signal< sc_logic > ap_CS_fsm_state3;
    sc_signal< sc_lv<3> > j_0_0_reg_96;
    sc_signal< sc_lv<1> > icmp_ln51_fu_138_p2;
    sc_signal< sc_lv<3> > k_0_0_reg_107;
    sc_signal< sc_lv<64> > zext_ln52_fu_130_p1;
    sc_signal< sc_lv<2> > trunc_ln180_fu_150_p1;
    sc_signal< sc_lv<3> > ap_NS_fsm;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<3> ap_ST_fsm_state1;
    static const sc_lv<3> ap_ST_fsm_state2;
    static const sc_lv<3> ap_ST_fsm_state3;
    static const sc_lv<32> ap_const_lv32_0;
    static const sc_lv<32> ap_const_lv32_1;
    static const sc_lv<1> ap_const_lv1_0;
    static const sc_lv<32> ap_const_lv32_2;
    static const sc_lv<3> ap_const_lv3_0;
    static const sc_lv<1> ap_const_lv1_1;
    static const sc_lv<2> ap_const_lv2_2;
    static const sc_lv<8> ap_const_lv8_0;
    static const sc_lv<2> ap_const_lv2_1;
    static const sc_lv<2> ap_const_lv2_0;
    static const sc_lv<2> ap_const_lv2_3;
    static const sc_lv<3> ap_const_lv3_6;
    static const sc_lv<3> ap_const_lv3_1;
    static const sc_lv<3> ap_const_lv3_4;
    static const bool ap_const_boolean_1;
    // Thread declarations
    void thread_ap_clk_no_reset_();
    void thread_add_ln50_fu_124_p2();
    void thread_add_ln51_fu_144_p2();
    void thread_ap_CS_fsm_state1();
    void thread_ap_CS_fsm_state2();
    void thread_ap_CS_fsm_state3();
    void thread_ap_done();
    void thread_ap_idle();
    void thread_ap_ready();
    void thread_icmp_ln50_fu_118_p2();
    void thread_icmp_ln51_fu_138_p2();
    void thread_mem_0_0_V_address0();
    void thread_mem_0_0_V_ce0();
    void thread_mem_0_0_V_d0();
    void thread_mem_0_0_V_we0();
    void thread_mem_1_0_V_address0();
    void thread_mem_1_0_V_ce0();
    void thread_mem_1_0_V_d0();
    void thread_mem_1_0_V_we0();
    void thread_mem_2_0_V_address0();
    void thread_mem_2_0_V_ce0();
    void thread_mem_2_0_V_d0();
    void thread_mem_2_0_V_we0();
    void thread_mem_3_0_V_address0();
    void thread_mem_3_0_V_ce0();
    void thread_mem_3_0_V_d0();
    void thread_mem_3_0_V_we0();
    void thread_trunc_ln180_fu_150_p1();
    void thread_zext_ln52_fu_130_p1();
    void thread_ap_NS_fsm();
};

}

using namespace ap_rtl;

#endif
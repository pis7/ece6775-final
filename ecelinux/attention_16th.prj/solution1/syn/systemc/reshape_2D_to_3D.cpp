// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and OpenCL
// Version: 2019.2
// Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#include "reshape_2D_to_3D.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

const sc_logic reshape_2D_to_3D::ap_const_logic_1 = sc_dt::Log_1;
const sc_logic reshape_2D_to_3D::ap_const_logic_0 = sc_dt::Log_0;
const sc_lv<4> reshape_2D_to_3D::ap_ST_fsm_state1 = "1";
const sc_lv<4> reshape_2D_to_3D::ap_ST_fsm_state2 = "10";
const sc_lv<4> reshape_2D_to_3D::ap_ST_fsm_state3 = "100";
const sc_lv<4> reshape_2D_to_3D::ap_ST_fsm_state4 = "1000";
const sc_lv<32> reshape_2D_to_3D::ap_const_lv32_0 = "00000000000000000000000000000000";
const sc_lv<32> reshape_2D_to_3D::ap_const_lv32_1 = "1";
const sc_lv<1> reshape_2D_to_3D::ap_const_lv1_0 = "0";
const sc_lv<32> reshape_2D_to_3D::ap_const_lv32_2 = "10";
const sc_lv<3> reshape_2D_to_3D::ap_const_lv3_0 = "000";
const sc_lv<1> reshape_2D_to_3D::ap_const_lv1_1 = "1";
const sc_lv<5> reshape_2D_to_3D::ap_const_lv5_0 = "00000";
const sc_lv<32> reshape_2D_to_3D::ap_const_lv32_3 = "11";
const sc_lv<3> reshape_2D_to_3D::ap_const_lv3_4 = "100";
const sc_lv<3> reshape_2D_to_3D::ap_const_lv3_1 = "1";
const sc_lv<5> reshape_2D_to_3D::ap_const_lv5_18 = "11000";
const sc_lv<5> reshape_2D_to_3D::ap_const_lv5_1 = "1";
const bool reshape_2D_to_3D::ap_const_boolean_1 = true;

reshape_2D_to_3D::reshape_2D_to_3D(sc_module_name name) : sc_module(name), mVcdFile(0) {

    SC_METHOD(thread_ap_clk_no_reset_);
    dont_initialize();
    sensitive << ( ap_clk.pos() );

    SC_METHOD(thread_add_ln189_fu_99_p2);
    sensitive << ( i_0_0_reg_71 );

    SC_METHOD(thread_add_ln190_fu_175_p2);
    sensitive << ( k_0_0_reg_82 );

    SC_METHOD(thread_add_ln191_fu_186_p2);
    sensitive << ( sub_ln191_reg_217 );
    sensitive << ( zext_ln190_fu_165_p1 );

    SC_METHOD(thread_add_ln203_fu_181_p2);
    sensitive << ( sub_ln203_reg_212 );
    sensitive << ( zext_ln190_fu_165_p1 );

    SC_METHOD(thread_ap_CS_fsm_state1);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state2);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state3);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state4);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_done);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm_state1 );
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( icmp_ln189_fu_93_p2 );

    SC_METHOD(thread_ap_idle);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm_state1 );

    SC_METHOD(thread_ap_ready);
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( icmp_ln189_fu_93_p2 );

    SC_METHOD(thread_icmp_ln189_fu_93_p2);
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( i_0_0_reg_71 );

    SC_METHOD(thread_icmp_ln190_fu_169_p2);
    sensitive << ( ap_CS_fsm_state3 );
    sensitive << ( k_0_0_reg_82 );

    SC_METHOD(thread_input_0_V_address0);
    sensitive << ( ap_CS_fsm_state3 );
    sensitive << ( zext_ln191_2_fu_195_p1 );

    SC_METHOD(thread_input_0_V_ce0);
    sensitive << ( ap_CS_fsm_state3 );

    SC_METHOD(thread_output_0_V_address0);
    sensitive << ( ap_CS_fsm_state4 );
    sensitive << ( sext_ln203_fu_200_p1 );

    SC_METHOD(thread_output_0_V_ce0);
    sensitive << ( ap_CS_fsm_state4 );

    SC_METHOD(thread_output_0_V_d0);
    sensitive << ( input_0_V_q0 );
    sensitive << ( ap_CS_fsm_state4 );

    SC_METHOD(thread_output_0_V_we0);
    sensitive << ( ap_CS_fsm_state4 );

    SC_METHOD(thread_sext_ln191_fu_191_p1);
    sensitive << ( add_ln191_fu_186_p2 );

    SC_METHOD(thread_sext_ln203_fu_200_p1);
    sensitive << ( add_ln203_reg_230 );

    SC_METHOD(thread_shl_ln191_1_fu_147_p3);
    sensitive << ( trunc_ln191_fu_131_p1 );

    SC_METHOD(thread_shl_ln_fu_135_p3);
    sensitive << ( trunc_ln191_fu_131_p1 );

    SC_METHOD(thread_sub_ln191_fu_159_p2);
    sensitive << ( zext_ln191_fu_143_p1 );
    sensitive << ( zext_ln191_1_fu_155_p1 );

    SC_METHOD(thread_sub_ln203_fu_125_p2);
    sensitive << ( tmp_54_fu_105_p3 );
    sensitive << ( zext_ln203_fu_121_p1 );

    SC_METHOD(thread_tmp_54_fu_105_p3);
    sensitive << ( i_0_0_reg_71 );

    SC_METHOD(thread_tmp_55_fu_113_p3);
    sensitive << ( i_0_0_reg_71 );

    SC_METHOD(thread_trunc_ln191_fu_131_p1);
    sensitive << ( i_0_0_reg_71 );

    SC_METHOD(thread_zext_ln190_fu_165_p1);
    sensitive << ( k_0_0_reg_82 );

    SC_METHOD(thread_zext_ln191_1_fu_155_p1);
    sensitive << ( shl_ln191_1_fu_147_p3 );

    SC_METHOD(thread_zext_ln191_2_fu_195_p1);
    sensitive << ( sext_ln191_fu_191_p1 );

    SC_METHOD(thread_zext_ln191_fu_143_p1);
    sensitive << ( shl_ln_fu_135_p3 );

    SC_METHOD(thread_zext_ln203_fu_121_p1);
    sensitive << ( tmp_55_fu_113_p3 );

    SC_METHOD(thread_ap_NS_fsm);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm );
    sensitive << ( ap_CS_fsm_state1 );
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( icmp_ln189_fu_93_p2 );
    sensitive << ( ap_CS_fsm_state3 );
    sensitive << ( icmp_ln190_fu_169_p2 );

    ap_CS_fsm = "0001";
    static int apTFileNum = 0;
    stringstream apTFilenSS;
    apTFilenSS << "reshape_2D_to_3D_sc_trace_" << apTFileNum ++;
    string apTFn = apTFilenSS.str();
    mVcdFile = sc_create_vcd_trace_file(apTFn.c_str());
    mVcdFile->set_time_unit(1, SC_PS);
    if (1) {
#ifdef __HLS_TRACE_LEVEL_PORT_HIER__
    sc_trace(mVcdFile, ap_clk, "(port)ap_clk");
    sc_trace(mVcdFile, ap_rst, "(port)ap_rst");
    sc_trace(mVcdFile, ap_start, "(port)ap_start");
    sc_trace(mVcdFile, ap_done, "(port)ap_done");
    sc_trace(mVcdFile, ap_idle, "(port)ap_idle");
    sc_trace(mVcdFile, ap_ready, "(port)ap_ready");
    sc_trace(mVcdFile, input_0_V_address0, "(port)input_0_V_address0");
    sc_trace(mVcdFile, input_0_V_ce0, "(port)input_0_V_ce0");
    sc_trace(mVcdFile, input_0_V_q0, "(port)input_0_V_q0");
    sc_trace(mVcdFile, output_0_V_address0, "(port)output_0_V_address0");
    sc_trace(mVcdFile, output_0_V_ce0, "(port)output_0_V_ce0");
    sc_trace(mVcdFile, output_0_V_we0, "(port)output_0_V_we0");
    sc_trace(mVcdFile, output_0_V_d0, "(port)output_0_V_d0");
#endif
#ifdef __HLS_TRACE_LEVEL_INT__
    sc_trace(mVcdFile, ap_CS_fsm, "ap_CS_fsm");
    sc_trace(mVcdFile, ap_CS_fsm_state1, "ap_CS_fsm_state1");
    sc_trace(mVcdFile, add_ln189_fu_99_p2, "add_ln189_fu_99_p2");
    sc_trace(mVcdFile, add_ln189_reg_207, "add_ln189_reg_207");
    sc_trace(mVcdFile, ap_CS_fsm_state2, "ap_CS_fsm_state2");
    sc_trace(mVcdFile, sub_ln203_fu_125_p2, "sub_ln203_fu_125_p2");
    sc_trace(mVcdFile, sub_ln203_reg_212, "sub_ln203_reg_212");
    sc_trace(mVcdFile, icmp_ln189_fu_93_p2, "icmp_ln189_fu_93_p2");
    sc_trace(mVcdFile, sub_ln191_fu_159_p2, "sub_ln191_fu_159_p2");
    sc_trace(mVcdFile, sub_ln191_reg_217, "sub_ln191_reg_217");
    sc_trace(mVcdFile, add_ln190_fu_175_p2, "add_ln190_fu_175_p2");
    sc_trace(mVcdFile, add_ln190_reg_225, "add_ln190_reg_225");
    sc_trace(mVcdFile, ap_CS_fsm_state3, "ap_CS_fsm_state3");
    sc_trace(mVcdFile, add_ln203_fu_181_p2, "add_ln203_fu_181_p2");
    sc_trace(mVcdFile, add_ln203_reg_230, "add_ln203_reg_230");
    sc_trace(mVcdFile, icmp_ln190_fu_169_p2, "icmp_ln190_fu_169_p2");
    sc_trace(mVcdFile, i_0_0_reg_71, "i_0_0_reg_71");
    sc_trace(mVcdFile, k_0_0_reg_82, "k_0_0_reg_82");
    sc_trace(mVcdFile, ap_CS_fsm_state4, "ap_CS_fsm_state4");
    sc_trace(mVcdFile, zext_ln191_2_fu_195_p1, "zext_ln191_2_fu_195_p1");
    sc_trace(mVcdFile, sext_ln203_fu_200_p1, "sext_ln203_fu_200_p1");
    sc_trace(mVcdFile, tmp_55_fu_113_p3, "tmp_55_fu_113_p3");
    sc_trace(mVcdFile, tmp_54_fu_105_p3, "tmp_54_fu_105_p3");
    sc_trace(mVcdFile, zext_ln203_fu_121_p1, "zext_ln203_fu_121_p1");
    sc_trace(mVcdFile, trunc_ln191_fu_131_p1, "trunc_ln191_fu_131_p1");
    sc_trace(mVcdFile, shl_ln_fu_135_p3, "shl_ln_fu_135_p3");
    sc_trace(mVcdFile, shl_ln191_1_fu_147_p3, "shl_ln191_1_fu_147_p3");
    sc_trace(mVcdFile, zext_ln191_fu_143_p1, "zext_ln191_fu_143_p1");
    sc_trace(mVcdFile, zext_ln191_1_fu_155_p1, "zext_ln191_1_fu_155_p1");
    sc_trace(mVcdFile, zext_ln190_fu_165_p1, "zext_ln190_fu_165_p1");
    sc_trace(mVcdFile, add_ln191_fu_186_p2, "add_ln191_fu_186_p2");
    sc_trace(mVcdFile, sext_ln191_fu_191_p1, "sext_ln191_fu_191_p1");
    sc_trace(mVcdFile, ap_NS_fsm, "ap_NS_fsm");
#endif

    }
}

reshape_2D_to_3D::~reshape_2D_to_3D() {
    if (mVcdFile) 
        sc_close_vcd_trace_file(mVcdFile);

}

void reshape_2D_to_3D::thread_ap_clk_no_reset_() {
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_CS_fsm = ap_ST_fsm_state1;
    } else {
        ap_CS_fsm = ap_NS_fsm.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(icmp_ln190_fu_169_p2.read(), ap_const_lv1_1))) {
        i_0_0_reg_71 = add_ln189_reg_207.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
                esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
        i_0_0_reg_71 = ap_const_lv3_0;
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        k_0_0_reg_82 = add_ln190_reg_225.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
                esl_seteq<1,1,1>(icmp_ln189_fu_93_p2.read(), ap_const_lv1_0))) {
        k_0_0_reg_82 = ap_const_lv5_0;
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        add_ln189_reg_207 = add_ln189_fu_99_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        add_ln190_reg_225 = add_ln190_fu_175_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln190_fu_169_p2.read()))) {
        add_ln203_reg_230 = add_ln203_fu_181_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && esl_seteq<1,1,1>(icmp_ln189_fu_93_p2.read(), ap_const_lv1_0))) {
        sub_ln191_reg_217 = sub_ln191_fu_159_p2.read();
        sub_ln203_reg_212 = sub_ln203_fu_125_p2.read();
    }
}

void reshape_2D_to_3D::thread_add_ln189_fu_99_p2() {
    add_ln189_fu_99_p2 = (!i_0_0_reg_71.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(i_0_0_reg_71.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void reshape_2D_to_3D::thread_add_ln190_fu_175_p2() {
    add_ln190_fu_175_p2 = (!k_0_0_reg_82.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(k_0_0_reg_82.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void reshape_2D_to_3D::thread_add_ln191_fu_186_p2() {
    add_ln191_fu_186_p2 = (!zext_ln190_fu_165_p1.read().is_01() || !sub_ln191_reg_217.read().is_01())? sc_lv<8>(): (sc_biguint<8>(zext_ln190_fu_165_p1.read()) + sc_biguint<8>(sub_ln191_reg_217.read()));
}

void reshape_2D_to_3D::thread_add_ln203_fu_181_p2() {
    add_ln203_fu_181_p2 = (!sub_ln203_reg_212.read().is_01() || !zext_ln190_fu_165_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(sub_ln203_reg_212.read()) + sc_biguint<8>(zext_ln190_fu_165_p1.read()));
}

void reshape_2D_to_3D::thread_ap_CS_fsm_state1() {
    ap_CS_fsm_state1 = ap_CS_fsm.read()[0];
}

void reshape_2D_to_3D::thread_ap_CS_fsm_state2() {
    ap_CS_fsm_state2 = ap_CS_fsm.read()[1];
}

void reshape_2D_to_3D::thread_ap_CS_fsm_state3() {
    ap_CS_fsm_state3 = ap_CS_fsm.read()[2];
}

void reshape_2D_to_3D::thread_ap_CS_fsm_state4() {
    ap_CS_fsm_state4 = ap_CS_fsm.read()[3];
}

void reshape_2D_to_3D::thread_ap_done() {
    if (((esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln189_fu_93_p2.read(), ap_const_lv1_1)))) {
        ap_done = ap_const_logic_1;
    } else {
        ap_done = ap_const_logic_0;
    }
}

void reshape_2D_to_3D::thread_ap_idle() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()))) {
        ap_idle = ap_const_logic_1;
    } else {
        ap_idle = ap_const_logic_0;
    }
}

void reshape_2D_to_3D::thread_ap_ready() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(icmp_ln189_fu_93_p2.read(), ap_const_lv1_1))) {
        ap_ready = ap_const_logic_1;
    } else {
        ap_ready = ap_const_logic_0;
    }
}

void reshape_2D_to_3D::thread_icmp_ln189_fu_93_p2() {
    icmp_ln189_fu_93_p2 = (!i_0_0_reg_71.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(i_0_0_reg_71.read() == ap_const_lv3_4);
}

void reshape_2D_to_3D::thread_icmp_ln190_fu_169_p2() {
    icmp_ln190_fu_169_p2 = (!k_0_0_reg_82.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(k_0_0_reg_82.read() == ap_const_lv5_18);
}

void reshape_2D_to_3D::thread_input_0_V_address0() {
    input_0_V_address0 =  (sc_lv<7>) (zext_ln191_2_fu_195_p1.read());
}

void reshape_2D_to_3D::thread_input_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        input_0_V_ce0 = ap_const_logic_1;
    } else {
        input_0_V_ce0 = ap_const_logic_0;
    }
}

void reshape_2D_to_3D::thread_output_0_V_address0() {
    output_0_V_address0 =  (sc_lv<7>) (sext_ln203_fu_200_p1.read());
}

void reshape_2D_to_3D::thread_output_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        output_0_V_ce0 = ap_const_logic_1;
    } else {
        output_0_V_ce0 = ap_const_logic_0;
    }
}

void reshape_2D_to_3D::thread_output_0_V_d0() {
    output_0_V_d0 = input_0_V_q0.read();
}

void reshape_2D_to_3D::thread_output_0_V_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        output_0_V_we0 = ap_const_logic_1;
    } else {
        output_0_V_we0 = ap_const_logic_0;
    }
}

void reshape_2D_to_3D::thread_sext_ln191_fu_191_p1() {
    sext_ln191_fu_191_p1 = esl_sext<32,8>(add_ln191_fu_186_p2.read());
}

void reshape_2D_to_3D::thread_sext_ln203_fu_200_p1() {
    sext_ln203_fu_200_p1 = esl_sext<64,8>(add_ln203_reg_230.read());
}

void reshape_2D_to_3D::thread_shl_ln191_1_fu_147_p3() {
    shl_ln191_1_fu_147_p3 = esl_concat<2,3>(trunc_ln191_fu_131_p1.read(), ap_const_lv3_0);
}

void reshape_2D_to_3D::thread_shl_ln_fu_135_p3() {
    shl_ln_fu_135_p3 = esl_concat<2,5>(trunc_ln191_fu_131_p1.read(), ap_const_lv5_0);
}

void reshape_2D_to_3D::thread_sub_ln191_fu_159_p2() {
    sub_ln191_fu_159_p2 = (!zext_ln191_fu_143_p1.read().is_01() || !zext_ln191_1_fu_155_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(zext_ln191_fu_143_p1.read()) - sc_biguint<8>(zext_ln191_1_fu_155_p1.read()));
}

void reshape_2D_to_3D::thread_sub_ln203_fu_125_p2() {
    sub_ln203_fu_125_p2 = (!tmp_54_fu_105_p3.read().is_01() || !zext_ln203_fu_121_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_54_fu_105_p3.read()) - sc_biguint<8>(zext_ln203_fu_121_p1.read()));
}

void reshape_2D_to_3D::thread_tmp_54_fu_105_p3() {
    tmp_54_fu_105_p3 = esl_concat<3,5>(i_0_0_reg_71.read(), ap_const_lv5_0);
}

void reshape_2D_to_3D::thread_tmp_55_fu_113_p3() {
    tmp_55_fu_113_p3 = esl_concat<3,3>(i_0_0_reg_71.read(), ap_const_lv3_0);
}

void reshape_2D_to_3D::thread_trunc_ln191_fu_131_p1() {
    trunc_ln191_fu_131_p1 = i_0_0_reg_71.read().range(2-1, 0);
}

void reshape_2D_to_3D::thread_zext_ln190_fu_165_p1() {
    zext_ln190_fu_165_p1 = esl_zext<8,5>(k_0_0_reg_82.read());
}

void reshape_2D_to_3D::thread_zext_ln191_1_fu_155_p1() {
    zext_ln191_1_fu_155_p1 = esl_zext<8,5>(shl_ln191_1_fu_147_p3.read());
}

void reshape_2D_to_3D::thread_zext_ln191_2_fu_195_p1() {
    zext_ln191_2_fu_195_p1 = esl_zext<64,32>(sext_ln191_fu_191_p1.read());
}

void reshape_2D_to_3D::thread_zext_ln191_fu_143_p1() {
    zext_ln191_fu_143_p1 = esl_zext<8,7>(shl_ln_fu_135_p3.read());
}

void reshape_2D_to_3D::thread_zext_ln203_fu_121_p1() {
    zext_ln203_fu_121_p1 = esl_zext<8,6>(tmp_55_fu_113_p3.read());
}

void reshape_2D_to_3D::thread_ap_NS_fsm() {
    switch (ap_CS_fsm.read().to_uint64()) {
        case 1 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
                ap_NS_fsm = ap_ST_fsm_state2;
            } else {
                ap_NS_fsm = ap_ST_fsm_state1;
            }
            break;
        case 2 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && esl_seteq<1,1,1>(icmp_ln189_fu_93_p2.read(), ap_const_lv1_1))) {
                ap_NS_fsm = ap_ST_fsm_state1;
            } else {
                ap_NS_fsm = ap_ST_fsm_state3;
            }
            break;
        case 4 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && esl_seteq<1,1,1>(icmp_ln190_fu_169_p2.read(), ap_const_lv1_1))) {
                ap_NS_fsm = ap_ST_fsm_state2;
            } else {
                ap_NS_fsm = ap_ST_fsm_state4;
            }
            break;
        case 8 : 
            ap_NS_fsm = ap_ST_fsm_state3;
            break;
        default : 
            ap_NS_fsm = "XXXX";
            break;
    }
}

}

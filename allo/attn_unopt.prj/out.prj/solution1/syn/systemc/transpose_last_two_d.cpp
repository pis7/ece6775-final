// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and OpenCL
// Version: 2019.2
// Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#include "transpose_last_two_d.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

const sc_logic transpose_last_two_d::ap_const_logic_1 = sc_dt::Log_1;
const sc_logic transpose_last_two_d::ap_const_logic_0 = sc_dt::Log_0;
const sc_lv<5> transpose_last_two_d::ap_ST_fsm_state1 = "1";
const sc_lv<5> transpose_last_two_d::ap_ST_fsm_state2 = "10";
const sc_lv<5> transpose_last_two_d::ap_ST_fsm_state3 = "100";
const sc_lv<5> transpose_last_two_d::ap_ST_fsm_state4 = "1000";
const sc_lv<5> transpose_last_two_d::ap_ST_fsm_state5 = "10000";
const sc_lv<32> transpose_last_two_d::ap_const_lv32_0 = "00000000000000000000000000000000";
const sc_lv<32> transpose_last_two_d::ap_const_lv32_1 = "1";
const sc_lv<1> transpose_last_two_d::ap_const_lv1_0 = "0";
const sc_lv<32> transpose_last_two_d::ap_const_lv32_2 = "10";
const sc_lv<32> transpose_last_two_d::ap_const_lv32_3 = "11";
const sc_lv<5> transpose_last_two_d::ap_const_lv5_0 = "00000";
const sc_lv<1> transpose_last_two_d::ap_const_lv1_1 = "1";
const sc_lv<3> transpose_last_two_d::ap_const_lv3_0 = "000";
const sc_lv<7> transpose_last_two_d::ap_const_lv7_0 = "0000000";
const sc_lv<32> transpose_last_two_d::ap_const_lv32_4 = "100";
const sc_lv<5> transpose_last_two_d::ap_const_lv5_10 = "10000";
const sc_lv<5> transpose_last_two_d::ap_const_lv5_1 = "1";
const sc_lv<3> transpose_last_two_d::ap_const_lv3_6 = "110";
const sc_lv<3> transpose_last_two_d::ap_const_lv3_1 = "1";
const sc_lv<7> transpose_last_two_d::ap_const_lv7_60 = "1100000";
const sc_lv<7> transpose_last_two_d::ap_const_lv7_1 = "1";
const bool transpose_last_two_d::ap_const_boolean_1 = true;

transpose_last_two_d::transpose_last_two_d(sc_module_name name) : sc_module(name), mVcdFile(0) {

    SC_METHOD(thread_ap_clk_no_reset_);
    dont_initialize();
    sensitive << ( ap_clk.pos() );

    SC_METHOD(thread_add_ln335_1_fu_273_p2);
    sensitive << ( sub_ln335_1_reg_354 );
    sensitive << ( zext_ln335_5_fu_269_p1 );

    SC_METHOD(thread_add_ln335_fu_222_p2);
    sensitive << ( sext_ln335_reg_331 );
    sensitive << ( zext_ln335_3_fu_218_p1 );

    SC_METHOD(thread_add_ln336_1_fu_314_p2);
    sensitive << ( zext_ln335_2_reg_349 );
    sensitive << ( sub_ln336_1_fu_308_p2 );

    SC_METHOD(thread_add_ln336_fu_283_p2);
    sensitive << ( sext_ln336_reg_336 );
    sensitive << ( zext_ln335_4_fu_265_p1 );

    SC_METHOD(thread_ap_CS_fsm_state1);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state2);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state3);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state4);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state5);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_done);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm_state1 );
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( icmp_ln332_fu_122_p2 );

    SC_METHOD(thread_ap_idle);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm_state1 );

    SC_METHOD(thread_ap_ready);
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( icmp_ln332_fu_122_p2 );

    SC_METHOD(thread_d3_fu_259_p2);
    sensitive << ( d3_0_reg_111 );

    SC_METHOD(thread_h3_fu_128_p2);
    sensitive << ( h3_0_reg_89 );

    SC_METHOD(thread_icmp_ln332_fu_122_p2);
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( h3_0_reg_89 );

    SC_METHOD(thread_icmp_ln333_fu_202_p2);
    sensitive << ( ap_CS_fsm_state3 );
    sensitive << ( s3_0_reg_100 );

    SC_METHOD(thread_icmp_ln334_fu_253_p2);
    sensitive << ( ap_CS_fsm_state4 );
    sensitive << ( d3_0_reg_111 );

    SC_METHOD(thread_p_shl4_cast_fu_231_p3);
    sensitive << ( trunc_ln335_fu_227_p1 );

    SC_METHOD(thread_p_shl5_cast_fu_239_p3);
    sensitive << ( add_ln335_fu_222_p2 );

    SC_METHOD(thread_p_shl6_cast_fu_292_p3);
    sensitive << ( trunc_ln336_fu_288_p1 );

    SC_METHOD(thread_p_shl7_cast_fu_300_p3);
    sensitive << ( add_ln336_fu_283_p2 );

    SC_METHOD(thread_s3_fu_208_p2);
    sensitive << ( s3_0_reg_100 );

    SC_METHOD(thread_sext_ln335_fu_164_p1);
    sensitive << ( sub_ln335_fu_158_p2 );

    SC_METHOD(thread_sext_ln336_fu_198_p1);
    sensitive << ( sub_ln336_fu_192_p2 );

    SC_METHOD(thread_sub_ln335_1_fu_247_p2);
    sensitive << ( p_shl4_cast_fu_231_p3 );
    sensitive << ( p_shl5_cast_fu_239_p3 );

    SC_METHOD(thread_sub_ln335_fu_158_p2);
    sensitive << ( zext_ln335_fu_142_p1 );
    sensitive << ( zext_ln335_1_fu_154_p1 );

    SC_METHOD(thread_sub_ln336_1_fu_308_p2);
    sensitive << ( p_shl6_cast_fu_292_p3 );
    sensitive << ( p_shl7_cast_fu_300_p3 );

    SC_METHOD(thread_sub_ln336_fu_192_p2);
    sensitive << ( zext_ln336_fu_176_p1 );
    sensitive << ( zext_ln336_1_fu_188_p1 );

    SC_METHOD(thread_tmp_2_fu_134_p3);
    sensitive << ( h3_0_reg_89 );

    SC_METHOD(thread_tmp_3_fu_146_p3);
    sensitive << ( h3_0_reg_89 );

    SC_METHOD(thread_tmp_4_fu_168_p3);
    sensitive << ( h3_0_reg_89 );

    SC_METHOD(thread_tmp_5_fu_180_p3);
    sensitive << ( h3_0_reg_89 );

    SC_METHOD(thread_trunc_ln335_fu_227_p1);
    sensitive << ( add_ln335_fu_222_p2 );

    SC_METHOD(thread_trunc_ln336_fu_288_p1);
    sensitive << ( add_ln336_fu_283_p2 );

    SC_METHOD(thread_v198_address0);
    sensitive << ( ap_CS_fsm_state4 );
    sensitive << ( zext_ln335_6_fu_278_p1 );

    SC_METHOD(thread_v198_ce0);
    sensitive << ( ap_CS_fsm_state4 );

    SC_METHOD(thread_v199_address0);
    sensitive << ( ap_CS_fsm_state5 );
    sensitive << ( zext_ln336_2_fu_319_p1 );

    SC_METHOD(thread_v199_ce0);
    sensitive << ( ap_CS_fsm_state5 );

    SC_METHOD(thread_v199_d0);
    sensitive << ( v198_q0 );
    sensitive << ( ap_CS_fsm_state5 );

    SC_METHOD(thread_v199_we0);
    sensitive << ( ap_CS_fsm_state5 );

    SC_METHOD(thread_zext_ln335_1_fu_154_p1);
    sensitive << ( tmp_3_fu_146_p3 );

    SC_METHOD(thread_zext_ln335_2_fu_214_p1);
    sensitive << ( s3_0_reg_100 );

    SC_METHOD(thread_zext_ln335_3_fu_218_p1);
    sensitive << ( s3_0_reg_100 );

    SC_METHOD(thread_zext_ln335_4_fu_265_p1);
    sensitive << ( d3_0_reg_111 );

    SC_METHOD(thread_zext_ln335_5_fu_269_p1);
    sensitive << ( d3_0_reg_111 );

    SC_METHOD(thread_zext_ln335_6_fu_278_p1);
    sensitive << ( add_ln335_1_fu_273_p2 );

    SC_METHOD(thread_zext_ln335_fu_142_p1);
    sensitive << ( tmp_2_fu_134_p3 );

    SC_METHOD(thread_zext_ln336_1_fu_188_p1);
    sensitive << ( tmp_5_fu_180_p3 );

    SC_METHOD(thread_zext_ln336_2_fu_319_p1);
    sensitive << ( add_ln336_1_reg_372 );

    SC_METHOD(thread_zext_ln336_fu_176_p1);
    sensitive << ( tmp_4_fu_168_p3 );

    SC_METHOD(thread_ap_NS_fsm);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm );
    sensitive << ( ap_CS_fsm_state1 );
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( icmp_ln332_fu_122_p2 );
    sensitive << ( ap_CS_fsm_state3 );
    sensitive << ( icmp_ln333_fu_202_p2 );
    sensitive << ( ap_CS_fsm_state4 );
    sensitive << ( icmp_ln334_fu_253_p2 );

    ap_CS_fsm = "00001";
    static int apTFileNum = 0;
    stringstream apTFilenSS;
    apTFilenSS << "transpose_last_two_d_sc_trace_" << apTFileNum ++;
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
    sc_trace(mVcdFile, v198_address0, "(port)v198_address0");
    sc_trace(mVcdFile, v198_ce0, "(port)v198_ce0");
    sc_trace(mVcdFile, v198_q0, "(port)v198_q0");
    sc_trace(mVcdFile, v199_address0, "(port)v199_address0");
    sc_trace(mVcdFile, v199_ce0, "(port)v199_ce0");
    sc_trace(mVcdFile, v199_we0, "(port)v199_we0");
    sc_trace(mVcdFile, v199_d0, "(port)v199_d0");
#endif
#ifdef __HLS_TRACE_LEVEL_INT__
    sc_trace(mVcdFile, ap_CS_fsm, "ap_CS_fsm");
    sc_trace(mVcdFile, ap_CS_fsm_state1, "ap_CS_fsm_state1");
    sc_trace(mVcdFile, h3_fu_128_p2, "h3_fu_128_p2");
    sc_trace(mVcdFile, h3_reg_326, "h3_reg_326");
    sc_trace(mVcdFile, ap_CS_fsm_state2, "ap_CS_fsm_state2");
    sc_trace(mVcdFile, sext_ln335_fu_164_p1, "sext_ln335_fu_164_p1");
    sc_trace(mVcdFile, sext_ln335_reg_331, "sext_ln335_reg_331");
    sc_trace(mVcdFile, icmp_ln332_fu_122_p2, "icmp_ln332_fu_122_p2");
    sc_trace(mVcdFile, sext_ln336_fu_198_p1, "sext_ln336_fu_198_p1");
    sc_trace(mVcdFile, sext_ln336_reg_336, "sext_ln336_reg_336");
    sc_trace(mVcdFile, s3_fu_208_p2, "s3_fu_208_p2");
    sc_trace(mVcdFile, s3_reg_344, "s3_reg_344");
    sc_trace(mVcdFile, ap_CS_fsm_state3, "ap_CS_fsm_state3");
    sc_trace(mVcdFile, zext_ln335_2_fu_214_p1, "zext_ln335_2_fu_214_p1");
    sc_trace(mVcdFile, zext_ln335_2_reg_349, "zext_ln335_2_reg_349");
    sc_trace(mVcdFile, icmp_ln333_fu_202_p2, "icmp_ln333_fu_202_p2");
    sc_trace(mVcdFile, sub_ln335_1_fu_247_p2, "sub_ln335_1_fu_247_p2");
    sc_trace(mVcdFile, sub_ln335_1_reg_354, "sub_ln335_1_reg_354");
    sc_trace(mVcdFile, d3_fu_259_p2, "d3_fu_259_p2");
    sc_trace(mVcdFile, d3_reg_362, "d3_reg_362");
    sc_trace(mVcdFile, ap_CS_fsm_state4, "ap_CS_fsm_state4");
    sc_trace(mVcdFile, icmp_ln334_fu_253_p2, "icmp_ln334_fu_253_p2");
    sc_trace(mVcdFile, add_ln336_1_fu_314_p2, "add_ln336_1_fu_314_p2");
    sc_trace(mVcdFile, add_ln336_1_reg_372, "add_ln336_1_reg_372");
    sc_trace(mVcdFile, h3_0_reg_89, "h3_0_reg_89");
    sc_trace(mVcdFile, s3_0_reg_100, "s3_0_reg_100");
    sc_trace(mVcdFile, d3_0_reg_111, "d3_0_reg_111");
    sc_trace(mVcdFile, ap_CS_fsm_state5, "ap_CS_fsm_state5");
    sc_trace(mVcdFile, zext_ln335_6_fu_278_p1, "zext_ln335_6_fu_278_p1");
    sc_trace(mVcdFile, zext_ln336_2_fu_319_p1, "zext_ln336_2_fu_319_p1");
    sc_trace(mVcdFile, tmp_2_fu_134_p3, "tmp_2_fu_134_p3");
    sc_trace(mVcdFile, tmp_3_fu_146_p3, "tmp_3_fu_146_p3");
    sc_trace(mVcdFile, zext_ln335_fu_142_p1, "zext_ln335_fu_142_p1");
    sc_trace(mVcdFile, zext_ln335_1_fu_154_p1, "zext_ln335_1_fu_154_p1");
    sc_trace(mVcdFile, sub_ln335_fu_158_p2, "sub_ln335_fu_158_p2");
    sc_trace(mVcdFile, tmp_4_fu_168_p3, "tmp_4_fu_168_p3");
    sc_trace(mVcdFile, tmp_5_fu_180_p3, "tmp_5_fu_180_p3");
    sc_trace(mVcdFile, zext_ln336_fu_176_p1, "zext_ln336_fu_176_p1");
    sc_trace(mVcdFile, zext_ln336_1_fu_188_p1, "zext_ln336_1_fu_188_p1");
    sc_trace(mVcdFile, sub_ln336_fu_192_p2, "sub_ln336_fu_192_p2");
    sc_trace(mVcdFile, zext_ln335_3_fu_218_p1, "zext_ln335_3_fu_218_p1");
    sc_trace(mVcdFile, add_ln335_fu_222_p2, "add_ln335_fu_222_p2");
    sc_trace(mVcdFile, trunc_ln335_fu_227_p1, "trunc_ln335_fu_227_p1");
    sc_trace(mVcdFile, p_shl4_cast_fu_231_p3, "p_shl4_cast_fu_231_p3");
    sc_trace(mVcdFile, p_shl5_cast_fu_239_p3, "p_shl5_cast_fu_239_p3");
    sc_trace(mVcdFile, zext_ln335_5_fu_269_p1, "zext_ln335_5_fu_269_p1");
    sc_trace(mVcdFile, add_ln335_1_fu_273_p2, "add_ln335_1_fu_273_p2");
    sc_trace(mVcdFile, zext_ln335_4_fu_265_p1, "zext_ln335_4_fu_265_p1");
    sc_trace(mVcdFile, add_ln336_fu_283_p2, "add_ln336_fu_283_p2");
    sc_trace(mVcdFile, trunc_ln336_fu_288_p1, "trunc_ln336_fu_288_p1");
    sc_trace(mVcdFile, p_shl6_cast_fu_292_p3, "p_shl6_cast_fu_292_p3");
    sc_trace(mVcdFile, p_shl7_cast_fu_300_p3, "p_shl7_cast_fu_300_p3");
    sc_trace(mVcdFile, sub_ln336_1_fu_308_p2, "sub_ln336_1_fu_308_p2");
    sc_trace(mVcdFile, ap_NS_fsm, "ap_NS_fsm");
#endif

    }
}

transpose_last_two_d::~transpose_last_two_d() {
    if (mVcdFile) 
        sc_close_vcd_trace_file(mVcdFile);

}

void transpose_last_two_d::thread_ap_clk_no_reset_() {
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_CS_fsm = ap_ST_fsm_state1;
    } else {
        ap_CS_fsm = ap_NS_fsm.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        d3_0_reg_111 = d3_reg_362.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln333_fu_202_p2.read()))) {
        d3_0_reg_111 = ap_const_lv7_0;
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(icmp_ln333_fu_202_p2.read(), ap_const_lv1_1))) {
        h3_0_reg_89 = h3_reg_326.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
                esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
        h3_0_reg_89 = ap_const_lv5_0;
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(icmp_ln334_fu_253_p2.read(), ap_const_lv1_1))) {
        s3_0_reg_100 = s3_reg_344.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
                esl_seteq<1,1,1>(icmp_ln332_fu_122_p2.read(), ap_const_lv1_0))) {
        s3_0_reg_100 = ap_const_lv3_0;
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln334_fu_253_p2.read()))) {
        add_ln336_1_reg_372 = add_ln336_1_fu_314_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        d3_reg_362 = d3_fu_259_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        h3_reg_326 = h3_fu_128_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        s3_reg_344 = s3_fu_208_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && esl_seteq<1,1,1>(icmp_ln332_fu_122_p2.read(), ap_const_lv1_0))) {
        sext_ln335_reg_331 = sext_ln335_fu_164_p1.read();
        sext_ln336_reg_336 = sext_ln336_fu_198_p1.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln333_fu_202_p2.read()))) {
        sub_ln335_1_reg_354 = sub_ln335_1_fu_247_p2.read();
        zext_ln335_2_reg_349 = zext_ln335_2_fu_214_p1.read();
    }
}

void transpose_last_two_d::thread_add_ln335_1_fu_273_p2() {
    add_ln335_1_fu_273_p2 = (!zext_ln335_5_fu_269_p1.read().is_01() || !sub_ln335_1_reg_354.read().is_01())? sc_lv<15>(): (sc_biguint<15>(zext_ln335_5_fu_269_p1.read()) + sc_biguint<15>(sub_ln335_1_reg_354.read()));
}

void transpose_last_two_d::thread_add_ln335_fu_222_p2() {
    add_ln335_fu_222_p2 = (!zext_ln335_3_fu_218_p1.read().is_01() || !sext_ln335_reg_331.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln335_3_fu_218_p1.read()) + sc_bigint<10>(sext_ln335_reg_331.read()));
}

void transpose_last_two_d::thread_add_ln336_1_fu_314_p2() {
    add_ln336_1_fu_314_p2 = (!zext_ln335_2_reg_349.read().is_01() || !sub_ln336_1_fu_308_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(zext_ln335_2_reg_349.read()) + sc_biguint<15>(sub_ln336_1_fu_308_p2.read()));
}

void transpose_last_two_d::thread_add_ln336_fu_283_p2() {
    add_ln336_fu_283_p2 = (!zext_ln335_4_fu_265_p1.read().is_01() || !sext_ln336_reg_336.read().is_01())? sc_lv<14>(): (sc_biguint<14>(zext_ln335_4_fu_265_p1.read()) + sc_bigint<14>(sext_ln336_reg_336.read()));
}

void transpose_last_two_d::thread_ap_CS_fsm_state1() {
    ap_CS_fsm_state1 = ap_CS_fsm.read()[0];
}

void transpose_last_two_d::thread_ap_CS_fsm_state2() {
    ap_CS_fsm_state2 = ap_CS_fsm.read()[1];
}

void transpose_last_two_d::thread_ap_CS_fsm_state3() {
    ap_CS_fsm_state3 = ap_CS_fsm.read()[2];
}

void transpose_last_two_d::thread_ap_CS_fsm_state4() {
    ap_CS_fsm_state4 = ap_CS_fsm.read()[3];
}

void transpose_last_two_d::thread_ap_CS_fsm_state5() {
    ap_CS_fsm_state5 = ap_CS_fsm.read()[4];
}

void transpose_last_two_d::thread_ap_done() {
    if (((esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln332_fu_122_p2.read(), ap_const_lv1_1)))) {
        ap_done = ap_const_logic_1;
    } else {
        ap_done = ap_const_logic_0;
    }
}

void transpose_last_two_d::thread_ap_idle() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()))) {
        ap_idle = ap_const_logic_1;
    } else {
        ap_idle = ap_const_logic_0;
    }
}

void transpose_last_two_d::thread_ap_ready() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(icmp_ln332_fu_122_p2.read(), ap_const_lv1_1))) {
        ap_ready = ap_const_logic_1;
    } else {
        ap_ready = ap_const_logic_0;
    }
}

void transpose_last_two_d::thread_d3_fu_259_p2() {
    d3_fu_259_p2 = (!d3_0_reg_111.read().is_01() || !ap_const_lv7_1.is_01())? sc_lv<7>(): (sc_biguint<7>(d3_0_reg_111.read()) + sc_biguint<7>(ap_const_lv7_1));
}

void transpose_last_two_d::thread_h3_fu_128_p2() {
    h3_fu_128_p2 = (!h3_0_reg_89.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(h3_0_reg_89.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void transpose_last_two_d::thread_icmp_ln332_fu_122_p2() {
    icmp_ln332_fu_122_p2 = (!h3_0_reg_89.read().is_01() || !ap_const_lv5_10.is_01())? sc_lv<1>(): sc_lv<1>(h3_0_reg_89.read() == ap_const_lv5_10);
}

void transpose_last_two_d::thread_icmp_ln333_fu_202_p2() {
    icmp_ln333_fu_202_p2 = (!s3_0_reg_100.read().is_01() || !ap_const_lv3_6.is_01())? sc_lv<1>(): sc_lv<1>(s3_0_reg_100.read() == ap_const_lv3_6);
}

void transpose_last_two_d::thread_icmp_ln334_fu_253_p2() {
    icmp_ln334_fu_253_p2 = (!d3_0_reg_111.read().is_01() || !ap_const_lv7_60.is_01())? sc_lv<1>(): sc_lv<1>(d3_0_reg_111.read() == ap_const_lv7_60);
}

void transpose_last_two_d::thread_p_shl4_cast_fu_231_p3() {
    p_shl4_cast_fu_231_p3 = esl_concat<8,7>(trunc_ln335_fu_227_p1.read(), ap_const_lv7_0);
}

void transpose_last_two_d::thread_p_shl5_cast_fu_239_p3() {
    p_shl5_cast_fu_239_p3 = esl_concat<10,5>(add_ln335_fu_222_p2.read(), ap_const_lv5_0);
}

void transpose_last_two_d::thread_p_shl6_cast_fu_292_p3() {
    p_shl6_cast_fu_292_p3 = esl_concat<12,3>(trunc_ln336_fu_288_p1.read(), ap_const_lv3_0);
}

void transpose_last_two_d::thread_p_shl7_cast_fu_300_p3() {
    p_shl7_cast_fu_300_p3 = esl_concat<14,1>(add_ln336_fu_283_p2.read(), ap_const_lv1_0);
}

void transpose_last_two_d::thread_s3_fu_208_p2() {
    s3_fu_208_p2 = (!s3_0_reg_100.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(s3_0_reg_100.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void transpose_last_two_d::thread_sext_ln335_fu_164_p1() {
    sext_ln335_fu_164_p1 = esl_sext<10,9>(sub_ln335_fu_158_p2.read());
}

void transpose_last_two_d::thread_sext_ln336_fu_198_p1() {
    sext_ln336_fu_198_p1 = esl_sext<14,13>(sub_ln336_fu_192_p2.read());
}

void transpose_last_two_d::thread_sub_ln335_1_fu_247_p2() {
    sub_ln335_1_fu_247_p2 = (!p_shl4_cast_fu_231_p3.read().is_01() || !p_shl5_cast_fu_239_p3.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_shl4_cast_fu_231_p3.read()) - sc_biguint<15>(p_shl5_cast_fu_239_p3.read()));
}

void transpose_last_two_d::thread_sub_ln335_fu_158_p2() {
    sub_ln335_fu_158_p2 = (!zext_ln335_fu_142_p1.read().is_01() || !zext_ln335_1_fu_154_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln335_fu_142_p1.read()) - sc_biguint<9>(zext_ln335_1_fu_154_p1.read()));
}

void transpose_last_two_d::thread_sub_ln336_1_fu_308_p2() {
    sub_ln336_1_fu_308_p2 = (!p_shl6_cast_fu_292_p3.read().is_01() || !p_shl7_cast_fu_300_p3.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_shl6_cast_fu_292_p3.read()) - sc_biguint<15>(p_shl7_cast_fu_300_p3.read()));
}

void transpose_last_two_d::thread_sub_ln336_fu_192_p2() {
    sub_ln336_fu_192_p2 = (!zext_ln336_fu_176_p1.read().is_01() || !zext_ln336_1_fu_188_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(zext_ln336_fu_176_p1.read()) - sc_biguint<13>(zext_ln336_1_fu_188_p1.read()));
}

void transpose_last_two_d::thread_tmp_2_fu_134_p3() {
    tmp_2_fu_134_p3 = esl_concat<5,3>(h3_0_reg_89.read(), ap_const_lv3_0);
}

void transpose_last_two_d::thread_tmp_3_fu_146_p3() {
    tmp_3_fu_146_p3 = esl_concat<5,1>(h3_0_reg_89.read(), ap_const_lv1_0);
}

void transpose_last_two_d::thread_tmp_4_fu_168_p3() {
    tmp_4_fu_168_p3 = esl_concat<5,7>(h3_0_reg_89.read(), ap_const_lv7_0);
}

void transpose_last_two_d::thread_tmp_5_fu_180_p3() {
    tmp_5_fu_180_p3 = esl_concat<5,5>(h3_0_reg_89.read(), ap_const_lv5_0);
}

void transpose_last_two_d::thread_trunc_ln335_fu_227_p1() {
    trunc_ln335_fu_227_p1 = add_ln335_fu_222_p2.read().range(8-1, 0);
}

void transpose_last_two_d::thread_trunc_ln336_fu_288_p1() {
    trunc_ln336_fu_288_p1 = add_ln336_fu_283_p2.read().range(12-1, 0);
}

void transpose_last_two_d::thread_v198_address0() {
    v198_address0 =  (sc_lv<14>) (zext_ln335_6_fu_278_p1.read());
}

void transpose_last_two_d::thread_v198_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        v198_ce0 = ap_const_logic_1;
    } else {
        v198_ce0 = ap_const_logic_0;
    }
}

void transpose_last_two_d::thread_v199_address0() {
    v199_address0 =  (sc_lv<14>) (zext_ln336_2_fu_319_p1.read());
}

void transpose_last_two_d::thread_v199_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        v199_ce0 = ap_const_logic_1;
    } else {
        v199_ce0 = ap_const_logic_0;
    }
}

void transpose_last_two_d::thread_v199_d0() {
    v199_d0 = v198_q0.read();
}

void transpose_last_two_d::thread_v199_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        v199_we0 = ap_const_logic_1;
    } else {
        v199_we0 = ap_const_logic_0;
    }
}

void transpose_last_two_d::thread_zext_ln335_1_fu_154_p1() {
    zext_ln335_1_fu_154_p1 = esl_zext<9,6>(tmp_3_fu_146_p3.read());
}

void transpose_last_two_d::thread_zext_ln335_2_fu_214_p1() {
    zext_ln335_2_fu_214_p1 = esl_zext<15,3>(s3_0_reg_100.read());
}

void transpose_last_two_d::thread_zext_ln335_3_fu_218_p1() {
    zext_ln335_3_fu_218_p1 = esl_zext<10,3>(s3_0_reg_100.read());
}

void transpose_last_two_d::thread_zext_ln335_4_fu_265_p1() {
    zext_ln335_4_fu_265_p1 = esl_zext<14,7>(d3_0_reg_111.read());
}

void transpose_last_two_d::thread_zext_ln335_5_fu_269_p1() {
    zext_ln335_5_fu_269_p1 = esl_zext<15,7>(d3_0_reg_111.read());
}

void transpose_last_two_d::thread_zext_ln335_6_fu_278_p1() {
    zext_ln335_6_fu_278_p1 = esl_zext<64,15>(add_ln335_1_fu_273_p2.read());
}

void transpose_last_two_d::thread_zext_ln335_fu_142_p1() {
    zext_ln335_fu_142_p1 = esl_zext<9,8>(tmp_2_fu_134_p3.read());
}

void transpose_last_two_d::thread_zext_ln336_1_fu_188_p1() {
    zext_ln336_1_fu_188_p1 = esl_zext<13,10>(tmp_5_fu_180_p3.read());
}

void transpose_last_two_d::thread_zext_ln336_2_fu_319_p1() {
    zext_ln336_2_fu_319_p1 = esl_zext<64,15>(add_ln336_1_reg_372.read());
}

void transpose_last_two_d::thread_zext_ln336_fu_176_p1() {
    zext_ln336_fu_176_p1 = esl_zext<13,12>(tmp_4_fu_168_p3.read());
}

void transpose_last_two_d::thread_ap_NS_fsm() {
    switch (ap_CS_fsm.read().to_uint64()) {
        case 1 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
                ap_NS_fsm = ap_ST_fsm_state2;
            } else {
                ap_NS_fsm = ap_ST_fsm_state1;
            }
            break;
        case 2 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && esl_seteq<1,1,1>(icmp_ln332_fu_122_p2.read(), ap_const_lv1_1))) {
                ap_NS_fsm = ap_ST_fsm_state1;
            } else {
                ap_NS_fsm = ap_ST_fsm_state3;
            }
            break;
        case 4 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && esl_seteq<1,1,1>(icmp_ln333_fu_202_p2.read(), ap_const_lv1_1))) {
                ap_NS_fsm = ap_ST_fsm_state2;
            } else {
                ap_NS_fsm = ap_ST_fsm_state4;
            }
            break;
        case 8 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && esl_seteq<1,1,1>(icmp_ln334_fu_253_p2.read(), ap_const_lv1_1))) {
                ap_NS_fsm = ap_ST_fsm_state3;
            } else {
                ap_NS_fsm = ap_ST_fsm_state5;
            }
            break;
        case 16 : 
            ap_NS_fsm = ap_ST_fsm_state4;
            break;
        default : 
            ap_NS_fsm = "XXXXX";
            break;
    }
}

}

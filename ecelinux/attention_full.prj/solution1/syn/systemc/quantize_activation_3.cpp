#include "quantize_activation.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void quantize_activation::thread_add_ln67_1_fu_4492_p2() {
    add_ln67_1_fu_4492_p2 = (!select_ln67_1_fu_4484_p3.read().is_01() || !p_Val2_17_reg_5391.read().is_01())? sc_lv<38>(): (sc_biguint<38>(select_ln67_1_fu_4484_p3.read()) + sc_biguint<38>(p_Val2_17_reg_5391.read()));
}

void quantize_activation::thread_add_ln67_2_fu_4678_p2() {
    add_ln67_2_fu_4678_p2 = (!select_ln67_2_fu_4670_p3.read().is_01() || !p_Val2_18_reg_5419.read().is_01())? sc_lv<38>(): (sc_biguint<38>(select_ln67_2_fu_4670_p3.read()) + sc_biguint<38>(p_Val2_18_reg_5419.read()));
}

void quantize_activation::thread_add_ln67_3_fu_4756_p2() {
    add_ln67_3_fu_4756_p2 = (!select_ln67_3_fu_4748_p3.read().is_01() || !p_Val2_19_reg_5425.read().is_01())? sc_lv<38>(): (sc_biguint<38>(select_ln67_3_fu_4748_p3.read()) + sc_biguint<38>(p_Val2_19_reg_5425.read()));
}

void quantize_activation::thread_add_ln67_fu_4414_p2() {
    add_ln67_fu_4414_p2 = (!select_ln67_fu_4406_p3.read().is_01() || !p_Val2_9_reg_5385.read().is_01())? sc_lv<38>(): (sc_biguint<38>(select_ln67_fu_4406_p3.read()) + sc_biguint<38>(p_Val2_9_reg_5385.read()));
}

void quantize_activation::thread_add_ln700_1_fu_4525_p2() {
    add_ln700_1_fu_4525_p2 = (!ap_const_lv18_1.is_01() || !p_Result_0_1_fu_4497_p4.read().is_01())? sc_lv<18>(): (sc_biguint<18>(ap_const_lv18_1) + sc_biguint<18>(p_Result_0_1_fu_4497_p4.read()));
}

void quantize_activation::thread_add_ln700_2_fu_4711_p2() {
    add_ln700_2_fu_4711_p2 = (!ap_const_lv18_1.is_01() || !p_Result_0_2_fu_4683_p4.read().is_01())? sc_lv<18>(): (sc_biguint<18>(ap_const_lv18_1) + sc_biguint<18>(p_Result_0_2_fu_4683_p4.read()));
}

void quantize_activation::thread_add_ln700_3_fu_4789_p2() {
    add_ln700_3_fu_4789_p2 = (!ap_const_lv18_1.is_01() || !p_Result_0_3_fu_4761_p4.read().is_01())? sc_lv<18>(): (sc_biguint<18>(ap_const_lv18_1) + sc_biguint<18>(p_Result_0_3_fu_4761_p4.read()));
}

void quantize_activation::thread_add_ln700_fu_4447_p2() {
    add_ln700_fu_4447_p2 = (!ap_const_lv18_1.is_01() || !p_Result_s_fu_4419_p4.read().is_01())? sc_lv<18>(): (sc_biguint<18>(ap_const_lv18_1) + sc_biguint<18>(p_Result_s_fu_4419_p4.read()));
}

void quantize_activation::thread_add_ln87_fu_4210_p2() {
    add_ln87_fu_4210_p2 = (!j_0_0_reg_4134.read().is_01() || !ap_const_lv11_1.is_01())? sc_lv<11>(): (sc_biguint<11>(j_0_0_reg_4134.read()) + sc_biguint<11>(ap_const_lv11_1));
}

void quantize_activation::thread_add_ln94_fu_4270_p2() {
    add_ln94_fu_4270_p2 = (!jo_0_0_reg_4145.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(jo_0_0_reg_4145.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void quantize_activation::thread_add_ln95_fu_4294_p2() {
    add_ln95_fu_4294_p2 = (!ji_0_0_reg_4156.read().is_01() || !ap_const_lv7_1.is_01())? sc_lv<7>(): (sc_biguint<7>(ji_0_0_reg_4156.read()) + sc_biguint<7>(ap_const_lv7_1));
}

void quantize_activation::thread_add_ln96_fu_4304_p2() {
    add_ln96_fu_4304_p2 = (!shl_ln_reg_5337.read().is_01() || !zext_ln95_fu_4284_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(shl_ln_reg_5337.read()) + sc_biguint<9>(zext_ln95_fu_4284_p1.read()));
}

void quantize_activation::thread_ap_CS_fsm_state1() {
    ap_CS_fsm_state1 = ap_CS_fsm.read()[0];
}

void quantize_activation::thread_ap_CS_fsm_state2() {
    ap_CS_fsm_state2 = ap_CS_fsm.read()[1];
}

void quantize_activation::thread_ap_CS_fsm_state3() {
    ap_CS_fsm_state3 = ap_CS_fsm.read()[2];
}

void quantize_activation::thread_ap_CS_fsm_state4() {
    ap_CS_fsm_state4 = ap_CS_fsm.read()[3];
}

void quantize_activation::thread_ap_CS_fsm_state5() {
    ap_CS_fsm_state5 = ap_CS_fsm.read()[4];
}

void quantize_activation::thread_ap_CS_fsm_state56() {
    ap_CS_fsm_state56 = ap_CS_fsm.read()[55];
}

void quantize_activation::thread_ap_CS_fsm_state57() {
    ap_CS_fsm_state57 = ap_CS_fsm.read()[56];
}

void quantize_activation::thread_ap_CS_fsm_state58() {
    ap_CS_fsm_state58 = ap_CS_fsm.read()[57];
}

void quantize_activation::thread_ap_CS_fsm_state59() {
    ap_CS_fsm_state59 = ap_CS_fsm.read()[58];
}

void quantize_activation::thread_ap_CS_fsm_state6() {
    ap_CS_fsm_state6 = ap_CS_fsm.read()[5];
}

void quantize_activation::thread_ap_CS_fsm_state60() {
    ap_CS_fsm_state60 = ap_CS_fsm.read()[59];
}

void quantize_activation::thread_ap_CS_fsm_state61() {
    ap_CS_fsm_state61 = ap_CS_fsm.read()[60];
}

void quantize_activation::thread_ap_CS_fsm_state62() {
    ap_CS_fsm_state62 = ap_CS_fsm.read()[61];
}

void quantize_activation::thread_ap_CS_fsm_state63() {
    ap_CS_fsm_state63 = ap_CS_fsm.read()[62];
}

void quantize_activation::thread_ap_done() {
    if (((esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state57.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln94_fu_4264_p2.read())))) {
        ap_done = ap_const_logic_1;
    } else {
        ap_done = ap_const_logic_0;
    }
}

void quantize_activation::thread_ap_idle() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()))) {
        ap_idle = ap_const_logic_1;
    } else {
        ap_idle = ap_const_logic_0;
    }
}

void quantize_activation::thread_ap_ready() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state57.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln94_fu_4264_p2.read()))) {
        ap_ready = ap_const_logic_1;
    } else {
        ap_ready = ap_const_logic_0;
    }
}

void quantize_activation::thread_ap_return() {
    ap_return = trunc_ln703_reg_5317.read();
}

void quantize_activation::thread_grp_fu_4167_p3() {
    grp_fu_4167_p3 = input_0_V_q0.read().range(37, 37);
}

void quantize_activation::thread_grp_fu_4175_p2() {
    grp_fu_4175_p2 = (!ap_const_lv38_0.is_01() || !input_0_V_q0.read().is_01())? sc_lv<38>(): (sc_biguint<38>(ap_const_lv38_0) - sc_biguint<38>(input_0_V_q0.read()));
}

void quantize_activation::thread_grp_fu_4181_p3() {
    grp_fu_4181_p3 = (!grp_fu_4167_p3.read()[0].is_01())? sc_lv<38>(): ((grp_fu_4167_p3.read()[0].to_bool())? grp_fu_4175_p2.read(): input_0_V_q0.read());
}

void quantize_activation::thread_grp_fu_4238_ap_start() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(icmp_ln87_fu_4199_p2.read(), ap_const_lv1_1))) {
        grp_fu_4238_ap_start = ap_const_logic_1;
    } else {
        grp_fu_4238_ap_start = ap_const_logic_0;
    }
}

void quantize_activation::thread_grp_fu_4238_p1() {
    grp_fu_4238_p1 =  (sc_lv<37>) (grp_fu_4238_p10.read());
}

void quantize_activation::thread_grp_fu_4238_p10() {
    grp_fu_4238_p10 = esl_zext<47,37>(select_ln60_fu_4226_p3.read());
}

void quantize_activation::thread_icmp_ln1494_32_fu_4220_p2() {
    icmp_ln1494_32_fu_4220_p2 = (!max_val_V_0_0_reg_4124.read().is_01() || !ap_const_lv38_A.is_01())? sc_lv<1>(): (sc_bigint<38>(max_val_V_0_0_reg_4124.read()) > sc_bigint<38>(ap_const_lv38_A));
}

void quantize_activation::thread_icmp_ln1494_33_fu_4401_p2() {
    icmp_ln1494_33_fu_4401_p2 = (!p_Val2_9_reg_5385.read().is_01() || !ap_const_lv38_0.is_01())? sc_lv<1>(): (sc_bigint<38>(p_Val2_9_reg_5385.read()) > sc_bigint<38>(ap_const_lv38_0));
}

void quantize_activation::thread_icmp_ln1494_34_fu_4479_p2() {
    icmp_ln1494_34_fu_4479_p2 = (!p_Val2_17_reg_5391.read().is_01() || !ap_const_lv38_0.is_01())? sc_lv<1>(): (sc_bigint<38>(p_Val2_17_reg_5391.read()) > sc_bigint<38>(ap_const_lv38_0));
}

void quantize_activation::thread_icmp_ln1494_35_fu_4665_p2() {
    icmp_ln1494_35_fu_4665_p2 = (!p_Val2_18_reg_5419.read().is_01() || !ap_const_lv38_0.is_01())? sc_lv<1>(): (sc_bigint<38>(p_Val2_18_reg_5419.read()) > sc_bigint<38>(ap_const_lv38_0));
}

void quantize_activation::thread_icmp_ln1494_36_fu_4743_p2() {
    icmp_ln1494_36_fu_4743_p2 = (!p_Val2_19_reg_5425.read().is_01() || !ap_const_lv38_0.is_01())? sc_lv<1>(): (sc_bigint<38>(p_Val2_19_reg_5425.read()) > sc_bigint<38>(ap_const_lv38_0));
}

void quantize_activation::thread_icmp_ln1494_fu_4244_p2() {
    icmp_ln1494_fu_4244_p2 = (!p_Val2_15_reg_5306.read().is_01() || !max_val_V_0_0_reg_4124.read().is_01())? sc_lv<1>(): (sc_bigint<38>(p_Val2_15_reg_5306.read()) > sc_bigint<38>(max_val_V_0_0_reg_4124.read()));
}

void quantize_activation::thread_icmp_ln851_1_fu_4519_p2() {
    icmp_ln851_1_fu_4519_p2 = (!trunc_ln851_1_fu_4515_p1.read().is_01() || !ap_const_lv20_0.is_01())? sc_lv<1>(): sc_lv<1>(trunc_ln851_1_fu_4515_p1.read() == ap_const_lv20_0);
}

void quantize_activation::thread_icmp_ln851_2_fu_4705_p2() {
    icmp_ln851_2_fu_4705_p2 = (!trunc_ln851_2_fu_4701_p1.read().is_01() || !ap_const_lv20_0.is_01())? sc_lv<1>(): sc_lv<1>(trunc_ln851_2_fu_4701_p1.read() == ap_const_lv20_0);
}

void quantize_activation::thread_icmp_ln851_3_fu_4783_p2() {
    icmp_ln851_3_fu_4783_p2 = (!trunc_ln851_3_fu_4779_p1.read().is_01() || !ap_const_lv20_0.is_01())? sc_lv<1>(): sc_lv<1>(trunc_ln851_3_fu_4779_p1.read() == ap_const_lv20_0);
}

void quantize_activation::thread_icmp_ln851_fu_4441_p2() {
    icmp_ln851_fu_4441_p2 = (!trunc_ln851_fu_4437_p1.read().is_01() || !ap_const_lv20_0.is_01())? sc_lv<1>(): sc_lv<1>(trunc_ln851_fu_4437_p1.read() == ap_const_lv20_0);
}

void quantize_activation::thread_icmp_ln87_fu_4199_p2() {
    icmp_ln87_fu_4199_p2 = (!j_0_0_reg_4134.read().is_01() || !ap_const_lv11_600.is_01())? sc_lv<1>(): sc_lv<1>(j_0_0_reg_4134.read() == ap_const_lv11_600);
}

void quantize_activation::thread_icmp_ln887_1_fu_4630_p2() {
    icmp_ln887_1_fu_4630_p2 = (!select_ln850_1_reg_5408.read().is_01() || !ap_const_lv18_3FF80.is_01())? sc_lv<1>(): (sc_bigint<18>(select_ln850_1_reg_5408.read()) < sc_bigint<18>(ap_const_lv18_3FF80));
}

void quantize_activation::thread_icmp_ln887_2_fu_5080_p2() {
    icmp_ln887_2_fu_5080_p2 = (!select_ln850_2_reg_5567.read().is_01() || !ap_const_lv18_3FF80.is_01())? sc_lv<1>(): (sc_bigint<18>(select_ln850_2_reg_5567.read()) < sc_bigint<18>(ap_const_lv18_3FF80));
}

void quantize_activation::thread_icmp_ln887_3_fu_5179_p2() {
    icmp_ln887_3_fu_5179_p2 = (!select_ln850_3_reg_5578.read().is_01() || !ap_const_lv18_3FF80.is_01())? sc_lv<1>(): (sc_bigint<18>(select_ln850_3_reg_5578.read()) < sc_bigint<18>(ap_const_lv18_3FF80));
}

void quantize_activation::thread_icmp_ln887_fu_4595_p2() {
    icmp_ln887_fu_4595_p2 = (!select_ln850_reg_5397.read().is_01() || !ap_const_lv18_3FF80.is_01())? sc_lv<1>(): (sc_bigint<18>(select_ln850_reg_5397.read()) < sc_bigint<18>(ap_const_lv18_3FF80));
}

void quantize_activation::thread_icmp_ln895_1_fu_4635_p2() {
    icmp_ln895_1_fu_4635_p2 = (!tmp_77_reg_5414.read().is_01() || !ap_const_lv11_0.is_01())? sc_lv<1>(): (sc_bigint<11>(tmp_77_reg_5414.read()) > sc_bigint<11>(ap_const_lv11_0));
}

void quantize_activation::thread_icmp_ln895_2_fu_5085_p2() {
    icmp_ln895_2_fu_5085_p2 = (!tmp_79_reg_5573.read().is_01() || !ap_const_lv11_0.is_01())? sc_lv<1>(): (sc_bigint<11>(tmp_79_reg_5573.read()) > sc_bigint<11>(ap_const_lv11_0));
}

void quantize_activation::thread_icmp_ln895_3_fu_5184_p2() {
    icmp_ln895_3_fu_5184_p2 = (!tmp_81_reg_5584.read().is_01() || !ap_const_lv11_0.is_01())? sc_lv<1>(): (sc_bigint<11>(tmp_81_reg_5584.read()) > sc_bigint<11>(ap_const_lv11_0));
}

void quantize_activation::thread_icmp_ln895_fu_4600_p2() {
    icmp_ln895_fu_4600_p2 = (!tmp_75_reg_5403.read().is_01() || !ap_const_lv11_0.is_01())? sc_lv<1>(): (sc_bigint<11>(tmp_75_reg_5403.read()) > sc_bigint<11>(ap_const_lv11_0));
}

void quantize_activation::thread_icmp_ln94_fu_4264_p2() {
    icmp_ln94_fu_4264_p2 = (!jo_0_0_reg_4145.read().is_01() || !ap_const_lv3_6.is_01())? sc_lv<1>(): sc_lv<1>(jo_0_0_reg_4145.read() == ap_const_lv3_6);
}

void quantize_activation::thread_icmp_ln95_fu_4288_p2() {
    icmp_ln95_fu_4288_p2 = (!ji_0_0_reg_4156.read().is_01() || !ap_const_lv7_40.is_01())? sc_lv<1>(): sc_lv<1>(ji_0_0_reg_4156.read() == ap_const_lv7_40);
}

void quantize_activation::thread_input_0_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read())) {
        input_0_V_address0 =  (sc_lv<11>) (zext_ln98_3_fu_4358_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state58.read())) {
        input_0_V_address0 =  (sc_lv<11>) (zext_ln98_fu_4317_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        input_0_V_address0 =  (sc_lv<11>) (zext_ln88_fu_4205_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        input_0_V_address0 =  (sc_lv<11>) (ap_const_lv64_0);
    } else {
        input_0_V_address0 = "XXXXXXXXXXX";
    }
}

void quantize_activation::thread_input_0_V_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read())) {
        input_0_V_address1 =  (sc_lv<11>) (zext_ln98_2_fu_4348_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state58.read())) {
        input_0_V_address1 =  (sc_lv<11>) (zext_ln98_1_fu_4338_p1.read());
    } else {
        input_0_V_address1 = "XXXXXXXXXXX";
    }
}

void quantize_activation::thread_input_0_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
          esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state58.read()))) {
        input_0_V_ce0 = ap_const_logic_1;
    } else {
        input_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_input_0_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state58.read()))) {
        input_0_V_ce1 = ap_const_logic_1;
    } else {
        input_0_V_ce1 = ap_const_logic_0;
    }
}

void quantize_activation::thread_mul_ln1118_1_fu_4386_p0() {
    mul_ln1118_1_fu_4386_p0 = reg_4194.read();
}

void quantize_activation::thread_mul_ln1118_1_fu_4386_p1() {
    mul_ln1118_1_fu_4386_p1 =  (sc_lv<38>) (sext_ln94_reg_5321.read());
}

void quantize_activation::thread_mul_ln1118_1_fu_4386_p2() {
    mul_ln1118_1_fu_4386_p2 = (!mul_ln1118_1_fu_4386_p0.read().is_01() || !mul_ln1118_1_fu_4386_p1.read().is_01())? sc_lv<58>(): sc_bigint<38>(mul_ln1118_1_fu_4386_p0.read()) * sc_bigint<38>(mul_ln1118_1_fu_4386_p1.read());
}

void quantize_activation::thread_mul_ln1118_2_fu_4561_p0() {
    mul_ln1118_2_fu_4561_p0 = reg_4189.read();
}

void quantize_activation::thread_mul_ln1118_2_fu_4561_p1() {
    mul_ln1118_2_fu_4561_p1 =  (sc_lv<38>) (sext_ln94_reg_5321.read());
}

void quantize_activation::thread_mul_ln1118_2_fu_4561_p2() {
    mul_ln1118_2_fu_4561_p2 = (!mul_ln1118_2_fu_4561_p0.read().is_01() || !mul_ln1118_2_fu_4561_p1.read().is_01())? sc_lv<58>(): sc_bigint<38>(mul_ln1118_2_fu_4561_p0.read()) * sc_bigint<38>(mul_ln1118_2_fu_4561_p1.read());
}

void quantize_activation::thread_mul_ln1118_3_fu_4580_p0() {
    mul_ln1118_3_fu_4580_p0 = reg_4194.read();
}

void quantize_activation::thread_mul_ln1118_3_fu_4580_p1() {
    mul_ln1118_3_fu_4580_p1 =  (sc_lv<38>) (sext_ln94_reg_5321.read());
}

void quantize_activation::thread_mul_ln1118_3_fu_4580_p2() {
    mul_ln1118_3_fu_4580_p2 = (!mul_ln1118_3_fu_4580_p0.read().is_01() || !mul_ln1118_3_fu_4580_p1.read().is_01())? sc_lv<58>(): sc_bigint<38>(mul_ln1118_3_fu_4580_p0.read()) * sc_bigint<38>(mul_ln1118_3_fu_4580_p1.read());
}

void quantize_activation::thread_mul_ln1118_fu_4367_p0() {
    mul_ln1118_fu_4367_p0 = reg_4189.read();
}

void quantize_activation::thread_mul_ln1118_fu_4367_p1() {
    mul_ln1118_fu_4367_p1 =  (sc_lv<38>) (sext_ln94_reg_5321.read());
}

void quantize_activation::thread_mul_ln1118_fu_4367_p2() {
    mul_ln1118_fu_4367_p2 = (!mul_ln1118_fu_4367_p0.read().is_01() || !mul_ln1118_fu_4367_p1.read().is_01())? sc_lv<58>(): sc_bigint<38>(mul_ln1118_fu_4367_p0.read()) * sc_bigint<38>(mul_ln1118_fu_4367_p1.read());
}

void quantize_activation::thread_or_ln887_1_fu_4651_p2() {
    or_ln887_1_fu_4651_p2 = (icmp_ln887_1_fu_4630_p2.read() | icmp_ln895_1_fu_4635_p2.read());
}

void quantize_activation::thread_or_ln887_2_fu_5101_p2() {
    or_ln887_2_fu_5101_p2 = (icmp_ln887_2_fu_5080_p2.read() | icmp_ln895_2_fu_5085_p2.read());
}

void quantize_activation::thread_or_ln887_3_fu_5200_p2() {
    or_ln887_3_fu_5200_p2 = (icmp_ln887_3_fu_5179_p2.read() | icmp_ln895_3_fu_5184_p2.read());
}

void quantize_activation::thread_or_ln887_fu_4616_p2() {
    or_ln887_fu_4616_p2 = (icmp_ln887_fu_4595_p2.read() | icmp_ln895_fu_4600_p2.read());
}

void quantize_activation::thread_or_ln98_1_fu_4343_p2() {
    or_ln98_1_fu_4343_p2 = (shl_ln1_reg_5354.read() | ap_const_lv11_2);
}

void quantize_activation::thread_or_ln98_2_fu_4353_p2() {
    or_ln98_2_fu_4353_p2 = (shl_ln1_reg_5354.read() | ap_const_lv11_3);
}

void quantize_activation::thread_or_ln98_fu_4332_p2() {
    or_ln98_fu_4332_p2 = (shl_ln1_fu_4309_p3.read() | ap_const_lv11_1);
}

void quantize_activation::thread_output_states_0_0_0_V_address0() {
    output_states_0_0_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4821_p1.read());
}

void quantize_activation::thread_output_states_0_0_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read())) {
        output_states_0_0_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_0_0_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_0_0_0_V_d0() {
    output_states_0_0_0_V_d0 = select_ln887_1_reg_5431.read();
}

void quantize_activation::thread_output_states_0_0_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5350.read(), ap_const_lv6_0))) {
        output_states_0_0_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_0_0_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_0_1_0_V_address0() {
    output_states_0_1_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4821_p1.read());
}

void quantize_activation::thread_output_states_0_1_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read())) {
        output_states_0_1_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_0_1_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_0_1_0_V_d0() {
    output_states_0_1_0_V_d0 = select_ln887_3_reg_5499.read();
}

void quantize_activation::thread_output_states_0_1_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5350.read(), ap_const_lv6_0))) {
        output_states_0_1_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_0_1_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_0_2_0_V_address0() {
    output_states_0_2_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4821_p1.read());
}

void quantize_activation::thread_output_states_0_2_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read())) {
        output_states_0_2_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_0_2_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_0_2_0_V_d0() {
    output_states_0_2_0_V_d0 = select_ln887_5_fu_5107_p3.read();
}

void quantize_activation::thread_output_states_0_2_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5350.read(), ap_const_lv6_0))) {
        output_states_0_2_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_0_2_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_0_3_0_V_address0() {
    output_states_0_3_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4821_p1.read());
}

void quantize_activation::thread_output_states_0_3_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read())) {
        output_states_0_3_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_0_3_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_0_3_0_V_d0() {
    output_states_0_3_0_V_d0 = select_ln887_7_fu_5206_p3.read();
}

void quantize_activation::thread_output_states_0_3_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5350.read(), ap_const_lv6_0))) {
        output_states_0_3_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_0_3_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_10_0_0_V_address0() {
    output_states_10_0_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4821_p1.read());
}

void quantize_activation::thread_output_states_10_0_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read())) {
        output_states_10_0_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_10_0_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_10_0_0_V_d0() {
    output_states_10_0_0_V_d0 = select_ln887_1_reg_5431.read();
}

void quantize_activation::thread_output_states_10_0_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5350.read(), ap_const_lv6_A))) {
        output_states_10_0_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_10_0_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_10_1_0_V_address0() {
    output_states_10_1_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4821_p1.read());
}

void quantize_activation::thread_output_states_10_1_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read())) {
        output_states_10_1_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_10_1_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_10_1_0_V_d0() {
    output_states_10_1_0_V_d0 = select_ln887_3_reg_5499.read();
}

void quantize_activation::thread_output_states_10_1_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5350.read(), ap_const_lv6_A))) {
        output_states_10_1_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_10_1_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_10_2_0_V_address0() {
    output_states_10_2_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4821_p1.read());
}

void quantize_activation::thread_output_states_10_2_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read())) {
        output_states_10_2_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_10_2_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_10_2_0_V_d0() {
    output_states_10_2_0_V_d0 = select_ln887_5_fu_5107_p3.read();
}

void quantize_activation::thread_output_states_10_2_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5350.read(), ap_const_lv6_A))) {
        output_states_10_2_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_10_2_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_10_3_0_V_address0() {
    output_states_10_3_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4821_p1.read());
}

void quantize_activation::thread_output_states_10_3_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read())) {
        output_states_10_3_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_10_3_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_10_3_0_V_d0() {
    output_states_10_3_0_V_d0 = select_ln887_7_fu_5206_p3.read();
}

void quantize_activation::thread_output_states_10_3_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5350.read(), ap_const_lv6_A))) {
        output_states_10_3_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_10_3_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_11_0_0_V_address0() {
    output_states_11_0_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4821_p1.read());
}

void quantize_activation::thread_output_states_11_0_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read())) {
        output_states_11_0_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_11_0_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_11_0_0_V_d0() {
    output_states_11_0_0_V_d0 = select_ln887_1_reg_5431.read();
}

void quantize_activation::thread_output_states_11_0_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5350.read(), ap_const_lv6_B))) {
        output_states_11_0_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_11_0_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_11_1_0_V_address0() {
    output_states_11_1_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4821_p1.read());
}

void quantize_activation::thread_output_states_11_1_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read())) {
        output_states_11_1_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_11_1_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_11_1_0_V_d0() {
    output_states_11_1_0_V_d0 = select_ln887_3_reg_5499.read();
}

void quantize_activation::thread_output_states_11_1_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5350.read(), ap_const_lv6_B))) {
        output_states_11_1_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_11_1_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_11_2_0_V_address0() {
    output_states_11_2_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4821_p1.read());
}

void quantize_activation::thread_output_states_11_2_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read())) {
        output_states_11_2_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_11_2_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_11_2_0_V_d0() {
    output_states_11_2_0_V_d0 = select_ln887_5_fu_5107_p3.read();
}

void quantize_activation::thread_output_states_11_2_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5350.read(), ap_const_lv6_B))) {
        output_states_11_2_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_11_2_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_11_3_0_V_address0() {
    output_states_11_3_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4821_p1.read());
}

void quantize_activation::thread_output_states_11_3_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read())) {
        output_states_11_3_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_11_3_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_11_3_0_V_d0() {
    output_states_11_3_0_V_d0 = select_ln887_7_fu_5206_p3.read();
}

void quantize_activation::thread_output_states_11_3_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5350.read(), ap_const_lv6_B))) {
        output_states_11_3_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_11_3_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_12_0_0_V_address0() {
    output_states_12_0_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4821_p1.read());
}

void quantize_activation::thread_output_states_12_0_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read())) {
        output_states_12_0_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_12_0_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_12_0_0_V_d0() {
    output_states_12_0_0_V_d0 = select_ln887_1_reg_5431.read();
}

void quantize_activation::thread_output_states_12_0_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5350.read(), ap_const_lv6_C))) {
        output_states_12_0_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_12_0_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_12_1_0_V_address0() {
    output_states_12_1_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4821_p1.read());
}

void quantize_activation::thread_output_states_12_1_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read())) {
        output_states_12_1_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_12_1_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_12_1_0_V_d0() {
    output_states_12_1_0_V_d0 = select_ln887_3_reg_5499.read();
}

void quantize_activation::thread_output_states_12_1_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5350.read(), ap_const_lv6_C))) {
        output_states_12_1_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_12_1_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_12_2_0_V_address0() {
    output_states_12_2_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4821_p1.read());
}

void quantize_activation::thread_output_states_12_2_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read())) {
        output_states_12_2_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_12_2_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_12_2_0_V_d0() {
    output_states_12_2_0_V_d0 = select_ln887_5_fu_5107_p3.read();
}

void quantize_activation::thread_output_states_12_2_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5350.read(), ap_const_lv6_C))) {
        output_states_12_2_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_12_2_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_12_3_0_V_address0() {
    output_states_12_3_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4821_p1.read());
}

void quantize_activation::thread_output_states_12_3_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read())) {
        output_states_12_3_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_12_3_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_12_3_0_V_d0() {
    output_states_12_3_0_V_d0 = select_ln887_7_fu_5206_p3.read();
}

void quantize_activation::thread_output_states_12_3_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5350.read(), ap_const_lv6_C))) {
        output_states_12_3_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_12_3_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_13_0_0_V_address0() {
    output_states_13_0_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4821_p1.read());
}

void quantize_activation::thread_output_states_13_0_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read())) {
        output_states_13_0_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_13_0_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_13_0_0_V_d0() {
    output_states_13_0_0_V_d0 = select_ln887_1_reg_5431.read();
}

void quantize_activation::thread_output_states_13_0_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5350.read(), ap_const_lv6_D))) {
        output_states_13_0_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_13_0_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_13_1_0_V_address0() {
    output_states_13_1_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4821_p1.read());
}

void quantize_activation::thread_output_states_13_1_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read())) {
        output_states_13_1_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_13_1_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_13_1_0_V_d0() {
    output_states_13_1_0_V_d0 = select_ln887_3_reg_5499.read();
}

void quantize_activation::thread_output_states_13_1_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5350.read(), ap_const_lv6_D))) {
        output_states_13_1_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_13_1_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_13_2_0_V_address0() {
    output_states_13_2_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4821_p1.read());
}

void quantize_activation::thread_output_states_13_2_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read())) {
        output_states_13_2_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_13_2_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_13_2_0_V_d0() {
    output_states_13_2_0_V_d0 = select_ln887_5_fu_5107_p3.read();
}

void quantize_activation::thread_output_states_13_2_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5350.read(), ap_const_lv6_D))) {
        output_states_13_2_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_13_2_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_13_3_0_V_address0() {
    output_states_13_3_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4821_p1.read());
}

void quantize_activation::thread_output_states_13_3_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read())) {
        output_states_13_3_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_13_3_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_13_3_0_V_d0() {
    output_states_13_3_0_V_d0 = select_ln887_7_fu_5206_p3.read();
}

void quantize_activation::thread_output_states_13_3_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5350.read(), ap_const_lv6_D))) {
        output_states_13_3_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_13_3_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_14_0_0_V_address0() {
    output_states_14_0_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4821_p1.read());
}

void quantize_activation::thread_output_states_14_0_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read())) {
        output_states_14_0_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_14_0_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_14_0_0_V_d0() {
    output_states_14_0_0_V_d0 = select_ln887_1_reg_5431.read();
}

void quantize_activation::thread_output_states_14_0_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5350.read(), ap_const_lv6_E))) {
        output_states_14_0_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_14_0_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_14_1_0_V_address0() {
    output_states_14_1_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4821_p1.read());
}

void quantize_activation::thread_output_states_14_1_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read())) {
        output_states_14_1_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_14_1_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_14_1_0_V_d0() {
    output_states_14_1_0_V_d0 = select_ln887_3_reg_5499.read();
}

void quantize_activation::thread_output_states_14_1_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5350.read(), ap_const_lv6_E))) {
        output_states_14_1_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_14_1_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_14_2_0_V_address0() {
    output_states_14_2_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4821_p1.read());
}

void quantize_activation::thread_output_states_14_2_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read())) {
        output_states_14_2_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_14_2_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_14_2_0_V_d0() {
    output_states_14_2_0_V_d0 = select_ln887_5_fu_5107_p3.read();
}

void quantize_activation::thread_output_states_14_2_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5350.read(), ap_const_lv6_E))) {
        output_states_14_2_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_14_2_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_14_3_0_V_address0() {
    output_states_14_3_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4821_p1.read());
}

void quantize_activation::thread_output_states_14_3_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read())) {
        output_states_14_3_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_14_3_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_14_3_0_V_d0() {
    output_states_14_3_0_V_d0 = select_ln887_7_fu_5206_p3.read();
}

void quantize_activation::thread_output_states_14_3_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5350.read(), ap_const_lv6_E))) {
        output_states_14_3_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_14_3_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_15_0_0_V_address0() {
    output_states_15_0_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4821_p1.read());
}

void quantize_activation::thread_output_states_15_0_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read())) {
        output_states_15_0_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_15_0_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_15_0_0_V_d0() {
    output_states_15_0_0_V_d0 = select_ln887_1_reg_5431.read();
}

void quantize_activation::thread_output_states_15_0_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5350.read(), ap_const_lv6_F))) {
        output_states_15_0_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_15_0_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_15_1_0_V_address0() {
    output_states_15_1_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4821_p1.read());
}

void quantize_activation::thread_output_states_15_1_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read())) {
        output_states_15_1_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_15_1_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_15_1_0_V_d0() {
    output_states_15_1_0_V_d0 = select_ln887_3_reg_5499.read();
}

void quantize_activation::thread_output_states_15_1_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5350.read(), ap_const_lv6_F))) {
        output_states_15_1_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_15_1_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_15_2_0_V_address0() {
    output_states_15_2_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4821_p1.read());
}

void quantize_activation::thread_output_states_15_2_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read())) {
        output_states_15_2_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_15_2_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_15_2_0_V_d0() {
    output_states_15_2_0_V_d0 = select_ln887_5_fu_5107_p3.read();
}

void quantize_activation::thread_output_states_15_2_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5350.read(), ap_const_lv6_F))) {
        output_states_15_2_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_15_2_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_15_3_0_V_address0() {
    output_states_15_3_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4821_p1.read());
}

void quantize_activation::thread_output_states_15_3_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read())) {
        output_states_15_3_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_15_3_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_15_3_0_V_d0() {
    output_states_15_3_0_V_d0 = select_ln887_7_fu_5206_p3.read();
}

void quantize_activation::thread_output_states_15_3_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5350.read(), ap_const_lv6_F))) {
        output_states_15_3_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_15_3_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_16_0_0_V_address0() {
    output_states_16_0_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4821_p1.read());
}

void quantize_activation::thread_output_states_16_0_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read())) {
        output_states_16_0_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_16_0_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_16_0_0_V_d0() {
    output_states_16_0_0_V_d0 = select_ln887_1_reg_5431.read();
}

void quantize_activation::thread_output_states_16_0_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5350.read(), ap_const_lv6_10))) {
        output_states_16_0_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_16_0_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_16_1_0_V_address0() {
    output_states_16_1_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4821_p1.read());
}

void quantize_activation::thread_output_states_16_1_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read())) {
        output_states_16_1_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_16_1_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_16_1_0_V_d0() {
    output_states_16_1_0_V_d0 = select_ln887_3_reg_5499.read();
}

void quantize_activation::thread_output_states_16_1_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5350.read(), ap_const_lv6_10))) {
        output_states_16_1_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_16_1_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_16_2_0_V_address0() {
    output_states_16_2_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4821_p1.read());
}

void quantize_activation::thread_output_states_16_2_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read())) {
        output_states_16_2_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_16_2_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_16_2_0_V_d0() {
    output_states_16_2_0_V_d0 = select_ln887_5_fu_5107_p3.read();
}

void quantize_activation::thread_output_states_16_2_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5350.read(), ap_const_lv6_10))) {
        output_states_16_2_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_16_2_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_16_3_0_V_address0() {
    output_states_16_3_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4821_p1.read());
}

void quantize_activation::thread_output_states_16_3_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read())) {
        output_states_16_3_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_16_3_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_16_3_0_V_d0() {
    output_states_16_3_0_V_d0 = select_ln887_7_fu_5206_p3.read();
}

void quantize_activation::thread_output_states_16_3_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5350.read(), ap_const_lv6_10))) {
        output_states_16_3_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_16_3_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_17_0_0_V_address0() {
    output_states_17_0_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4821_p1.read());
}

void quantize_activation::thread_output_states_17_0_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read())) {
        output_states_17_0_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_17_0_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_17_0_0_V_d0() {
    output_states_17_0_0_V_d0 = select_ln887_1_reg_5431.read();
}

void quantize_activation::thread_output_states_17_0_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5350.read(), ap_const_lv6_11))) {
        output_states_17_0_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_17_0_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_17_1_0_V_address0() {
    output_states_17_1_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4821_p1.read());
}

void quantize_activation::thread_output_states_17_1_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read())) {
        output_states_17_1_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_17_1_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_17_1_0_V_d0() {
    output_states_17_1_0_V_d0 = select_ln887_3_reg_5499.read();
}

void quantize_activation::thread_output_states_17_1_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5350.read(), ap_const_lv6_11))) {
        output_states_17_1_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_17_1_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_17_2_0_V_address0() {
    output_states_17_2_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4821_p1.read());
}

void quantize_activation::thread_output_states_17_2_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read())) {
        output_states_17_2_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_17_2_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_17_2_0_V_d0() {
    output_states_17_2_0_V_d0 = select_ln887_5_fu_5107_p3.read();
}

void quantize_activation::thread_output_states_17_2_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5350.read(), ap_const_lv6_11))) {
        output_states_17_2_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_17_2_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_17_3_0_V_address0() {
    output_states_17_3_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4821_p1.read());
}

void quantize_activation::thread_output_states_17_3_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read())) {
        output_states_17_3_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_17_3_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_17_3_0_V_d0() {
    output_states_17_3_0_V_d0 = select_ln887_7_fu_5206_p3.read();
}

void quantize_activation::thread_output_states_17_3_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5350.read(), ap_const_lv6_11))) {
        output_states_17_3_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_17_3_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_18_0_0_V_address0() {
    output_states_18_0_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4821_p1.read());
}

void quantize_activation::thread_output_states_18_0_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read())) {
        output_states_18_0_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_18_0_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_18_0_0_V_d0() {
    output_states_18_0_0_V_d0 = select_ln887_1_reg_5431.read();
}

void quantize_activation::thread_output_states_18_0_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5350.read(), ap_const_lv6_12))) {
        output_states_18_0_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_18_0_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_18_1_0_V_address0() {
    output_states_18_1_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4821_p1.read());
}

void quantize_activation::thread_output_states_18_1_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read())) {
        output_states_18_1_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_18_1_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_18_1_0_V_d0() {
    output_states_18_1_0_V_d0 = select_ln887_3_reg_5499.read();
}

void quantize_activation::thread_output_states_18_1_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5350.read(), ap_const_lv6_12))) {
        output_states_18_1_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_18_1_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_18_2_0_V_address0() {
    output_states_18_2_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4821_p1.read());
}

void quantize_activation::thread_output_states_18_2_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read())) {
        output_states_18_2_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_18_2_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_18_2_0_V_d0() {
    output_states_18_2_0_V_d0 = select_ln887_5_fu_5107_p3.read();
}

void quantize_activation::thread_output_states_18_2_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5350.read(), ap_const_lv6_12))) {
        output_states_18_2_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_18_2_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_18_3_0_V_address0() {
    output_states_18_3_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4821_p1.read());
}

void quantize_activation::thread_output_states_18_3_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read())) {
        output_states_18_3_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_18_3_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_18_3_0_V_d0() {
    output_states_18_3_0_V_d0 = select_ln887_7_fu_5206_p3.read();
}

void quantize_activation::thread_output_states_18_3_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5350.read(), ap_const_lv6_12))) {
        output_states_18_3_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_18_3_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_19_0_0_V_address0() {
    output_states_19_0_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4821_p1.read());
}

void quantize_activation::thread_output_states_19_0_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read())) {
        output_states_19_0_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_19_0_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_19_0_0_V_d0() {
    output_states_19_0_0_V_d0 = select_ln887_1_reg_5431.read();
}

void quantize_activation::thread_output_states_19_0_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5350.read(), ap_const_lv6_13))) {
        output_states_19_0_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_19_0_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_19_1_0_V_address0() {
    output_states_19_1_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4821_p1.read());
}

void quantize_activation::thread_output_states_19_1_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read())) {
        output_states_19_1_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_19_1_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_19_1_0_V_d0() {
    output_states_19_1_0_V_d0 = select_ln887_3_reg_5499.read();
}

void quantize_activation::thread_output_states_19_1_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5350.read(), ap_const_lv6_13))) {
        output_states_19_1_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_19_1_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_19_2_0_V_address0() {
    output_states_19_2_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4821_p1.read());
}

void quantize_activation::thread_output_states_19_2_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read())) {
        output_states_19_2_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_19_2_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_19_2_0_V_d0() {
    output_states_19_2_0_V_d0 = select_ln887_5_fu_5107_p3.read();
}

void quantize_activation::thread_output_states_19_2_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5350.read(), ap_const_lv6_13))) {
        output_states_19_2_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_19_2_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_19_3_0_V_address0() {
    output_states_19_3_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4821_p1.read());
}

void quantize_activation::thread_output_states_19_3_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read())) {
        output_states_19_3_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_19_3_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_19_3_0_V_d0() {
    output_states_19_3_0_V_d0 = select_ln887_7_fu_5206_p3.read();
}

void quantize_activation::thread_output_states_19_3_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5350.read(), ap_const_lv6_13))) {
        output_states_19_3_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_19_3_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_1_0_0_V_address0() {
    output_states_1_0_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4821_p1.read());
}

void quantize_activation::thread_output_states_1_0_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read())) {
        output_states_1_0_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_1_0_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_1_0_0_V_d0() {
    output_states_1_0_0_V_d0 = select_ln887_1_reg_5431.read();
}

void quantize_activation::thread_output_states_1_0_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5350.read(), ap_const_lv6_1))) {
        output_states_1_0_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_1_0_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_1_1_0_V_address0() {
    output_states_1_1_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4821_p1.read());
}

void quantize_activation::thread_output_states_1_1_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read())) {
        output_states_1_1_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_1_1_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_1_1_0_V_d0() {
    output_states_1_1_0_V_d0 = select_ln887_3_reg_5499.read();
}

void quantize_activation::thread_output_states_1_1_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5350.read(), ap_const_lv6_1))) {
        output_states_1_1_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_1_1_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_1_2_0_V_address0() {
    output_states_1_2_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4821_p1.read());
}

void quantize_activation::thread_output_states_1_2_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read())) {
        output_states_1_2_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_1_2_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_1_2_0_V_d0() {
    output_states_1_2_0_V_d0 = select_ln887_5_fu_5107_p3.read();
}

void quantize_activation::thread_output_states_1_2_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5350.read(), ap_const_lv6_1))) {
        output_states_1_2_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_1_2_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_1_3_0_V_address0() {
    output_states_1_3_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4821_p1.read());
}

void quantize_activation::thread_output_states_1_3_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read())) {
        output_states_1_3_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_1_3_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_1_3_0_V_d0() {
    output_states_1_3_0_V_d0 = select_ln887_7_fu_5206_p3.read();
}

void quantize_activation::thread_output_states_1_3_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5350.read(), ap_const_lv6_1))) {
        output_states_1_3_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_1_3_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_20_0_0_V_address0() {
    output_states_20_0_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4821_p1.read());
}

void quantize_activation::thread_output_states_20_0_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read())) {
        output_states_20_0_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_20_0_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_20_0_0_V_d0() {
    output_states_20_0_0_V_d0 = select_ln887_1_reg_5431.read();
}

void quantize_activation::thread_output_states_20_0_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5350.read(), ap_const_lv6_14))) {
        output_states_20_0_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_20_0_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_20_1_0_V_address0() {
    output_states_20_1_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4821_p1.read());
}

void quantize_activation::thread_output_states_20_1_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read())) {
        output_states_20_1_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_20_1_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_20_1_0_V_d0() {
    output_states_20_1_0_V_d0 = select_ln887_3_reg_5499.read();
}

void quantize_activation::thread_output_states_20_1_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5350.read(), ap_const_lv6_14))) {
        output_states_20_1_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_20_1_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_20_2_0_V_address0() {
    output_states_20_2_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4821_p1.read());
}

void quantize_activation::thread_output_states_20_2_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read())) {
        output_states_20_2_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_20_2_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_20_2_0_V_d0() {
    output_states_20_2_0_V_d0 = select_ln887_5_fu_5107_p3.read();
}

void quantize_activation::thread_output_states_20_2_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5350.read(), ap_const_lv6_14))) {
        output_states_20_2_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_20_2_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_20_3_0_V_address0() {
    output_states_20_3_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4821_p1.read());
}

void quantize_activation::thread_output_states_20_3_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read())) {
        output_states_20_3_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_20_3_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_20_3_0_V_d0() {
    output_states_20_3_0_V_d0 = select_ln887_7_fu_5206_p3.read();
}

void quantize_activation::thread_output_states_20_3_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5350.read(), ap_const_lv6_14))) {
        output_states_20_3_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_20_3_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_21_0_0_V_address0() {
    output_states_21_0_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4821_p1.read());
}

void quantize_activation::thread_output_states_21_0_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read())) {
        output_states_21_0_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_21_0_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_21_0_0_V_d0() {
    output_states_21_0_0_V_d0 = select_ln887_1_reg_5431.read();
}

void quantize_activation::thread_output_states_21_0_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5350.read(), ap_const_lv6_15))) {
        output_states_21_0_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_21_0_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_21_1_0_V_address0() {
    output_states_21_1_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4821_p1.read());
}

void quantize_activation::thread_output_states_21_1_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read())) {
        output_states_21_1_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_21_1_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_21_1_0_V_d0() {
    output_states_21_1_0_V_d0 = select_ln887_3_reg_5499.read();
}

void quantize_activation::thread_output_states_21_1_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5350.read(), ap_const_lv6_15))) {
        output_states_21_1_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_21_1_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_21_2_0_V_address0() {
    output_states_21_2_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4821_p1.read());
}

void quantize_activation::thread_output_states_21_2_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read())) {
        output_states_21_2_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_21_2_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_21_2_0_V_d0() {
    output_states_21_2_0_V_d0 = select_ln887_5_fu_5107_p3.read();
}

void quantize_activation::thread_output_states_21_2_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5350.read(), ap_const_lv6_15))) {
        output_states_21_2_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_21_2_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_21_3_0_V_address0() {
    output_states_21_3_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4821_p1.read());
}

void quantize_activation::thread_output_states_21_3_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read())) {
        output_states_21_3_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_21_3_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_21_3_0_V_d0() {
    output_states_21_3_0_V_d0 = select_ln887_7_fu_5206_p3.read();
}

void quantize_activation::thread_output_states_21_3_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5350.read(), ap_const_lv6_15))) {
        output_states_21_3_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_21_3_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_22_0_0_V_address0() {
    output_states_22_0_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4821_p1.read());
}

void quantize_activation::thread_output_states_22_0_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read())) {
        output_states_22_0_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_22_0_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_22_0_0_V_d0() {
    output_states_22_0_0_V_d0 = select_ln887_1_reg_5431.read();
}

void quantize_activation::thread_output_states_22_0_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5350.read(), ap_const_lv6_16))) {
        output_states_22_0_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_22_0_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_22_1_0_V_address0() {
    output_states_22_1_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4821_p1.read());
}

void quantize_activation::thread_output_states_22_1_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read())) {
        output_states_22_1_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_22_1_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_22_1_0_V_d0() {
    output_states_22_1_0_V_d0 = select_ln887_3_reg_5499.read();
}

void quantize_activation::thread_output_states_22_1_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5350.read(), ap_const_lv6_16))) {
        output_states_22_1_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_22_1_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_22_2_0_V_address0() {
    output_states_22_2_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4821_p1.read());
}

void quantize_activation::thread_output_states_22_2_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read())) {
        output_states_22_2_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_22_2_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_22_2_0_V_d0() {
    output_states_22_2_0_V_d0 = select_ln887_5_fu_5107_p3.read();
}

void quantize_activation::thread_output_states_22_2_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5350.read(), ap_const_lv6_16))) {
        output_states_22_2_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_22_2_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_22_3_0_V_address0() {
    output_states_22_3_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4821_p1.read());
}

void quantize_activation::thread_output_states_22_3_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read())) {
        output_states_22_3_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_22_3_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_22_3_0_V_d0() {
    output_states_22_3_0_V_d0 = select_ln887_7_fu_5206_p3.read();
}

void quantize_activation::thread_output_states_22_3_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5350.read(), ap_const_lv6_16))) {
        output_states_22_3_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_22_3_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_23_0_0_V_address0() {
    output_states_23_0_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4821_p1.read());
}

void quantize_activation::thread_output_states_23_0_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read())) {
        output_states_23_0_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_23_0_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_23_0_0_V_d0() {
    output_states_23_0_0_V_d0 = select_ln887_1_reg_5431.read();
}

void quantize_activation::thread_output_states_23_0_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5350.read(), ap_const_lv6_17))) {
        output_states_23_0_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_23_0_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_23_1_0_V_address0() {
    output_states_23_1_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4821_p1.read());
}

void quantize_activation::thread_output_states_23_1_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read())) {
        output_states_23_1_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_23_1_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_23_1_0_V_d0() {
    output_states_23_1_0_V_d0 = select_ln887_3_reg_5499.read();
}

void quantize_activation::thread_output_states_23_1_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5350.read(), ap_const_lv6_17))) {
        output_states_23_1_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_23_1_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_23_2_0_V_address0() {
    output_states_23_2_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4821_p1.read());
}

void quantize_activation::thread_output_states_23_2_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read())) {
        output_states_23_2_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_23_2_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_23_2_0_V_d0() {
    output_states_23_2_0_V_d0 = select_ln887_5_fu_5107_p3.read();
}

void quantize_activation::thread_output_states_23_2_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5350.read(), ap_const_lv6_17))) {
        output_states_23_2_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_23_2_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_23_3_0_V_address0() {
    output_states_23_3_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4821_p1.read());
}

void quantize_activation::thread_output_states_23_3_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read())) {
        output_states_23_3_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_23_3_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_23_3_0_V_d0() {
    output_states_23_3_0_V_d0 = select_ln887_7_fu_5206_p3.read();
}

void quantize_activation::thread_output_states_23_3_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5350.read(), ap_const_lv6_17))) {
        output_states_23_3_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_23_3_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_24_0_0_V_address0() {
    output_states_24_0_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4821_p1.read());
}

void quantize_activation::thread_output_states_24_0_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read())) {
        output_states_24_0_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_24_0_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_24_0_0_V_d0() {
    output_states_24_0_0_V_d0 = select_ln887_1_reg_5431.read();
}

void quantize_activation::thread_output_states_24_0_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5350.read(), ap_const_lv6_18))) {
        output_states_24_0_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_24_0_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_24_1_0_V_address0() {
    output_states_24_1_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4821_p1.read());
}

void quantize_activation::thread_output_states_24_1_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read())) {
        output_states_24_1_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_24_1_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_24_1_0_V_d0() {
    output_states_24_1_0_V_d0 = select_ln887_3_reg_5499.read();
}

void quantize_activation::thread_output_states_24_1_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5350.read(), ap_const_lv6_18))) {
        output_states_24_1_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_24_1_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_24_2_0_V_address0() {
    output_states_24_2_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4821_p1.read());
}

void quantize_activation::thread_output_states_24_2_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read())) {
        output_states_24_2_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_24_2_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_24_2_0_V_d0() {
    output_states_24_2_0_V_d0 = select_ln887_5_fu_5107_p3.read();
}

void quantize_activation::thread_output_states_24_2_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5350.read(), ap_const_lv6_18))) {
        output_states_24_2_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_24_2_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_24_3_0_V_address0() {
    output_states_24_3_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4821_p1.read());
}

void quantize_activation::thread_output_states_24_3_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read())) {
        output_states_24_3_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_24_3_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_24_3_0_V_d0() {
    output_states_24_3_0_V_d0 = select_ln887_7_fu_5206_p3.read();
}

void quantize_activation::thread_output_states_24_3_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5350.read(), ap_const_lv6_18))) {
        output_states_24_3_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_24_3_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_25_0_0_V_address0() {
    output_states_25_0_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4821_p1.read());
}

void quantize_activation::thread_output_states_25_0_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read())) {
        output_states_25_0_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_25_0_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_25_0_0_V_d0() {
    output_states_25_0_0_V_d0 = select_ln887_1_reg_5431.read();
}

void quantize_activation::thread_output_states_25_0_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5350.read(), ap_const_lv6_19))) {
        output_states_25_0_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_25_0_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_25_1_0_V_address0() {
    output_states_25_1_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4821_p1.read());
}

void quantize_activation::thread_output_states_25_1_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read())) {
        output_states_25_1_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_25_1_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_25_1_0_V_d0() {
    output_states_25_1_0_V_d0 = select_ln887_3_reg_5499.read();
}

void quantize_activation::thread_output_states_25_1_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5350.read(), ap_const_lv6_19))) {
        output_states_25_1_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_25_1_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_25_2_0_V_address0() {
    output_states_25_2_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4821_p1.read());
}

void quantize_activation::thread_output_states_25_2_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read())) {
        output_states_25_2_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_25_2_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_25_2_0_V_d0() {
    output_states_25_2_0_V_d0 = select_ln887_5_fu_5107_p3.read();
}

void quantize_activation::thread_output_states_25_2_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5350.read(), ap_const_lv6_19))) {
        output_states_25_2_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_25_2_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_25_3_0_V_address0() {
    output_states_25_3_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4821_p1.read());
}

void quantize_activation::thread_output_states_25_3_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read())) {
        output_states_25_3_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_25_3_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_25_3_0_V_d0() {
    output_states_25_3_0_V_d0 = select_ln887_7_fu_5206_p3.read();
}

void quantize_activation::thread_output_states_25_3_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5350.read(), ap_const_lv6_19))) {
        output_states_25_3_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_25_3_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_26_0_0_V_address0() {
    output_states_26_0_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4821_p1.read());
}

void quantize_activation::thread_output_states_26_0_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read())) {
        output_states_26_0_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_26_0_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_26_0_0_V_d0() {
    output_states_26_0_0_V_d0 = select_ln887_1_reg_5431.read();
}

void quantize_activation::thread_output_states_26_0_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5350.read(), ap_const_lv6_1A))) {
        output_states_26_0_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_26_0_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_26_1_0_V_address0() {
    output_states_26_1_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4821_p1.read());
}

void quantize_activation::thread_output_states_26_1_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read())) {
        output_states_26_1_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_26_1_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_26_1_0_V_d0() {
    output_states_26_1_0_V_d0 = select_ln887_3_reg_5499.read();
}

void quantize_activation::thread_output_states_26_1_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5350.read(), ap_const_lv6_1A))) {
        output_states_26_1_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_26_1_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_26_2_0_V_address0() {
    output_states_26_2_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4821_p1.read());
}

void quantize_activation::thread_output_states_26_2_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read())) {
        output_states_26_2_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_26_2_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_26_2_0_V_d0() {
    output_states_26_2_0_V_d0 = select_ln887_5_fu_5107_p3.read();
}

void quantize_activation::thread_output_states_26_2_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5350.read(), ap_const_lv6_1A))) {
        output_states_26_2_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_26_2_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_26_3_0_V_address0() {
    output_states_26_3_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4821_p1.read());
}

void quantize_activation::thread_output_states_26_3_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read())) {
        output_states_26_3_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_26_3_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_26_3_0_V_d0() {
    output_states_26_3_0_V_d0 = select_ln887_7_fu_5206_p3.read();
}

void quantize_activation::thread_output_states_26_3_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5350.read(), ap_const_lv6_1A))) {
        output_states_26_3_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_26_3_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_27_0_0_V_address0() {
    output_states_27_0_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4821_p1.read());
}

void quantize_activation::thread_output_states_27_0_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read())) {
        output_states_27_0_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_27_0_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_27_0_0_V_d0() {
    output_states_27_0_0_V_d0 = select_ln887_1_reg_5431.read();
}

void quantize_activation::thread_output_states_27_0_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5350.read(), ap_const_lv6_1B))) {
        output_states_27_0_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_27_0_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_27_1_0_V_address0() {
    output_states_27_1_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4821_p1.read());
}

void quantize_activation::thread_output_states_27_1_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read())) {
        output_states_27_1_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_27_1_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_27_1_0_V_d0() {
    output_states_27_1_0_V_d0 = select_ln887_3_reg_5499.read();
}

void quantize_activation::thread_output_states_27_1_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5350.read(), ap_const_lv6_1B))) {
        output_states_27_1_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_27_1_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_27_2_0_V_address0() {
    output_states_27_2_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4821_p1.read());
}

void quantize_activation::thread_output_states_27_2_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read())) {
        output_states_27_2_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_27_2_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_27_2_0_V_d0() {
    output_states_27_2_0_V_d0 = select_ln887_5_fu_5107_p3.read();
}

void quantize_activation::thread_output_states_27_2_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5350.read(), ap_const_lv6_1B))) {
        output_states_27_2_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_27_2_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_27_3_0_V_address0() {
    output_states_27_3_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4821_p1.read());
}

void quantize_activation::thread_output_states_27_3_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read())) {
        output_states_27_3_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_27_3_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_27_3_0_V_d0() {
    output_states_27_3_0_V_d0 = select_ln887_7_fu_5206_p3.read();
}

void quantize_activation::thread_output_states_27_3_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5350.read(), ap_const_lv6_1B))) {
        output_states_27_3_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_27_3_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_28_0_0_V_address0() {
    output_states_28_0_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4821_p1.read());
}

void quantize_activation::thread_output_states_28_0_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read())) {
        output_states_28_0_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_28_0_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_28_0_0_V_d0() {
    output_states_28_0_0_V_d0 = select_ln887_1_reg_5431.read();
}

void quantize_activation::thread_output_states_28_0_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5350.read(), ap_const_lv6_1C))) {
        output_states_28_0_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_28_0_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_28_1_0_V_address0() {
    output_states_28_1_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4821_p1.read());
}

void quantize_activation::thread_output_states_28_1_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read())) {
        output_states_28_1_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_28_1_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_28_1_0_V_d0() {
    output_states_28_1_0_V_d0 = select_ln887_3_reg_5499.read();
}

void quantize_activation::thread_output_states_28_1_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5350.read(), ap_const_lv6_1C))) {
        output_states_28_1_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_28_1_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_28_2_0_V_address0() {
    output_states_28_2_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4821_p1.read());
}

void quantize_activation::thread_output_states_28_2_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read())) {
        output_states_28_2_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_28_2_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_28_2_0_V_d0() {
    output_states_28_2_0_V_d0 = select_ln887_5_fu_5107_p3.read();
}

void quantize_activation::thread_output_states_28_2_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5350.read(), ap_const_lv6_1C))) {
        output_states_28_2_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_28_2_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_28_3_0_V_address0() {
    output_states_28_3_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4821_p1.read());
}

void quantize_activation::thread_output_states_28_3_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read())) {
        output_states_28_3_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_28_3_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_28_3_0_V_d0() {
    output_states_28_3_0_V_d0 = select_ln887_7_fu_5206_p3.read();
}

void quantize_activation::thread_output_states_28_3_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5350.read(), ap_const_lv6_1C))) {
        output_states_28_3_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_28_3_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_29_0_0_V_address0() {
    output_states_29_0_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4821_p1.read());
}

void quantize_activation::thread_output_states_29_0_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read())) {
        output_states_29_0_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_29_0_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_29_0_0_V_d0() {
    output_states_29_0_0_V_d0 = select_ln887_1_reg_5431.read();
}

void quantize_activation::thread_output_states_29_0_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5350.read(), ap_const_lv6_1D))) {
        output_states_29_0_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_29_0_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_29_1_0_V_address0() {
    output_states_29_1_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4821_p1.read());
}

void quantize_activation::thread_output_states_29_1_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read())) {
        output_states_29_1_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_29_1_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_29_1_0_V_d0() {
    output_states_29_1_0_V_d0 = select_ln887_3_reg_5499.read();
}

void quantize_activation::thread_output_states_29_1_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5350.read(), ap_const_lv6_1D))) {
        output_states_29_1_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_29_1_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_29_2_0_V_address0() {
    output_states_29_2_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4821_p1.read());
}

void quantize_activation::thread_output_states_29_2_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read())) {
        output_states_29_2_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_29_2_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_29_2_0_V_d0() {
    output_states_29_2_0_V_d0 = select_ln887_5_fu_5107_p3.read();
}

void quantize_activation::thread_output_states_29_2_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5350.read(), ap_const_lv6_1D))) {
        output_states_29_2_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_29_2_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_29_3_0_V_address0() {
    output_states_29_3_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4821_p1.read());
}

void quantize_activation::thread_output_states_29_3_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read())) {
        output_states_29_3_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_29_3_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_29_3_0_V_d0() {
    output_states_29_3_0_V_d0 = select_ln887_7_fu_5206_p3.read();
}

void quantize_activation::thread_output_states_29_3_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5350.read(), ap_const_lv6_1D))) {
        output_states_29_3_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_29_3_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_2_0_0_V_address0() {
    output_states_2_0_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4821_p1.read());
}

void quantize_activation::thread_output_states_2_0_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read())) {
        output_states_2_0_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_2_0_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_2_0_0_V_d0() {
    output_states_2_0_0_V_d0 = select_ln887_1_reg_5431.read();
}

void quantize_activation::thread_output_states_2_0_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5350.read(), ap_const_lv6_2))) {
        output_states_2_0_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_2_0_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_2_1_0_V_address0() {
    output_states_2_1_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4821_p1.read());
}

void quantize_activation::thread_output_states_2_1_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read())) {
        output_states_2_1_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_2_1_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_2_1_0_V_d0() {
    output_states_2_1_0_V_d0 = select_ln887_3_reg_5499.read();
}

void quantize_activation::thread_output_states_2_1_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5350.read(), ap_const_lv6_2))) {
        output_states_2_1_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_2_1_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_2_2_0_V_address0() {
    output_states_2_2_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4821_p1.read());
}

void quantize_activation::thread_output_states_2_2_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read())) {
        output_states_2_2_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_2_2_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_2_2_0_V_d0() {
    output_states_2_2_0_V_d0 = select_ln887_5_fu_5107_p3.read();
}

void quantize_activation::thread_output_states_2_2_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5350.read(), ap_const_lv6_2))) {
        output_states_2_2_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_2_2_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_2_3_0_V_address0() {
    output_states_2_3_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4821_p1.read());
}

void quantize_activation::thread_output_states_2_3_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read())) {
        output_states_2_3_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_2_3_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_2_3_0_V_d0() {
    output_states_2_3_0_V_d0 = select_ln887_7_fu_5206_p3.read();
}

void quantize_activation::thread_output_states_2_3_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5350.read(), ap_const_lv6_2))) {
        output_states_2_3_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_2_3_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_30_0_0_V_address0() {
    output_states_30_0_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4821_p1.read());
}

void quantize_activation::thread_output_states_30_0_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read())) {
        output_states_30_0_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_30_0_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_30_0_0_V_d0() {
    output_states_30_0_0_V_d0 = select_ln887_1_reg_5431.read();
}

void quantize_activation::thread_output_states_30_0_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5350.read(), ap_const_lv6_1E))) {
        output_states_30_0_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_30_0_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_30_1_0_V_address0() {
    output_states_30_1_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4821_p1.read());
}

void quantize_activation::thread_output_states_30_1_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read())) {
        output_states_30_1_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_30_1_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_30_1_0_V_d0() {
    output_states_30_1_0_V_d0 = select_ln887_3_reg_5499.read();
}

void quantize_activation::thread_output_states_30_1_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5350.read(), ap_const_lv6_1E))) {
        output_states_30_1_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_30_1_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_30_2_0_V_address0() {
    output_states_30_2_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4821_p1.read());
}

void quantize_activation::thread_output_states_30_2_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read())) {
        output_states_30_2_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_30_2_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_30_2_0_V_d0() {
    output_states_30_2_0_V_d0 = select_ln887_5_fu_5107_p3.read();
}

void quantize_activation::thread_output_states_30_2_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5350.read(), ap_const_lv6_1E))) {
        output_states_30_2_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_30_2_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_30_3_0_V_address0() {
    output_states_30_3_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4821_p1.read());
}

void quantize_activation::thread_output_states_30_3_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read())) {
        output_states_30_3_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_30_3_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_30_3_0_V_d0() {
    output_states_30_3_0_V_d0 = select_ln887_7_fu_5206_p3.read();
}

void quantize_activation::thread_output_states_30_3_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5350.read(), ap_const_lv6_1E))) {
        output_states_30_3_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_30_3_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_31_0_0_V_address0() {
    output_states_31_0_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4821_p1.read());
}

void quantize_activation::thread_output_states_31_0_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read())) {
        output_states_31_0_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_31_0_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_31_0_0_V_d0() {
    output_states_31_0_0_V_d0 = select_ln887_1_reg_5431.read();
}

void quantize_activation::thread_output_states_31_0_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5350.read(), ap_const_lv6_1F))) {
        output_states_31_0_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_31_0_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_31_1_0_V_address0() {
    output_states_31_1_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4821_p1.read());
}

void quantize_activation::thread_output_states_31_1_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read())) {
        output_states_31_1_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_31_1_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_31_1_0_V_d0() {
    output_states_31_1_0_V_d0 = select_ln887_3_reg_5499.read();
}

void quantize_activation::thread_output_states_31_1_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5350.read(), ap_const_lv6_1F))) {
        output_states_31_1_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_31_1_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_31_2_0_V_address0() {
    output_states_31_2_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4821_p1.read());
}

void quantize_activation::thread_output_states_31_2_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read())) {
        output_states_31_2_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_31_2_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_31_2_0_V_d0() {
    output_states_31_2_0_V_d0 = select_ln887_5_fu_5107_p3.read();
}

void quantize_activation::thread_output_states_31_2_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5350.read(), ap_const_lv6_1F))) {
        output_states_31_2_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_31_2_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_31_3_0_V_address0() {
    output_states_31_3_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4821_p1.read());
}

void quantize_activation::thread_output_states_31_3_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read())) {
        output_states_31_3_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_31_3_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_31_3_0_V_d0() {
    output_states_31_3_0_V_d0 = select_ln887_7_fu_5206_p3.read();
}

void quantize_activation::thread_output_states_31_3_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5350.read(), ap_const_lv6_1F))) {
        output_states_31_3_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_31_3_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_32_0_0_V_address0() {
    output_states_32_0_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4821_p1.read());
}

void quantize_activation::thread_output_states_32_0_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read())) {
        output_states_32_0_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_32_0_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_32_0_0_V_d0() {
    output_states_32_0_0_V_d0 = select_ln887_1_reg_5431.read();
}

void quantize_activation::thread_output_states_32_0_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5350.read(), ap_const_lv6_20))) {
        output_states_32_0_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_32_0_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_32_1_0_V_address0() {
    output_states_32_1_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4821_p1.read());
}

void quantize_activation::thread_output_states_32_1_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read())) {
        output_states_32_1_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_32_1_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_32_1_0_V_d0() {
    output_states_32_1_0_V_d0 = select_ln887_3_reg_5499.read();
}

void quantize_activation::thread_output_states_32_1_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5350.read(), ap_const_lv6_20))) {
        output_states_32_1_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_32_1_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_32_2_0_V_address0() {
    output_states_32_2_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4821_p1.read());
}

void quantize_activation::thread_output_states_32_2_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read())) {
        output_states_32_2_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_32_2_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_32_2_0_V_d0() {
    output_states_32_2_0_V_d0 = select_ln887_5_fu_5107_p3.read();
}

void quantize_activation::thread_output_states_32_2_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5350.read(), ap_const_lv6_20))) {
        output_states_32_2_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_32_2_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_32_3_0_V_address0() {
    output_states_32_3_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4821_p1.read());
}

void quantize_activation::thread_output_states_32_3_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read())) {
        output_states_32_3_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_32_3_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_32_3_0_V_d0() {
    output_states_32_3_0_V_d0 = select_ln887_7_fu_5206_p3.read();
}

void quantize_activation::thread_output_states_32_3_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5350.read(), ap_const_lv6_20))) {
        output_states_32_3_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_32_3_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_33_0_0_V_address0() {
    output_states_33_0_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4821_p1.read());
}

void quantize_activation::thread_output_states_33_0_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read())) {
        output_states_33_0_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_33_0_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_33_0_0_V_d0() {
    output_states_33_0_0_V_d0 = select_ln887_1_reg_5431.read();
}

void quantize_activation::thread_output_states_33_0_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5350.read(), ap_const_lv6_21))) {
        output_states_33_0_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_33_0_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_33_1_0_V_address0() {
    output_states_33_1_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4821_p1.read());
}

void quantize_activation::thread_output_states_33_1_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read())) {
        output_states_33_1_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_33_1_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_33_1_0_V_d0() {
    output_states_33_1_0_V_d0 = select_ln887_3_reg_5499.read();
}

void quantize_activation::thread_output_states_33_1_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5350.read(), ap_const_lv6_21))) {
        output_states_33_1_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_33_1_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_33_2_0_V_address0() {
    output_states_33_2_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4821_p1.read());
}

void quantize_activation::thread_output_states_33_2_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read())) {
        output_states_33_2_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_33_2_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_33_2_0_V_d0() {
    output_states_33_2_0_V_d0 = select_ln887_5_fu_5107_p3.read();
}

void quantize_activation::thread_output_states_33_2_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5350.read(), ap_const_lv6_21))) {
        output_states_33_2_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_33_2_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_33_3_0_V_address0() {
    output_states_33_3_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4821_p1.read());
}

void quantize_activation::thread_output_states_33_3_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read())) {
        output_states_33_3_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_33_3_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_33_3_0_V_d0() {
    output_states_33_3_0_V_d0 = select_ln887_7_fu_5206_p3.read();
}

void quantize_activation::thread_output_states_33_3_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5350.read(), ap_const_lv6_21))) {
        output_states_33_3_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_33_3_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_34_0_0_V_address0() {
    output_states_34_0_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4821_p1.read());
}

void quantize_activation::thread_output_states_34_0_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read())) {
        output_states_34_0_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_34_0_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_34_0_0_V_d0() {
    output_states_34_0_0_V_d0 = select_ln887_1_reg_5431.read();
}

void quantize_activation::thread_output_states_34_0_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5350.read(), ap_const_lv6_22))) {
        output_states_34_0_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_34_0_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_34_1_0_V_address0() {
    output_states_34_1_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4821_p1.read());
}

void quantize_activation::thread_output_states_34_1_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read())) {
        output_states_34_1_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_34_1_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_34_1_0_V_d0() {
    output_states_34_1_0_V_d0 = select_ln887_3_reg_5499.read();
}

void quantize_activation::thread_output_states_34_1_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5350.read(), ap_const_lv6_22))) {
        output_states_34_1_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_34_1_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_34_2_0_V_address0() {
    output_states_34_2_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4821_p1.read());
}

void quantize_activation::thread_output_states_34_2_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read())) {
        output_states_34_2_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_34_2_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_34_2_0_V_d0() {
    output_states_34_2_0_V_d0 = select_ln887_5_fu_5107_p3.read();
}

void quantize_activation::thread_output_states_34_2_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5350.read(), ap_const_lv6_22))) {
        output_states_34_2_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_34_2_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_34_3_0_V_address0() {
    output_states_34_3_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4821_p1.read());
}

void quantize_activation::thread_output_states_34_3_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read())) {
        output_states_34_3_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_34_3_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_34_3_0_V_d0() {
    output_states_34_3_0_V_d0 = select_ln887_7_fu_5206_p3.read();
}

void quantize_activation::thread_output_states_34_3_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5350.read(), ap_const_lv6_22))) {
        output_states_34_3_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_34_3_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_35_0_0_V_address0() {
    output_states_35_0_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4821_p1.read());
}

void quantize_activation::thread_output_states_35_0_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read())) {
        output_states_35_0_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_35_0_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_35_0_0_V_d0() {
    output_states_35_0_0_V_d0 = select_ln887_1_reg_5431.read();
}

void quantize_activation::thread_output_states_35_0_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5350.read(), ap_const_lv6_23))) {
        output_states_35_0_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_35_0_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_35_1_0_V_address0() {
    output_states_35_1_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4821_p1.read());
}

void quantize_activation::thread_output_states_35_1_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read())) {
        output_states_35_1_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_35_1_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_35_1_0_V_d0() {
    output_states_35_1_0_V_d0 = select_ln887_3_reg_5499.read();
}

void quantize_activation::thread_output_states_35_1_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5350.read(), ap_const_lv6_23))) {
        output_states_35_1_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_35_1_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_35_2_0_V_address0() {
    output_states_35_2_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4821_p1.read());
}

void quantize_activation::thread_output_states_35_2_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read())) {
        output_states_35_2_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_35_2_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_35_2_0_V_d0() {
    output_states_35_2_0_V_d0 = select_ln887_5_fu_5107_p3.read();
}

void quantize_activation::thread_output_states_35_2_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5350.read(), ap_const_lv6_23))) {
        output_states_35_2_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_35_2_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_35_3_0_V_address0() {
    output_states_35_3_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4821_p1.read());
}

void quantize_activation::thread_output_states_35_3_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read())) {
        output_states_35_3_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_35_3_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_35_3_0_V_d0() {
    output_states_35_3_0_V_d0 = select_ln887_7_fu_5206_p3.read();
}

void quantize_activation::thread_output_states_35_3_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5350.read(), ap_const_lv6_23))) {
        output_states_35_3_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_35_3_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_36_0_0_V_address0() {
    output_states_36_0_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4821_p1.read());
}

void quantize_activation::thread_output_states_36_0_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read())) {
        output_states_36_0_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_36_0_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_36_0_0_V_d0() {
    output_states_36_0_0_V_d0 = select_ln887_1_reg_5431.read();
}

void quantize_activation::thread_output_states_36_0_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5350.read(), ap_const_lv6_24))) {
        output_states_36_0_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_36_0_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_36_1_0_V_address0() {
    output_states_36_1_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4821_p1.read());
}

void quantize_activation::thread_output_states_36_1_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read())) {
        output_states_36_1_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_36_1_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_36_1_0_V_d0() {
    output_states_36_1_0_V_d0 = select_ln887_3_reg_5499.read();
}

void quantize_activation::thread_output_states_36_1_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5350.read(), ap_const_lv6_24))) {
        output_states_36_1_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_36_1_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_36_2_0_V_address0() {
    output_states_36_2_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4821_p1.read());
}

void quantize_activation::thread_output_states_36_2_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read())) {
        output_states_36_2_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_36_2_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_36_2_0_V_d0() {
    output_states_36_2_0_V_d0 = select_ln887_5_fu_5107_p3.read();
}

void quantize_activation::thread_output_states_36_2_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5350.read(), ap_const_lv6_24))) {
        output_states_36_2_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_36_2_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_36_3_0_V_address0() {
    output_states_36_3_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4821_p1.read());
}

void quantize_activation::thread_output_states_36_3_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read())) {
        output_states_36_3_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_36_3_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_36_3_0_V_d0() {
    output_states_36_3_0_V_d0 = select_ln887_7_fu_5206_p3.read();
}

void quantize_activation::thread_output_states_36_3_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5350.read(), ap_const_lv6_24))) {
        output_states_36_3_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_36_3_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_37_0_0_V_address0() {
    output_states_37_0_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4821_p1.read());
}

void quantize_activation::thread_output_states_37_0_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read())) {
        output_states_37_0_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_37_0_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_37_0_0_V_d0() {
    output_states_37_0_0_V_d0 = select_ln887_1_reg_5431.read();
}

void quantize_activation::thread_output_states_37_0_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5350.read(), ap_const_lv6_25))) {
        output_states_37_0_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_37_0_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_37_1_0_V_address0() {
    output_states_37_1_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4821_p1.read());
}

void quantize_activation::thread_output_states_37_1_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read())) {
        output_states_37_1_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_37_1_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_37_1_0_V_d0() {
    output_states_37_1_0_V_d0 = select_ln887_3_reg_5499.read();
}

void quantize_activation::thread_output_states_37_1_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5350.read(), ap_const_lv6_25))) {
        output_states_37_1_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_37_1_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_37_2_0_V_address0() {
    output_states_37_2_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4821_p1.read());
}

void quantize_activation::thread_output_states_37_2_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read())) {
        output_states_37_2_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_37_2_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_37_2_0_V_d0() {
    output_states_37_2_0_V_d0 = select_ln887_5_fu_5107_p3.read();
}

void quantize_activation::thread_output_states_37_2_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5350.read(), ap_const_lv6_25))) {
        output_states_37_2_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_37_2_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_37_3_0_V_address0() {
    output_states_37_3_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4821_p1.read());
}

void quantize_activation::thread_output_states_37_3_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read())) {
        output_states_37_3_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_37_3_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_37_3_0_V_d0() {
    output_states_37_3_0_V_d0 = select_ln887_7_fu_5206_p3.read();
}

void quantize_activation::thread_output_states_37_3_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5350.read(), ap_const_lv6_25))) {
        output_states_37_3_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_37_3_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_38_0_0_V_address0() {
    output_states_38_0_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4821_p1.read());
}

void quantize_activation::thread_output_states_38_0_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read())) {
        output_states_38_0_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_38_0_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_38_0_0_V_d0() {
    output_states_38_0_0_V_d0 = select_ln887_1_reg_5431.read();
}

void quantize_activation::thread_output_states_38_0_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5350.read(), ap_const_lv6_26))) {
        output_states_38_0_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_38_0_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_38_1_0_V_address0() {
    output_states_38_1_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4821_p1.read());
}

void quantize_activation::thread_output_states_38_1_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read())) {
        output_states_38_1_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_38_1_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_38_1_0_V_d0() {
    output_states_38_1_0_V_d0 = select_ln887_3_reg_5499.read();
}

void quantize_activation::thread_output_states_38_1_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5350.read(), ap_const_lv6_26))) {
        output_states_38_1_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_38_1_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_38_2_0_V_address0() {
    output_states_38_2_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4821_p1.read());
}

void quantize_activation::thread_output_states_38_2_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read())) {
        output_states_38_2_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_38_2_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_38_2_0_V_d0() {
    output_states_38_2_0_V_d0 = select_ln887_5_fu_5107_p3.read();
}

void quantize_activation::thread_output_states_38_2_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5350.read(), ap_const_lv6_26))) {
        output_states_38_2_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_38_2_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_38_3_0_V_address0() {
    output_states_38_3_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4821_p1.read());
}

void quantize_activation::thread_output_states_38_3_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read())) {
        output_states_38_3_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_38_3_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_38_3_0_V_d0() {
    output_states_38_3_0_V_d0 = select_ln887_7_fu_5206_p3.read();
}

void quantize_activation::thread_output_states_38_3_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5350.read(), ap_const_lv6_26))) {
        output_states_38_3_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_38_3_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_39_0_0_V_address0() {
    output_states_39_0_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4821_p1.read());
}

void quantize_activation::thread_output_states_39_0_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read())) {
        output_states_39_0_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_39_0_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_39_0_0_V_d0() {
    output_states_39_0_0_V_d0 = select_ln887_1_reg_5431.read();
}

void quantize_activation::thread_output_states_39_0_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5350.read(), ap_const_lv6_27))) {
        output_states_39_0_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_39_0_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_39_1_0_V_address0() {
    output_states_39_1_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4821_p1.read());
}

void quantize_activation::thread_output_states_39_1_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read())) {
        output_states_39_1_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_39_1_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_39_1_0_V_d0() {
    output_states_39_1_0_V_d0 = select_ln887_3_reg_5499.read();
}

void quantize_activation::thread_output_states_39_1_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5350.read(), ap_const_lv6_27))) {
        output_states_39_1_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_39_1_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_39_2_0_V_address0() {
    output_states_39_2_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4821_p1.read());
}

void quantize_activation::thread_output_states_39_2_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read())) {
        output_states_39_2_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_39_2_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_39_2_0_V_d0() {
    output_states_39_2_0_V_d0 = select_ln887_5_fu_5107_p3.read();
}

void quantize_activation::thread_output_states_39_2_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5350.read(), ap_const_lv6_27))) {
        output_states_39_2_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_39_2_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_39_3_0_V_address0() {
    output_states_39_3_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4821_p1.read());
}

void quantize_activation::thread_output_states_39_3_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read())) {
        output_states_39_3_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_39_3_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_39_3_0_V_d0() {
    output_states_39_3_0_V_d0 = select_ln887_7_fu_5206_p3.read();
}

void quantize_activation::thread_output_states_39_3_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5350.read(), ap_const_lv6_27))) {
        output_states_39_3_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_39_3_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_3_0_0_V_address0() {
    output_states_3_0_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4821_p1.read());
}

void quantize_activation::thread_output_states_3_0_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read())) {
        output_states_3_0_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_3_0_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_3_0_0_V_d0() {
    output_states_3_0_0_V_d0 = select_ln887_1_reg_5431.read();
}

void quantize_activation::thread_output_states_3_0_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5350.read(), ap_const_lv6_3))) {
        output_states_3_0_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_3_0_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_3_1_0_V_address0() {
    output_states_3_1_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4821_p1.read());
}

void quantize_activation::thread_output_states_3_1_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read())) {
        output_states_3_1_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_3_1_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_3_1_0_V_d0() {
    output_states_3_1_0_V_d0 = select_ln887_3_reg_5499.read();
}

void quantize_activation::thread_output_states_3_1_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5350.read(), ap_const_lv6_3))) {
        output_states_3_1_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_3_1_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_3_2_0_V_address0() {
    output_states_3_2_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4821_p1.read());
}

void quantize_activation::thread_output_states_3_2_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read())) {
        output_states_3_2_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_3_2_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_3_2_0_V_d0() {
    output_states_3_2_0_V_d0 = select_ln887_5_fu_5107_p3.read();
}

void quantize_activation::thread_output_states_3_2_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5350.read(), ap_const_lv6_3))) {
        output_states_3_2_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_3_2_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_3_3_0_V_address0() {
    output_states_3_3_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4821_p1.read());
}

void quantize_activation::thread_output_states_3_3_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read())) {
        output_states_3_3_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_3_3_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_3_3_0_V_d0() {
    output_states_3_3_0_V_d0 = select_ln887_7_fu_5206_p3.read();
}

void quantize_activation::thread_output_states_3_3_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5350.read(), ap_const_lv6_3))) {
        output_states_3_3_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_3_3_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_40_0_0_V_address0() {
    output_states_40_0_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4821_p1.read());
}

void quantize_activation::thread_output_states_40_0_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read())) {
        output_states_40_0_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_40_0_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_40_0_0_V_d0() {
    output_states_40_0_0_V_d0 = select_ln887_1_reg_5431.read();
}

void quantize_activation::thread_output_states_40_0_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5350.read(), ap_const_lv6_28))) {
        output_states_40_0_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_40_0_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_40_1_0_V_address0() {
    output_states_40_1_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4821_p1.read());
}

void quantize_activation::thread_output_states_40_1_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read())) {
        output_states_40_1_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_40_1_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_40_1_0_V_d0() {
    output_states_40_1_0_V_d0 = select_ln887_3_reg_5499.read();
}

void quantize_activation::thread_output_states_40_1_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5350.read(), ap_const_lv6_28))) {
        output_states_40_1_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_40_1_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_40_2_0_V_address0() {
    output_states_40_2_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4821_p1.read());
}

void quantize_activation::thread_output_states_40_2_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read())) {
        output_states_40_2_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_40_2_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_40_2_0_V_d0() {
    output_states_40_2_0_V_d0 = select_ln887_5_fu_5107_p3.read();
}

void quantize_activation::thread_output_states_40_2_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5350.read(), ap_const_lv6_28))) {
        output_states_40_2_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_40_2_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_40_3_0_V_address0() {
    output_states_40_3_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4821_p1.read());
}

void quantize_activation::thread_output_states_40_3_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read())) {
        output_states_40_3_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_40_3_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_40_3_0_V_d0() {
    output_states_40_3_0_V_d0 = select_ln887_7_fu_5206_p3.read();
}

void quantize_activation::thread_output_states_40_3_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5350.read(), ap_const_lv6_28))) {
        output_states_40_3_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_40_3_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_41_0_0_V_address0() {
    output_states_41_0_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4821_p1.read());
}

void quantize_activation::thread_output_states_41_0_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read())) {
        output_states_41_0_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_41_0_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_41_0_0_V_d0() {
    output_states_41_0_0_V_d0 = select_ln887_1_reg_5431.read();
}

void quantize_activation::thread_output_states_41_0_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5350.read(), ap_const_lv6_29))) {
        output_states_41_0_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_41_0_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_41_1_0_V_address0() {
    output_states_41_1_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4821_p1.read());
}

void quantize_activation::thread_output_states_41_1_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read())) {
        output_states_41_1_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_41_1_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_41_1_0_V_d0() {
    output_states_41_1_0_V_d0 = select_ln887_3_reg_5499.read();
}

void quantize_activation::thread_output_states_41_1_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5350.read(), ap_const_lv6_29))) {
        output_states_41_1_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_41_1_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_41_2_0_V_address0() {
    output_states_41_2_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4821_p1.read());
}

void quantize_activation::thread_output_states_41_2_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read())) {
        output_states_41_2_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_41_2_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_41_2_0_V_d0() {
    output_states_41_2_0_V_d0 = select_ln887_5_fu_5107_p3.read();
}

void quantize_activation::thread_output_states_41_2_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5350.read(), ap_const_lv6_29))) {
        output_states_41_2_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_41_2_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_41_3_0_V_address0() {
    output_states_41_3_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4821_p1.read());
}

void quantize_activation::thread_output_states_41_3_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read())) {
        output_states_41_3_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_41_3_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_41_3_0_V_d0() {
    output_states_41_3_0_V_d0 = select_ln887_7_fu_5206_p3.read();
}

void quantize_activation::thread_output_states_41_3_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5350.read(), ap_const_lv6_29))) {
        output_states_41_3_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_41_3_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_42_0_0_V_address0() {
    output_states_42_0_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4821_p1.read());
}

void quantize_activation::thread_output_states_42_0_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read())) {
        output_states_42_0_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_42_0_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_42_0_0_V_d0() {
    output_states_42_0_0_V_d0 = select_ln887_1_reg_5431.read();
}

void quantize_activation::thread_output_states_42_0_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5350.read(), ap_const_lv6_2A))) {
        output_states_42_0_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_42_0_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_42_1_0_V_address0() {
    output_states_42_1_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4821_p1.read());
}

void quantize_activation::thread_output_states_42_1_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read())) {
        output_states_42_1_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_42_1_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_42_1_0_V_d0() {
    output_states_42_1_0_V_d0 = select_ln887_3_reg_5499.read();
}

void quantize_activation::thread_output_states_42_1_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5350.read(), ap_const_lv6_2A))) {
        output_states_42_1_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_42_1_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_42_2_0_V_address0() {
    output_states_42_2_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4821_p1.read());
}

void quantize_activation::thread_output_states_42_2_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read())) {
        output_states_42_2_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_42_2_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_42_2_0_V_d0() {
    output_states_42_2_0_V_d0 = select_ln887_5_fu_5107_p3.read();
}

void quantize_activation::thread_output_states_42_2_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5350.read(), ap_const_lv6_2A))) {
        output_states_42_2_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_42_2_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_42_3_0_V_address0() {
    output_states_42_3_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4821_p1.read());
}

void quantize_activation::thread_output_states_42_3_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read())) {
        output_states_42_3_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_42_3_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_42_3_0_V_d0() {
    output_states_42_3_0_V_d0 = select_ln887_7_fu_5206_p3.read();
}

void quantize_activation::thread_output_states_42_3_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5350.read(), ap_const_lv6_2A))) {
        output_states_42_3_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_42_3_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_43_0_0_V_address0() {
    output_states_43_0_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4821_p1.read());
}

void quantize_activation::thread_output_states_43_0_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read())) {
        output_states_43_0_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_43_0_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_43_0_0_V_d0() {
    output_states_43_0_0_V_d0 = select_ln887_1_reg_5431.read();
}

void quantize_activation::thread_output_states_43_0_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5350.read(), ap_const_lv6_2B))) {
        output_states_43_0_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_43_0_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_43_1_0_V_address0() {
    output_states_43_1_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4821_p1.read());
}

void quantize_activation::thread_output_states_43_1_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read())) {
        output_states_43_1_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_43_1_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_43_1_0_V_d0() {
    output_states_43_1_0_V_d0 = select_ln887_3_reg_5499.read();
}

void quantize_activation::thread_output_states_43_1_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5350.read(), ap_const_lv6_2B))) {
        output_states_43_1_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_43_1_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_43_2_0_V_address0() {
    output_states_43_2_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4821_p1.read());
}

void quantize_activation::thread_output_states_43_2_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read())) {
        output_states_43_2_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_43_2_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_43_2_0_V_d0() {
    output_states_43_2_0_V_d0 = select_ln887_5_fu_5107_p3.read();
}

void quantize_activation::thread_output_states_43_2_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5350.read(), ap_const_lv6_2B))) {
        output_states_43_2_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_43_2_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_43_3_0_V_address0() {
    output_states_43_3_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4821_p1.read());
}

void quantize_activation::thread_output_states_43_3_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read())) {
        output_states_43_3_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_43_3_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_43_3_0_V_d0() {
    output_states_43_3_0_V_d0 = select_ln887_7_fu_5206_p3.read();
}

void quantize_activation::thread_output_states_43_3_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5350.read(), ap_const_lv6_2B))) {
        output_states_43_3_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_43_3_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_44_0_0_V_address0() {
    output_states_44_0_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4821_p1.read());
}

void quantize_activation::thread_output_states_44_0_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read())) {
        output_states_44_0_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_44_0_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_44_0_0_V_d0() {
    output_states_44_0_0_V_d0 = select_ln887_1_reg_5431.read();
}

void quantize_activation::thread_output_states_44_0_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5350.read(), ap_const_lv6_2C))) {
        output_states_44_0_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_44_0_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_44_1_0_V_address0() {
    output_states_44_1_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4821_p1.read());
}

void quantize_activation::thread_output_states_44_1_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read())) {
        output_states_44_1_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_44_1_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_44_1_0_V_d0() {
    output_states_44_1_0_V_d0 = select_ln887_3_reg_5499.read();
}

void quantize_activation::thread_output_states_44_1_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5350.read(), ap_const_lv6_2C))) {
        output_states_44_1_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_44_1_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_44_2_0_V_address0() {
    output_states_44_2_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4821_p1.read());
}

void quantize_activation::thread_output_states_44_2_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read())) {
        output_states_44_2_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_44_2_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_44_2_0_V_d0() {
    output_states_44_2_0_V_d0 = select_ln887_5_fu_5107_p3.read();
}

void quantize_activation::thread_output_states_44_2_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5350.read(), ap_const_lv6_2C))) {
        output_states_44_2_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_44_2_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_44_3_0_V_address0() {
    output_states_44_3_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4821_p1.read());
}

void quantize_activation::thread_output_states_44_3_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read())) {
        output_states_44_3_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_44_3_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_44_3_0_V_d0() {
    output_states_44_3_0_V_d0 = select_ln887_7_fu_5206_p3.read();
}

void quantize_activation::thread_output_states_44_3_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5350.read(), ap_const_lv6_2C))) {
        output_states_44_3_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_44_3_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_45_0_0_V_address0() {
    output_states_45_0_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4821_p1.read());
}

void quantize_activation::thread_output_states_45_0_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read())) {
        output_states_45_0_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_45_0_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_45_0_0_V_d0() {
    output_states_45_0_0_V_d0 = select_ln887_1_reg_5431.read();
}

void quantize_activation::thread_output_states_45_0_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5350.read(), ap_const_lv6_2D))) {
        output_states_45_0_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_45_0_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_45_1_0_V_address0() {
    output_states_45_1_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4821_p1.read());
}

void quantize_activation::thread_output_states_45_1_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read())) {
        output_states_45_1_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_45_1_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_45_1_0_V_d0() {
    output_states_45_1_0_V_d0 = select_ln887_3_reg_5499.read();
}

void quantize_activation::thread_output_states_45_1_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5350.read(), ap_const_lv6_2D))) {
        output_states_45_1_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_45_1_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_45_2_0_V_address0() {
    output_states_45_2_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4821_p1.read());
}

void quantize_activation::thread_output_states_45_2_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read())) {
        output_states_45_2_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_45_2_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_45_2_0_V_d0() {
    output_states_45_2_0_V_d0 = select_ln887_5_fu_5107_p3.read();
}

void quantize_activation::thread_output_states_45_2_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5350.read(), ap_const_lv6_2D))) {
        output_states_45_2_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_45_2_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_45_3_0_V_address0() {
    output_states_45_3_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4821_p1.read());
}

void quantize_activation::thread_output_states_45_3_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read())) {
        output_states_45_3_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_45_3_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_45_3_0_V_d0() {
    output_states_45_3_0_V_d0 = select_ln887_7_fu_5206_p3.read();
}

void quantize_activation::thread_output_states_45_3_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5350.read(), ap_const_lv6_2D))) {
        output_states_45_3_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_45_3_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_46_0_0_V_address0() {
    output_states_46_0_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4821_p1.read());
}

void quantize_activation::thread_output_states_46_0_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read())) {
        output_states_46_0_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_46_0_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_46_0_0_V_d0() {
    output_states_46_0_0_V_d0 = select_ln887_1_reg_5431.read();
}

void quantize_activation::thread_output_states_46_0_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5350.read(), ap_const_lv6_2E))) {
        output_states_46_0_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_46_0_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_46_1_0_V_address0() {
    output_states_46_1_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4821_p1.read());
}

void quantize_activation::thread_output_states_46_1_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read())) {
        output_states_46_1_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_46_1_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_46_1_0_V_d0() {
    output_states_46_1_0_V_d0 = select_ln887_3_reg_5499.read();
}

void quantize_activation::thread_output_states_46_1_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5350.read(), ap_const_lv6_2E))) {
        output_states_46_1_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_46_1_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_46_2_0_V_address0() {
    output_states_46_2_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4821_p1.read());
}

void quantize_activation::thread_output_states_46_2_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read())) {
        output_states_46_2_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_46_2_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_46_2_0_V_d0() {
    output_states_46_2_0_V_d0 = select_ln887_5_fu_5107_p3.read();
}

void quantize_activation::thread_output_states_46_2_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5350.read(), ap_const_lv6_2E))) {
        output_states_46_2_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_46_2_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_46_3_0_V_address0() {
    output_states_46_3_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4821_p1.read());
}

void quantize_activation::thread_output_states_46_3_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read())) {
        output_states_46_3_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_46_3_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_46_3_0_V_d0() {
    output_states_46_3_0_V_d0 = select_ln887_7_fu_5206_p3.read();
}

void quantize_activation::thread_output_states_46_3_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5350.read(), ap_const_lv6_2E))) {
        output_states_46_3_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_46_3_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_47_0_0_V_address0() {
    output_states_47_0_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4821_p1.read());
}

void quantize_activation::thread_output_states_47_0_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read())) {
        output_states_47_0_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_47_0_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_47_0_0_V_d0() {
    output_states_47_0_0_V_d0 = select_ln887_1_reg_5431.read();
}

void quantize_activation::thread_output_states_47_0_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5350.read(), ap_const_lv6_2F))) {
        output_states_47_0_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_47_0_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_47_1_0_V_address0() {
    output_states_47_1_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4821_p1.read());
}

void quantize_activation::thread_output_states_47_1_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read())) {
        output_states_47_1_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_47_1_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_47_1_0_V_d0() {
    output_states_47_1_0_V_d0 = select_ln887_3_reg_5499.read();
}

void quantize_activation::thread_output_states_47_1_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5350.read(), ap_const_lv6_2F))) {
        output_states_47_1_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_47_1_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_47_2_0_V_address0() {
    output_states_47_2_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4821_p1.read());
}

void quantize_activation::thread_output_states_47_2_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read())) {
        output_states_47_2_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_47_2_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_47_2_0_V_d0() {
    output_states_47_2_0_V_d0 = select_ln887_5_fu_5107_p3.read();
}

void quantize_activation::thread_output_states_47_2_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5350.read(), ap_const_lv6_2F))) {
        output_states_47_2_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_47_2_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_47_3_0_V_address0() {
    output_states_47_3_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4821_p1.read());
}

void quantize_activation::thread_output_states_47_3_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read())) {
        output_states_47_3_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_47_3_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_47_3_0_V_d0() {
    output_states_47_3_0_V_d0 = select_ln887_7_fu_5206_p3.read();
}

void quantize_activation::thread_output_states_47_3_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5350.read(), ap_const_lv6_2F))) {
        output_states_47_3_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_47_3_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_48_0_0_V_address0() {
    output_states_48_0_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4821_p1.read());
}

void quantize_activation::thread_output_states_48_0_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read())) {
        output_states_48_0_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_48_0_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_48_0_0_V_d0() {
    output_states_48_0_0_V_d0 = select_ln887_1_reg_5431.read();
}

void quantize_activation::thread_output_states_48_0_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5350.read(), ap_const_lv6_30))) {
        output_states_48_0_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_48_0_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_48_1_0_V_address0() {
    output_states_48_1_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4821_p1.read());
}

void quantize_activation::thread_output_states_48_1_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read())) {
        output_states_48_1_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_48_1_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_48_1_0_V_d0() {
    output_states_48_1_0_V_d0 = select_ln887_3_reg_5499.read();
}

void quantize_activation::thread_output_states_48_1_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5350.read(), ap_const_lv6_30))) {
        output_states_48_1_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_48_1_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_48_2_0_V_address0() {
    output_states_48_2_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4821_p1.read());
}

void quantize_activation::thread_output_states_48_2_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read())) {
        output_states_48_2_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_48_2_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_48_2_0_V_d0() {
    output_states_48_2_0_V_d0 = select_ln887_5_fu_5107_p3.read();
}

void quantize_activation::thread_output_states_48_2_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5350.read(), ap_const_lv6_30))) {
        output_states_48_2_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_48_2_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_48_3_0_V_address0() {
    output_states_48_3_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4821_p1.read());
}

void quantize_activation::thread_output_states_48_3_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read())) {
        output_states_48_3_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_48_3_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_48_3_0_V_d0() {
    output_states_48_3_0_V_d0 = select_ln887_7_fu_5206_p3.read();
}

void quantize_activation::thread_output_states_48_3_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5350.read(), ap_const_lv6_30))) {
        output_states_48_3_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_48_3_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_49_0_0_V_address0() {
    output_states_49_0_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4821_p1.read());
}

void quantize_activation::thread_output_states_49_0_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read())) {
        output_states_49_0_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_49_0_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_49_0_0_V_d0() {
    output_states_49_0_0_V_d0 = select_ln887_1_reg_5431.read();
}

void quantize_activation::thread_output_states_49_0_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5350.read(), ap_const_lv6_31))) {
        output_states_49_0_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_49_0_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_49_1_0_V_address0() {
    output_states_49_1_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4821_p1.read());
}

void quantize_activation::thread_output_states_49_1_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read())) {
        output_states_49_1_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_49_1_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_49_1_0_V_d0() {
    output_states_49_1_0_V_d0 = select_ln887_3_reg_5499.read();
}

void quantize_activation::thread_output_states_49_1_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5350.read(), ap_const_lv6_31))) {
        output_states_49_1_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_49_1_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_49_2_0_V_address0() {
    output_states_49_2_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4821_p1.read());
}

void quantize_activation::thread_output_states_49_2_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read())) {
        output_states_49_2_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_49_2_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_49_2_0_V_d0() {
    output_states_49_2_0_V_d0 = select_ln887_5_fu_5107_p3.read();
}

void quantize_activation::thread_output_states_49_2_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5350.read(), ap_const_lv6_31))) {
        output_states_49_2_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_49_2_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_49_3_0_V_address0() {
    output_states_49_3_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4821_p1.read());
}

void quantize_activation::thread_output_states_49_3_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read())) {
        output_states_49_3_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_49_3_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_49_3_0_V_d0() {
    output_states_49_3_0_V_d0 = select_ln887_7_fu_5206_p3.read();
}

void quantize_activation::thread_output_states_49_3_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5350.read(), ap_const_lv6_31))) {
        output_states_49_3_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_49_3_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_4_0_0_V_address0() {
    output_states_4_0_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4821_p1.read());
}

void quantize_activation::thread_output_states_4_0_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read())) {
        output_states_4_0_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_4_0_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_4_0_0_V_d0() {
    output_states_4_0_0_V_d0 = select_ln887_1_reg_5431.read();
}

void quantize_activation::thread_output_states_4_0_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5350.read(), ap_const_lv6_4))) {
        output_states_4_0_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_4_0_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_4_1_0_V_address0() {
    output_states_4_1_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4821_p1.read());
}

void quantize_activation::thread_output_states_4_1_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read())) {
        output_states_4_1_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_4_1_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_4_1_0_V_d0() {
    output_states_4_1_0_V_d0 = select_ln887_3_reg_5499.read();
}

void quantize_activation::thread_output_states_4_1_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5350.read(), ap_const_lv6_4))) {
        output_states_4_1_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_4_1_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_4_2_0_V_address0() {
    output_states_4_2_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4821_p1.read());
}

void quantize_activation::thread_output_states_4_2_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read())) {
        output_states_4_2_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_4_2_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_4_2_0_V_d0() {
    output_states_4_2_0_V_d0 = select_ln887_5_fu_5107_p3.read();
}

void quantize_activation::thread_output_states_4_2_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5350.read(), ap_const_lv6_4))) {
        output_states_4_2_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_4_2_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_4_3_0_V_address0() {
    output_states_4_3_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4821_p1.read());
}

void quantize_activation::thread_output_states_4_3_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read())) {
        output_states_4_3_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_4_3_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_4_3_0_V_d0() {
    output_states_4_3_0_V_d0 = select_ln887_7_fu_5206_p3.read();
}

void quantize_activation::thread_output_states_4_3_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5350.read(), ap_const_lv6_4))) {
        output_states_4_3_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_4_3_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_50_0_0_V_address0() {
    output_states_50_0_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4821_p1.read());
}

void quantize_activation::thread_output_states_50_0_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read())) {
        output_states_50_0_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_50_0_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_50_0_0_V_d0() {
    output_states_50_0_0_V_d0 = select_ln887_1_reg_5431.read();
}

void quantize_activation::thread_output_states_50_0_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5350.read(), ap_const_lv6_32))) {
        output_states_50_0_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_50_0_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_50_1_0_V_address0() {
    output_states_50_1_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4821_p1.read());
}

void quantize_activation::thread_output_states_50_1_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read())) {
        output_states_50_1_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_50_1_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_50_1_0_V_d0() {
    output_states_50_1_0_V_d0 = select_ln887_3_reg_5499.read();
}

void quantize_activation::thread_output_states_50_1_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5350.read(), ap_const_lv6_32))) {
        output_states_50_1_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_50_1_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_50_2_0_V_address0() {
    output_states_50_2_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4821_p1.read());
}

void quantize_activation::thread_output_states_50_2_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read())) {
        output_states_50_2_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_50_2_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_50_2_0_V_d0() {
    output_states_50_2_0_V_d0 = select_ln887_5_fu_5107_p3.read();
}

void quantize_activation::thread_output_states_50_2_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5350.read(), ap_const_lv6_32))) {
        output_states_50_2_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_50_2_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_50_3_0_V_address0() {
    output_states_50_3_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4821_p1.read());
}

void quantize_activation::thread_output_states_50_3_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read())) {
        output_states_50_3_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_50_3_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_50_3_0_V_d0() {
    output_states_50_3_0_V_d0 = select_ln887_7_fu_5206_p3.read();
}

void quantize_activation::thread_output_states_50_3_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5350.read(), ap_const_lv6_32))) {
        output_states_50_3_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_50_3_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_51_0_0_V_address0() {
    output_states_51_0_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4821_p1.read());
}

void quantize_activation::thread_output_states_51_0_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read())) {
        output_states_51_0_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_51_0_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_51_0_0_V_d0() {
    output_states_51_0_0_V_d0 = select_ln887_1_reg_5431.read();
}

void quantize_activation::thread_output_states_51_0_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5350.read(), ap_const_lv6_33))) {
        output_states_51_0_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_51_0_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_51_1_0_V_address0() {
    output_states_51_1_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4821_p1.read());
}

void quantize_activation::thread_output_states_51_1_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read())) {
        output_states_51_1_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_51_1_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_51_1_0_V_d0() {
    output_states_51_1_0_V_d0 = select_ln887_3_reg_5499.read();
}

void quantize_activation::thread_output_states_51_1_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5350.read(), ap_const_lv6_33))) {
        output_states_51_1_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_51_1_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_51_2_0_V_address0() {
    output_states_51_2_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4821_p1.read());
}

void quantize_activation::thread_output_states_51_2_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read())) {
        output_states_51_2_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_51_2_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_51_2_0_V_d0() {
    output_states_51_2_0_V_d0 = select_ln887_5_fu_5107_p3.read();
}

void quantize_activation::thread_output_states_51_2_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5350.read(), ap_const_lv6_33))) {
        output_states_51_2_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_51_2_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_51_3_0_V_address0() {
    output_states_51_3_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4821_p1.read());
}

void quantize_activation::thread_output_states_51_3_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read())) {
        output_states_51_3_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_51_3_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_51_3_0_V_d0() {
    output_states_51_3_0_V_d0 = select_ln887_7_fu_5206_p3.read();
}

void quantize_activation::thread_output_states_51_3_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5350.read(), ap_const_lv6_33))) {
        output_states_51_3_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_51_3_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_52_0_0_V_address0() {
    output_states_52_0_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4821_p1.read());
}

void quantize_activation::thread_output_states_52_0_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read())) {
        output_states_52_0_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_52_0_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_52_0_0_V_d0() {
    output_states_52_0_0_V_d0 = select_ln887_1_reg_5431.read();
}

void quantize_activation::thread_output_states_52_0_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5350.read(), ap_const_lv6_34))) {
        output_states_52_0_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_52_0_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_52_1_0_V_address0() {
    output_states_52_1_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4821_p1.read());
}

void quantize_activation::thread_output_states_52_1_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read())) {
        output_states_52_1_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_52_1_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_52_1_0_V_d0() {
    output_states_52_1_0_V_d0 = select_ln887_3_reg_5499.read();
}

void quantize_activation::thread_output_states_52_1_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5350.read(), ap_const_lv6_34))) {
        output_states_52_1_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_52_1_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_52_2_0_V_address0() {
    output_states_52_2_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4821_p1.read());
}

void quantize_activation::thread_output_states_52_2_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read())) {
        output_states_52_2_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_52_2_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_52_2_0_V_d0() {
    output_states_52_2_0_V_d0 = select_ln887_5_fu_5107_p3.read();
}

void quantize_activation::thread_output_states_52_2_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5350.read(), ap_const_lv6_34))) {
        output_states_52_2_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_52_2_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_52_3_0_V_address0() {
    output_states_52_3_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4821_p1.read());
}

void quantize_activation::thread_output_states_52_3_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read())) {
        output_states_52_3_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_52_3_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_52_3_0_V_d0() {
    output_states_52_3_0_V_d0 = select_ln887_7_fu_5206_p3.read();
}

void quantize_activation::thread_output_states_52_3_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5350.read(), ap_const_lv6_34))) {
        output_states_52_3_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_52_3_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_53_0_0_V_address0() {
    output_states_53_0_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4821_p1.read());
}

void quantize_activation::thread_output_states_53_0_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read())) {
        output_states_53_0_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_53_0_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_53_0_0_V_d0() {
    output_states_53_0_0_V_d0 = select_ln887_1_reg_5431.read();
}

void quantize_activation::thread_output_states_53_0_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5350.read(), ap_const_lv6_35))) {
        output_states_53_0_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_53_0_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_53_1_0_V_address0() {
    output_states_53_1_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4821_p1.read());
}

void quantize_activation::thread_output_states_53_1_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read())) {
        output_states_53_1_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_53_1_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_53_1_0_V_d0() {
    output_states_53_1_0_V_d0 = select_ln887_3_reg_5499.read();
}

void quantize_activation::thread_output_states_53_1_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5350.read(), ap_const_lv6_35))) {
        output_states_53_1_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_53_1_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_53_2_0_V_address0() {
    output_states_53_2_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4821_p1.read());
}

void quantize_activation::thread_output_states_53_2_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read())) {
        output_states_53_2_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_53_2_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_53_2_0_V_d0() {
    output_states_53_2_0_V_d0 = select_ln887_5_fu_5107_p3.read();
}

void quantize_activation::thread_output_states_53_2_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5350.read(), ap_const_lv6_35))) {
        output_states_53_2_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_53_2_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_53_3_0_V_address0() {
    output_states_53_3_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4821_p1.read());
}

void quantize_activation::thread_output_states_53_3_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read())) {
        output_states_53_3_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_53_3_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_53_3_0_V_d0() {
    output_states_53_3_0_V_d0 = select_ln887_7_fu_5206_p3.read();
}

void quantize_activation::thread_output_states_53_3_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5350.read(), ap_const_lv6_35))) {
        output_states_53_3_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_53_3_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_54_0_0_V_address0() {
    output_states_54_0_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4821_p1.read());
}

void quantize_activation::thread_output_states_54_0_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read())) {
        output_states_54_0_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_54_0_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_54_0_0_V_d0() {
    output_states_54_0_0_V_d0 = select_ln887_1_reg_5431.read();
}

void quantize_activation::thread_output_states_54_0_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5350.read(), ap_const_lv6_36))) {
        output_states_54_0_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_54_0_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_54_1_0_V_address0() {
    output_states_54_1_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4821_p1.read());
}

void quantize_activation::thread_output_states_54_1_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read())) {
        output_states_54_1_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_54_1_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_54_1_0_V_d0() {
    output_states_54_1_0_V_d0 = select_ln887_3_reg_5499.read();
}

void quantize_activation::thread_output_states_54_1_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5350.read(), ap_const_lv6_36))) {
        output_states_54_1_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_54_1_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_54_2_0_V_address0() {
    output_states_54_2_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4821_p1.read());
}

void quantize_activation::thread_output_states_54_2_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read())) {
        output_states_54_2_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_54_2_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_54_2_0_V_d0() {
    output_states_54_2_0_V_d0 = select_ln887_5_fu_5107_p3.read();
}

void quantize_activation::thread_output_states_54_2_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5350.read(), ap_const_lv6_36))) {
        output_states_54_2_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_54_2_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_54_3_0_V_address0() {
    output_states_54_3_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4821_p1.read());
}

void quantize_activation::thread_output_states_54_3_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read())) {
        output_states_54_3_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_54_3_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_54_3_0_V_d0() {
    output_states_54_3_0_V_d0 = select_ln887_7_fu_5206_p3.read();
}

void quantize_activation::thread_output_states_54_3_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5350.read(), ap_const_lv6_36))) {
        output_states_54_3_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_54_3_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_55_0_0_V_address0() {
    output_states_55_0_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4821_p1.read());
}

void quantize_activation::thread_output_states_55_0_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read())) {
        output_states_55_0_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_55_0_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_55_0_0_V_d0() {
    output_states_55_0_0_V_d0 = select_ln887_1_reg_5431.read();
}

void quantize_activation::thread_output_states_55_0_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5350.read(), ap_const_lv6_37))) {
        output_states_55_0_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_55_0_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_55_1_0_V_address0() {
    output_states_55_1_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4821_p1.read());
}

void quantize_activation::thread_output_states_55_1_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read())) {
        output_states_55_1_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_55_1_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_55_1_0_V_d0() {
    output_states_55_1_0_V_d0 = select_ln887_3_reg_5499.read();
}

void quantize_activation::thread_output_states_55_1_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5350.read(), ap_const_lv6_37))) {
        output_states_55_1_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_55_1_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_55_2_0_V_address0() {
    output_states_55_2_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4821_p1.read());
}

void quantize_activation::thread_output_states_55_2_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read())) {
        output_states_55_2_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_55_2_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_55_2_0_V_d0() {
    output_states_55_2_0_V_d0 = select_ln887_5_fu_5107_p3.read();
}

void quantize_activation::thread_output_states_55_2_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5350.read(), ap_const_lv6_37))) {
        output_states_55_2_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_55_2_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_55_3_0_V_address0() {
    output_states_55_3_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4821_p1.read());
}

void quantize_activation::thread_output_states_55_3_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read())) {
        output_states_55_3_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_55_3_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_55_3_0_V_d0() {
    output_states_55_3_0_V_d0 = select_ln887_7_fu_5206_p3.read();
}

void quantize_activation::thread_output_states_55_3_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5350.read(), ap_const_lv6_37))) {
        output_states_55_3_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_55_3_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_56_0_0_V_address0() {
    output_states_56_0_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4821_p1.read());
}

void quantize_activation::thread_output_states_56_0_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read())) {
        output_states_56_0_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_56_0_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_56_0_0_V_d0() {
    output_states_56_0_0_V_d0 = select_ln887_1_reg_5431.read();
}

void quantize_activation::thread_output_states_56_0_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5350.read(), ap_const_lv6_38))) {
        output_states_56_0_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_56_0_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_56_1_0_V_address0() {
    output_states_56_1_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4821_p1.read());
}

void quantize_activation::thread_output_states_56_1_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read())) {
        output_states_56_1_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_56_1_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_56_1_0_V_d0() {
    output_states_56_1_0_V_d0 = select_ln887_3_reg_5499.read();
}

void quantize_activation::thread_output_states_56_1_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5350.read(), ap_const_lv6_38))) {
        output_states_56_1_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_56_1_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_56_2_0_V_address0() {
    output_states_56_2_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4821_p1.read());
}

void quantize_activation::thread_output_states_56_2_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read())) {
        output_states_56_2_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_56_2_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_56_2_0_V_d0() {
    output_states_56_2_0_V_d0 = select_ln887_5_fu_5107_p3.read();
}

void quantize_activation::thread_output_states_56_2_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5350.read(), ap_const_lv6_38))) {
        output_states_56_2_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_56_2_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_56_3_0_V_address0() {
    output_states_56_3_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4821_p1.read());
}

void quantize_activation::thread_output_states_56_3_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read())) {
        output_states_56_3_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_56_3_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_56_3_0_V_d0() {
    output_states_56_3_0_V_d0 = select_ln887_7_fu_5206_p3.read();
}

void quantize_activation::thread_output_states_56_3_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5350.read(), ap_const_lv6_38))) {
        output_states_56_3_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_56_3_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_57_0_0_V_address0() {
    output_states_57_0_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4821_p1.read());
}

void quantize_activation::thread_output_states_57_0_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read())) {
        output_states_57_0_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_57_0_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_57_0_0_V_d0() {
    output_states_57_0_0_V_d0 = select_ln887_1_reg_5431.read();
}

void quantize_activation::thread_output_states_57_0_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5350.read(), ap_const_lv6_39))) {
        output_states_57_0_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_57_0_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_57_1_0_V_address0() {
    output_states_57_1_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4821_p1.read());
}

void quantize_activation::thread_output_states_57_1_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read())) {
        output_states_57_1_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_57_1_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_57_1_0_V_d0() {
    output_states_57_1_0_V_d0 = select_ln887_3_reg_5499.read();
}

void quantize_activation::thread_output_states_57_1_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5350.read(), ap_const_lv6_39))) {
        output_states_57_1_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_57_1_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_57_2_0_V_address0() {
    output_states_57_2_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4821_p1.read());
}

void quantize_activation::thread_output_states_57_2_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read())) {
        output_states_57_2_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_57_2_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_57_2_0_V_d0() {
    output_states_57_2_0_V_d0 = select_ln887_5_fu_5107_p3.read();
}

void quantize_activation::thread_output_states_57_2_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5350.read(), ap_const_lv6_39))) {
        output_states_57_2_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_57_2_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_57_3_0_V_address0() {
    output_states_57_3_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4821_p1.read());
}

void quantize_activation::thread_output_states_57_3_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read())) {
        output_states_57_3_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_57_3_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_57_3_0_V_d0() {
    output_states_57_3_0_V_d0 = select_ln887_7_fu_5206_p3.read();
}

void quantize_activation::thread_output_states_57_3_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5350.read(), ap_const_lv6_39))) {
        output_states_57_3_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_57_3_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_58_0_0_V_address0() {
    output_states_58_0_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4821_p1.read());
}

void quantize_activation::thread_output_states_58_0_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read())) {
        output_states_58_0_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_58_0_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_58_0_0_V_d0() {
    output_states_58_0_0_V_d0 = select_ln887_1_reg_5431.read();
}

void quantize_activation::thread_output_states_58_0_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5350.read(), ap_const_lv6_3A))) {
        output_states_58_0_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_58_0_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_58_1_0_V_address0() {
    output_states_58_1_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4821_p1.read());
}

void quantize_activation::thread_output_states_58_1_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read())) {
        output_states_58_1_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_58_1_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_58_1_0_V_d0() {
    output_states_58_1_0_V_d0 = select_ln887_3_reg_5499.read();
}

void quantize_activation::thread_output_states_58_1_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5350.read(), ap_const_lv6_3A))) {
        output_states_58_1_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_58_1_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_58_2_0_V_address0() {
    output_states_58_2_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4821_p1.read());
}

void quantize_activation::thread_output_states_58_2_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read())) {
        output_states_58_2_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_58_2_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_58_2_0_V_d0() {
    output_states_58_2_0_V_d0 = select_ln887_5_fu_5107_p3.read();
}

void quantize_activation::thread_output_states_58_2_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5350.read(), ap_const_lv6_3A))) {
        output_states_58_2_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_58_2_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_58_3_0_V_address0() {
    output_states_58_3_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4821_p1.read());
}

void quantize_activation::thread_output_states_58_3_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read())) {
        output_states_58_3_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_58_3_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_58_3_0_V_d0() {
    output_states_58_3_0_V_d0 = select_ln887_7_fu_5206_p3.read();
}

void quantize_activation::thread_output_states_58_3_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5350.read(), ap_const_lv6_3A))) {
        output_states_58_3_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_58_3_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_59_0_0_V_address0() {
    output_states_59_0_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4821_p1.read());
}

void quantize_activation::thread_output_states_59_0_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read())) {
        output_states_59_0_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_59_0_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_59_0_0_V_d0() {
    output_states_59_0_0_V_d0 = select_ln887_1_reg_5431.read();
}

void quantize_activation::thread_output_states_59_0_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5350.read(), ap_const_lv6_3B))) {
        output_states_59_0_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_59_0_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_59_1_0_V_address0() {
    output_states_59_1_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4821_p1.read());
}

void quantize_activation::thread_output_states_59_1_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read())) {
        output_states_59_1_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_59_1_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_59_1_0_V_d0() {
    output_states_59_1_0_V_d0 = select_ln887_3_reg_5499.read();
}

void quantize_activation::thread_output_states_59_1_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5350.read(), ap_const_lv6_3B))) {
        output_states_59_1_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_59_1_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_59_2_0_V_address0() {
    output_states_59_2_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4821_p1.read());
}

void quantize_activation::thread_output_states_59_2_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read())) {
        output_states_59_2_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_59_2_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_59_2_0_V_d0() {
    output_states_59_2_0_V_d0 = select_ln887_5_fu_5107_p3.read();
}

void quantize_activation::thread_output_states_59_2_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5350.read(), ap_const_lv6_3B))) {
        output_states_59_2_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_59_2_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_59_3_0_V_address0() {
    output_states_59_3_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4821_p1.read());
}

void quantize_activation::thread_output_states_59_3_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read())) {
        output_states_59_3_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_59_3_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_59_3_0_V_d0() {
    output_states_59_3_0_V_d0 = select_ln887_7_fu_5206_p3.read();
}

void quantize_activation::thread_output_states_59_3_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5350.read(), ap_const_lv6_3B))) {
        output_states_59_3_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_59_3_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_5_0_0_V_address0() {
    output_states_5_0_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4821_p1.read());
}

void quantize_activation::thread_output_states_5_0_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read())) {
        output_states_5_0_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_5_0_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_5_0_0_V_d0() {
    output_states_5_0_0_V_d0 = select_ln887_1_reg_5431.read();
}

void quantize_activation::thread_output_states_5_0_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5350.read(), ap_const_lv6_5))) {
        output_states_5_0_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_5_0_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_5_1_0_V_address0() {
    output_states_5_1_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4821_p1.read());
}

void quantize_activation::thread_output_states_5_1_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read())) {
        output_states_5_1_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_5_1_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_5_1_0_V_d0() {
    output_states_5_1_0_V_d0 = select_ln887_3_reg_5499.read();
}

void quantize_activation::thread_output_states_5_1_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5350.read(), ap_const_lv6_5))) {
        output_states_5_1_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_5_1_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_5_2_0_V_address0() {
    output_states_5_2_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4821_p1.read());
}

void quantize_activation::thread_output_states_5_2_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read())) {
        output_states_5_2_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_5_2_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_5_2_0_V_d0() {
    output_states_5_2_0_V_d0 = select_ln887_5_fu_5107_p3.read();
}

void quantize_activation::thread_output_states_5_2_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5350.read(), ap_const_lv6_5))) {
        output_states_5_2_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_5_2_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_5_3_0_V_address0() {
    output_states_5_3_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4821_p1.read());
}

void quantize_activation::thread_output_states_5_3_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read())) {
        output_states_5_3_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_5_3_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_5_3_0_V_d0() {
    output_states_5_3_0_V_d0 = select_ln887_7_fu_5206_p3.read();
}

void quantize_activation::thread_output_states_5_3_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5350.read(), ap_const_lv6_5))) {
        output_states_5_3_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_5_3_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_60_0_0_V_address0() {
    output_states_60_0_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4821_p1.read());
}

void quantize_activation::thread_output_states_60_0_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read())) {
        output_states_60_0_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_60_0_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_60_0_0_V_d0() {
    output_states_60_0_0_V_d0 = select_ln887_1_reg_5431.read();
}

void quantize_activation::thread_output_states_60_0_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5350.read(), ap_const_lv6_3C))) {
        output_states_60_0_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_60_0_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_60_1_0_V_address0() {
    output_states_60_1_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4821_p1.read());
}

void quantize_activation::thread_output_states_60_1_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read())) {
        output_states_60_1_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_60_1_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_60_1_0_V_d0() {
    output_states_60_1_0_V_d0 = select_ln887_3_reg_5499.read();
}

void quantize_activation::thread_output_states_60_1_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5350.read(), ap_const_lv6_3C))) {
        output_states_60_1_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_60_1_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_60_2_0_V_address0() {
    output_states_60_2_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4821_p1.read());
}

void quantize_activation::thread_output_states_60_2_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read())) {
        output_states_60_2_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_60_2_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_60_2_0_V_d0() {
    output_states_60_2_0_V_d0 = select_ln887_5_fu_5107_p3.read();
}

void quantize_activation::thread_output_states_60_2_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5350.read(), ap_const_lv6_3C))) {
        output_states_60_2_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_60_2_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_60_3_0_V_address0() {
    output_states_60_3_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4821_p1.read());
}

void quantize_activation::thread_output_states_60_3_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read())) {
        output_states_60_3_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_60_3_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_60_3_0_V_d0() {
    output_states_60_3_0_V_d0 = select_ln887_7_fu_5206_p3.read();
}

void quantize_activation::thread_output_states_60_3_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5350.read(), ap_const_lv6_3C))) {
        output_states_60_3_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_60_3_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_61_0_0_V_address0() {
    output_states_61_0_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4821_p1.read());
}

void quantize_activation::thread_output_states_61_0_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read())) {
        output_states_61_0_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_61_0_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_61_0_0_V_d0() {
    output_states_61_0_0_V_d0 = select_ln887_1_reg_5431.read();
}

void quantize_activation::thread_output_states_61_0_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5350.read(), ap_const_lv6_3D))) {
        output_states_61_0_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_61_0_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_61_1_0_V_address0() {
    output_states_61_1_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4821_p1.read());
}

void quantize_activation::thread_output_states_61_1_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read())) {
        output_states_61_1_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_61_1_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_61_1_0_V_d0() {
    output_states_61_1_0_V_d0 = select_ln887_3_reg_5499.read();
}

void quantize_activation::thread_output_states_61_1_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5350.read(), ap_const_lv6_3D))) {
        output_states_61_1_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_61_1_0_V_we0 = ap_const_logic_0;
    }
}

}


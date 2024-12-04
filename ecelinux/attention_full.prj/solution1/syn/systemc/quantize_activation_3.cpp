#include "quantize_activation.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void quantize_activation::thread_add_ln67_1_fu_4462_p2() {
    add_ln67_1_fu_4462_p2 = (!select_ln67_1_fu_4454_p3.read().is_01() || !p_Val2_17_reg_5356.read().is_01())? sc_lv<40>(): (sc_biguint<40>(select_ln67_1_fu_4454_p3.read()) + sc_biguint<40>(p_Val2_17_reg_5356.read()));
}

void quantize_activation::thread_add_ln67_2_fu_4648_p2() {
    add_ln67_2_fu_4648_p2 = (!select_ln67_2_fu_4640_p3.read().is_01() || !p_Val2_18_reg_5384.read().is_01())? sc_lv<40>(): (sc_biguint<40>(select_ln67_2_fu_4640_p3.read()) + sc_biguint<40>(p_Val2_18_reg_5384.read()));
}

void quantize_activation::thread_add_ln67_3_fu_4726_p2() {
    add_ln67_3_fu_4726_p2 = (!select_ln67_3_fu_4718_p3.read().is_01() || !p_Val2_19_reg_5390.read().is_01())? sc_lv<40>(): (sc_biguint<40>(select_ln67_3_fu_4718_p3.read()) + sc_biguint<40>(p_Val2_19_reg_5390.read()));
}

void quantize_activation::thread_add_ln67_fu_4384_p2() {
    add_ln67_fu_4384_p2 = (!select_ln67_fu_4376_p3.read().is_01() || !p_Val2_9_reg_5350.read().is_01())? sc_lv<40>(): (sc_biguint<40>(select_ln67_fu_4376_p3.read()) + sc_biguint<40>(p_Val2_9_reg_5350.read()));
}

void quantize_activation::thread_add_ln700_1_fu_4495_p2() {
    add_ln700_1_fu_4495_p2 = (!ap_const_lv24_1.is_01() || !p_Result_0_1_fu_4467_p4.read().is_01())? sc_lv<24>(): (sc_biguint<24>(ap_const_lv24_1) + sc_biguint<24>(p_Result_0_1_fu_4467_p4.read()));
}

void quantize_activation::thread_add_ln700_2_fu_4681_p2() {
    add_ln700_2_fu_4681_p2 = (!ap_const_lv24_1.is_01() || !p_Result_0_2_fu_4653_p4.read().is_01())? sc_lv<24>(): (sc_biguint<24>(ap_const_lv24_1) + sc_biguint<24>(p_Result_0_2_fu_4653_p4.read()));
}

void quantize_activation::thread_add_ln700_3_fu_4759_p2() {
    add_ln700_3_fu_4759_p2 = (!ap_const_lv24_1.is_01() || !p_Result_0_3_fu_4731_p4.read().is_01())? sc_lv<24>(): (sc_biguint<24>(ap_const_lv24_1) + sc_biguint<24>(p_Result_0_3_fu_4731_p4.read()));
}

void quantize_activation::thread_add_ln700_fu_4417_p2() {
    add_ln700_fu_4417_p2 = (!ap_const_lv24_1.is_01() || !p_Result_s_fu_4389_p4.read().is_01())? sc_lv<24>(): (sc_biguint<24>(ap_const_lv24_1) + sc_biguint<24>(p_Result_s_fu_4389_p4.read()));
}

void quantize_activation::thread_add_ln87_fu_4206_p2() {
    add_ln87_fu_4206_p2 = (!j_0_0_reg_4130.read().is_01() || !ap_const_lv11_1.is_01())? sc_lv<11>(): (sc_biguint<11>(j_0_0_reg_4130.read()) + sc_biguint<11>(ap_const_lv11_1));
}

void quantize_activation::thread_add_ln94_fu_4240_p2() {
    add_ln94_fu_4240_p2 = (!jo_0_0_reg_4141.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(jo_0_0_reg_4141.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void quantize_activation::thread_add_ln95_fu_4264_p2() {
    add_ln95_fu_4264_p2 = (!ji_0_0_reg_4152.read().is_01() || !ap_const_lv7_1.is_01())? sc_lv<7>(): (sc_biguint<7>(ji_0_0_reg_4152.read()) + sc_biguint<7>(ap_const_lv7_1));
}

void quantize_activation::thread_add_ln96_fu_4274_p2() {
    add_ln96_fu_4274_p2 = (!shl_ln_reg_5302.read().is_01() || !zext_ln95_fu_4254_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(shl_ln_reg_5302.read()) + sc_biguint<9>(zext_ln95_fu_4254_p1.read()));
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

void quantize_activation::thread_ap_CS_fsm_state49() {
    ap_CS_fsm_state49 = ap_CS_fsm.read()[48];
}

void quantize_activation::thread_ap_CS_fsm_state5() {
    ap_CS_fsm_state5 = ap_CS_fsm.read()[4];
}

void quantize_activation::thread_ap_CS_fsm_state50() {
    ap_CS_fsm_state50 = ap_CS_fsm.read()[49];
}

void quantize_activation::thread_ap_CS_fsm_state51() {
    ap_CS_fsm_state51 = ap_CS_fsm.read()[50];
}

void quantize_activation::thread_ap_CS_fsm_state52() {
    ap_CS_fsm_state52 = ap_CS_fsm.read()[51];
}

void quantize_activation::thread_ap_CS_fsm_state53() {
    ap_CS_fsm_state53 = ap_CS_fsm.read()[52];
}

void quantize_activation::thread_ap_CS_fsm_state54() {
    ap_CS_fsm_state54 = ap_CS_fsm.read()[53];
}

void quantize_activation::thread_ap_CS_fsm_state55() {
    ap_CS_fsm_state55 = ap_CS_fsm.read()[54];
}

void quantize_activation::thread_ap_CS_fsm_state56() {
    ap_CS_fsm_state56 = ap_CS_fsm.read()[55];
}

void quantize_activation::thread_ap_CS_fsm_state6() {
    ap_CS_fsm_state6 = ap_CS_fsm.read()[5];
}

void quantize_activation::thread_ap_done() {
    if (((esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) && 
          esl_seteq<1,1,1>(icmp_ln94_fu_4234_p2.read(), ap_const_lv1_1)))) {
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
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) && 
         esl_seteq<1,1,1>(icmp_ln94_fu_4234_p2.read(), ap_const_lv1_1))) {
        ap_ready = ap_const_logic_1;
    } else {
        ap_ready = ap_const_logic_0;
    }
}

void quantize_activation::thread_ap_return() {
    ap_return = udiv_ln1148_reg_5282.read();
}

void quantize_activation::thread_grp_fu_4163_p3() {
    grp_fu_4163_p3 = input_0_V_q0.read().range(39, 39);
}

void quantize_activation::thread_grp_fu_4171_p2() {
    grp_fu_4171_p2 = (!ap_const_lv40_0.is_01() || !input_0_V_q0.read().is_01())? sc_lv<40>(): (sc_biguint<40>(ap_const_lv40_0) - sc_biguint<40>(input_0_V_q0.read()));
}

void quantize_activation::thread_grp_fu_4177_p3() {
    grp_fu_4177_p3 = (!grp_fu_4163_p3.read()[0].is_01())? sc_lv<40>(): ((grp_fu_4163_p3.read()[0].to_bool())? grp_fu_4171_p2.read(): input_0_V_q0.read());
}

void quantize_activation::thread_grp_fu_4212_ap_start() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(icmp_ln87_fu_4195_p2.read(), ap_const_lv1_1))) {
        grp_fu_4212_ap_start = ap_const_logic_1;
    } else {
        grp_fu_4212_ap_start = ap_const_logic_0;
    }
}

void quantize_activation::thread_icmp_ln1494_26_fu_4371_p2() {
    icmp_ln1494_26_fu_4371_p2 = (!p_Val2_9_reg_5350.read().is_01() || !ap_const_lv40_0.is_01())? sc_lv<1>(): (sc_bigint<40>(p_Val2_9_reg_5350.read()) > sc_bigint<40>(ap_const_lv40_0));
}

void quantize_activation::thread_icmp_ln1494_27_fu_4449_p2() {
    icmp_ln1494_27_fu_4449_p2 = (!p_Val2_17_reg_5356.read().is_01() || !ap_const_lv40_0.is_01())? sc_lv<1>(): (sc_bigint<40>(p_Val2_17_reg_5356.read()) > sc_bigint<40>(ap_const_lv40_0));
}

void quantize_activation::thread_icmp_ln1494_28_fu_4635_p2() {
    icmp_ln1494_28_fu_4635_p2 = (!p_Val2_18_reg_5384.read().is_01() || !ap_const_lv40_0.is_01())? sc_lv<1>(): (sc_bigint<40>(p_Val2_18_reg_5384.read()) > sc_bigint<40>(ap_const_lv40_0));
}

void quantize_activation::thread_icmp_ln1494_29_fu_4713_p2() {
    icmp_ln1494_29_fu_4713_p2 = (!p_Val2_19_reg_5390.read().is_01() || !ap_const_lv40_0.is_01())? sc_lv<1>(): (sc_bigint<40>(p_Val2_19_reg_5390.read()) > sc_bigint<40>(ap_const_lv40_0));
}

void quantize_activation::thread_icmp_ln1494_fu_4218_p2() {
    icmp_ln1494_fu_4218_p2 = (!p_Val2_15_reg_5271.read().is_01() || !max_val_V_0_0_reg_4120.read().is_01())? sc_lv<1>(): (sc_bigint<40>(p_Val2_15_reg_5271.read()) > sc_bigint<40>(max_val_V_0_0_reg_4120.read()));
}

void quantize_activation::thread_icmp_ln851_1_fu_4489_p2() {
    icmp_ln851_1_fu_4489_p2 = (!trunc_ln851_1_fu_4485_p1.read().is_01() || !ap_const_lv16_0.is_01())? sc_lv<1>(): sc_lv<1>(trunc_ln851_1_fu_4485_p1.read() == ap_const_lv16_0);
}

void quantize_activation::thread_icmp_ln851_2_fu_4675_p2() {
    icmp_ln851_2_fu_4675_p2 = (!trunc_ln851_2_fu_4671_p1.read().is_01() || !ap_const_lv16_0.is_01())? sc_lv<1>(): sc_lv<1>(trunc_ln851_2_fu_4671_p1.read() == ap_const_lv16_0);
}

void quantize_activation::thread_icmp_ln851_3_fu_4753_p2() {
    icmp_ln851_3_fu_4753_p2 = (!trunc_ln851_3_fu_4749_p1.read().is_01() || !ap_const_lv16_0.is_01())? sc_lv<1>(): sc_lv<1>(trunc_ln851_3_fu_4749_p1.read() == ap_const_lv16_0);
}

void quantize_activation::thread_icmp_ln851_fu_4411_p2() {
    icmp_ln851_fu_4411_p2 = (!trunc_ln851_fu_4407_p1.read().is_01() || !ap_const_lv16_0.is_01())? sc_lv<1>(): sc_lv<1>(trunc_ln851_fu_4407_p1.read() == ap_const_lv16_0);
}

void quantize_activation::thread_icmp_ln87_fu_4195_p2() {
    icmp_ln87_fu_4195_p2 = (!j_0_0_reg_4130.read().is_01() || !ap_const_lv11_600.is_01())? sc_lv<1>(): sc_lv<1>(j_0_0_reg_4130.read() == ap_const_lv11_600);
}

void quantize_activation::thread_icmp_ln887_1_fu_4600_p2() {
    icmp_ln887_1_fu_4600_p2 = (!select_ln850_1_reg_5373.read().is_01() || !ap_const_lv24_FFFF80.is_01())? sc_lv<1>(): (sc_bigint<24>(select_ln850_1_reg_5373.read()) < sc_bigint<24>(ap_const_lv24_FFFF80));
}

void quantize_activation::thread_icmp_ln887_2_fu_5050_p2() {
    icmp_ln887_2_fu_5050_p2 = (!select_ln850_2_reg_5532.read().is_01() || !ap_const_lv24_FFFF80.is_01())? sc_lv<1>(): (sc_bigint<24>(select_ln850_2_reg_5532.read()) < sc_bigint<24>(ap_const_lv24_FFFF80));
}

void quantize_activation::thread_icmp_ln887_3_fu_5149_p2() {
    icmp_ln887_3_fu_5149_p2 = (!select_ln850_3_reg_5543.read().is_01() || !ap_const_lv24_FFFF80.is_01())? sc_lv<1>(): (sc_bigint<24>(select_ln850_3_reg_5543.read()) < sc_bigint<24>(ap_const_lv24_FFFF80));
}

void quantize_activation::thread_icmp_ln887_fu_4565_p2() {
    icmp_ln887_fu_4565_p2 = (!select_ln850_reg_5362.read().is_01() || !ap_const_lv24_FFFF80.is_01())? sc_lv<1>(): (sc_bigint<24>(select_ln850_reg_5362.read()) < sc_bigint<24>(ap_const_lv24_FFFF80));
}

void quantize_activation::thread_icmp_ln895_1_fu_4605_p2() {
    icmp_ln895_1_fu_4605_p2 = (!tmp_78_reg_5379.read().is_01() || !ap_const_lv17_0.is_01())? sc_lv<1>(): (sc_bigint<17>(tmp_78_reg_5379.read()) > sc_bigint<17>(ap_const_lv17_0));
}

void quantize_activation::thread_icmp_ln895_2_fu_5055_p2() {
    icmp_ln895_2_fu_5055_p2 = (!tmp_80_reg_5538.read().is_01() || !ap_const_lv17_0.is_01())? sc_lv<1>(): (sc_bigint<17>(tmp_80_reg_5538.read()) > sc_bigint<17>(ap_const_lv17_0));
}

void quantize_activation::thread_icmp_ln895_3_fu_5154_p2() {
    icmp_ln895_3_fu_5154_p2 = (!tmp_82_reg_5549.read().is_01() || !ap_const_lv17_0.is_01())? sc_lv<1>(): (sc_bigint<17>(tmp_82_reg_5549.read()) > sc_bigint<17>(ap_const_lv17_0));
}

void quantize_activation::thread_icmp_ln895_fu_4570_p2() {
    icmp_ln895_fu_4570_p2 = (!tmp_76_reg_5368.read().is_01() || !ap_const_lv17_0.is_01())? sc_lv<1>(): (sc_bigint<17>(tmp_76_reg_5368.read()) > sc_bigint<17>(ap_const_lv17_0));
}

void quantize_activation::thread_icmp_ln94_fu_4234_p2() {
    icmp_ln94_fu_4234_p2 = (!jo_0_0_reg_4141.read().is_01() || !ap_const_lv3_6.is_01())? sc_lv<1>(): sc_lv<1>(jo_0_0_reg_4141.read() == ap_const_lv3_6);
}

void quantize_activation::thread_icmp_ln95_fu_4258_p2() {
    icmp_ln95_fu_4258_p2 = (!ji_0_0_reg_4152.read().is_01() || !ap_const_lv7_40.is_01())? sc_lv<1>(): sc_lv<1>(ji_0_0_reg_4152.read() == ap_const_lv7_40);
}

void quantize_activation::thread_input_0_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state52.read())) {
        input_0_V_address0 =  (sc_lv<11>) (zext_ln98_3_fu_4328_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state51.read())) {
        input_0_V_address0 =  (sc_lv<11>) (zext_ln98_fu_4287_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        input_0_V_address0 =  (sc_lv<11>) (zext_ln88_fu_4201_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        input_0_V_address0 =  (sc_lv<11>) (ap_const_lv64_0);
    } else {
        input_0_V_address0 = "XXXXXXXXXXX";
    }
}

void quantize_activation::thread_input_0_V_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state52.read())) {
        input_0_V_address1 =  (sc_lv<11>) (zext_ln98_2_fu_4318_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state51.read())) {
        input_0_V_address1 =  (sc_lv<11>) (zext_ln98_1_fu_4308_p1.read());
    } else {
        input_0_V_address1 = "XXXXXXXXXXX";
    }
}

void quantize_activation::thread_input_0_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state52.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
          esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state51.read()))) {
        input_0_V_ce0 = ap_const_logic_1;
    } else {
        input_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_input_0_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state52.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state51.read()))) {
        input_0_V_ce1 = ap_const_logic_1;
    } else {
        input_0_V_ce1 = ap_const_logic_0;
    }
}

void quantize_activation::thread_mul_ln1118_1_fu_4356_p0() {
    mul_ln1118_1_fu_4356_p0 = reg_4190.read();
}

void quantize_activation::thread_mul_ln1118_1_fu_4356_p1() {
    mul_ln1118_1_fu_4356_p1 =  (sc_lv<40>) (zext_ln94_reg_5286.read());
}

void quantize_activation::thread_mul_ln1118_1_fu_4356_p2() {
    mul_ln1118_1_fu_4356_p2 = (!mul_ln1118_1_fu_4356_p0.read().is_01() || !mul_ln1118_1_fu_4356_p1.read().is_01())? sc_lv<56>(): sc_bigint<40>(mul_ln1118_1_fu_4356_p0.read()) * sc_biguint<40>(mul_ln1118_1_fu_4356_p1.read());
}

void quantize_activation::thread_mul_ln1118_2_fu_4531_p0() {
    mul_ln1118_2_fu_4531_p0 = reg_4185.read();
}

void quantize_activation::thread_mul_ln1118_2_fu_4531_p1() {
    mul_ln1118_2_fu_4531_p1 =  (sc_lv<40>) (zext_ln94_reg_5286.read());
}

void quantize_activation::thread_mul_ln1118_2_fu_4531_p2() {
    mul_ln1118_2_fu_4531_p2 = (!mul_ln1118_2_fu_4531_p0.read().is_01() || !mul_ln1118_2_fu_4531_p1.read().is_01())? sc_lv<56>(): sc_bigint<40>(mul_ln1118_2_fu_4531_p0.read()) * sc_biguint<40>(mul_ln1118_2_fu_4531_p1.read());
}

void quantize_activation::thread_mul_ln1118_3_fu_4550_p0() {
    mul_ln1118_3_fu_4550_p0 = reg_4190.read();
}

void quantize_activation::thread_mul_ln1118_3_fu_4550_p1() {
    mul_ln1118_3_fu_4550_p1 =  (sc_lv<40>) (zext_ln94_reg_5286.read());
}

void quantize_activation::thread_mul_ln1118_3_fu_4550_p2() {
    mul_ln1118_3_fu_4550_p2 = (!mul_ln1118_3_fu_4550_p0.read().is_01() || !mul_ln1118_3_fu_4550_p1.read().is_01())? sc_lv<56>(): sc_bigint<40>(mul_ln1118_3_fu_4550_p0.read()) * sc_biguint<40>(mul_ln1118_3_fu_4550_p1.read());
}

void quantize_activation::thread_mul_ln1118_fu_4337_p0() {
    mul_ln1118_fu_4337_p0 = reg_4185.read();
}

void quantize_activation::thread_mul_ln1118_fu_4337_p1() {
    mul_ln1118_fu_4337_p1 =  (sc_lv<40>) (zext_ln94_reg_5286.read());
}

void quantize_activation::thread_mul_ln1118_fu_4337_p2() {
    mul_ln1118_fu_4337_p2 = (!mul_ln1118_fu_4337_p0.read().is_01() || !mul_ln1118_fu_4337_p1.read().is_01())? sc_lv<56>(): sc_bigint<40>(mul_ln1118_fu_4337_p0.read()) * sc_biguint<40>(mul_ln1118_fu_4337_p1.read());
}

void quantize_activation::thread_or_ln887_1_fu_4621_p2() {
    or_ln887_1_fu_4621_p2 = (icmp_ln887_1_fu_4600_p2.read() | icmp_ln895_1_fu_4605_p2.read());
}

void quantize_activation::thread_or_ln887_2_fu_5071_p2() {
    or_ln887_2_fu_5071_p2 = (icmp_ln887_2_fu_5050_p2.read() | icmp_ln895_2_fu_5055_p2.read());
}

void quantize_activation::thread_or_ln887_3_fu_5170_p2() {
    or_ln887_3_fu_5170_p2 = (icmp_ln887_3_fu_5149_p2.read() | icmp_ln895_3_fu_5154_p2.read());
}

void quantize_activation::thread_or_ln887_fu_4586_p2() {
    or_ln887_fu_4586_p2 = (icmp_ln887_fu_4565_p2.read() | icmp_ln895_fu_4570_p2.read());
}

void quantize_activation::thread_or_ln98_1_fu_4313_p2() {
    or_ln98_1_fu_4313_p2 = (shl_ln1_reg_5319.read() | ap_const_lv11_2);
}

void quantize_activation::thread_or_ln98_2_fu_4323_p2() {
    or_ln98_2_fu_4323_p2 = (shl_ln1_reg_5319.read() | ap_const_lv11_3);
}

void quantize_activation::thread_or_ln98_fu_4302_p2() {
    or_ln98_fu_4302_p2 = (shl_ln1_fu_4279_p3.read() | ap_const_lv11_1);
}

void quantize_activation::thread_output_states_0_0_0_V_address0() {
    output_states_0_0_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4791_p1.read());
}

void quantize_activation::thread_output_states_0_0_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read())) {
        output_states_0_0_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_0_0_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_0_0_0_V_d0() {
    output_states_0_0_0_V_d0 = select_ln887_1_reg_5396.read();
}

void quantize_activation::thread_output_states_0_0_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5315.read(), ap_const_lv6_0))) {
        output_states_0_0_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_0_0_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_0_1_0_V_address0() {
    output_states_0_1_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4791_p1.read());
}

void quantize_activation::thread_output_states_0_1_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read())) {
        output_states_0_1_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_0_1_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_0_1_0_V_d0() {
    output_states_0_1_0_V_d0 = select_ln887_3_reg_5464.read();
}

void quantize_activation::thread_output_states_0_1_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5315.read(), ap_const_lv6_0))) {
        output_states_0_1_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_0_1_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_0_2_0_V_address0() {
    output_states_0_2_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4791_p1.read());
}

void quantize_activation::thread_output_states_0_2_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read())) {
        output_states_0_2_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_0_2_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_0_2_0_V_d0() {
    output_states_0_2_0_V_d0 = select_ln887_5_fu_5077_p3.read();
}

void quantize_activation::thread_output_states_0_2_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5315.read(), ap_const_lv6_0))) {
        output_states_0_2_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_0_2_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_0_3_0_V_address0() {
    output_states_0_3_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4791_p1.read());
}

void quantize_activation::thread_output_states_0_3_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read())) {
        output_states_0_3_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_0_3_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_0_3_0_V_d0() {
    output_states_0_3_0_V_d0 = select_ln887_7_fu_5176_p3.read();
}

void quantize_activation::thread_output_states_0_3_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5315.read(), ap_const_lv6_0))) {
        output_states_0_3_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_0_3_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_10_0_0_V_address0() {
    output_states_10_0_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4791_p1.read());
}

void quantize_activation::thread_output_states_10_0_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read())) {
        output_states_10_0_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_10_0_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_10_0_0_V_d0() {
    output_states_10_0_0_V_d0 = select_ln887_1_reg_5396.read();
}

void quantize_activation::thread_output_states_10_0_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5315.read(), ap_const_lv6_A))) {
        output_states_10_0_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_10_0_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_10_1_0_V_address0() {
    output_states_10_1_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4791_p1.read());
}

void quantize_activation::thread_output_states_10_1_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read())) {
        output_states_10_1_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_10_1_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_10_1_0_V_d0() {
    output_states_10_1_0_V_d0 = select_ln887_3_reg_5464.read();
}

void quantize_activation::thread_output_states_10_1_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5315.read(), ap_const_lv6_A))) {
        output_states_10_1_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_10_1_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_10_2_0_V_address0() {
    output_states_10_2_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4791_p1.read());
}

void quantize_activation::thread_output_states_10_2_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read())) {
        output_states_10_2_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_10_2_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_10_2_0_V_d0() {
    output_states_10_2_0_V_d0 = select_ln887_5_fu_5077_p3.read();
}

void quantize_activation::thread_output_states_10_2_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5315.read(), ap_const_lv6_A))) {
        output_states_10_2_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_10_2_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_10_3_0_V_address0() {
    output_states_10_3_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4791_p1.read());
}

void quantize_activation::thread_output_states_10_3_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read())) {
        output_states_10_3_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_10_3_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_10_3_0_V_d0() {
    output_states_10_3_0_V_d0 = select_ln887_7_fu_5176_p3.read();
}

void quantize_activation::thread_output_states_10_3_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5315.read(), ap_const_lv6_A))) {
        output_states_10_3_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_10_3_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_11_0_0_V_address0() {
    output_states_11_0_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4791_p1.read());
}

void quantize_activation::thread_output_states_11_0_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read())) {
        output_states_11_0_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_11_0_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_11_0_0_V_d0() {
    output_states_11_0_0_V_d0 = select_ln887_1_reg_5396.read();
}

void quantize_activation::thread_output_states_11_0_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5315.read(), ap_const_lv6_B))) {
        output_states_11_0_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_11_0_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_11_1_0_V_address0() {
    output_states_11_1_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4791_p1.read());
}

void quantize_activation::thread_output_states_11_1_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read())) {
        output_states_11_1_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_11_1_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_11_1_0_V_d0() {
    output_states_11_1_0_V_d0 = select_ln887_3_reg_5464.read();
}

void quantize_activation::thread_output_states_11_1_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5315.read(), ap_const_lv6_B))) {
        output_states_11_1_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_11_1_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_11_2_0_V_address0() {
    output_states_11_2_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4791_p1.read());
}

void quantize_activation::thread_output_states_11_2_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read())) {
        output_states_11_2_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_11_2_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_11_2_0_V_d0() {
    output_states_11_2_0_V_d0 = select_ln887_5_fu_5077_p3.read();
}

void quantize_activation::thread_output_states_11_2_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5315.read(), ap_const_lv6_B))) {
        output_states_11_2_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_11_2_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_11_3_0_V_address0() {
    output_states_11_3_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4791_p1.read());
}

void quantize_activation::thread_output_states_11_3_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read())) {
        output_states_11_3_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_11_3_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_11_3_0_V_d0() {
    output_states_11_3_0_V_d0 = select_ln887_7_fu_5176_p3.read();
}

void quantize_activation::thread_output_states_11_3_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5315.read(), ap_const_lv6_B))) {
        output_states_11_3_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_11_3_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_12_0_0_V_address0() {
    output_states_12_0_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4791_p1.read());
}

void quantize_activation::thread_output_states_12_0_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read())) {
        output_states_12_0_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_12_0_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_12_0_0_V_d0() {
    output_states_12_0_0_V_d0 = select_ln887_1_reg_5396.read();
}

void quantize_activation::thread_output_states_12_0_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5315.read(), ap_const_lv6_C))) {
        output_states_12_0_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_12_0_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_12_1_0_V_address0() {
    output_states_12_1_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4791_p1.read());
}

void quantize_activation::thread_output_states_12_1_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read())) {
        output_states_12_1_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_12_1_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_12_1_0_V_d0() {
    output_states_12_1_0_V_d0 = select_ln887_3_reg_5464.read();
}

void quantize_activation::thread_output_states_12_1_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5315.read(), ap_const_lv6_C))) {
        output_states_12_1_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_12_1_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_12_2_0_V_address0() {
    output_states_12_2_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4791_p1.read());
}

void quantize_activation::thread_output_states_12_2_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read())) {
        output_states_12_2_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_12_2_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_12_2_0_V_d0() {
    output_states_12_2_0_V_d0 = select_ln887_5_fu_5077_p3.read();
}

void quantize_activation::thread_output_states_12_2_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5315.read(), ap_const_lv6_C))) {
        output_states_12_2_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_12_2_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_12_3_0_V_address0() {
    output_states_12_3_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4791_p1.read());
}

void quantize_activation::thread_output_states_12_3_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read())) {
        output_states_12_3_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_12_3_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_12_3_0_V_d0() {
    output_states_12_3_0_V_d0 = select_ln887_7_fu_5176_p3.read();
}

void quantize_activation::thread_output_states_12_3_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5315.read(), ap_const_lv6_C))) {
        output_states_12_3_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_12_3_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_13_0_0_V_address0() {
    output_states_13_0_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4791_p1.read());
}

void quantize_activation::thread_output_states_13_0_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read())) {
        output_states_13_0_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_13_0_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_13_0_0_V_d0() {
    output_states_13_0_0_V_d0 = select_ln887_1_reg_5396.read();
}

void quantize_activation::thread_output_states_13_0_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5315.read(), ap_const_lv6_D))) {
        output_states_13_0_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_13_0_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_13_1_0_V_address0() {
    output_states_13_1_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4791_p1.read());
}

void quantize_activation::thread_output_states_13_1_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read())) {
        output_states_13_1_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_13_1_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_13_1_0_V_d0() {
    output_states_13_1_0_V_d0 = select_ln887_3_reg_5464.read();
}

void quantize_activation::thread_output_states_13_1_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5315.read(), ap_const_lv6_D))) {
        output_states_13_1_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_13_1_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_13_2_0_V_address0() {
    output_states_13_2_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4791_p1.read());
}

void quantize_activation::thread_output_states_13_2_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read())) {
        output_states_13_2_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_13_2_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_13_2_0_V_d0() {
    output_states_13_2_0_V_d0 = select_ln887_5_fu_5077_p3.read();
}

void quantize_activation::thread_output_states_13_2_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5315.read(), ap_const_lv6_D))) {
        output_states_13_2_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_13_2_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_13_3_0_V_address0() {
    output_states_13_3_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4791_p1.read());
}

void quantize_activation::thread_output_states_13_3_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read())) {
        output_states_13_3_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_13_3_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_13_3_0_V_d0() {
    output_states_13_3_0_V_d0 = select_ln887_7_fu_5176_p3.read();
}

void quantize_activation::thread_output_states_13_3_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5315.read(), ap_const_lv6_D))) {
        output_states_13_3_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_13_3_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_14_0_0_V_address0() {
    output_states_14_0_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4791_p1.read());
}

void quantize_activation::thread_output_states_14_0_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read())) {
        output_states_14_0_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_14_0_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_14_0_0_V_d0() {
    output_states_14_0_0_V_d0 = select_ln887_1_reg_5396.read();
}

void quantize_activation::thread_output_states_14_0_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5315.read(), ap_const_lv6_E))) {
        output_states_14_0_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_14_0_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_14_1_0_V_address0() {
    output_states_14_1_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4791_p1.read());
}

void quantize_activation::thread_output_states_14_1_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read())) {
        output_states_14_1_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_14_1_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_14_1_0_V_d0() {
    output_states_14_1_0_V_d0 = select_ln887_3_reg_5464.read();
}

void quantize_activation::thread_output_states_14_1_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5315.read(), ap_const_lv6_E))) {
        output_states_14_1_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_14_1_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_14_2_0_V_address0() {
    output_states_14_2_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4791_p1.read());
}

void quantize_activation::thread_output_states_14_2_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read())) {
        output_states_14_2_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_14_2_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_14_2_0_V_d0() {
    output_states_14_2_0_V_d0 = select_ln887_5_fu_5077_p3.read();
}

void quantize_activation::thread_output_states_14_2_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5315.read(), ap_const_lv6_E))) {
        output_states_14_2_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_14_2_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_14_3_0_V_address0() {
    output_states_14_3_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4791_p1.read());
}

void quantize_activation::thread_output_states_14_3_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read())) {
        output_states_14_3_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_14_3_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_14_3_0_V_d0() {
    output_states_14_3_0_V_d0 = select_ln887_7_fu_5176_p3.read();
}

void quantize_activation::thread_output_states_14_3_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5315.read(), ap_const_lv6_E))) {
        output_states_14_3_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_14_3_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_15_0_0_V_address0() {
    output_states_15_0_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4791_p1.read());
}

void quantize_activation::thread_output_states_15_0_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read())) {
        output_states_15_0_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_15_0_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_15_0_0_V_d0() {
    output_states_15_0_0_V_d0 = select_ln887_1_reg_5396.read();
}

void quantize_activation::thread_output_states_15_0_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5315.read(), ap_const_lv6_F))) {
        output_states_15_0_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_15_0_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_15_1_0_V_address0() {
    output_states_15_1_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4791_p1.read());
}

void quantize_activation::thread_output_states_15_1_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read())) {
        output_states_15_1_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_15_1_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_15_1_0_V_d0() {
    output_states_15_1_0_V_d0 = select_ln887_3_reg_5464.read();
}

void quantize_activation::thread_output_states_15_1_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5315.read(), ap_const_lv6_F))) {
        output_states_15_1_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_15_1_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_15_2_0_V_address0() {
    output_states_15_2_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4791_p1.read());
}

void quantize_activation::thread_output_states_15_2_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read())) {
        output_states_15_2_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_15_2_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_15_2_0_V_d0() {
    output_states_15_2_0_V_d0 = select_ln887_5_fu_5077_p3.read();
}

void quantize_activation::thread_output_states_15_2_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5315.read(), ap_const_lv6_F))) {
        output_states_15_2_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_15_2_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_15_3_0_V_address0() {
    output_states_15_3_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4791_p1.read());
}

void quantize_activation::thread_output_states_15_3_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read())) {
        output_states_15_3_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_15_3_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_15_3_0_V_d0() {
    output_states_15_3_0_V_d0 = select_ln887_7_fu_5176_p3.read();
}

void quantize_activation::thread_output_states_15_3_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5315.read(), ap_const_lv6_F))) {
        output_states_15_3_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_15_3_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_16_0_0_V_address0() {
    output_states_16_0_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4791_p1.read());
}

void quantize_activation::thread_output_states_16_0_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read())) {
        output_states_16_0_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_16_0_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_16_0_0_V_d0() {
    output_states_16_0_0_V_d0 = select_ln887_1_reg_5396.read();
}

void quantize_activation::thread_output_states_16_0_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5315.read(), ap_const_lv6_10))) {
        output_states_16_0_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_16_0_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_16_1_0_V_address0() {
    output_states_16_1_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4791_p1.read());
}

void quantize_activation::thread_output_states_16_1_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read())) {
        output_states_16_1_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_16_1_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_16_1_0_V_d0() {
    output_states_16_1_0_V_d0 = select_ln887_3_reg_5464.read();
}

void quantize_activation::thread_output_states_16_1_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5315.read(), ap_const_lv6_10))) {
        output_states_16_1_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_16_1_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_16_2_0_V_address0() {
    output_states_16_2_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4791_p1.read());
}

void quantize_activation::thread_output_states_16_2_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read())) {
        output_states_16_2_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_16_2_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_16_2_0_V_d0() {
    output_states_16_2_0_V_d0 = select_ln887_5_fu_5077_p3.read();
}

void quantize_activation::thread_output_states_16_2_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5315.read(), ap_const_lv6_10))) {
        output_states_16_2_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_16_2_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_16_3_0_V_address0() {
    output_states_16_3_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4791_p1.read());
}

void quantize_activation::thread_output_states_16_3_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read())) {
        output_states_16_3_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_16_3_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_16_3_0_V_d0() {
    output_states_16_3_0_V_d0 = select_ln887_7_fu_5176_p3.read();
}

void quantize_activation::thread_output_states_16_3_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5315.read(), ap_const_lv6_10))) {
        output_states_16_3_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_16_3_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_17_0_0_V_address0() {
    output_states_17_0_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4791_p1.read());
}

void quantize_activation::thread_output_states_17_0_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read())) {
        output_states_17_0_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_17_0_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_17_0_0_V_d0() {
    output_states_17_0_0_V_d0 = select_ln887_1_reg_5396.read();
}

void quantize_activation::thread_output_states_17_0_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5315.read(), ap_const_lv6_11))) {
        output_states_17_0_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_17_0_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_17_1_0_V_address0() {
    output_states_17_1_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4791_p1.read());
}

void quantize_activation::thread_output_states_17_1_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read())) {
        output_states_17_1_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_17_1_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_17_1_0_V_d0() {
    output_states_17_1_0_V_d0 = select_ln887_3_reg_5464.read();
}

void quantize_activation::thread_output_states_17_1_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5315.read(), ap_const_lv6_11))) {
        output_states_17_1_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_17_1_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_17_2_0_V_address0() {
    output_states_17_2_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4791_p1.read());
}

void quantize_activation::thread_output_states_17_2_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read())) {
        output_states_17_2_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_17_2_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_17_2_0_V_d0() {
    output_states_17_2_0_V_d0 = select_ln887_5_fu_5077_p3.read();
}

void quantize_activation::thread_output_states_17_2_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5315.read(), ap_const_lv6_11))) {
        output_states_17_2_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_17_2_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_17_3_0_V_address0() {
    output_states_17_3_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4791_p1.read());
}

void quantize_activation::thread_output_states_17_3_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read())) {
        output_states_17_3_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_17_3_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_17_3_0_V_d0() {
    output_states_17_3_0_V_d0 = select_ln887_7_fu_5176_p3.read();
}

void quantize_activation::thread_output_states_17_3_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5315.read(), ap_const_lv6_11))) {
        output_states_17_3_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_17_3_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_18_0_0_V_address0() {
    output_states_18_0_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4791_p1.read());
}

void quantize_activation::thread_output_states_18_0_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read())) {
        output_states_18_0_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_18_0_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_18_0_0_V_d0() {
    output_states_18_0_0_V_d0 = select_ln887_1_reg_5396.read();
}

void quantize_activation::thread_output_states_18_0_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5315.read(), ap_const_lv6_12))) {
        output_states_18_0_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_18_0_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_18_1_0_V_address0() {
    output_states_18_1_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4791_p1.read());
}

void quantize_activation::thread_output_states_18_1_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read())) {
        output_states_18_1_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_18_1_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_18_1_0_V_d0() {
    output_states_18_1_0_V_d0 = select_ln887_3_reg_5464.read();
}

void quantize_activation::thread_output_states_18_1_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5315.read(), ap_const_lv6_12))) {
        output_states_18_1_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_18_1_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_18_2_0_V_address0() {
    output_states_18_2_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4791_p1.read());
}

void quantize_activation::thread_output_states_18_2_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read())) {
        output_states_18_2_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_18_2_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_18_2_0_V_d0() {
    output_states_18_2_0_V_d0 = select_ln887_5_fu_5077_p3.read();
}

void quantize_activation::thread_output_states_18_2_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5315.read(), ap_const_lv6_12))) {
        output_states_18_2_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_18_2_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_18_3_0_V_address0() {
    output_states_18_3_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4791_p1.read());
}

void quantize_activation::thread_output_states_18_3_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read())) {
        output_states_18_3_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_18_3_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_18_3_0_V_d0() {
    output_states_18_3_0_V_d0 = select_ln887_7_fu_5176_p3.read();
}

void quantize_activation::thread_output_states_18_3_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5315.read(), ap_const_lv6_12))) {
        output_states_18_3_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_18_3_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_19_0_0_V_address0() {
    output_states_19_0_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4791_p1.read());
}

void quantize_activation::thread_output_states_19_0_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read())) {
        output_states_19_0_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_19_0_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_19_0_0_V_d0() {
    output_states_19_0_0_V_d0 = select_ln887_1_reg_5396.read();
}

void quantize_activation::thread_output_states_19_0_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5315.read(), ap_const_lv6_13))) {
        output_states_19_0_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_19_0_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_19_1_0_V_address0() {
    output_states_19_1_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4791_p1.read());
}

void quantize_activation::thread_output_states_19_1_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read())) {
        output_states_19_1_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_19_1_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_19_1_0_V_d0() {
    output_states_19_1_0_V_d0 = select_ln887_3_reg_5464.read();
}

void quantize_activation::thread_output_states_19_1_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5315.read(), ap_const_lv6_13))) {
        output_states_19_1_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_19_1_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_19_2_0_V_address0() {
    output_states_19_2_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4791_p1.read());
}

void quantize_activation::thread_output_states_19_2_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read())) {
        output_states_19_2_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_19_2_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_19_2_0_V_d0() {
    output_states_19_2_0_V_d0 = select_ln887_5_fu_5077_p3.read();
}

void quantize_activation::thread_output_states_19_2_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5315.read(), ap_const_lv6_13))) {
        output_states_19_2_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_19_2_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_19_3_0_V_address0() {
    output_states_19_3_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4791_p1.read());
}

void quantize_activation::thread_output_states_19_3_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read())) {
        output_states_19_3_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_19_3_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_19_3_0_V_d0() {
    output_states_19_3_0_V_d0 = select_ln887_7_fu_5176_p3.read();
}

void quantize_activation::thread_output_states_19_3_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5315.read(), ap_const_lv6_13))) {
        output_states_19_3_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_19_3_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_1_0_0_V_address0() {
    output_states_1_0_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4791_p1.read());
}

void quantize_activation::thread_output_states_1_0_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read())) {
        output_states_1_0_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_1_0_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_1_0_0_V_d0() {
    output_states_1_0_0_V_d0 = select_ln887_1_reg_5396.read();
}

void quantize_activation::thread_output_states_1_0_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5315.read(), ap_const_lv6_1))) {
        output_states_1_0_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_1_0_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_1_1_0_V_address0() {
    output_states_1_1_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4791_p1.read());
}

void quantize_activation::thread_output_states_1_1_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read())) {
        output_states_1_1_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_1_1_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_1_1_0_V_d0() {
    output_states_1_1_0_V_d0 = select_ln887_3_reg_5464.read();
}

void quantize_activation::thread_output_states_1_1_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5315.read(), ap_const_lv6_1))) {
        output_states_1_1_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_1_1_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_1_2_0_V_address0() {
    output_states_1_2_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4791_p1.read());
}

void quantize_activation::thread_output_states_1_2_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read())) {
        output_states_1_2_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_1_2_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_1_2_0_V_d0() {
    output_states_1_2_0_V_d0 = select_ln887_5_fu_5077_p3.read();
}

void quantize_activation::thread_output_states_1_2_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5315.read(), ap_const_lv6_1))) {
        output_states_1_2_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_1_2_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_1_3_0_V_address0() {
    output_states_1_3_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4791_p1.read());
}

void quantize_activation::thread_output_states_1_3_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read())) {
        output_states_1_3_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_1_3_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_1_3_0_V_d0() {
    output_states_1_3_0_V_d0 = select_ln887_7_fu_5176_p3.read();
}

void quantize_activation::thread_output_states_1_3_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5315.read(), ap_const_lv6_1))) {
        output_states_1_3_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_1_3_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_20_0_0_V_address0() {
    output_states_20_0_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4791_p1.read());
}

void quantize_activation::thread_output_states_20_0_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read())) {
        output_states_20_0_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_20_0_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_20_0_0_V_d0() {
    output_states_20_0_0_V_d0 = select_ln887_1_reg_5396.read();
}

void quantize_activation::thread_output_states_20_0_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5315.read(), ap_const_lv6_14))) {
        output_states_20_0_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_20_0_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_20_1_0_V_address0() {
    output_states_20_1_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4791_p1.read());
}

void quantize_activation::thread_output_states_20_1_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read())) {
        output_states_20_1_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_20_1_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_20_1_0_V_d0() {
    output_states_20_1_0_V_d0 = select_ln887_3_reg_5464.read();
}

void quantize_activation::thread_output_states_20_1_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5315.read(), ap_const_lv6_14))) {
        output_states_20_1_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_20_1_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_20_2_0_V_address0() {
    output_states_20_2_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4791_p1.read());
}

void quantize_activation::thread_output_states_20_2_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read())) {
        output_states_20_2_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_20_2_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_20_2_0_V_d0() {
    output_states_20_2_0_V_d0 = select_ln887_5_fu_5077_p3.read();
}

void quantize_activation::thread_output_states_20_2_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5315.read(), ap_const_lv6_14))) {
        output_states_20_2_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_20_2_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_20_3_0_V_address0() {
    output_states_20_3_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4791_p1.read());
}

void quantize_activation::thread_output_states_20_3_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read())) {
        output_states_20_3_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_20_3_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_20_3_0_V_d0() {
    output_states_20_3_0_V_d0 = select_ln887_7_fu_5176_p3.read();
}

void quantize_activation::thread_output_states_20_3_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5315.read(), ap_const_lv6_14))) {
        output_states_20_3_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_20_3_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_21_0_0_V_address0() {
    output_states_21_0_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4791_p1.read());
}

void quantize_activation::thread_output_states_21_0_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read())) {
        output_states_21_0_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_21_0_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_21_0_0_V_d0() {
    output_states_21_0_0_V_d0 = select_ln887_1_reg_5396.read();
}

void quantize_activation::thread_output_states_21_0_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5315.read(), ap_const_lv6_15))) {
        output_states_21_0_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_21_0_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_21_1_0_V_address0() {
    output_states_21_1_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4791_p1.read());
}

void quantize_activation::thread_output_states_21_1_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read())) {
        output_states_21_1_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_21_1_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_21_1_0_V_d0() {
    output_states_21_1_0_V_d0 = select_ln887_3_reg_5464.read();
}

void quantize_activation::thread_output_states_21_1_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5315.read(), ap_const_lv6_15))) {
        output_states_21_1_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_21_1_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_21_2_0_V_address0() {
    output_states_21_2_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4791_p1.read());
}

void quantize_activation::thread_output_states_21_2_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read())) {
        output_states_21_2_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_21_2_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_21_2_0_V_d0() {
    output_states_21_2_0_V_d0 = select_ln887_5_fu_5077_p3.read();
}

void quantize_activation::thread_output_states_21_2_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5315.read(), ap_const_lv6_15))) {
        output_states_21_2_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_21_2_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_21_3_0_V_address0() {
    output_states_21_3_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4791_p1.read());
}

void quantize_activation::thread_output_states_21_3_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read())) {
        output_states_21_3_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_21_3_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_21_3_0_V_d0() {
    output_states_21_3_0_V_d0 = select_ln887_7_fu_5176_p3.read();
}

void quantize_activation::thread_output_states_21_3_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5315.read(), ap_const_lv6_15))) {
        output_states_21_3_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_21_3_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_22_0_0_V_address0() {
    output_states_22_0_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4791_p1.read());
}

void quantize_activation::thread_output_states_22_0_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read())) {
        output_states_22_0_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_22_0_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_22_0_0_V_d0() {
    output_states_22_0_0_V_d0 = select_ln887_1_reg_5396.read();
}

void quantize_activation::thread_output_states_22_0_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5315.read(), ap_const_lv6_16))) {
        output_states_22_0_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_22_0_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_22_1_0_V_address0() {
    output_states_22_1_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4791_p1.read());
}

void quantize_activation::thread_output_states_22_1_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read())) {
        output_states_22_1_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_22_1_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_22_1_0_V_d0() {
    output_states_22_1_0_V_d0 = select_ln887_3_reg_5464.read();
}

void quantize_activation::thread_output_states_22_1_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5315.read(), ap_const_lv6_16))) {
        output_states_22_1_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_22_1_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_22_2_0_V_address0() {
    output_states_22_2_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4791_p1.read());
}

void quantize_activation::thread_output_states_22_2_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read())) {
        output_states_22_2_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_22_2_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_22_2_0_V_d0() {
    output_states_22_2_0_V_d0 = select_ln887_5_fu_5077_p3.read();
}

void quantize_activation::thread_output_states_22_2_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5315.read(), ap_const_lv6_16))) {
        output_states_22_2_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_22_2_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_22_3_0_V_address0() {
    output_states_22_3_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4791_p1.read());
}

void quantize_activation::thread_output_states_22_3_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read())) {
        output_states_22_3_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_22_3_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_22_3_0_V_d0() {
    output_states_22_3_0_V_d0 = select_ln887_7_fu_5176_p3.read();
}

void quantize_activation::thread_output_states_22_3_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5315.read(), ap_const_lv6_16))) {
        output_states_22_3_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_22_3_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_23_0_0_V_address0() {
    output_states_23_0_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4791_p1.read());
}

void quantize_activation::thread_output_states_23_0_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read())) {
        output_states_23_0_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_23_0_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_23_0_0_V_d0() {
    output_states_23_0_0_V_d0 = select_ln887_1_reg_5396.read();
}

void quantize_activation::thread_output_states_23_0_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5315.read(), ap_const_lv6_17))) {
        output_states_23_0_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_23_0_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_23_1_0_V_address0() {
    output_states_23_1_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4791_p1.read());
}

void quantize_activation::thread_output_states_23_1_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read())) {
        output_states_23_1_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_23_1_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_23_1_0_V_d0() {
    output_states_23_1_0_V_d0 = select_ln887_3_reg_5464.read();
}

void quantize_activation::thread_output_states_23_1_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5315.read(), ap_const_lv6_17))) {
        output_states_23_1_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_23_1_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_23_2_0_V_address0() {
    output_states_23_2_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4791_p1.read());
}

void quantize_activation::thread_output_states_23_2_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read())) {
        output_states_23_2_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_23_2_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_23_2_0_V_d0() {
    output_states_23_2_0_V_d0 = select_ln887_5_fu_5077_p3.read();
}

void quantize_activation::thread_output_states_23_2_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5315.read(), ap_const_lv6_17))) {
        output_states_23_2_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_23_2_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_23_3_0_V_address0() {
    output_states_23_3_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4791_p1.read());
}

void quantize_activation::thread_output_states_23_3_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read())) {
        output_states_23_3_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_23_3_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_23_3_0_V_d0() {
    output_states_23_3_0_V_d0 = select_ln887_7_fu_5176_p3.read();
}

void quantize_activation::thread_output_states_23_3_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5315.read(), ap_const_lv6_17))) {
        output_states_23_3_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_23_3_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_24_0_0_V_address0() {
    output_states_24_0_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4791_p1.read());
}

void quantize_activation::thread_output_states_24_0_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read())) {
        output_states_24_0_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_24_0_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_24_0_0_V_d0() {
    output_states_24_0_0_V_d0 = select_ln887_1_reg_5396.read();
}

void quantize_activation::thread_output_states_24_0_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5315.read(), ap_const_lv6_18))) {
        output_states_24_0_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_24_0_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_24_1_0_V_address0() {
    output_states_24_1_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4791_p1.read());
}

void quantize_activation::thread_output_states_24_1_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read())) {
        output_states_24_1_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_24_1_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_24_1_0_V_d0() {
    output_states_24_1_0_V_d0 = select_ln887_3_reg_5464.read();
}

void quantize_activation::thread_output_states_24_1_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5315.read(), ap_const_lv6_18))) {
        output_states_24_1_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_24_1_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_24_2_0_V_address0() {
    output_states_24_2_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4791_p1.read());
}

void quantize_activation::thread_output_states_24_2_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read())) {
        output_states_24_2_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_24_2_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_24_2_0_V_d0() {
    output_states_24_2_0_V_d0 = select_ln887_5_fu_5077_p3.read();
}

void quantize_activation::thread_output_states_24_2_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5315.read(), ap_const_lv6_18))) {
        output_states_24_2_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_24_2_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_24_3_0_V_address0() {
    output_states_24_3_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4791_p1.read());
}

void quantize_activation::thread_output_states_24_3_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read())) {
        output_states_24_3_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_24_3_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_24_3_0_V_d0() {
    output_states_24_3_0_V_d0 = select_ln887_7_fu_5176_p3.read();
}

void quantize_activation::thread_output_states_24_3_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5315.read(), ap_const_lv6_18))) {
        output_states_24_3_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_24_3_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_25_0_0_V_address0() {
    output_states_25_0_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4791_p1.read());
}

void quantize_activation::thread_output_states_25_0_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read())) {
        output_states_25_0_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_25_0_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_25_0_0_V_d0() {
    output_states_25_0_0_V_d0 = select_ln887_1_reg_5396.read();
}

void quantize_activation::thread_output_states_25_0_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5315.read(), ap_const_lv6_19))) {
        output_states_25_0_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_25_0_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_25_1_0_V_address0() {
    output_states_25_1_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4791_p1.read());
}

void quantize_activation::thread_output_states_25_1_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read())) {
        output_states_25_1_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_25_1_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_25_1_0_V_d0() {
    output_states_25_1_0_V_d0 = select_ln887_3_reg_5464.read();
}

void quantize_activation::thread_output_states_25_1_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5315.read(), ap_const_lv6_19))) {
        output_states_25_1_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_25_1_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_25_2_0_V_address0() {
    output_states_25_2_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4791_p1.read());
}

void quantize_activation::thread_output_states_25_2_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read())) {
        output_states_25_2_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_25_2_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_25_2_0_V_d0() {
    output_states_25_2_0_V_d0 = select_ln887_5_fu_5077_p3.read();
}

void quantize_activation::thread_output_states_25_2_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5315.read(), ap_const_lv6_19))) {
        output_states_25_2_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_25_2_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_25_3_0_V_address0() {
    output_states_25_3_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4791_p1.read());
}

void quantize_activation::thread_output_states_25_3_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read())) {
        output_states_25_3_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_25_3_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_25_3_0_V_d0() {
    output_states_25_3_0_V_d0 = select_ln887_7_fu_5176_p3.read();
}

void quantize_activation::thread_output_states_25_3_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5315.read(), ap_const_lv6_19))) {
        output_states_25_3_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_25_3_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_26_0_0_V_address0() {
    output_states_26_0_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4791_p1.read());
}

void quantize_activation::thread_output_states_26_0_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read())) {
        output_states_26_0_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_26_0_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_26_0_0_V_d0() {
    output_states_26_0_0_V_d0 = select_ln887_1_reg_5396.read();
}

void quantize_activation::thread_output_states_26_0_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5315.read(), ap_const_lv6_1A))) {
        output_states_26_0_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_26_0_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_26_1_0_V_address0() {
    output_states_26_1_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4791_p1.read());
}

void quantize_activation::thread_output_states_26_1_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read())) {
        output_states_26_1_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_26_1_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_26_1_0_V_d0() {
    output_states_26_1_0_V_d0 = select_ln887_3_reg_5464.read();
}

void quantize_activation::thread_output_states_26_1_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5315.read(), ap_const_lv6_1A))) {
        output_states_26_1_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_26_1_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_26_2_0_V_address0() {
    output_states_26_2_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4791_p1.read());
}

void quantize_activation::thread_output_states_26_2_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read())) {
        output_states_26_2_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_26_2_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_26_2_0_V_d0() {
    output_states_26_2_0_V_d0 = select_ln887_5_fu_5077_p3.read();
}

void quantize_activation::thread_output_states_26_2_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5315.read(), ap_const_lv6_1A))) {
        output_states_26_2_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_26_2_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_26_3_0_V_address0() {
    output_states_26_3_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4791_p1.read());
}

void quantize_activation::thread_output_states_26_3_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read())) {
        output_states_26_3_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_26_3_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_26_3_0_V_d0() {
    output_states_26_3_0_V_d0 = select_ln887_7_fu_5176_p3.read();
}

void quantize_activation::thread_output_states_26_3_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5315.read(), ap_const_lv6_1A))) {
        output_states_26_3_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_26_3_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_27_0_0_V_address0() {
    output_states_27_0_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4791_p1.read());
}

void quantize_activation::thread_output_states_27_0_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read())) {
        output_states_27_0_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_27_0_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_27_0_0_V_d0() {
    output_states_27_0_0_V_d0 = select_ln887_1_reg_5396.read();
}

void quantize_activation::thread_output_states_27_0_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5315.read(), ap_const_lv6_1B))) {
        output_states_27_0_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_27_0_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_27_1_0_V_address0() {
    output_states_27_1_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4791_p1.read());
}

void quantize_activation::thread_output_states_27_1_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read())) {
        output_states_27_1_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_27_1_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_27_1_0_V_d0() {
    output_states_27_1_0_V_d0 = select_ln887_3_reg_5464.read();
}

void quantize_activation::thread_output_states_27_1_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5315.read(), ap_const_lv6_1B))) {
        output_states_27_1_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_27_1_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_27_2_0_V_address0() {
    output_states_27_2_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4791_p1.read());
}

void quantize_activation::thread_output_states_27_2_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read())) {
        output_states_27_2_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_27_2_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_27_2_0_V_d0() {
    output_states_27_2_0_V_d0 = select_ln887_5_fu_5077_p3.read();
}

void quantize_activation::thread_output_states_27_2_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5315.read(), ap_const_lv6_1B))) {
        output_states_27_2_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_27_2_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_27_3_0_V_address0() {
    output_states_27_3_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4791_p1.read());
}

void quantize_activation::thread_output_states_27_3_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read())) {
        output_states_27_3_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_27_3_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_27_3_0_V_d0() {
    output_states_27_3_0_V_d0 = select_ln887_7_fu_5176_p3.read();
}

void quantize_activation::thread_output_states_27_3_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5315.read(), ap_const_lv6_1B))) {
        output_states_27_3_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_27_3_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_28_0_0_V_address0() {
    output_states_28_0_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4791_p1.read());
}

void quantize_activation::thread_output_states_28_0_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read())) {
        output_states_28_0_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_28_0_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_28_0_0_V_d0() {
    output_states_28_0_0_V_d0 = select_ln887_1_reg_5396.read();
}

void quantize_activation::thread_output_states_28_0_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5315.read(), ap_const_lv6_1C))) {
        output_states_28_0_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_28_0_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_28_1_0_V_address0() {
    output_states_28_1_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4791_p1.read());
}

void quantize_activation::thread_output_states_28_1_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read())) {
        output_states_28_1_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_28_1_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_28_1_0_V_d0() {
    output_states_28_1_0_V_d0 = select_ln887_3_reg_5464.read();
}

void quantize_activation::thread_output_states_28_1_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5315.read(), ap_const_lv6_1C))) {
        output_states_28_1_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_28_1_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_28_2_0_V_address0() {
    output_states_28_2_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4791_p1.read());
}

void quantize_activation::thread_output_states_28_2_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read())) {
        output_states_28_2_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_28_2_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_28_2_0_V_d0() {
    output_states_28_2_0_V_d0 = select_ln887_5_fu_5077_p3.read();
}

void quantize_activation::thread_output_states_28_2_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5315.read(), ap_const_lv6_1C))) {
        output_states_28_2_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_28_2_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_28_3_0_V_address0() {
    output_states_28_3_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4791_p1.read());
}

void quantize_activation::thread_output_states_28_3_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read())) {
        output_states_28_3_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_28_3_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_28_3_0_V_d0() {
    output_states_28_3_0_V_d0 = select_ln887_7_fu_5176_p3.read();
}

void quantize_activation::thread_output_states_28_3_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5315.read(), ap_const_lv6_1C))) {
        output_states_28_3_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_28_3_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_29_0_0_V_address0() {
    output_states_29_0_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4791_p1.read());
}

void quantize_activation::thread_output_states_29_0_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read())) {
        output_states_29_0_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_29_0_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_29_0_0_V_d0() {
    output_states_29_0_0_V_d0 = select_ln887_1_reg_5396.read();
}

void quantize_activation::thread_output_states_29_0_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5315.read(), ap_const_lv6_1D))) {
        output_states_29_0_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_29_0_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_29_1_0_V_address0() {
    output_states_29_1_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4791_p1.read());
}

void quantize_activation::thread_output_states_29_1_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read())) {
        output_states_29_1_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_29_1_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_29_1_0_V_d0() {
    output_states_29_1_0_V_d0 = select_ln887_3_reg_5464.read();
}

void quantize_activation::thread_output_states_29_1_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5315.read(), ap_const_lv6_1D))) {
        output_states_29_1_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_29_1_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_29_2_0_V_address0() {
    output_states_29_2_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4791_p1.read());
}

void quantize_activation::thread_output_states_29_2_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read())) {
        output_states_29_2_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_29_2_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_29_2_0_V_d0() {
    output_states_29_2_0_V_d0 = select_ln887_5_fu_5077_p3.read();
}

void quantize_activation::thread_output_states_29_2_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5315.read(), ap_const_lv6_1D))) {
        output_states_29_2_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_29_2_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_29_3_0_V_address0() {
    output_states_29_3_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4791_p1.read());
}

void quantize_activation::thread_output_states_29_3_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read())) {
        output_states_29_3_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_29_3_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_29_3_0_V_d0() {
    output_states_29_3_0_V_d0 = select_ln887_7_fu_5176_p3.read();
}

void quantize_activation::thread_output_states_29_3_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5315.read(), ap_const_lv6_1D))) {
        output_states_29_3_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_29_3_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_2_0_0_V_address0() {
    output_states_2_0_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4791_p1.read());
}

void quantize_activation::thread_output_states_2_0_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read())) {
        output_states_2_0_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_2_0_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_2_0_0_V_d0() {
    output_states_2_0_0_V_d0 = select_ln887_1_reg_5396.read();
}

void quantize_activation::thread_output_states_2_0_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5315.read(), ap_const_lv6_2))) {
        output_states_2_0_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_2_0_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_2_1_0_V_address0() {
    output_states_2_1_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4791_p1.read());
}

void quantize_activation::thread_output_states_2_1_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read())) {
        output_states_2_1_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_2_1_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_2_1_0_V_d0() {
    output_states_2_1_0_V_d0 = select_ln887_3_reg_5464.read();
}

void quantize_activation::thread_output_states_2_1_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5315.read(), ap_const_lv6_2))) {
        output_states_2_1_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_2_1_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_2_2_0_V_address0() {
    output_states_2_2_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4791_p1.read());
}

void quantize_activation::thread_output_states_2_2_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read())) {
        output_states_2_2_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_2_2_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_2_2_0_V_d0() {
    output_states_2_2_0_V_d0 = select_ln887_5_fu_5077_p3.read();
}

void quantize_activation::thread_output_states_2_2_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5315.read(), ap_const_lv6_2))) {
        output_states_2_2_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_2_2_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_2_3_0_V_address0() {
    output_states_2_3_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4791_p1.read());
}

void quantize_activation::thread_output_states_2_3_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read())) {
        output_states_2_3_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_2_3_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_2_3_0_V_d0() {
    output_states_2_3_0_V_d0 = select_ln887_7_fu_5176_p3.read();
}

void quantize_activation::thread_output_states_2_3_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5315.read(), ap_const_lv6_2))) {
        output_states_2_3_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_2_3_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_30_0_0_V_address0() {
    output_states_30_0_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4791_p1.read());
}

void quantize_activation::thread_output_states_30_0_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read())) {
        output_states_30_0_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_30_0_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_30_0_0_V_d0() {
    output_states_30_0_0_V_d0 = select_ln887_1_reg_5396.read();
}

void quantize_activation::thread_output_states_30_0_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5315.read(), ap_const_lv6_1E))) {
        output_states_30_0_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_30_0_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_30_1_0_V_address0() {
    output_states_30_1_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4791_p1.read());
}

void quantize_activation::thread_output_states_30_1_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read())) {
        output_states_30_1_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_30_1_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_30_1_0_V_d0() {
    output_states_30_1_0_V_d0 = select_ln887_3_reg_5464.read();
}

void quantize_activation::thread_output_states_30_1_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5315.read(), ap_const_lv6_1E))) {
        output_states_30_1_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_30_1_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_30_2_0_V_address0() {
    output_states_30_2_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4791_p1.read());
}

void quantize_activation::thread_output_states_30_2_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read())) {
        output_states_30_2_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_30_2_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_30_2_0_V_d0() {
    output_states_30_2_0_V_d0 = select_ln887_5_fu_5077_p3.read();
}

void quantize_activation::thread_output_states_30_2_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5315.read(), ap_const_lv6_1E))) {
        output_states_30_2_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_30_2_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_30_3_0_V_address0() {
    output_states_30_3_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4791_p1.read());
}

void quantize_activation::thread_output_states_30_3_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read())) {
        output_states_30_3_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_30_3_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_30_3_0_V_d0() {
    output_states_30_3_0_V_d0 = select_ln887_7_fu_5176_p3.read();
}

void quantize_activation::thread_output_states_30_3_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5315.read(), ap_const_lv6_1E))) {
        output_states_30_3_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_30_3_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_31_0_0_V_address0() {
    output_states_31_0_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4791_p1.read());
}

void quantize_activation::thread_output_states_31_0_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read())) {
        output_states_31_0_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_31_0_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_31_0_0_V_d0() {
    output_states_31_0_0_V_d0 = select_ln887_1_reg_5396.read();
}

void quantize_activation::thread_output_states_31_0_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5315.read(), ap_const_lv6_1F))) {
        output_states_31_0_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_31_0_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_31_1_0_V_address0() {
    output_states_31_1_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4791_p1.read());
}

void quantize_activation::thread_output_states_31_1_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read())) {
        output_states_31_1_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_31_1_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_31_1_0_V_d0() {
    output_states_31_1_0_V_d0 = select_ln887_3_reg_5464.read();
}

void quantize_activation::thread_output_states_31_1_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5315.read(), ap_const_lv6_1F))) {
        output_states_31_1_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_31_1_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_31_2_0_V_address0() {
    output_states_31_2_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4791_p1.read());
}

void quantize_activation::thread_output_states_31_2_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read())) {
        output_states_31_2_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_31_2_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_31_2_0_V_d0() {
    output_states_31_2_0_V_d0 = select_ln887_5_fu_5077_p3.read();
}

void quantize_activation::thread_output_states_31_2_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5315.read(), ap_const_lv6_1F))) {
        output_states_31_2_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_31_2_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_31_3_0_V_address0() {
    output_states_31_3_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4791_p1.read());
}

void quantize_activation::thread_output_states_31_3_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read())) {
        output_states_31_3_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_31_3_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_31_3_0_V_d0() {
    output_states_31_3_0_V_d0 = select_ln887_7_fu_5176_p3.read();
}

void quantize_activation::thread_output_states_31_3_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5315.read(), ap_const_lv6_1F))) {
        output_states_31_3_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_31_3_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_32_0_0_V_address0() {
    output_states_32_0_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4791_p1.read());
}

void quantize_activation::thread_output_states_32_0_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read())) {
        output_states_32_0_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_32_0_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_32_0_0_V_d0() {
    output_states_32_0_0_V_d0 = select_ln887_1_reg_5396.read();
}

void quantize_activation::thread_output_states_32_0_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5315.read(), ap_const_lv6_20))) {
        output_states_32_0_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_32_0_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_32_1_0_V_address0() {
    output_states_32_1_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4791_p1.read());
}

void quantize_activation::thread_output_states_32_1_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read())) {
        output_states_32_1_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_32_1_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_32_1_0_V_d0() {
    output_states_32_1_0_V_d0 = select_ln887_3_reg_5464.read();
}

void quantize_activation::thread_output_states_32_1_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5315.read(), ap_const_lv6_20))) {
        output_states_32_1_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_32_1_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_32_2_0_V_address0() {
    output_states_32_2_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4791_p1.read());
}

void quantize_activation::thread_output_states_32_2_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read())) {
        output_states_32_2_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_32_2_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_32_2_0_V_d0() {
    output_states_32_2_0_V_d0 = select_ln887_5_fu_5077_p3.read();
}

void quantize_activation::thread_output_states_32_2_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5315.read(), ap_const_lv6_20))) {
        output_states_32_2_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_32_2_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_32_3_0_V_address0() {
    output_states_32_3_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4791_p1.read());
}

void quantize_activation::thread_output_states_32_3_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read())) {
        output_states_32_3_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_32_3_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_32_3_0_V_d0() {
    output_states_32_3_0_V_d0 = select_ln887_7_fu_5176_p3.read();
}

void quantize_activation::thread_output_states_32_3_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5315.read(), ap_const_lv6_20))) {
        output_states_32_3_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_32_3_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_33_0_0_V_address0() {
    output_states_33_0_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4791_p1.read());
}

void quantize_activation::thread_output_states_33_0_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read())) {
        output_states_33_0_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_33_0_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_33_0_0_V_d0() {
    output_states_33_0_0_V_d0 = select_ln887_1_reg_5396.read();
}

void quantize_activation::thread_output_states_33_0_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5315.read(), ap_const_lv6_21))) {
        output_states_33_0_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_33_0_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_33_1_0_V_address0() {
    output_states_33_1_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4791_p1.read());
}

void quantize_activation::thread_output_states_33_1_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read())) {
        output_states_33_1_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_33_1_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_33_1_0_V_d0() {
    output_states_33_1_0_V_d0 = select_ln887_3_reg_5464.read();
}

void quantize_activation::thread_output_states_33_1_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5315.read(), ap_const_lv6_21))) {
        output_states_33_1_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_33_1_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_33_2_0_V_address0() {
    output_states_33_2_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4791_p1.read());
}

void quantize_activation::thread_output_states_33_2_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read())) {
        output_states_33_2_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_33_2_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_33_2_0_V_d0() {
    output_states_33_2_0_V_d0 = select_ln887_5_fu_5077_p3.read();
}

void quantize_activation::thread_output_states_33_2_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5315.read(), ap_const_lv6_21))) {
        output_states_33_2_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_33_2_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_33_3_0_V_address0() {
    output_states_33_3_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4791_p1.read());
}

void quantize_activation::thread_output_states_33_3_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read())) {
        output_states_33_3_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_33_3_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_33_3_0_V_d0() {
    output_states_33_3_0_V_d0 = select_ln887_7_fu_5176_p3.read();
}

void quantize_activation::thread_output_states_33_3_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5315.read(), ap_const_lv6_21))) {
        output_states_33_3_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_33_3_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_34_0_0_V_address0() {
    output_states_34_0_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4791_p1.read());
}

void quantize_activation::thread_output_states_34_0_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read())) {
        output_states_34_0_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_34_0_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_34_0_0_V_d0() {
    output_states_34_0_0_V_d0 = select_ln887_1_reg_5396.read();
}

void quantize_activation::thread_output_states_34_0_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5315.read(), ap_const_lv6_22))) {
        output_states_34_0_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_34_0_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_34_1_0_V_address0() {
    output_states_34_1_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4791_p1.read());
}

void quantize_activation::thread_output_states_34_1_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read())) {
        output_states_34_1_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_34_1_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_34_1_0_V_d0() {
    output_states_34_1_0_V_d0 = select_ln887_3_reg_5464.read();
}

void quantize_activation::thread_output_states_34_1_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5315.read(), ap_const_lv6_22))) {
        output_states_34_1_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_34_1_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_34_2_0_V_address0() {
    output_states_34_2_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4791_p1.read());
}

void quantize_activation::thread_output_states_34_2_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read())) {
        output_states_34_2_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_34_2_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_34_2_0_V_d0() {
    output_states_34_2_0_V_d0 = select_ln887_5_fu_5077_p3.read();
}

void quantize_activation::thread_output_states_34_2_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5315.read(), ap_const_lv6_22))) {
        output_states_34_2_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_34_2_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_34_3_0_V_address0() {
    output_states_34_3_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4791_p1.read());
}

void quantize_activation::thread_output_states_34_3_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read())) {
        output_states_34_3_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_34_3_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_34_3_0_V_d0() {
    output_states_34_3_0_V_d0 = select_ln887_7_fu_5176_p3.read();
}

void quantize_activation::thread_output_states_34_3_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5315.read(), ap_const_lv6_22))) {
        output_states_34_3_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_34_3_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_35_0_0_V_address0() {
    output_states_35_0_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4791_p1.read());
}

void quantize_activation::thread_output_states_35_0_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read())) {
        output_states_35_0_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_35_0_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_35_0_0_V_d0() {
    output_states_35_0_0_V_d0 = select_ln887_1_reg_5396.read();
}

void quantize_activation::thread_output_states_35_0_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5315.read(), ap_const_lv6_23))) {
        output_states_35_0_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_35_0_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_35_1_0_V_address0() {
    output_states_35_1_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4791_p1.read());
}

void quantize_activation::thread_output_states_35_1_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read())) {
        output_states_35_1_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_35_1_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_35_1_0_V_d0() {
    output_states_35_1_0_V_d0 = select_ln887_3_reg_5464.read();
}

void quantize_activation::thread_output_states_35_1_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5315.read(), ap_const_lv6_23))) {
        output_states_35_1_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_35_1_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_35_2_0_V_address0() {
    output_states_35_2_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4791_p1.read());
}

void quantize_activation::thread_output_states_35_2_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read())) {
        output_states_35_2_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_35_2_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_35_2_0_V_d0() {
    output_states_35_2_0_V_d0 = select_ln887_5_fu_5077_p3.read();
}

void quantize_activation::thread_output_states_35_2_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5315.read(), ap_const_lv6_23))) {
        output_states_35_2_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_35_2_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_35_3_0_V_address0() {
    output_states_35_3_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4791_p1.read());
}

void quantize_activation::thread_output_states_35_3_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read())) {
        output_states_35_3_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_35_3_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_35_3_0_V_d0() {
    output_states_35_3_0_V_d0 = select_ln887_7_fu_5176_p3.read();
}

void quantize_activation::thread_output_states_35_3_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5315.read(), ap_const_lv6_23))) {
        output_states_35_3_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_35_3_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_36_0_0_V_address0() {
    output_states_36_0_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4791_p1.read());
}

void quantize_activation::thread_output_states_36_0_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read())) {
        output_states_36_0_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_36_0_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_36_0_0_V_d0() {
    output_states_36_0_0_V_d0 = select_ln887_1_reg_5396.read();
}

void quantize_activation::thread_output_states_36_0_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5315.read(), ap_const_lv6_24))) {
        output_states_36_0_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_36_0_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_36_1_0_V_address0() {
    output_states_36_1_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4791_p1.read());
}

void quantize_activation::thread_output_states_36_1_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read())) {
        output_states_36_1_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_36_1_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_36_1_0_V_d0() {
    output_states_36_1_0_V_d0 = select_ln887_3_reg_5464.read();
}

void quantize_activation::thread_output_states_36_1_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5315.read(), ap_const_lv6_24))) {
        output_states_36_1_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_36_1_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_36_2_0_V_address0() {
    output_states_36_2_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4791_p1.read());
}

void quantize_activation::thread_output_states_36_2_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read())) {
        output_states_36_2_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_36_2_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_36_2_0_V_d0() {
    output_states_36_2_0_V_d0 = select_ln887_5_fu_5077_p3.read();
}

void quantize_activation::thread_output_states_36_2_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5315.read(), ap_const_lv6_24))) {
        output_states_36_2_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_36_2_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_36_3_0_V_address0() {
    output_states_36_3_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4791_p1.read());
}

void quantize_activation::thread_output_states_36_3_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read())) {
        output_states_36_3_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_36_3_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_36_3_0_V_d0() {
    output_states_36_3_0_V_d0 = select_ln887_7_fu_5176_p3.read();
}

void quantize_activation::thread_output_states_36_3_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5315.read(), ap_const_lv6_24))) {
        output_states_36_3_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_36_3_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_37_0_0_V_address0() {
    output_states_37_0_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4791_p1.read());
}

void quantize_activation::thread_output_states_37_0_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read())) {
        output_states_37_0_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_37_0_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_37_0_0_V_d0() {
    output_states_37_0_0_V_d0 = select_ln887_1_reg_5396.read();
}

void quantize_activation::thread_output_states_37_0_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5315.read(), ap_const_lv6_25))) {
        output_states_37_0_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_37_0_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_37_1_0_V_address0() {
    output_states_37_1_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4791_p1.read());
}

void quantize_activation::thread_output_states_37_1_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read())) {
        output_states_37_1_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_37_1_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_37_1_0_V_d0() {
    output_states_37_1_0_V_d0 = select_ln887_3_reg_5464.read();
}

void quantize_activation::thread_output_states_37_1_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5315.read(), ap_const_lv6_25))) {
        output_states_37_1_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_37_1_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_37_2_0_V_address0() {
    output_states_37_2_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4791_p1.read());
}

void quantize_activation::thread_output_states_37_2_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read())) {
        output_states_37_2_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_37_2_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_37_2_0_V_d0() {
    output_states_37_2_0_V_d0 = select_ln887_5_fu_5077_p3.read();
}

void quantize_activation::thread_output_states_37_2_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5315.read(), ap_const_lv6_25))) {
        output_states_37_2_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_37_2_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_37_3_0_V_address0() {
    output_states_37_3_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4791_p1.read());
}

void quantize_activation::thread_output_states_37_3_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read())) {
        output_states_37_3_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_37_3_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_37_3_0_V_d0() {
    output_states_37_3_0_V_d0 = select_ln887_7_fu_5176_p3.read();
}

void quantize_activation::thread_output_states_37_3_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5315.read(), ap_const_lv6_25))) {
        output_states_37_3_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_37_3_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_38_0_0_V_address0() {
    output_states_38_0_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4791_p1.read());
}

void quantize_activation::thread_output_states_38_0_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read())) {
        output_states_38_0_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_38_0_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_38_0_0_V_d0() {
    output_states_38_0_0_V_d0 = select_ln887_1_reg_5396.read();
}

void quantize_activation::thread_output_states_38_0_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5315.read(), ap_const_lv6_26))) {
        output_states_38_0_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_38_0_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_38_1_0_V_address0() {
    output_states_38_1_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4791_p1.read());
}

void quantize_activation::thread_output_states_38_1_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read())) {
        output_states_38_1_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_38_1_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_38_1_0_V_d0() {
    output_states_38_1_0_V_d0 = select_ln887_3_reg_5464.read();
}

void quantize_activation::thread_output_states_38_1_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5315.read(), ap_const_lv6_26))) {
        output_states_38_1_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_38_1_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_38_2_0_V_address0() {
    output_states_38_2_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4791_p1.read());
}

void quantize_activation::thread_output_states_38_2_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read())) {
        output_states_38_2_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_38_2_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_38_2_0_V_d0() {
    output_states_38_2_0_V_d0 = select_ln887_5_fu_5077_p3.read();
}

void quantize_activation::thread_output_states_38_2_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5315.read(), ap_const_lv6_26))) {
        output_states_38_2_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_38_2_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_38_3_0_V_address0() {
    output_states_38_3_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4791_p1.read());
}

void quantize_activation::thread_output_states_38_3_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read())) {
        output_states_38_3_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_38_3_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_38_3_0_V_d0() {
    output_states_38_3_0_V_d0 = select_ln887_7_fu_5176_p3.read();
}

void quantize_activation::thread_output_states_38_3_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5315.read(), ap_const_lv6_26))) {
        output_states_38_3_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_38_3_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_39_0_0_V_address0() {
    output_states_39_0_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4791_p1.read());
}

void quantize_activation::thread_output_states_39_0_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read())) {
        output_states_39_0_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_39_0_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_39_0_0_V_d0() {
    output_states_39_0_0_V_d0 = select_ln887_1_reg_5396.read();
}

void quantize_activation::thread_output_states_39_0_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5315.read(), ap_const_lv6_27))) {
        output_states_39_0_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_39_0_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_39_1_0_V_address0() {
    output_states_39_1_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4791_p1.read());
}

void quantize_activation::thread_output_states_39_1_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read())) {
        output_states_39_1_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_39_1_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_39_1_0_V_d0() {
    output_states_39_1_0_V_d0 = select_ln887_3_reg_5464.read();
}

void quantize_activation::thread_output_states_39_1_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5315.read(), ap_const_lv6_27))) {
        output_states_39_1_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_39_1_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_39_2_0_V_address0() {
    output_states_39_2_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4791_p1.read());
}

void quantize_activation::thread_output_states_39_2_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read())) {
        output_states_39_2_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_39_2_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_39_2_0_V_d0() {
    output_states_39_2_0_V_d0 = select_ln887_5_fu_5077_p3.read();
}

void quantize_activation::thread_output_states_39_2_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5315.read(), ap_const_lv6_27))) {
        output_states_39_2_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_39_2_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_39_3_0_V_address0() {
    output_states_39_3_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4791_p1.read());
}

void quantize_activation::thread_output_states_39_3_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read())) {
        output_states_39_3_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_39_3_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_39_3_0_V_d0() {
    output_states_39_3_0_V_d0 = select_ln887_7_fu_5176_p3.read();
}

void quantize_activation::thread_output_states_39_3_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5315.read(), ap_const_lv6_27))) {
        output_states_39_3_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_39_3_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_3_0_0_V_address0() {
    output_states_3_0_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4791_p1.read());
}

void quantize_activation::thread_output_states_3_0_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read())) {
        output_states_3_0_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_3_0_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_3_0_0_V_d0() {
    output_states_3_0_0_V_d0 = select_ln887_1_reg_5396.read();
}

void quantize_activation::thread_output_states_3_0_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5315.read(), ap_const_lv6_3))) {
        output_states_3_0_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_3_0_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_3_1_0_V_address0() {
    output_states_3_1_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4791_p1.read());
}

void quantize_activation::thread_output_states_3_1_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read())) {
        output_states_3_1_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_3_1_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_3_1_0_V_d0() {
    output_states_3_1_0_V_d0 = select_ln887_3_reg_5464.read();
}

void quantize_activation::thread_output_states_3_1_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5315.read(), ap_const_lv6_3))) {
        output_states_3_1_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_3_1_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_3_2_0_V_address0() {
    output_states_3_2_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4791_p1.read());
}

void quantize_activation::thread_output_states_3_2_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read())) {
        output_states_3_2_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_3_2_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_3_2_0_V_d0() {
    output_states_3_2_0_V_d0 = select_ln887_5_fu_5077_p3.read();
}

void quantize_activation::thread_output_states_3_2_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5315.read(), ap_const_lv6_3))) {
        output_states_3_2_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_3_2_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_3_3_0_V_address0() {
    output_states_3_3_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4791_p1.read());
}

void quantize_activation::thread_output_states_3_3_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read())) {
        output_states_3_3_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_3_3_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_3_3_0_V_d0() {
    output_states_3_3_0_V_d0 = select_ln887_7_fu_5176_p3.read();
}

void quantize_activation::thread_output_states_3_3_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5315.read(), ap_const_lv6_3))) {
        output_states_3_3_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_3_3_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_40_0_0_V_address0() {
    output_states_40_0_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4791_p1.read());
}

void quantize_activation::thread_output_states_40_0_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read())) {
        output_states_40_0_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_40_0_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_40_0_0_V_d0() {
    output_states_40_0_0_V_d0 = select_ln887_1_reg_5396.read();
}

void quantize_activation::thread_output_states_40_0_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5315.read(), ap_const_lv6_28))) {
        output_states_40_0_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_40_0_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_40_1_0_V_address0() {
    output_states_40_1_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4791_p1.read());
}

void quantize_activation::thread_output_states_40_1_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read())) {
        output_states_40_1_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_40_1_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_40_1_0_V_d0() {
    output_states_40_1_0_V_d0 = select_ln887_3_reg_5464.read();
}

void quantize_activation::thread_output_states_40_1_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5315.read(), ap_const_lv6_28))) {
        output_states_40_1_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_40_1_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_40_2_0_V_address0() {
    output_states_40_2_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4791_p1.read());
}

void quantize_activation::thread_output_states_40_2_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read())) {
        output_states_40_2_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_40_2_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_40_2_0_V_d0() {
    output_states_40_2_0_V_d0 = select_ln887_5_fu_5077_p3.read();
}

void quantize_activation::thread_output_states_40_2_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5315.read(), ap_const_lv6_28))) {
        output_states_40_2_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_40_2_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_40_3_0_V_address0() {
    output_states_40_3_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4791_p1.read());
}

void quantize_activation::thread_output_states_40_3_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read())) {
        output_states_40_3_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_40_3_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_40_3_0_V_d0() {
    output_states_40_3_0_V_d0 = select_ln887_7_fu_5176_p3.read();
}

void quantize_activation::thread_output_states_40_3_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5315.read(), ap_const_lv6_28))) {
        output_states_40_3_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_40_3_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_41_0_0_V_address0() {
    output_states_41_0_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4791_p1.read());
}

void quantize_activation::thread_output_states_41_0_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read())) {
        output_states_41_0_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_41_0_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_41_0_0_V_d0() {
    output_states_41_0_0_V_d0 = select_ln887_1_reg_5396.read();
}

void quantize_activation::thread_output_states_41_0_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5315.read(), ap_const_lv6_29))) {
        output_states_41_0_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_41_0_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_41_1_0_V_address0() {
    output_states_41_1_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4791_p1.read());
}

void quantize_activation::thread_output_states_41_1_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read())) {
        output_states_41_1_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_41_1_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_41_1_0_V_d0() {
    output_states_41_1_0_V_d0 = select_ln887_3_reg_5464.read();
}

void quantize_activation::thread_output_states_41_1_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5315.read(), ap_const_lv6_29))) {
        output_states_41_1_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_41_1_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_41_2_0_V_address0() {
    output_states_41_2_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4791_p1.read());
}

void quantize_activation::thread_output_states_41_2_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read())) {
        output_states_41_2_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_41_2_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_41_2_0_V_d0() {
    output_states_41_2_0_V_d0 = select_ln887_5_fu_5077_p3.read();
}

void quantize_activation::thread_output_states_41_2_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5315.read(), ap_const_lv6_29))) {
        output_states_41_2_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_41_2_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_41_3_0_V_address0() {
    output_states_41_3_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4791_p1.read());
}

void quantize_activation::thread_output_states_41_3_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read())) {
        output_states_41_3_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_41_3_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_41_3_0_V_d0() {
    output_states_41_3_0_V_d0 = select_ln887_7_fu_5176_p3.read();
}

void quantize_activation::thread_output_states_41_3_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5315.read(), ap_const_lv6_29))) {
        output_states_41_3_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_41_3_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_42_0_0_V_address0() {
    output_states_42_0_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4791_p1.read());
}

void quantize_activation::thread_output_states_42_0_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read())) {
        output_states_42_0_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_42_0_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_42_0_0_V_d0() {
    output_states_42_0_0_V_d0 = select_ln887_1_reg_5396.read();
}

void quantize_activation::thread_output_states_42_0_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5315.read(), ap_const_lv6_2A))) {
        output_states_42_0_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_42_0_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_42_1_0_V_address0() {
    output_states_42_1_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4791_p1.read());
}

void quantize_activation::thread_output_states_42_1_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read())) {
        output_states_42_1_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_42_1_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_42_1_0_V_d0() {
    output_states_42_1_0_V_d0 = select_ln887_3_reg_5464.read();
}

void quantize_activation::thread_output_states_42_1_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5315.read(), ap_const_lv6_2A))) {
        output_states_42_1_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_42_1_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_42_2_0_V_address0() {
    output_states_42_2_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4791_p1.read());
}

void quantize_activation::thread_output_states_42_2_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read())) {
        output_states_42_2_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_42_2_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_42_2_0_V_d0() {
    output_states_42_2_0_V_d0 = select_ln887_5_fu_5077_p3.read();
}

void quantize_activation::thread_output_states_42_2_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5315.read(), ap_const_lv6_2A))) {
        output_states_42_2_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_42_2_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_42_3_0_V_address0() {
    output_states_42_3_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4791_p1.read());
}

void quantize_activation::thread_output_states_42_3_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read())) {
        output_states_42_3_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_42_3_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_42_3_0_V_d0() {
    output_states_42_3_0_V_d0 = select_ln887_7_fu_5176_p3.read();
}

void quantize_activation::thread_output_states_42_3_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5315.read(), ap_const_lv6_2A))) {
        output_states_42_3_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_42_3_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_43_0_0_V_address0() {
    output_states_43_0_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4791_p1.read());
}

void quantize_activation::thread_output_states_43_0_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read())) {
        output_states_43_0_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_43_0_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_43_0_0_V_d0() {
    output_states_43_0_0_V_d0 = select_ln887_1_reg_5396.read();
}

void quantize_activation::thread_output_states_43_0_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5315.read(), ap_const_lv6_2B))) {
        output_states_43_0_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_43_0_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_43_1_0_V_address0() {
    output_states_43_1_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4791_p1.read());
}

void quantize_activation::thread_output_states_43_1_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read())) {
        output_states_43_1_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_43_1_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_43_1_0_V_d0() {
    output_states_43_1_0_V_d0 = select_ln887_3_reg_5464.read();
}

void quantize_activation::thread_output_states_43_1_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5315.read(), ap_const_lv6_2B))) {
        output_states_43_1_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_43_1_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_43_2_0_V_address0() {
    output_states_43_2_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4791_p1.read());
}

void quantize_activation::thread_output_states_43_2_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read())) {
        output_states_43_2_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_43_2_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_43_2_0_V_d0() {
    output_states_43_2_0_V_d0 = select_ln887_5_fu_5077_p3.read();
}

void quantize_activation::thread_output_states_43_2_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5315.read(), ap_const_lv6_2B))) {
        output_states_43_2_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_43_2_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_43_3_0_V_address0() {
    output_states_43_3_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4791_p1.read());
}

void quantize_activation::thread_output_states_43_3_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read())) {
        output_states_43_3_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_43_3_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_43_3_0_V_d0() {
    output_states_43_3_0_V_d0 = select_ln887_7_fu_5176_p3.read();
}

void quantize_activation::thread_output_states_43_3_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5315.read(), ap_const_lv6_2B))) {
        output_states_43_3_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_43_3_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_44_0_0_V_address0() {
    output_states_44_0_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4791_p1.read());
}

void quantize_activation::thread_output_states_44_0_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read())) {
        output_states_44_0_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_44_0_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_44_0_0_V_d0() {
    output_states_44_0_0_V_d0 = select_ln887_1_reg_5396.read();
}

void quantize_activation::thread_output_states_44_0_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5315.read(), ap_const_lv6_2C))) {
        output_states_44_0_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_44_0_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_44_1_0_V_address0() {
    output_states_44_1_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4791_p1.read());
}

void quantize_activation::thread_output_states_44_1_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read())) {
        output_states_44_1_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_44_1_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_44_1_0_V_d0() {
    output_states_44_1_0_V_d0 = select_ln887_3_reg_5464.read();
}

void quantize_activation::thread_output_states_44_1_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5315.read(), ap_const_lv6_2C))) {
        output_states_44_1_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_44_1_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_44_2_0_V_address0() {
    output_states_44_2_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4791_p1.read());
}

void quantize_activation::thread_output_states_44_2_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read())) {
        output_states_44_2_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_44_2_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_44_2_0_V_d0() {
    output_states_44_2_0_V_d0 = select_ln887_5_fu_5077_p3.read();
}

void quantize_activation::thread_output_states_44_2_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5315.read(), ap_const_lv6_2C))) {
        output_states_44_2_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_44_2_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_44_3_0_V_address0() {
    output_states_44_3_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4791_p1.read());
}

void quantize_activation::thread_output_states_44_3_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read())) {
        output_states_44_3_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_44_3_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_44_3_0_V_d0() {
    output_states_44_3_0_V_d0 = select_ln887_7_fu_5176_p3.read();
}

void quantize_activation::thread_output_states_44_3_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5315.read(), ap_const_lv6_2C))) {
        output_states_44_3_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_44_3_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_45_0_0_V_address0() {
    output_states_45_0_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4791_p1.read());
}

void quantize_activation::thread_output_states_45_0_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read())) {
        output_states_45_0_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_45_0_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_45_0_0_V_d0() {
    output_states_45_0_0_V_d0 = select_ln887_1_reg_5396.read();
}

void quantize_activation::thread_output_states_45_0_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5315.read(), ap_const_lv6_2D))) {
        output_states_45_0_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_45_0_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_45_1_0_V_address0() {
    output_states_45_1_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4791_p1.read());
}

void quantize_activation::thread_output_states_45_1_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read())) {
        output_states_45_1_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_45_1_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_45_1_0_V_d0() {
    output_states_45_1_0_V_d0 = select_ln887_3_reg_5464.read();
}

void quantize_activation::thread_output_states_45_1_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5315.read(), ap_const_lv6_2D))) {
        output_states_45_1_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_45_1_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_45_2_0_V_address0() {
    output_states_45_2_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4791_p1.read());
}

void quantize_activation::thread_output_states_45_2_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read())) {
        output_states_45_2_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_45_2_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_45_2_0_V_d0() {
    output_states_45_2_0_V_d0 = select_ln887_5_fu_5077_p3.read();
}

void quantize_activation::thread_output_states_45_2_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5315.read(), ap_const_lv6_2D))) {
        output_states_45_2_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_45_2_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_45_3_0_V_address0() {
    output_states_45_3_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4791_p1.read());
}

void quantize_activation::thread_output_states_45_3_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read())) {
        output_states_45_3_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_45_3_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_45_3_0_V_d0() {
    output_states_45_3_0_V_d0 = select_ln887_7_fu_5176_p3.read();
}

void quantize_activation::thread_output_states_45_3_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5315.read(), ap_const_lv6_2D))) {
        output_states_45_3_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_45_3_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_46_0_0_V_address0() {
    output_states_46_0_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4791_p1.read());
}

void quantize_activation::thread_output_states_46_0_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read())) {
        output_states_46_0_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_46_0_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_46_0_0_V_d0() {
    output_states_46_0_0_V_d0 = select_ln887_1_reg_5396.read();
}

void quantize_activation::thread_output_states_46_0_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5315.read(), ap_const_lv6_2E))) {
        output_states_46_0_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_46_0_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_46_1_0_V_address0() {
    output_states_46_1_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4791_p1.read());
}

void quantize_activation::thread_output_states_46_1_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read())) {
        output_states_46_1_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_46_1_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_46_1_0_V_d0() {
    output_states_46_1_0_V_d0 = select_ln887_3_reg_5464.read();
}

void quantize_activation::thread_output_states_46_1_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5315.read(), ap_const_lv6_2E))) {
        output_states_46_1_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_46_1_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_46_2_0_V_address0() {
    output_states_46_2_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4791_p1.read());
}

void quantize_activation::thread_output_states_46_2_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read())) {
        output_states_46_2_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_46_2_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_46_2_0_V_d0() {
    output_states_46_2_0_V_d0 = select_ln887_5_fu_5077_p3.read();
}

void quantize_activation::thread_output_states_46_2_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5315.read(), ap_const_lv6_2E))) {
        output_states_46_2_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_46_2_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_46_3_0_V_address0() {
    output_states_46_3_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4791_p1.read());
}

void quantize_activation::thread_output_states_46_3_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read())) {
        output_states_46_3_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_46_3_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_46_3_0_V_d0() {
    output_states_46_3_0_V_d0 = select_ln887_7_fu_5176_p3.read();
}

void quantize_activation::thread_output_states_46_3_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5315.read(), ap_const_lv6_2E))) {
        output_states_46_3_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_46_3_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_47_0_0_V_address0() {
    output_states_47_0_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4791_p1.read());
}

void quantize_activation::thread_output_states_47_0_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read())) {
        output_states_47_0_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_47_0_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_47_0_0_V_d0() {
    output_states_47_0_0_V_d0 = select_ln887_1_reg_5396.read();
}

void quantize_activation::thread_output_states_47_0_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5315.read(), ap_const_lv6_2F))) {
        output_states_47_0_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_47_0_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_47_1_0_V_address0() {
    output_states_47_1_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4791_p1.read());
}

void quantize_activation::thread_output_states_47_1_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read())) {
        output_states_47_1_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_47_1_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_47_1_0_V_d0() {
    output_states_47_1_0_V_d0 = select_ln887_3_reg_5464.read();
}

void quantize_activation::thread_output_states_47_1_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5315.read(), ap_const_lv6_2F))) {
        output_states_47_1_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_47_1_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_47_2_0_V_address0() {
    output_states_47_2_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4791_p1.read());
}

void quantize_activation::thread_output_states_47_2_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read())) {
        output_states_47_2_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_47_2_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_47_2_0_V_d0() {
    output_states_47_2_0_V_d0 = select_ln887_5_fu_5077_p3.read();
}

void quantize_activation::thread_output_states_47_2_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5315.read(), ap_const_lv6_2F))) {
        output_states_47_2_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_47_2_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_47_3_0_V_address0() {
    output_states_47_3_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4791_p1.read());
}

void quantize_activation::thread_output_states_47_3_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read())) {
        output_states_47_3_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_47_3_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_47_3_0_V_d0() {
    output_states_47_3_0_V_d0 = select_ln887_7_fu_5176_p3.read();
}

void quantize_activation::thread_output_states_47_3_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5315.read(), ap_const_lv6_2F))) {
        output_states_47_3_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_47_3_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_48_0_0_V_address0() {
    output_states_48_0_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4791_p1.read());
}

void quantize_activation::thread_output_states_48_0_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read())) {
        output_states_48_0_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_48_0_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_48_0_0_V_d0() {
    output_states_48_0_0_V_d0 = select_ln887_1_reg_5396.read();
}

void quantize_activation::thread_output_states_48_0_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5315.read(), ap_const_lv6_30))) {
        output_states_48_0_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_48_0_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_48_1_0_V_address0() {
    output_states_48_1_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4791_p1.read());
}

void quantize_activation::thread_output_states_48_1_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read())) {
        output_states_48_1_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_48_1_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_48_1_0_V_d0() {
    output_states_48_1_0_V_d0 = select_ln887_3_reg_5464.read();
}

void quantize_activation::thread_output_states_48_1_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5315.read(), ap_const_lv6_30))) {
        output_states_48_1_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_48_1_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_48_2_0_V_address0() {
    output_states_48_2_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4791_p1.read());
}

void quantize_activation::thread_output_states_48_2_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read())) {
        output_states_48_2_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_48_2_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_48_2_0_V_d0() {
    output_states_48_2_0_V_d0 = select_ln887_5_fu_5077_p3.read();
}

void quantize_activation::thread_output_states_48_2_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5315.read(), ap_const_lv6_30))) {
        output_states_48_2_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_48_2_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_48_3_0_V_address0() {
    output_states_48_3_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4791_p1.read());
}

void quantize_activation::thread_output_states_48_3_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read())) {
        output_states_48_3_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_48_3_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_48_3_0_V_d0() {
    output_states_48_3_0_V_d0 = select_ln887_7_fu_5176_p3.read();
}

void quantize_activation::thread_output_states_48_3_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5315.read(), ap_const_lv6_30))) {
        output_states_48_3_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_48_3_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_49_0_0_V_address0() {
    output_states_49_0_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4791_p1.read());
}

void quantize_activation::thread_output_states_49_0_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read())) {
        output_states_49_0_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_49_0_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_49_0_0_V_d0() {
    output_states_49_0_0_V_d0 = select_ln887_1_reg_5396.read();
}

void quantize_activation::thread_output_states_49_0_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5315.read(), ap_const_lv6_31))) {
        output_states_49_0_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_49_0_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_49_1_0_V_address0() {
    output_states_49_1_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4791_p1.read());
}

void quantize_activation::thread_output_states_49_1_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read())) {
        output_states_49_1_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_49_1_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_49_1_0_V_d0() {
    output_states_49_1_0_V_d0 = select_ln887_3_reg_5464.read();
}

void quantize_activation::thread_output_states_49_1_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5315.read(), ap_const_lv6_31))) {
        output_states_49_1_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_49_1_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_49_2_0_V_address0() {
    output_states_49_2_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4791_p1.read());
}

void quantize_activation::thread_output_states_49_2_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read())) {
        output_states_49_2_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_49_2_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_49_2_0_V_d0() {
    output_states_49_2_0_V_d0 = select_ln887_5_fu_5077_p3.read();
}

void quantize_activation::thread_output_states_49_2_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5315.read(), ap_const_lv6_31))) {
        output_states_49_2_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_49_2_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_49_3_0_V_address0() {
    output_states_49_3_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4791_p1.read());
}

void quantize_activation::thread_output_states_49_3_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read())) {
        output_states_49_3_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_49_3_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_49_3_0_V_d0() {
    output_states_49_3_0_V_d0 = select_ln887_7_fu_5176_p3.read();
}

void quantize_activation::thread_output_states_49_3_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5315.read(), ap_const_lv6_31))) {
        output_states_49_3_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_49_3_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_4_0_0_V_address0() {
    output_states_4_0_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4791_p1.read());
}

void quantize_activation::thread_output_states_4_0_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read())) {
        output_states_4_0_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_4_0_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_4_0_0_V_d0() {
    output_states_4_0_0_V_d0 = select_ln887_1_reg_5396.read();
}

void quantize_activation::thread_output_states_4_0_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5315.read(), ap_const_lv6_4))) {
        output_states_4_0_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_4_0_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_4_1_0_V_address0() {
    output_states_4_1_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4791_p1.read());
}

void quantize_activation::thread_output_states_4_1_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read())) {
        output_states_4_1_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_4_1_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_4_1_0_V_d0() {
    output_states_4_1_0_V_d0 = select_ln887_3_reg_5464.read();
}

void quantize_activation::thread_output_states_4_1_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5315.read(), ap_const_lv6_4))) {
        output_states_4_1_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_4_1_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_4_2_0_V_address0() {
    output_states_4_2_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4791_p1.read());
}

void quantize_activation::thread_output_states_4_2_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read())) {
        output_states_4_2_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_4_2_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_4_2_0_V_d0() {
    output_states_4_2_0_V_d0 = select_ln887_5_fu_5077_p3.read();
}

void quantize_activation::thread_output_states_4_2_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5315.read(), ap_const_lv6_4))) {
        output_states_4_2_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_4_2_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_4_3_0_V_address0() {
    output_states_4_3_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4791_p1.read());
}

void quantize_activation::thread_output_states_4_3_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read())) {
        output_states_4_3_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_4_3_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_4_3_0_V_d0() {
    output_states_4_3_0_V_d0 = select_ln887_7_fu_5176_p3.read();
}

void quantize_activation::thread_output_states_4_3_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5315.read(), ap_const_lv6_4))) {
        output_states_4_3_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_4_3_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_50_0_0_V_address0() {
    output_states_50_0_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4791_p1.read());
}

void quantize_activation::thread_output_states_50_0_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read())) {
        output_states_50_0_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_50_0_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_50_0_0_V_d0() {
    output_states_50_0_0_V_d0 = select_ln887_1_reg_5396.read();
}

void quantize_activation::thread_output_states_50_0_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5315.read(), ap_const_lv6_32))) {
        output_states_50_0_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_50_0_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_50_1_0_V_address0() {
    output_states_50_1_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4791_p1.read());
}

void quantize_activation::thread_output_states_50_1_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read())) {
        output_states_50_1_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_50_1_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_50_1_0_V_d0() {
    output_states_50_1_0_V_d0 = select_ln887_3_reg_5464.read();
}

void quantize_activation::thread_output_states_50_1_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5315.read(), ap_const_lv6_32))) {
        output_states_50_1_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_50_1_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_50_2_0_V_address0() {
    output_states_50_2_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4791_p1.read());
}

void quantize_activation::thread_output_states_50_2_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read())) {
        output_states_50_2_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_50_2_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_50_2_0_V_d0() {
    output_states_50_2_0_V_d0 = select_ln887_5_fu_5077_p3.read();
}

void quantize_activation::thread_output_states_50_2_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5315.read(), ap_const_lv6_32))) {
        output_states_50_2_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_50_2_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_50_3_0_V_address0() {
    output_states_50_3_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4791_p1.read());
}

void quantize_activation::thread_output_states_50_3_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read())) {
        output_states_50_3_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_50_3_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_50_3_0_V_d0() {
    output_states_50_3_0_V_d0 = select_ln887_7_fu_5176_p3.read();
}

void quantize_activation::thread_output_states_50_3_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5315.read(), ap_const_lv6_32))) {
        output_states_50_3_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_50_3_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_51_0_0_V_address0() {
    output_states_51_0_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4791_p1.read());
}

void quantize_activation::thread_output_states_51_0_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read())) {
        output_states_51_0_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_51_0_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_51_0_0_V_d0() {
    output_states_51_0_0_V_d0 = select_ln887_1_reg_5396.read();
}

void quantize_activation::thread_output_states_51_0_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5315.read(), ap_const_lv6_33))) {
        output_states_51_0_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_51_0_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_51_1_0_V_address0() {
    output_states_51_1_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4791_p1.read());
}

void quantize_activation::thread_output_states_51_1_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read())) {
        output_states_51_1_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_51_1_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_51_1_0_V_d0() {
    output_states_51_1_0_V_d0 = select_ln887_3_reg_5464.read();
}

void quantize_activation::thread_output_states_51_1_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5315.read(), ap_const_lv6_33))) {
        output_states_51_1_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_51_1_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_51_2_0_V_address0() {
    output_states_51_2_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4791_p1.read());
}

void quantize_activation::thread_output_states_51_2_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read())) {
        output_states_51_2_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_51_2_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_51_2_0_V_d0() {
    output_states_51_2_0_V_d0 = select_ln887_5_fu_5077_p3.read();
}

void quantize_activation::thread_output_states_51_2_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5315.read(), ap_const_lv6_33))) {
        output_states_51_2_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_51_2_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_51_3_0_V_address0() {
    output_states_51_3_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4791_p1.read());
}

void quantize_activation::thread_output_states_51_3_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read())) {
        output_states_51_3_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_51_3_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_51_3_0_V_d0() {
    output_states_51_3_0_V_d0 = select_ln887_7_fu_5176_p3.read();
}

void quantize_activation::thread_output_states_51_3_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5315.read(), ap_const_lv6_33))) {
        output_states_51_3_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_51_3_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_52_0_0_V_address0() {
    output_states_52_0_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4791_p1.read());
}

void quantize_activation::thread_output_states_52_0_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read())) {
        output_states_52_0_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_52_0_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_52_0_0_V_d0() {
    output_states_52_0_0_V_d0 = select_ln887_1_reg_5396.read();
}

void quantize_activation::thread_output_states_52_0_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5315.read(), ap_const_lv6_34))) {
        output_states_52_0_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_52_0_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_52_1_0_V_address0() {
    output_states_52_1_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4791_p1.read());
}

void quantize_activation::thread_output_states_52_1_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read())) {
        output_states_52_1_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_52_1_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_52_1_0_V_d0() {
    output_states_52_1_0_V_d0 = select_ln887_3_reg_5464.read();
}

void quantize_activation::thread_output_states_52_1_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5315.read(), ap_const_lv6_34))) {
        output_states_52_1_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_52_1_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_52_2_0_V_address0() {
    output_states_52_2_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4791_p1.read());
}

void quantize_activation::thread_output_states_52_2_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read())) {
        output_states_52_2_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_52_2_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_52_2_0_V_d0() {
    output_states_52_2_0_V_d0 = select_ln887_5_fu_5077_p3.read();
}

void quantize_activation::thread_output_states_52_2_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5315.read(), ap_const_lv6_34))) {
        output_states_52_2_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_52_2_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_52_3_0_V_address0() {
    output_states_52_3_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4791_p1.read());
}

void quantize_activation::thread_output_states_52_3_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read())) {
        output_states_52_3_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_52_3_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_52_3_0_V_d0() {
    output_states_52_3_0_V_d0 = select_ln887_7_fu_5176_p3.read();
}

void quantize_activation::thread_output_states_52_3_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5315.read(), ap_const_lv6_34))) {
        output_states_52_3_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_52_3_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_53_0_0_V_address0() {
    output_states_53_0_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4791_p1.read());
}

void quantize_activation::thread_output_states_53_0_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read())) {
        output_states_53_0_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_53_0_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_53_0_0_V_d0() {
    output_states_53_0_0_V_d0 = select_ln887_1_reg_5396.read();
}

void quantize_activation::thread_output_states_53_0_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5315.read(), ap_const_lv6_35))) {
        output_states_53_0_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_53_0_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_53_1_0_V_address0() {
    output_states_53_1_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4791_p1.read());
}

void quantize_activation::thread_output_states_53_1_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read())) {
        output_states_53_1_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_53_1_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_53_1_0_V_d0() {
    output_states_53_1_0_V_d0 = select_ln887_3_reg_5464.read();
}

void quantize_activation::thread_output_states_53_1_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5315.read(), ap_const_lv6_35))) {
        output_states_53_1_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_53_1_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_53_2_0_V_address0() {
    output_states_53_2_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4791_p1.read());
}

void quantize_activation::thread_output_states_53_2_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read())) {
        output_states_53_2_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_53_2_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_53_2_0_V_d0() {
    output_states_53_2_0_V_d0 = select_ln887_5_fu_5077_p3.read();
}

void quantize_activation::thread_output_states_53_2_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5315.read(), ap_const_lv6_35))) {
        output_states_53_2_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_53_2_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_53_3_0_V_address0() {
    output_states_53_3_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4791_p1.read());
}

void quantize_activation::thread_output_states_53_3_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read())) {
        output_states_53_3_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_53_3_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_53_3_0_V_d0() {
    output_states_53_3_0_V_d0 = select_ln887_7_fu_5176_p3.read();
}

void quantize_activation::thread_output_states_53_3_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5315.read(), ap_const_lv6_35))) {
        output_states_53_3_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_53_3_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_54_0_0_V_address0() {
    output_states_54_0_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4791_p1.read());
}

void quantize_activation::thread_output_states_54_0_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read())) {
        output_states_54_0_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_54_0_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_54_0_0_V_d0() {
    output_states_54_0_0_V_d0 = select_ln887_1_reg_5396.read();
}

void quantize_activation::thread_output_states_54_0_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5315.read(), ap_const_lv6_36))) {
        output_states_54_0_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_54_0_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_54_1_0_V_address0() {
    output_states_54_1_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4791_p1.read());
}

void quantize_activation::thread_output_states_54_1_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read())) {
        output_states_54_1_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_54_1_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_54_1_0_V_d0() {
    output_states_54_1_0_V_d0 = select_ln887_3_reg_5464.read();
}

void quantize_activation::thread_output_states_54_1_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5315.read(), ap_const_lv6_36))) {
        output_states_54_1_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_54_1_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_54_2_0_V_address0() {
    output_states_54_2_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4791_p1.read());
}

void quantize_activation::thread_output_states_54_2_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read())) {
        output_states_54_2_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_54_2_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_54_2_0_V_d0() {
    output_states_54_2_0_V_d0 = select_ln887_5_fu_5077_p3.read();
}

void quantize_activation::thread_output_states_54_2_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5315.read(), ap_const_lv6_36))) {
        output_states_54_2_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_54_2_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_54_3_0_V_address0() {
    output_states_54_3_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4791_p1.read());
}

void quantize_activation::thread_output_states_54_3_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read())) {
        output_states_54_3_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_54_3_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_54_3_0_V_d0() {
    output_states_54_3_0_V_d0 = select_ln887_7_fu_5176_p3.read();
}

void quantize_activation::thread_output_states_54_3_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5315.read(), ap_const_lv6_36))) {
        output_states_54_3_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_54_3_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_55_0_0_V_address0() {
    output_states_55_0_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4791_p1.read());
}

void quantize_activation::thread_output_states_55_0_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read())) {
        output_states_55_0_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_55_0_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_55_0_0_V_d0() {
    output_states_55_0_0_V_d0 = select_ln887_1_reg_5396.read();
}

void quantize_activation::thread_output_states_55_0_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5315.read(), ap_const_lv6_37))) {
        output_states_55_0_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_55_0_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_55_1_0_V_address0() {
    output_states_55_1_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4791_p1.read());
}

void quantize_activation::thread_output_states_55_1_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read())) {
        output_states_55_1_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_55_1_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_55_1_0_V_d0() {
    output_states_55_1_0_V_d0 = select_ln887_3_reg_5464.read();
}

void quantize_activation::thread_output_states_55_1_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5315.read(), ap_const_lv6_37))) {
        output_states_55_1_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_55_1_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_55_2_0_V_address0() {
    output_states_55_2_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4791_p1.read());
}

void quantize_activation::thread_output_states_55_2_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read())) {
        output_states_55_2_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_55_2_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_55_2_0_V_d0() {
    output_states_55_2_0_V_d0 = select_ln887_5_fu_5077_p3.read();
}

void quantize_activation::thread_output_states_55_2_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5315.read(), ap_const_lv6_37))) {
        output_states_55_2_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_55_2_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_55_3_0_V_address0() {
    output_states_55_3_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4791_p1.read());
}

void quantize_activation::thread_output_states_55_3_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read())) {
        output_states_55_3_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_55_3_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_55_3_0_V_d0() {
    output_states_55_3_0_V_d0 = select_ln887_7_fu_5176_p3.read();
}

void quantize_activation::thread_output_states_55_3_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5315.read(), ap_const_lv6_37))) {
        output_states_55_3_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_55_3_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_56_0_0_V_address0() {
    output_states_56_0_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4791_p1.read());
}

void quantize_activation::thread_output_states_56_0_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read())) {
        output_states_56_0_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_56_0_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_56_0_0_V_d0() {
    output_states_56_0_0_V_d0 = select_ln887_1_reg_5396.read();
}

void quantize_activation::thread_output_states_56_0_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5315.read(), ap_const_lv6_38))) {
        output_states_56_0_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_56_0_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_56_1_0_V_address0() {
    output_states_56_1_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4791_p1.read());
}

void quantize_activation::thread_output_states_56_1_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read())) {
        output_states_56_1_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_56_1_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_56_1_0_V_d0() {
    output_states_56_1_0_V_d0 = select_ln887_3_reg_5464.read();
}

void quantize_activation::thread_output_states_56_1_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5315.read(), ap_const_lv6_38))) {
        output_states_56_1_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_56_1_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_56_2_0_V_address0() {
    output_states_56_2_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4791_p1.read());
}

void quantize_activation::thread_output_states_56_2_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read())) {
        output_states_56_2_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_56_2_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_56_2_0_V_d0() {
    output_states_56_2_0_V_d0 = select_ln887_5_fu_5077_p3.read();
}

void quantize_activation::thread_output_states_56_2_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5315.read(), ap_const_lv6_38))) {
        output_states_56_2_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_56_2_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_56_3_0_V_address0() {
    output_states_56_3_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4791_p1.read());
}

void quantize_activation::thread_output_states_56_3_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read())) {
        output_states_56_3_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_56_3_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_56_3_0_V_d0() {
    output_states_56_3_0_V_d0 = select_ln887_7_fu_5176_p3.read();
}

void quantize_activation::thread_output_states_56_3_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5315.read(), ap_const_lv6_38))) {
        output_states_56_3_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_56_3_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_57_0_0_V_address0() {
    output_states_57_0_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4791_p1.read());
}

void quantize_activation::thread_output_states_57_0_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read())) {
        output_states_57_0_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_57_0_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_57_0_0_V_d0() {
    output_states_57_0_0_V_d0 = select_ln887_1_reg_5396.read();
}

void quantize_activation::thread_output_states_57_0_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5315.read(), ap_const_lv6_39))) {
        output_states_57_0_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_57_0_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_57_1_0_V_address0() {
    output_states_57_1_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4791_p1.read());
}

void quantize_activation::thread_output_states_57_1_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read())) {
        output_states_57_1_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_57_1_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_57_1_0_V_d0() {
    output_states_57_1_0_V_d0 = select_ln887_3_reg_5464.read();
}

void quantize_activation::thread_output_states_57_1_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5315.read(), ap_const_lv6_39))) {
        output_states_57_1_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_57_1_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_57_2_0_V_address0() {
    output_states_57_2_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4791_p1.read());
}

void quantize_activation::thread_output_states_57_2_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read())) {
        output_states_57_2_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_57_2_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_57_2_0_V_d0() {
    output_states_57_2_0_V_d0 = select_ln887_5_fu_5077_p3.read();
}

void quantize_activation::thread_output_states_57_2_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5315.read(), ap_const_lv6_39))) {
        output_states_57_2_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_57_2_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_57_3_0_V_address0() {
    output_states_57_3_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4791_p1.read());
}

void quantize_activation::thread_output_states_57_3_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read())) {
        output_states_57_3_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_57_3_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_57_3_0_V_d0() {
    output_states_57_3_0_V_d0 = select_ln887_7_fu_5176_p3.read();
}

void quantize_activation::thread_output_states_57_3_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5315.read(), ap_const_lv6_39))) {
        output_states_57_3_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_57_3_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_58_0_0_V_address0() {
    output_states_58_0_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4791_p1.read());
}

void quantize_activation::thread_output_states_58_0_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read())) {
        output_states_58_0_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_58_0_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_58_0_0_V_d0() {
    output_states_58_0_0_V_d0 = select_ln887_1_reg_5396.read();
}

void quantize_activation::thread_output_states_58_0_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5315.read(), ap_const_lv6_3A))) {
        output_states_58_0_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_58_0_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_58_1_0_V_address0() {
    output_states_58_1_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4791_p1.read());
}

void quantize_activation::thread_output_states_58_1_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read())) {
        output_states_58_1_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_58_1_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_58_1_0_V_d0() {
    output_states_58_1_0_V_d0 = select_ln887_3_reg_5464.read();
}

void quantize_activation::thread_output_states_58_1_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5315.read(), ap_const_lv6_3A))) {
        output_states_58_1_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_58_1_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_58_2_0_V_address0() {
    output_states_58_2_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4791_p1.read());
}

void quantize_activation::thread_output_states_58_2_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read())) {
        output_states_58_2_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_58_2_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_58_2_0_V_d0() {
    output_states_58_2_0_V_d0 = select_ln887_5_fu_5077_p3.read();
}

void quantize_activation::thread_output_states_58_2_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5315.read(), ap_const_lv6_3A))) {
        output_states_58_2_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_58_2_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_58_3_0_V_address0() {
    output_states_58_3_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4791_p1.read());
}

void quantize_activation::thread_output_states_58_3_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read())) {
        output_states_58_3_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_58_3_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_58_3_0_V_d0() {
    output_states_58_3_0_V_d0 = select_ln887_7_fu_5176_p3.read();
}

void quantize_activation::thread_output_states_58_3_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5315.read(), ap_const_lv6_3A))) {
        output_states_58_3_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_58_3_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_59_0_0_V_address0() {
    output_states_59_0_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4791_p1.read());
}

void quantize_activation::thread_output_states_59_0_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read())) {
        output_states_59_0_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_59_0_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_59_0_0_V_d0() {
    output_states_59_0_0_V_d0 = select_ln887_1_reg_5396.read();
}

void quantize_activation::thread_output_states_59_0_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5315.read(), ap_const_lv6_3B))) {
        output_states_59_0_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_59_0_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_59_1_0_V_address0() {
    output_states_59_1_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4791_p1.read());
}

void quantize_activation::thread_output_states_59_1_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read())) {
        output_states_59_1_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_59_1_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_59_1_0_V_d0() {
    output_states_59_1_0_V_d0 = select_ln887_3_reg_5464.read();
}

void quantize_activation::thread_output_states_59_1_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5315.read(), ap_const_lv6_3B))) {
        output_states_59_1_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_59_1_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_59_2_0_V_address0() {
    output_states_59_2_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4791_p1.read());
}

void quantize_activation::thread_output_states_59_2_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read())) {
        output_states_59_2_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_59_2_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_59_2_0_V_d0() {
    output_states_59_2_0_V_d0 = select_ln887_5_fu_5077_p3.read();
}

void quantize_activation::thread_output_states_59_2_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5315.read(), ap_const_lv6_3B))) {
        output_states_59_2_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_59_2_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_59_3_0_V_address0() {
    output_states_59_3_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4791_p1.read());
}

void quantize_activation::thread_output_states_59_3_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read())) {
        output_states_59_3_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_59_3_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_59_3_0_V_d0() {
    output_states_59_3_0_V_d0 = select_ln887_7_fu_5176_p3.read();
}

void quantize_activation::thread_output_states_59_3_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5315.read(), ap_const_lv6_3B))) {
        output_states_59_3_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_59_3_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_5_0_0_V_address0() {
    output_states_5_0_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4791_p1.read());
}

void quantize_activation::thread_output_states_5_0_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read())) {
        output_states_5_0_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_5_0_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_5_0_0_V_d0() {
    output_states_5_0_0_V_d0 = select_ln887_1_reg_5396.read();
}

void quantize_activation::thread_output_states_5_0_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5315.read(), ap_const_lv6_5))) {
        output_states_5_0_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_5_0_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_5_1_0_V_address0() {
    output_states_5_1_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4791_p1.read());
}

void quantize_activation::thread_output_states_5_1_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read())) {
        output_states_5_1_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_5_1_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_5_1_0_V_d0() {
    output_states_5_1_0_V_d0 = select_ln887_3_reg_5464.read();
}

void quantize_activation::thread_output_states_5_1_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5315.read(), ap_const_lv6_5))) {
        output_states_5_1_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_5_1_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_5_2_0_V_address0() {
    output_states_5_2_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4791_p1.read());
}

void quantize_activation::thread_output_states_5_2_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read())) {
        output_states_5_2_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_5_2_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_5_2_0_V_d0() {
    output_states_5_2_0_V_d0 = select_ln887_5_fu_5077_p3.read();
}

void quantize_activation::thread_output_states_5_2_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5315.read(), ap_const_lv6_5))) {
        output_states_5_2_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_5_2_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_5_3_0_V_address0() {
    output_states_5_3_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4791_p1.read());
}

void quantize_activation::thread_output_states_5_3_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read())) {
        output_states_5_3_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_5_3_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_5_3_0_V_d0() {
    output_states_5_3_0_V_d0 = select_ln887_7_fu_5176_p3.read();
}

void quantize_activation::thread_output_states_5_3_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5315.read(), ap_const_lv6_5))) {
        output_states_5_3_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_5_3_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_60_0_0_V_address0() {
    output_states_60_0_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4791_p1.read());
}

void quantize_activation::thread_output_states_60_0_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read())) {
        output_states_60_0_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_60_0_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_60_0_0_V_d0() {
    output_states_60_0_0_V_d0 = select_ln887_1_reg_5396.read();
}

void quantize_activation::thread_output_states_60_0_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5315.read(), ap_const_lv6_3C))) {
        output_states_60_0_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_60_0_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_60_1_0_V_address0() {
    output_states_60_1_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4791_p1.read());
}

void quantize_activation::thread_output_states_60_1_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read())) {
        output_states_60_1_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_60_1_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_60_1_0_V_d0() {
    output_states_60_1_0_V_d0 = select_ln887_3_reg_5464.read();
}

void quantize_activation::thread_output_states_60_1_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5315.read(), ap_const_lv6_3C))) {
        output_states_60_1_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_60_1_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_60_2_0_V_address0() {
    output_states_60_2_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4791_p1.read());
}

void quantize_activation::thread_output_states_60_2_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read())) {
        output_states_60_2_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_60_2_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_60_2_0_V_d0() {
    output_states_60_2_0_V_d0 = select_ln887_5_fu_5077_p3.read();
}

void quantize_activation::thread_output_states_60_2_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5315.read(), ap_const_lv6_3C))) {
        output_states_60_2_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_60_2_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_60_3_0_V_address0() {
    output_states_60_3_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4791_p1.read());
}

void quantize_activation::thread_output_states_60_3_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read())) {
        output_states_60_3_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_60_3_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_60_3_0_V_d0() {
    output_states_60_3_0_V_d0 = select_ln887_7_fu_5176_p3.read();
}

void quantize_activation::thread_output_states_60_3_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5315.read(), ap_const_lv6_3C))) {
        output_states_60_3_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_60_3_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_61_0_0_V_address0() {
    output_states_61_0_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4791_p1.read());
}

void quantize_activation::thread_output_states_61_0_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read())) {
        output_states_61_0_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_61_0_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_61_0_0_V_d0() {
    output_states_61_0_0_V_d0 = select_ln887_1_reg_5396.read();
}

void quantize_activation::thread_output_states_61_0_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5315.read(), ap_const_lv6_3D))) {
        output_states_61_0_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_61_0_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_61_1_0_V_address0() {
    output_states_61_1_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4791_p1.read());
}

void quantize_activation::thread_output_states_61_1_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read())) {
        output_states_61_1_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_61_1_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_61_1_0_V_d0() {
    output_states_61_1_0_V_d0 = select_ln887_3_reg_5464.read();
}

void quantize_activation::thread_output_states_61_1_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5315.read(), ap_const_lv6_3D))) {
        output_states_61_1_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_61_1_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_61_2_0_V_address0() {
    output_states_61_2_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4791_p1.read());
}

void quantize_activation::thread_output_states_61_2_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read())) {
        output_states_61_2_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_61_2_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_61_2_0_V_d0() {
    output_states_61_2_0_V_d0 = select_ln887_5_fu_5077_p3.read();
}

}


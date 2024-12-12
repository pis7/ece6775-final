#include "attention.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void attention::thread_F2_1_fu_2563_p2() {
    F2_1_fu_2563_p2 = (!ap_const_lv12_433.is_01() || !zext_ln461_1_fu_2523_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_433) - sc_biguint<12>(zext_ln461_1_fu_2523_p1.read()));
}

void attention::thread_F2_2_fu_2681_p2() {
    F2_2_fu_2681_p2 = (!ap_const_lv12_433.is_01() || !zext_ln461_2_fu_2641_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_433) - sc_biguint<12>(zext_ln461_2_fu_2641_p1.read()));
}

void attention::thread_F2_3_fu_3117_p2() {
    F2_3_fu_3117_p2 = (!ap_const_lv12_433.is_01() || !zext_ln461_3_fu_3077_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_433) - sc_biguint<12>(zext_ln461_3_fu_3077_p1.read()));
}

void attention::thread_F2_fu_2286_p2() {
    F2_fu_2286_p2 = (!ap_const_lv12_433.is_01() || !zext_ln461_fu_2246_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_433) - sc_biguint<12>(zext_ln461_fu_2246_p1.read()));
}

void attention::thread_add_ln480_fu_2158_p2() {
    add_ln480_fu_2158_p2 = (!v284_0_0_reg_1064.read().is_01() || !ap_const_lv11_1.is_01())? sc_lv<11>(): (sc_biguint<11>(v284_0_0_reg_1064.read()) + sc_biguint<11>(ap_const_lv11_1));
}

void attention::thread_add_ln502_fu_2175_p2() {
    add_ln502_fu_2175_p2 = (!v295_0_0_reg_1075.read().is_01() || !ap_const_lv11_1.is_01())? sc_lv<11>(): (sc_biguint<11>(v295_0_0_reg_1075.read()) + sc_biguint<11>(ap_const_lv11_1));
}

void attention::thread_add_ln508_fu_2192_p2() {
    add_ln508_fu_2192_p2 = (!v298_0_0_reg_1086.read().is_01() || !ap_const_lv11_1.is_01())? sc_lv<11>(): (sc_biguint<11>(v298_0_0_reg_1086.read()) + sc_biguint<11>(ap_const_lv11_1));
}

void attention::thread_add_ln514_fu_2209_p2() {
    add_ln514_fu_2209_p2 = (!v301_0_0_reg_1097.read().is_01() || !ap_const_lv11_1.is_01())? sc_lv<11>(): (sc_biguint<11>(v301_0_0_reg_1097.read()) + sc_biguint<11>(ap_const_lv11_1));
}

void attention::thread_add_ln581_1_fu_2575_p2() {
    add_ln581_1_fu_2575_p2 = (!ap_const_lv12_FEC.is_01() || !F2_1_fu_2563_p2.read().is_01())? sc_lv<12>(): (sc_bigint<12>(ap_const_lv12_FEC) + sc_biguint<12>(F2_1_fu_2563_p2.read()));
}

void attention::thread_add_ln581_2_fu_2693_p2() {
    add_ln581_2_fu_2693_p2 = (!ap_const_lv12_FEC.is_01() || !F2_2_fu_2681_p2.read().is_01())? sc_lv<12>(): (sc_bigint<12>(ap_const_lv12_FEC) + sc_biguint<12>(F2_2_fu_2681_p2.read()));
}

void attention::thread_add_ln581_3_fu_3129_p2() {
    add_ln581_3_fu_3129_p2 = (!ap_const_lv12_FEC.is_01() || !F2_3_fu_3117_p2.read().is_01())? sc_lv<12>(): (sc_bigint<12>(ap_const_lv12_FEC) + sc_biguint<12>(F2_3_fu_3117_p2.read()));
}

void attention::thread_add_ln581_fu_2298_p2() {
    add_ln581_fu_2298_p2 = (!ap_const_lv12_FEC.is_01() || !F2_fu_2286_p2.read().is_01())? sc_lv<12>(): (sc_bigint<12>(ap_const_lv12_FEC) + sc_biguint<12>(F2_fu_2286_p2.read()));
}

void attention::thread_add_ln584_fu_3372_p2() {
    add_ln584_fu_3372_p2 = (!v336_0_0_reg_1119.read().is_01() || !ap_const_lv7_1.is_01())? sc_lv<7>(): (sc_biguint<7>(v336_0_0_reg_1119.read()) + sc_biguint<7>(ap_const_lv7_1));
}

void attention::thread_add_ln585_fu_3382_p2() {
    add_ln585_fu_3382_p2 = (!sub_ln585_reg_4399.read().is_01() || !zext_ln585_1_fu_3378_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(sub_ln585_reg_4399.read()) + sc_biguint<12>(zext_ln585_1_fu_3378_p1.read()));
}

void attention::thread_add_ln592_fu_3436_p2() {
    add_ln592_fu_3436_p2 = (!v340_0_0_reg_1141.read().is_01() || !ap_const_lv7_1.is_01())? sc_lv<7>(): (sc_biguint<7>(v340_0_0_reg_1141.read()) + sc_biguint<7>(ap_const_lv7_1));
}

void attention::thread_add_ln593_fu_3446_p2() {
    add_ln593_fu_3446_p2 = (!sub_ln593_reg_4420.read().is_01() || !zext_ln593_1_fu_3442_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(sub_ln593_reg_4420.read()) + sc_biguint<12>(zext_ln593_1_fu_3442_p1.read()));
}

void attention::thread_add_ln602_1_fu_3565_p2() {
    add_ln602_1_fu_3565_p2 = (!sub_ln602_1_reg_4454.read().is_01() || !zext_ln602_3_fu_3561_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(sub_ln602_1_reg_4454.read()) + sc_biguint<15>(zext_ln602_3_fu_3561_p1.read()));
}

void attention::thread_add_ln602_fu_3518_p2() {
    add_ln602_fu_3518_p2 = (!zext_ln602_2_fu_3514_p1.read().is_01() || !sext_ln602_reg_4441.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln602_2_fu_3514_p1.read()) + sc_bigint<10>(sext_ln602_reg_4441.read()));
}

void attention::thread_add_ln610_1_fu_3684_p2() {
    add_ln610_1_fu_3684_p2 = (!sub_ln610_1_reg_4488.read().is_01() || !zext_ln610_3_fu_3680_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(sub_ln610_1_reg_4488.read()) + sc_biguint<15>(zext_ln610_3_fu_3680_p1.read()));
}

void attention::thread_add_ln610_fu_3637_p2() {
    add_ln610_fu_3637_p2 = (!zext_ln610_2_fu_3633_p1.read().is_01() || !sext_ln610_reg_4475.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln610_2_fu_3633_p1.read()) + sc_bigint<10>(sext_ln610_reg_4475.read()));
}

void attention::thread_add_ln628_fu_3738_p2() {
    add_ln628_fu_3738_p2 = (!v356_0_0_reg_1229.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(v356_0_0_reg_1229.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void attention::thread_add_ln629_fu_3748_p2() {
    add_ln629_fu_3748_p2 = (!sub_ln629_reg_4509.read().is_01() || !zext_ln629_1_fu_3744_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(sub_ln629_reg_4509.read()) + sc_biguint<8>(zext_ln629_1_fu_3744_p1.read()));
}

void attention::thread_add_ln638_fu_3802_p2() {
    add_ln638_fu_3802_p2 = (!k10_0_0_reg_1251.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(k10_0_0_reg_1251.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void attention::thread_add_ln639_fu_3812_p2() {
    add_ln639_fu_3812_p2 = (!sub_ln639_reg_4530.read().is_01() || !zext_ln639_1_fu_3808_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(sub_ln639_reg_4530.read()) + sc_biguint<8>(zext_ln639_1_fu_3808_p1.read()));
}

void attention::thread_add_ln666_fu_3909_p2() {
    add_ln666_fu_3909_p2 = (!v376_0_0_reg_1284.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(v376_0_0_reg_1284.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void attention::thread_add_ln667_fu_3919_p2() {
    add_ln667_fu_3919_p2 = (!sub_ln667_reg_4579.read().is_01() || !zext_ln667_1_fu_3915_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(sub_ln667_reg_4579.read()) + sc_biguint<8>(zext_ln667_1_fu_3915_p1.read()));
}

void attention::thread_add_ln675_fu_3973_p2() {
    add_ln675_fu_3973_p2 = (!v380_0_0_reg_1306.read().is_01() || !ap_const_lv7_1.is_01())? sc_lv<7>(): (sc_biguint<7>(v380_0_0_reg_1306.read()) + sc_biguint<7>(ap_const_lv7_1));
}

void attention::thread_add_ln676_fu_3983_p2() {
    add_ln676_fu_3983_p2 = (!sub_ln676_reg_4600.read().is_01() || !zext_ln676_1_fu_3979_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(sub_ln676_reg_4600.read()) + sc_biguint<12>(zext_ln676_1_fu_3979_p1.read()));
}

void attention::thread_add_ln683_fu_3999_p2() {
    add_ln683_fu_3999_p2 = (!v383_0_0_reg_1317.read().is_01() || !ap_const_lv11_1.is_01())? sc_lv<11>(): (sc_biguint<11>(v383_0_0_reg_1317.read()) + sc_biguint<11>(ap_const_lv11_1));
}

void attention::thread_add_ln688_fu_4016_p2() {
    add_ln688_fu_4016_p2 = (!h7_0_0_reg_1328.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(h7_0_0_reg_1328.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void attention::thread_add_ln689_fu_4092_p2() {
    add_ln689_fu_4092_p2 = (!d4_0_0_reg_1339.read().is_01() || !ap_const_lv7_1.is_01())? sc_lv<7>(): (sc_biguint<7>(d4_0_0_reg_1339.read()) + sc_biguint<7>(ap_const_lv7_1));
}

void attention::thread_add_ln690_fu_4098_p2() {
    add_ln690_fu_4098_p2 = (!sub_ln690_reg_4629.read().is_01() || !zext_ln689_fu_4082_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(sub_ln690_reg_4629.read()) + sc_biguint<12>(zext_ln689_fu_4082_p1.read()));
}

void attention::thread_add_ln691_fu_4108_p2() {
    add_ln691_fu_4108_p2 = (!zext_ln689_fu_4082_p1.read().is_01() || !sub_ln691_reg_4634.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln689_fu_4082_p1.read()) + sc_biguint<12>(sub_ln691_reg_4634.read()));
}

void attention::thread_add_ln697_fu_4127_p2() {
    add_ln697_fu_4127_p2 = (!v390_0_0_reg_1350.read().is_01() || !ap_const_lv11_1.is_01())? sc_lv<11>(): (sc_biguint<11>(v390_0_0_reg_1350.read()) + sc_biguint<11>(ap_const_lv11_1));
}

void attention::thread_add_ln736_fu_4144_p2() {
    add_ln736_fu_4144_p2 = (!v408_0_0_reg_1361.read().is_01() || !ap_const_lv11_1.is_01())? sc_lv<11>(): (sc_biguint<11>(v408_0_0_reg_1361.read()) + sc_biguint<11>(ap_const_lv11_1));
}

void attention::thread_and_ln581_1_fu_2803_p2() {
    and_ln581_1_fu_2803_p2 = (icmp_ln581_1_reg_4267.read() & xor_ln582_1_fu_2797_p2.read());
}

void attention::thread_and_ln581_2_fu_2962_p2() {
    and_ln581_2_fu_2962_p2 = (icmp_ln581_2_reg_4307.read() & xor_ln582_2_fu_2956_p2.read());
}

void attention::thread_and_ln581_3_fu_3239_p2() {
    and_ln581_3_fu_3239_p2 = (icmp_ln581_3_reg_4357.read() & xor_ln582_3_fu_3233_p2.read());
}

void attention::thread_and_ln581_fu_2408_p2() {
    and_ln581_fu_2408_p2 = (icmp_ln581_reg_4222.read() & xor_ln582_fu_2402_p2.read());
}

void attention::thread_and_ln582_1_fu_2788_p2() {
    and_ln582_1_fu_2788_p2 = (icmp_ln582_1_reg_4279.read() & xor_ln571_1_fu_2783_p2.read());
}

void attention::thread_and_ln582_2_fu_2947_p2() {
    and_ln582_2_fu_2947_p2 = (icmp_ln582_2_reg_4319.read() & xor_ln571_2_fu_2942_p2.read());
}

void attention::thread_and_ln582_3_fu_3224_p2() {
    and_ln582_3_fu_3224_p2 = (icmp_ln582_3_reg_4369.read() & xor_ln571_3_fu_3219_p2.read());
}

void attention::thread_and_ln582_fu_2393_p2() {
    and_ln582_fu_2393_p2 = (icmp_ln582_reg_4234.read() & xor_ln571_fu_2388_p2.read());
}

void attention::thread_and_ln585_2_fu_2425_p2() {
    and_ln585_2_fu_2425_p2 = (and_ln581_fu_2408_p2.read() & icmp_ln585_fu_2341_p2.read());
}

void attention::thread_and_ln585_3_fu_2814_p2() {
    and_ln585_3_fu_2814_p2 = (and_ln581_1_fu_2803_p2.read() & xor_ln585_1_fu_2808_p2.read());
}

void attention::thread_and_ln585_4_fu_2820_p2() {
    and_ln585_4_fu_2820_p2 = (and_ln581_1_fu_2803_p2.read() & icmp_ln585_1_fu_2736_p2.read());
}

void attention::thread_and_ln585_5_fu_2973_p2() {
    and_ln585_5_fu_2973_p2 = (and_ln581_2_fu_2962_p2.read() & xor_ln585_2_fu_2967_p2.read());
}

void attention::thread_and_ln585_6_fu_2979_p2() {
    and_ln585_6_fu_2979_p2 = (and_ln581_2_fu_2962_p2.read() & icmp_ln585_2_fu_2895_p2.read());
}

void attention::thread_and_ln585_7_fu_3250_p2() {
    and_ln585_7_fu_3250_p2 = (and_ln581_3_fu_3239_p2.read() & xor_ln585_3_fu_3244_p2.read());
}

void attention::thread_and_ln585_8_fu_3256_p2() {
    and_ln585_8_fu_3256_p2 = (and_ln581_3_fu_3239_p2.read() & icmp_ln585_3_fu_3172_p2.read());
}

void attention::thread_and_ln585_fu_2419_p2() {
    and_ln585_fu_2419_p2 = (and_ln581_fu_2408_p2.read() & xor_ln585_fu_2413_p2.read());
}

void attention::thread_and_ln603_1_fu_2837_p2() {
    and_ln603_1_fu_2837_p2 = (icmp_ln603_1_fu_2741_p2.read() & xor_ln581_1_fu_2831_p2.read());
}

void attention::thread_and_ln603_2_fu_2996_p2() {
    and_ln603_2_fu_2996_p2 = (icmp_ln603_2_fu_2900_p2.read() & xor_ln581_2_fu_2990_p2.read());
}

void attention::thread_and_ln603_3_fu_3273_p2() {
    and_ln603_3_fu_3273_p2 = (icmp_ln603_3_fu_3177_p2.read() & xor_ln581_3_fu_3267_p2.read());
}

void attention::thread_and_ln603_fu_2442_p2() {
    and_ln603_fu_2442_p2 = (icmp_ln603_fu_2346_p2.read() & xor_ln581_fu_2436_p2.read());
}

void attention::thread_ap_CS_fsm_state1() {
    ap_CS_fsm_state1 = ap_CS_fsm.read()[0];
}

void attention::thread_ap_CS_fsm_state10() {
    ap_CS_fsm_state10 = ap_CS_fsm.read()[9];
}

void attention::thread_ap_CS_fsm_state11() {
    ap_CS_fsm_state11 = ap_CS_fsm.read()[10];
}

void attention::thread_ap_CS_fsm_state12() {
    ap_CS_fsm_state12 = ap_CS_fsm.read()[11];
}

void attention::thread_ap_CS_fsm_state13() {
    ap_CS_fsm_state13 = ap_CS_fsm.read()[12];
}

void attention::thread_ap_CS_fsm_state14() {
    ap_CS_fsm_state14 = ap_CS_fsm.read()[13];
}

void attention::thread_ap_CS_fsm_state15() {
    ap_CS_fsm_state15 = ap_CS_fsm.read()[14];
}

void attention::thread_ap_CS_fsm_state16() {
    ap_CS_fsm_state16 = ap_CS_fsm.read()[15];
}

void attention::thread_ap_CS_fsm_state17() {
    ap_CS_fsm_state17 = ap_CS_fsm.read()[16];
}

void attention::thread_ap_CS_fsm_state18() {
    ap_CS_fsm_state18 = ap_CS_fsm.read()[17];
}

void attention::thread_ap_CS_fsm_state19() {
    ap_CS_fsm_state19 = ap_CS_fsm.read()[18];
}

void attention::thread_ap_CS_fsm_state2() {
    ap_CS_fsm_state2 = ap_CS_fsm.read()[1];
}

void attention::thread_ap_CS_fsm_state20() {
    ap_CS_fsm_state20 = ap_CS_fsm.read()[19];
}

void attention::thread_ap_CS_fsm_state21() {
    ap_CS_fsm_state21 = ap_CS_fsm.read()[20];
}

void attention::thread_ap_CS_fsm_state22() {
    ap_CS_fsm_state22 = ap_CS_fsm.read()[21];
}

void attention::thread_ap_CS_fsm_state23() {
    ap_CS_fsm_state23 = ap_CS_fsm.read()[22];
}

void attention::thread_ap_CS_fsm_state24() {
    ap_CS_fsm_state24 = ap_CS_fsm.read()[23];
}

void attention::thread_ap_CS_fsm_state25() {
    ap_CS_fsm_state25 = ap_CS_fsm.read()[24];
}

void attention::thread_ap_CS_fsm_state26() {
    ap_CS_fsm_state26 = ap_CS_fsm.read()[25];
}

void attention::thread_ap_CS_fsm_state27() {
    ap_CS_fsm_state27 = ap_CS_fsm.read()[26];
}

void attention::thread_ap_CS_fsm_state28() {
    ap_CS_fsm_state28 = ap_CS_fsm.read()[27];
}

void attention::thread_ap_CS_fsm_state29() {
    ap_CS_fsm_state29 = ap_CS_fsm.read()[28];
}

void attention::thread_ap_CS_fsm_state3() {
    ap_CS_fsm_state3 = ap_CS_fsm.read()[2];
}

void attention::thread_ap_CS_fsm_state30() {
    ap_CS_fsm_state30 = ap_CS_fsm.read()[29];
}

void attention::thread_ap_CS_fsm_state31() {
    ap_CS_fsm_state31 = ap_CS_fsm.read()[30];
}

void attention::thread_ap_CS_fsm_state32() {
    ap_CS_fsm_state32 = ap_CS_fsm.read()[31];
}

void attention::thread_ap_CS_fsm_state33() {
    ap_CS_fsm_state33 = ap_CS_fsm.read()[32];
}

void attention::thread_ap_CS_fsm_state34() {
    ap_CS_fsm_state34 = ap_CS_fsm.read()[33];
}

void attention::thread_ap_CS_fsm_state35() {
    ap_CS_fsm_state35 = ap_CS_fsm.read()[34];
}

void attention::thread_ap_CS_fsm_state36() {
    ap_CS_fsm_state36 = ap_CS_fsm.read()[35];
}

void attention::thread_ap_CS_fsm_state37() {
    ap_CS_fsm_state37 = ap_CS_fsm.read()[36];
}

void attention::thread_ap_CS_fsm_state4() {
    ap_CS_fsm_state4 = ap_CS_fsm.read()[3];
}

void attention::thread_ap_CS_fsm_state5() {
    ap_CS_fsm_state5 = ap_CS_fsm.read()[4];
}

void attention::thread_ap_CS_fsm_state52() {
    ap_CS_fsm_state52 = ap_CS_fsm.read()[51];
}

void attention::thread_ap_CS_fsm_state53() {
    ap_CS_fsm_state53 = ap_CS_fsm.read()[52];
}

void attention::thread_ap_CS_fsm_state54() {
    ap_CS_fsm_state54 = ap_CS_fsm.read()[53];
}

void attention::thread_ap_CS_fsm_state55() {
    ap_CS_fsm_state55 = ap_CS_fsm.read()[54];
}

void attention::thread_ap_CS_fsm_state56() {
    ap_CS_fsm_state56 = ap_CS_fsm.read()[55];
}

void attention::thread_ap_CS_fsm_state6() {
    ap_CS_fsm_state6 = ap_CS_fsm.read()[5];
}

void attention::thread_ap_CS_fsm_state60() {
    ap_CS_fsm_state60 = ap_CS_fsm.read()[59];
}

void attention::thread_ap_CS_fsm_state61() {
    ap_CS_fsm_state61 = ap_CS_fsm.read()[60];
}

void attention::thread_ap_CS_fsm_state62() {
    ap_CS_fsm_state62 = ap_CS_fsm.read()[61];
}

void attention::thread_ap_CS_fsm_state63() {
    ap_CS_fsm_state63 = ap_CS_fsm.read()[62];
}

void attention::thread_ap_CS_fsm_state64() {
    ap_CS_fsm_state64 = ap_CS_fsm.read()[63];
}

void attention::thread_ap_CS_fsm_state65() {
    ap_CS_fsm_state65 = ap_CS_fsm.read()[64];
}

void attention::thread_ap_CS_fsm_state66() {
    ap_CS_fsm_state66 = ap_CS_fsm.read()[65];
}

void attention::thread_ap_CS_fsm_state67() {
    ap_CS_fsm_state67 = ap_CS_fsm.read()[66];
}

void attention::thread_ap_CS_fsm_state68() {
    ap_CS_fsm_state68 = ap_CS_fsm.read()[67];
}

void attention::thread_ap_CS_fsm_state69() {
    ap_CS_fsm_state69 = ap_CS_fsm.read()[68];
}

void attention::thread_ap_CS_fsm_state7() {
    ap_CS_fsm_state7 = ap_CS_fsm.read()[6];
}

void attention::thread_ap_CS_fsm_state70() {
    ap_CS_fsm_state70 = ap_CS_fsm.read()[69];
}

void attention::thread_ap_CS_fsm_state71() {
    ap_CS_fsm_state71 = ap_CS_fsm.read()[70];
}

void attention::thread_ap_CS_fsm_state72() {
    ap_CS_fsm_state72 = ap_CS_fsm.read()[71];
}

void attention::thread_ap_CS_fsm_state73() {
    ap_CS_fsm_state73 = ap_CS_fsm.read()[72];
}

void attention::thread_ap_CS_fsm_state74() {
    ap_CS_fsm_state74 = ap_CS_fsm.read()[73];
}

void attention::thread_ap_CS_fsm_state75() {
    ap_CS_fsm_state75 = ap_CS_fsm.read()[74];
}

void attention::thread_ap_CS_fsm_state76() {
    ap_CS_fsm_state76 = ap_CS_fsm.read()[75];
}

void attention::thread_ap_CS_fsm_state77() {
    ap_CS_fsm_state77 = ap_CS_fsm.read()[76];
}

void attention::thread_ap_CS_fsm_state8() {
    ap_CS_fsm_state8 = ap_CS_fsm.read()[7];
}

void attention::thread_ap_CS_fsm_state9() {
    ap_CS_fsm_state9 = ap_CS_fsm.read()[8];
}

void attention::thread_ap_block_state14_on_subcall_done() {
    ap_block_state14_on_subcall_done = (esl_seteq<1,1,1>(ap_const_logic_0, grp_linear_forward_no_mu_fu_1372_ap_done.read()) || esl_seteq<1,1,1>(ap_const_logic_0, grp_reshape_2D_to_3D_fu_2109_ap_done.read()) || esl_seteq<1,1,1>(ap_const_logic_0, grp_linear_forward_no_mu_fu_1643_ap_done.read()));
}

void attention::thread_ap_block_state16_on_subcall_done() {
    ap_block_state16_on_subcall_done = (esl_seteq<1,1,1>(ap_const_logic_0, grp_reshape_2D_to_3D_fu_2109_ap_done.read()) || esl_seteq<1,1,1>(ap_const_logic_0, grp_reshape_2D_to_3D_fu_2117_ap_done.read()));
}

void attention::thread_ap_block_state30_on_subcall_done() {
    ap_block_state30_on_subcall_done = (esl_seteq<1,1,1>(ap_const_logic_0, grp_cache_update_fu_2092_ap_done.read()) || esl_seteq<1,1,1>(ap_const_logic_0, grp_transpose_last_two_d_fu_2102_ap_done.read()));
}

void attention::thread_ap_done() {
    if ((esl_seteq<1,1,1>(grp_linear_forward_no_mu_fu_1372_ap_done.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state77.read()))) {
        ap_done = ap_const_logic_1;
    } else {
        ap_done = ap_const_logic_0;
    }
}

void attention::thread_ap_idle() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()))) {
        ap_idle = ap_const_logic_1;
    } else {
        ap_idle = ap_const_logic_0;
    }
}

void attention::thread_ap_ready() {
    if ((esl_seteq<1,1,1>(grp_linear_forward_no_mu_fu_1372_ap_done.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state77.read()))) {
        ap_ready = ap_const_logic_1;
    } else {
        ap_ready = ap_const_logic_0;
    }
}

void attention::thread_ashr_ln586_1_fu_2750_p2() {
    ashr_ln586_1_fu_2750_p2 = (!man_V_5_reg_4256.read().is_01() || !zext_ln586_1_fu_2746_p1.read().is_01())? sc_lv<54>(): sc_bigint<54>(man_V_5_reg_4256.read()) >> (unsigned short)zext_ln586_1_fu_2746_p1.read().to_uint();
}

void attention::thread_ashr_ln586_2_fu_2909_p2() {
    ashr_ln586_2_fu_2909_p2 = (!man_V_8_reg_4296.read().is_01() || !zext_ln586_2_fu_2905_p1.read().is_01())? sc_lv<54>(): sc_bigint<54>(man_V_8_reg_4296.read()) >> (unsigned short)zext_ln586_2_fu_2905_p1.read().to_uint();
}

void attention::thread_ashr_ln586_3_fu_3186_p2() {
    ashr_ln586_3_fu_3186_p2 = (!man_V_11_reg_4346.read().is_01() || !zext_ln586_3_fu_3182_p1.read().is_01())? sc_lv<54>(): sc_bigint<54>(man_V_11_reg_4346.read()) >> (unsigned short)zext_ln586_3_fu_3182_p1.read().to_uint();
}

void attention::thread_ashr_ln586_fu_2355_p2() {
    ashr_ln586_fu_2355_p2 = (!man_V_2_reg_4211.read().is_01() || !zext_ln586_fu_2351_p1.read().is_01())? sc_lv<54>(): sc_bigint<54>(man_V_2_reg_4211.read()) >> (unsigned short)zext_ln586_fu_2351_p1.read().to_uint();
}

void attention::thread_attn_output_0_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state70.read())) {
        attn_output_0_address0 =  (sc_lv<11>) (sext_ln690_fu_4103_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state66.read())) {
        attn_output_0_address0 =  (sc_lv<11>) (sext_ln676_fu_3988_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state67.read())) {
        attn_output_0_address0 = grp_GEMM_3D_float2_fu_2085_v254_0_address0.read();
    } else {
        attn_output_0_address0 = "XXXXXXXXXXX";
    }
}

void attention::thread_attn_output_0_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state66.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state70.read()))) {
        attn_output_0_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state67.read())) {
        attn_output_0_ce0 = grp_GEMM_3D_float2_fu_2085_v254_0_ce0.read();
    } else {
        attn_output_0_ce0 = ap_const_logic_0;
    }
}

void attention::thread_attn_output_0_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state66.read())) {
        attn_output_0_d0 = ap_const_lv32_0;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state67.read())) {
        attn_output_0_d0 = grp_GEMM_3D_float2_fu_2085_v254_0_d0.read();
    } else {
        attn_output_0_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void attention::thread_attn_output_0_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state66.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln675_fu_3967_p2.read()))) {
        attn_output_0_we0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state67.read())) {
        attn_output_0_we0 = grp_GEMM_3D_float2_fu_2085_v254_0_we0.read();
    } else {
        attn_output_0_we0 = ap_const_logic_0;
    }
}

void attention::thread_attn_output_2D_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state71.read())) {
        attn_output_2D_address0 =  (sc_lv<11>) (zext_ln691_fu_4116_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state68.read())) {
        attn_output_2D_address0 =  (sc_lv<11>) (zext_ln684_fu_4005_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state73.read())) {
        attn_output_2D_address0 = grp_rms_norm_fu_2031_v0_address0.read();
    } else {
        attn_output_2D_address0 = "XXXXXXXXXXX";
    }
}

void attention::thread_attn_output_2D_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state68.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state71.read()))) {
        attn_output_2D_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state73.read())) {
        attn_output_2D_ce0 = grp_rms_norm_fu_2031_v0_ce0.read();
    } else {
        attn_output_2D_ce0 = ap_const_logic_0;
    }
}

void attention::thread_attn_output_2D_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state71.read())) {
        attn_output_2D_d0 = attn_output_0_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state68.read())) {
        attn_output_2D_d0 = ap_const_lv32_0;
    } else {
        attn_output_2D_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void attention::thread_attn_output_2D_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state68.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln683_fu_3993_p2.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state71.read()))) {
        attn_output_2D_we0 = ap_const_logic_1;
    } else {
        attn_output_2D_we0 = ap_const_logic_0;
    }
}

void attention::thread_attn_weights_0_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        attn_weights_0_address0 = attn_weights_0_addr_1_reg_4561.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state54.read())) {
        attn_weights_0_address0 =  (sc_lv<7>) (sext_ln657_fu_3860_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        attn_weights_0_address0 = attn_weights_0_addr_2_reg_4543.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        attn_weights_0_address0 =  (sc_lv<7>) (sext_ln639_fu_3817_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read())) {
        attn_weights_0_address0 =  (sc_lv<7>) (sext_ln629_fu_3753_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read())) {
        attn_weights_0_address0 = grp_GEMM_3D_float_fu_2077_v212_0_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state64.read())) {
        attn_weights_0_address0 = grp_softmax_fu_2011_v225_0_address0.read();
    } else {
        attn_weights_0_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void attention::thread_attn_weights_0_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state54.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read()))) {
        attn_weights_0_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read())) {
        attn_weights_0_ce0 = grp_GEMM_3D_float_fu_2077_v212_0_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state64.read())) {
        attn_weights_0_ce0 = grp_softmax_fu_2011_v225_0_ce0.read();
    } else {
        attn_weights_0_ce0 = ap_const_logic_0;
    }
}

void attention::thread_attn_weights_0_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        attn_weights_0_d0 = v2_reg_4566.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        attn_weights_0_d0 = v_reg_4548.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read())) {
        attn_weights_0_d0 = ap_const_lv32_0;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read())) {
        attn_weights_0_d0 = grp_GEMM_3D_float_fu_2077_v212_0_d0.read();
    } else {
        attn_weights_0_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void attention::thread_attn_weights_0_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln628_fu_3732_p2.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read()))) {
        attn_weights_0_we0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read())) {
        attn_weights_0_we0 = grp_GEMM_3D_float_fu_2077_v212_0_we0.read();
    } else {
        attn_weights_0_we0 = ap_const_logic_0;
    }
}

void attention::thread_bitcast_ln696_3_fu_2759_p1() {
    bitcast_ln696_3_fu_2759_p1 = v268.read();
}

void attention::thread_bitcast_ln696_5_fu_2918_p1() {
    bitcast_ln696_5_fu_2918_p1 = v270.read();
}

void attention::thread_bitcast_ln696_7_fu_3195_p1() {
    bitcast_ln696_7_fu_3195_p1 = v272.read();
}

void attention::thread_bitcast_ln696_fu_2364_p1() {
    bitcast_ln696_fu_2364_p1 = v266.read();
}

void attention::thread_exp_tmp_V_1_fu_2513_p4() {
    exp_tmp_V_1_fu_2513_p4 = ireg_V_1_fu_2497_p1.read().range(62, 52);
}

void attention::thread_exp_tmp_V_2_fu_2631_p4() {
    exp_tmp_V_2_fu_2631_p4 = ireg_V_2_fu_2615_p1.read().range(62, 52);
}

void attention::thread_exp_tmp_V_3_fu_3067_p4() {
    exp_tmp_V_3_fu_3067_p4 = ireg_V_3_fu_3051_p1.read().range(62, 52);
}

void attention::thread_exp_tmp_V_fu_2236_p4() {
    exp_tmp_V_fu_2236_p4 = ireg_V_fu_2220_p1.read().range(62, 52);
}

void attention::thread_grp_GEMM_3D_float2_fu_2085_ap_start() {
    grp_GEMM_3D_float2_fu_2085_ap_start = grp_GEMM_3D_float2_fu_2085_ap_start_reg.read();
}

void attention::thread_grp_GEMM_3D_float_fu_2077_ap_start() {
    grp_GEMM_3D_float_fu_2077_ap_start = grp_GEMM_3D_float_fu_2077_ap_start_reg.read();
}

void attention::thread_grp_apply_rotary_pos_emb_fu_2063_ap_start() {
    grp_apply_rotary_pos_emb_fu_2063_ap_start = grp_apply_rotary_pos_emb_fu_2063_ap_start_reg.read();
}

void attention::thread_grp_cache_update_fu_2092_ap_start() {
    grp_cache_update_fu_2092_ap_start = grp_cache_update_fu_2092_ap_start_reg.read();
}

void attention::thread_grp_cache_update_fu_2092_v193_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state30.read())) {
        grp_cache_update_fu_2092_v193_q0 = v278_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state28.read())) {
        grp_cache_update_fu_2092_v193_q0 = v277_q0.read();
    } else {
        grp_cache_update_fu_2092_v193_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void attention::thread_grp_cache_update_fu_2092_v194_0_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state30.read())) {
        grp_cache_update_fu_2092_v194_0_q0 = v_proj_0_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state28.read())) {
        grp_cache_update_fu_2092_v194_0_q0 = k_embed_0_q0.read();
    } else {
        grp_cache_update_fu_2092_v194_0_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void attention::thread_grp_fu_2134_ce() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()) && 
          esl_seteq<1,1,1>(ap_block_state14_on_subcall_done.read(), ap_const_boolean_0)))) {
        grp_fu_2134_ce = ap_const_logic_1;
    } else {
        grp_fu_2134_ce = ap_const_logic_0;
    }
}

void attention::thread_grp_fu_2134_p0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        grp_fu_2134_p0 = v272.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        grp_fu_2134_p0 = v268.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        grp_fu_2134_p0 = v266.read();
    } else {
        grp_fu_2134_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_1372_ap_start() {
    grp_linear_forward_no_mu_fu_1372_ap_start = grp_linear_forward_no_mu_fu_1372_ap_start_reg.read();
}

void attention::thread_grp_linear_forward_no_mu_fu_1372_v79_0_0_0_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state77.read())) {
        grp_linear_forward_no_mu_fu_1372_v79_0_0_0_q0 = quantized_final_outp_95_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        grp_linear_forward_no_mu_fu_1372_v79_0_0_0_q0 = quantized_hidden_sta_95_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_1372_v79_0_0_0_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_1372_v79_0_0_1_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state77.read())) {
        grp_linear_forward_no_mu_fu_1372_v79_0_0_1_q0 = quantized_final_outp_94_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        grp_linear_forward_no_mu_fu_1372_v79_0_0_1_q0 = quantized_hidden_sta_94_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_1372_v79_0_0_1_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_1372_v79_0_0_2_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state77.read())) {
        grp_linear_forward_no_mu_fu_1372_v79_0_0_2_q0 = quantized_final_outp_93_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        grp_linear_forward_no_mu_fu_1372_v79_0_0_2_q0 = quantized_hidden_sta_93_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_1372_v79_0_0_2_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_1372_v79_0_0_3_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state77.read())) {
        grp_linear_forward_no_mu_fu_1372_v79_0_0_3_q0 = quantized_final_outp_92_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        grp_linear_forward_no_mu_fu_1372_v79_0_0_3_q0 = quantized_hidden_sta_92_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_1372_v79_0_0_3_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_1372_v79_10_0_0_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state77.read())) {
        grp_linear_forward_no_mu_fu_1372_v79_10_0_0_q0 = quantized_final_outp_87_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        grp_linear_forward_no_mu_fu_1372_v79_10_0_0_q0 = quantized_hidden_sta_87_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_1372_v79_10_0_0_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_1372_v79_10_0_1_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state77.read())) {
        grp_linear_forward_no_mu_fu_1372_v79_10_0_1_q0 = quantized_final_outp_86_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        grp_linear_forward_no_mu_fu_1372_v79_10_0_1_q0 = quantized_hidden_sta_86_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_1372_v79_10_0_1_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_1372_v79_10_0_2_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state77.read())) {
        grp_linear_forward_no_mu_fu_1372_v79_10_0_2_q0 = quantized_final_outp_85_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        grp_linear_forward_no_mu_fu_1372_v79_10_0_2_q0 = quantized_hidden_sta_85_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_1372_v79_10_0_2_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_1372_v79_10_0_3_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state77.read())) {
        grp_linear_forward_no_mu_fu_1372_v79_10_0_3_q0 = quantized_final_outp_84_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        grp_linear_forward_no_mu_fu_1372_v79_10_0_3_q0 = quantized_hidden_sta_84_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_1372_v79_10_0_3_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_1372_v79_11_0_0_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state77.read())) {
        grp_linear_forward_no_mu_fu_1372_v79_11_0_0_q0 = quantized_final_outp_83_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        grp_linear_forward_no_mu_fu_1372_v79_11_0_0_q0 = quantized_hidden_sta_83_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_1372_v79_11_0_0_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_1372_v79_11_0_1_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state77.read())) {
        grp_linear_forward_no_mu_fu_1372_v79_11_0_1_q0 = quantized_final_outp_82_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        grp_linear_forward_no_mu_fu_1372_v79_11_0_1_q0 = quantized_hidden_sta_82_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_1372_v79_11_0_1_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_1372_v79_11_0_2_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state77.read())) {
        grp_linear_forward_no_mu_fu_1372_v79_11_0_2_q0 = quantized_final_outp_81_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        grp_linear_forward_no_mu_fu_1372_v79_11_0_2_q0 = quantized_hidden_sta_81_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_1372_v79_11_0_2_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_1372_v79_11_0_3_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state77.read())) {
        grp_linear_forward_no_mu_fu_1372_v79_11_0_3_q0 = quantized_final_outp_80_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        grp_linear_forward_no_mu_fu_1372_v79_11_0_3_q0 = quantized_hidden_sta_80_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_1372_v79_11_0_3_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_1372_v79_12_0_0_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state77.read())) {
        grp_linear_forward_no_mu_fu_1372_v79_12_0_0_q0 = quantized_final_outp_79_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        grp_linear_forward_no_mu_fu_1372_v79_12_0_0_q0 = quantized_hidden_sta_79_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_1372_v79_12_0_0_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_1372_v79_12_0_1_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state77.read())) {
        grp_linear_forward_no_mu_fu_1372_v79_12_0_1_q0 = quantized_final_outp_78_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        grp_linear_forward_no_mu_fu_1372_v79_12_0_1_q0 = quantized_hidden_sta_78_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_1372_v79_12_0_1_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_1372_v79_12_0_2_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state77.read())) {
        grp_linear_forward_no_mu_fu_1372_v79_12_0_2_q0 = quantized_final_outp_77_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        grp_linear_forward_no_mu_fu_1372_v79_12_0_2_q0 = quantized_hidden_sta_77_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_1372_v79_12_0_2_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_1372_v79_12_0_3_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state77.read())) {
        grp_linear_forward_no_mu_fu_1372_v79_12_0_3_q0 = quantized_final_outp_76_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        grp_linear_forward_no_mu_fu_1372_v79_12_0_3_q0 = quantized_hidden_sta_76_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_1372_v79_12_0_3_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_1372_v79_13_0_0_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state77.read())) {
        grp_linear_forward_no_mu_fu_1372_v79_13_0_0_q0 = quantized_final_outp_75_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        grp_linear_forward_no_mu_fu_1372_v79_13_0_0_q0 = quantized_hidden_sta_75_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_1372_v79_13_0_0_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_1372_v79_13_0_1_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state77.read())) {
        grp_linear_forward_no_mu_fu_1372_v79_13_0_1_q0 = quantized_final_outp_74_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        grp_linear_forward_no_mu_fu_1372_v79_13_0_1_q0 = quantized_hidden_sta_74_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_1372_v79_13_0_1_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_1372_v79_13_0_2_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state77.read())) {
        grp_linear_forward_no_mu_fu_1372_v79_13_0_2_q0 = quantized_final_outp_73_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        grp_linear_forward_no_mu_fu_1372_v79_13_0_2_q0 = quantized_hidden_sta_73_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_1372_v79_13_0_2_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_1372_v79_13_0_3_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state77.read())) {
        grp_linear_forward_no_mu_fu_1372_v79_13_0_3_q0 = quantized_final_outp_72_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        grp_linear_forward_no_mu_fu_1372_v79_13_0_3_q0 = quantized_hidden_sta_72_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_1372_v79_13_0_3_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_1372_v79_14_0_0_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state77.read())) {
        grp_linear_forward_no_mu_fu_1372_v79_14_0_0_q0 = quantized_final_outp_71_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        grp_linear_forward_no_mu_fu_1372_v79_14_0_0_q0 = quantized_hidden_sta_71_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_1372_v79_14_0_0_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_1372_v79_14_0_1_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state77.read())) {
        grp_linear_forward_no_mu_fu_1372_v79_14_0_1_q0 = quantized_final_outp_70_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        grp_linear_forward_no_mu_fu_1372_v79_14_0_1_q0 = quantized_hidden_sta_70_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_1372_v79_14_0_1_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_1372_v79_14_0_2_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state77.read())) {
        grp_linear_forward_no_mu_fu_1372_v79_14_0_2_q0 = quantized_final_outp_69_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        grp_linear_forward_no_mu_fu_1372_v79_14_0_2_q0 = quantized_hidden_sta_69_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_1372_v79_14_0_2_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_1372_v79_14_0_3_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state77.read())) {
        grp_linear_forward_no_mu_fu_1372_v79_14_0_3_q0 = quantized_final_outp_68_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        grp_linear_forward_no_mu_fu_1372_v79_14_0_3_q0 = quantized_hidden_sta_68_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_1372_v79_14_0_3_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_1372_v79_15_0_0_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state77.read())) {
        grp_linear_forward_no_mu_fu_1372_v79_15_0_0_q0 = quantized_final_outp_67_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        grp_linear_forward_no_mu_fu_1372_v79_15_0_0_q0 = quantized_hidden_sta_67_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_1372_v79_15_0_0_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_1372_v79_15_0_1_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state77.read())) {
        grp_linear_forward_no_mu_fu_1372_v79_15_0_1_q0 = quantized_final_outp_66_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        grp_linear_forward_no_mu_fu_1372_v79_15_0_1_q0 = quantized_hidden_sta_66_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_1372_v79_15_0_1_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_1372_v79_15_0_2_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state77.read())) {
        grp_linear_forward_no_mu_fu_1372_v79_15_0_2_q0 = quantized_final_outp_65_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        grp_linear_forward_no_mu_fu_1372_v79_15_0_2_q0 = quantized_hidden_sta_65_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_1372_v79_15_0_2_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_1372_v79_15_0_3_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state77.read())) {
        grp_linear_forward_no_mu_fu_1372_v79_15_0_3_q0 = quantized_final_outp_64_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        grp_linear_forward_no_mu_fu_1372_v79_15_0_3_q0 = quantized_hidden_sta_64_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_1372_v79_15_0_3_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_1372_v79_16_0_0_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state77.read())) {
        grp_linear_forward_no_mu_fu_1372_v79_16_0_0_q0 = quantized_final_outp_63_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        grp_linear_forward_no_mu_fu_1372_v79_16_0_0_q0 = quantized_hidden_sta_63_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_1372_v79_16_0_0_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_1372_v79_16_0_1_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state77.read())) {
        grp_linear_forward_no_mu_fu_1372_v79_16_0_1_q0 = quantized_final_outp_62_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        grp_linear_forward_no_mu_fu_1372_v79_16_0_1_q0 = quantized_hidden_sta_62_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_1372_v79_16_0_1_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_1372_v79_16_0_2_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state77.read())) {
        grp_linear_forward_no_mu_fu_1372_v79_16_0_2_q0 = quantized_final_outp_61_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        grp_linear_forward_no_mu_fu_1372_v79_16_0_2_q0 = quantized_hidden_sta_61_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_1372_v79_16_0_2_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_1372_v79_16_0_3_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state77.read())) {
        grp_linear_forward_no_mu_fu_1372_v79_16_0_3_q0 = quantized_final_outp_60_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        grp_linear_forward_no_mu_fu_1372_v79_16_0_3_q0 = quantized_hidden_sta_60_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_1372_v79_16_0_3_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_1372_v79_17_0_0_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state77.read())) {
        grp_linear_forward_no_mu_fu_1372_v79_17_0_0_q0 = quantized_final_outp_59_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        grp_linear_forward_no_mu_fu_1372_v79_17_0_0_q0 = quantized_hidden_sta_59_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_1372_v79_17_0_0_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_1372_v79_17_0_1_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state77.read())) {
        grp_linear_forward_no_mu_fu_1372_v79_17_0_1_q0 = quantized_final_outp_58_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        grp_linear_forward_no_mu_fu_1372_v79_17_0_1_q0 = quantized_hidden_sta_58_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_1372_v79_17_0_1_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_1372_v79_17_0_2_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state77.read())) {
        grp_linear_forward_no_mu_fu_1372_v79_17_0_2_q0 = quantized_final_outp_57_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        grp_linear_forward_no_mu_fu_1372_v79_17_0_2_q0 = quantized_hidden_sta_57_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_1372_v79_17_0_2_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_1372_v79_17_0_3_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state77.read())) {
        grp_linear_forward_no_mu_fu_1372_v79_17_0_3_q0 = quantized_final_outp_56_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        grp_linear_forward_no_mu_fu_1372_v79_17_0_3_q0 = quantized_hidden_sta_56_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_1372_v79_17_0_3_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_1372_v79_18_0_0_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state77.read())) {
        grp_linear_forward_no_mu_fu_1372_v79_18_0_0_q0 = quantized_final_outp_55_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        grp_linear_forward_no_mu_fu_1372_v79_18_0_0_q0 = quantized_hidden_sta_55_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_1372_v79_18_0_0_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_1372_v79_18_0_1_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state77.read())) {
        grp_linear_forward_no_mu_fu_1372_v79_18_0_1_q0 = quantized_final_outp_54_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        grp_linear_forward_no_mu_fu_1372_v79_18_0_1_q0 = quantized_hidden_sta_54_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_1372_v79_18_0_1_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_1372_v79_18_0_2_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state77.read())) {
        grp_linear_forward_no_mu_fu_1372_v79_18_0_2_q0 = quantized_final_outp_53_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        grp_linear_forward_no_mu_fu_1372_v79_18_0_2_q0 = quantized_hidden_sta_53_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_1372_v79_18_0_2_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_1372_v79_18_0_3_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state77.read())) {
        grp_linear_forward_no_mu_fu_1372_v79_18_0_3_q0 = quantized_final_outp_52_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        grp_linear_forward_no_mu_fu_1372_v79_18_0_3_q0 = quantized_hidden_sta_52_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_1372_v79_18_0_3_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_1372_v79_19_0_0_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state77.read())) {
        grp_linear_forward_no_mu_fu_1372_v79_19_0_0_q0 = quantized_final_outp_51_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        grp_linear_forward_no_mu_fu_1372_v79_19_0_0_q0 = quantized_hidden_sta_51_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_1372_v79_19_0_0_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_1372_v79_19_0_1_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state77.read())) {
        grp_linear_forward_no_mu_fu_1372_v79_19_0_1_q0 = quantized_final_outp_50_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        grp_linear_forward_no_mu_fu_1372_v79_19_0_1_q0 = quantized_hidden_sta_50_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_1372_v79_19_0_1_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_1372_v79_19_0_2_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state77.read())) {
        grp_linear_forward_no_mu_fu_1372_v79_19_0_2_q0 = quantized_final_outp_49_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        grp_linear_forward_no_mu_fu_1372_v79_19_0_2_q0 = quantized_hidden_sta_49_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_1372_v79_19_0_2_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_1372_v79_19_0_3_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state77.read())) {
        grp_linear_forward_no_mu_fu_1372_v79_19_0_3_q0 = quantized_final_outp_48_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        grp_linear_forward_no_mu_fu_1372_v79_19_0_3_q0 = quantized_hidden_sta_48_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_1372_v79_19_0_3_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_1372_v79_1_0_0_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state77.read())) {
        grp_linear_forward_no_mu_fu_1372_v79_1_0_0_q0 = quantized_final_outp_91_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        grp_linear_forward_no_mu_fu_1372_v79_1_0_0_q0 = quantized_hidden_sta_91_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_1372_v79_1_0_0_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_1372_v79_1_0_1_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state77.read())) {
        grp_linear_forward_no_mu_fu_1372_v79_1_0_1_q0 = quantized_final_outp_90_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        grp_linear_forward_no_mu_fu_1372_v79_1_0_1_q0 = quantized_hidden_sta_90_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_1372_v79_1_0_1_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_1372_v79_1_0_2_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state77.read())) {
        grp_linear_forward_no_mu_fu_1372_v79_1_0_2_q0 = quantized_final_outp_89_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        grp_linear_forward_no_mu_fu_1372_v79_1_0_2_q0 = quantized_hidden_sta_89_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_1372_v79_1_0_2_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_1372_v79_1_0_3_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state77.read())) {
        grp_linear_forward_no_mu_fu_1372_v79_1_0_3_q0 = quantized_final_outp_88_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        grp_linear_forward_no_mu_fu_1372_v79_1_0_3_q0 = quantized_hidden_sta_88_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_1372_v79_1_0_3_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_1372_v79_20_0_0_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state77.read())) {
        grp_linear_forward_no_mu_fu_1372_v79_20_0_0_q0 = quantized_final_outp_43_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        grp_linear_forward_no_mu_fu_1372_v79_20_0_0_q0 = quantized_hidden_sta_43_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_1372_v79_20_0_0_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_1372_v79_20_0_1_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state77.read())) {
        grp_linear_forward_no_mu_fu_1372_v79_20_0_1_q0 = quantized_final_outp_42_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        grp_linear_forward_no_mu_fu_1372_v79_20_0_1_q0 = quantized_hidden_sta_42_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_1372_v79_20_0_1_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_1372_v79_20_0_2_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state77.read())) {
        grp_linear_forward_no_mu_fu_1372_v79_20_0_2_q0 = quantized_final_outp_41_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        grp_linear_forward_no_mu_fu_1372_v79_20_0_2_q0 = quantized_hidden_sta_41_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_1372_v79_20_0_2_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_1372_v79_20_0_3_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state77.read())) {
        grp_linear_forward_no_mu_fu_1372_v79_20_0_3_q0 = quantized_final_outp_40_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        grp_linear_forward_no_mu_fu_1372_v79_20_0_3_q0 = quantized_hidden_sta_40_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_1372_v79_20_0_3_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_1372_v79_21_0_0_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state77.read())) {
        grp_linear_forward_no_mu_fu_1372_v79_21_0_0_q0 = quantized_final_outp_39_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        grp_linear_forward_no_mu_fu_1372_v79_21_0_0_q0 = quantized_hidden_sta_39_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_1372_v79_21_0_0_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_1372_v79_21_0_1_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state77.read())) {
        grp_linear_forward_no_mu_fu_1372_v79_21_0_1_q0 = quantized_final_outp_38_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        grp_linear_forward_no_mu_fu_1372_v79_21_0_1_q0 = quantized_hidden_sta_38_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_1372_v79_21_0_1_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_1372_v79_21_0_2_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state77.read())) {
        grp_linear_forward_no_mu_fu_1372_v79_21_0_2_q0 = quantized_final_outp_37_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        grp_linear_forward_no_mu_fu_1372_v79_21_0_2_q0 = quantized_hidden_sta_37_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_1372_v79_21_0_2_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_1372_v79_21_0_3_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state77.read())) {
        grp_linear_forward_no_mu_fu_1372_v79_21_0_3_q0 = quantized_final_outp_36_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        grp_linear_forward_no_mu_fu_1372_v79_21_0_3_q0 = quantized_hidden_sta_36_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_1372_v79_21_0_3_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_1372_v79_22_0_0_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state77.read())) {
        grp_linear_forward_no_mu_fu_1372_v79_22_0_0_q0 = quantized_final_outp_35_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        grp_linear_forward_no_mu_fu_1372_v79_22_0_0_q0 = quantized_hidden_sta_35_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_1372_v79_22_0_0_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_1372_v79_22_0_1_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state77.read())) {
        grp_linear_forward_no_mu_fu_1372_v79_22_0_1_q0 = quantized_final_outp_34_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        grp_linear_forward_no_mu_fu_1372_v79_22_0_1_q0 = quantized_hidden_sta_34_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_1372_v79_22_0_1_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_1372_v79_22_0_2_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state77.read())) {
        grp_linear_forward_no_mu_fu_1372_v79_22_0_2_q0 = quantized_final_outp_33_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        grp_linear_forward_no_mu_fu_1372_v79_22_0_2_q0 = quantized_hidden_sta_33_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_1372_v79_22_0_2_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_1372_v79_22_0_3_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state77.read())) {
        grp_linear_forward_no_mu_fu_1372_v79_22_0_3_q0 = quantized_final_outp_32_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        grp_linear_forward_no_mu_fu_1372_v79_22_0_3_q0 = quantized_hidden_sta_32_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_1372_v79_22_0_3_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_1372_v79_23_0_0_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state77.read())) {
        grp_linear_forward_no_mu_fu_1372_v79_23_0_0_q0 = quantized_final_outp_31_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        grp_linear_forward_no_mu_fu_1372_v79_23_0_0_q0 = quantized_hidden_sta_31_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_1372_v79_23_0_0_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_1372_v79_23_0_1_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state77.read())) {
        grp_linear_forward_no_mu_fu_1372_v79_23_0_1_q0 = quantized_final_outp_30_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        grp_linear_forward_no_mu_fu_1372_v79_23_0_1_q0 = quantized_hidden_sta_30_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_1372_v79_23_0_1_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_1372_v79_23_0_2_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state77.read())) {
        grp_linear_forward_no_mu_fu_1372_v79_23_0_2_q0 = quantized_final_outp_29_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        grp_linear_forward_no_mu_fu_1372_v79_23_0_2_q0 = quantized_hidden_sta_29_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_1372_v79_23_0_2_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_1372_v79_23_0_3_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state77.read())) {
        grp_linear_forward_no_mu_fu_1372_v79_23_0_3_q0 = quantized_final_outp_28_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        grp_linear_forward_no_mu_fu_1372_v79_23_0_3_q0 = quantized_hidden_sta_28_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_1372_v79_23_0_3_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_1372_v79_2_0_0_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state77.read())) {
        grp_linear_forward_no_mu_fu_1372_v79_2_0_0_q0 = quantized_final_outp_47_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        grp_linear_forward_no_mu_fu_1372_v79_2_0_0_q0 = quantized_hidden_sta_47_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_1372_v79_2_0_0_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_1372_v79_2_0_1_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state77.read())) {
        grp_linear_forward_no_mu_fu_1372_v79_2_0_1_q0 = quantized_final_outp_46_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        grp_linear_forward_no_mu_fu_1372_v79_2_0_1_q0 = quantized_hidden_sta_46_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_1372_v79_2_0_1_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_1372_v79_2_0_2_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state77.read())) {
        grp_linear_forward_no_mu_fu_1372_v79_2_0_2_q0 = quantized_final_outp_45_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        grp_linear_forward_no_mu_fu_1372_v79_2_0_2_q0 = quantized_hidden_sta_45_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_1372_v79_2_0_2_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_1372_v79_2_0_3_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state77.read())) {
        grp_linear_forward_no_mu_fu_1372_v79_2_0_3_q0 = quantized_final_outp_44_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        grp_linear_forward_no_mu_fu_1372_v79_2_0_3_q0 = quantized_hidden_sta_44_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_1372_v79_2_0_3_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_1372_v79_3_0_0_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state77.read())) {
        grp_linear_forward_no_mu_fu_1372_v79_3_0_0_q0 = quantized_final_outp_27_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        grp_linear_forward_no_mu_fu_1372_v79_3_0_0_q0 = quantized_hidden_sta_27_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_1372_v79_3_0_0_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_1372_v79_3_0_1_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state77.read())) {
        grp_linear_forward_no_mu_fu_1372_v79_3_0_1_q0 = quantized_final_outp_26_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        grp_linear_forward_no_mu_fu_1372_v79_3_0_1_q0 = quantized_hidden_sta_26_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_1372_v79_3_0_1_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_1372_v79_3_0_2_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state77.read())) {
        grp_linear_forward_no_mu_fu_1372_v79_3_0_2_q0 = quantized_final_outp_25_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        grp_linear_forward_no_mu_fu_1372_v79_3_0_2_q0 = quantized_hidden_sta_25_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_1372_v79_3_0_2_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_1372_v79_3_0_3_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state77.read())) {
        grp_linear_forward_no_mu_fu_1372_v79_3_0_3_q0 = quantized_final_outp_24_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        grp_linear_forward_no_mu_fu_1372_v79_3_0_3_q0 = quantized_hidden_sta_24_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_1372_v79_3_0_3_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_1372_v79_4_0_0_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state77.read())) {
        grp_linear_forward_no_mu_fu_1372_v79_4_0_0_q0 = quantized_final_outp_23_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        grp_linear_forward_no_mu_fu_1372_v79_4_0_0_q0 = quantized_hidden_sta_23_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_1372_v79_4_0_0_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_1372_v79_4_0_1_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state77.read())) {
        grp_linear_forward_no_mu_fu_1372_v79_4_0_1_q0 = quantized_final_outp_22_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        grp_linear_forward_no_mu_fu_1372_v79_4_0_1_q0 = quantized_hidden_sta_22_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_1372_v79_4_0_1_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_1372_v79_4_0_2_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state77.read())) {
        grp_linear_forward_no_mu_fu_1372_v79_4_0_2_q0 = quantized_final_outp_21_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        grp_linear_forward_no_mu_fu_1372_v79_4_0_2_q0 = quantized_hidden_sta_21_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_1372_v79_4_0_2_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_1372_v79_4_0_3_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state77.read())) {
        grp_linear_forward_no_mu_fu_1372_v79_4_0_3_q0 = quantized_final_outp_20_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        grp_linear_forward_no_mu_fu_1372_v79_4_0_3_q0 = quantized_hidden_sta_20_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_1372_v79_4_0_3_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_1372_v79_5_0_0_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state77.read())) {
        grp_linear_forward_no_mu_fu_1372_v79_5_0_0_q0 = quantized_final_outp_19_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        grp_linear_forward_no_mu_fu_1372_v79_5_0_0_q0 = quantized_hidden_sta_19_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_1372_v79_5_0_0_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_1372_v79_5_0_1_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state77.read())) {
        grp_linear_forward_no_mu_fu_1372_v79_5_0_1_q0 = quantized_final_outp_18_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        grp_linear_forward_no_mu_fu_1372_v79_5_0_1_q0 = quantized_hidden_sta_18_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_1372_v79_5_0_1_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_1372_v79_5_0_2_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state77.read())) {
        grp_linear_forward_no_mu_fu_1372_v79_5_0_2_q0 = quantized_final_outp_17_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        grp_linear_forward_no_mu_fu_1372_v79_5_0_2_q0 = quantized_hidden_sta_17_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_1372_v79_5_0_2_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_1372_v79_5_0_3_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state77.read())) {
        grp_linear_forward_no_mu_fu_1372_v79_5_0_3_q0 = quantized_final_outp_16_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        grp_linear_forward_no_mu_fu_1372_v79_5_0_3_q0 = quantized_hidden_sta_16_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_1372_v79_5_0_3_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_1372_v79_6_0_0_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state77.read())) {
        grp_linear_forward_no_mu_fu_1372_v79_6_0_0_q0 = quantized_final_outp_15_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        grp_linear_forward_no_mu_fu_1372_v79_6_0_0_q0 = quantized_hidden_sta_15_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_1372_v79_6_0_0_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_1372_v79_6_0_1_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state77.read())) {
        grp_linear_forward_no_mu_fu_1372_v79_6_0_1_q0 = quantized_final_outp_14_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        grp_linear_forward_no_mu_fu_1372_v79_6_0_1_q0 = quantized_hidden_sta_14_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_1372_v79_6_0_1_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_1372_v79_6_0_2_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state77.read())) {
        grp_linear_forward_no_mu_fu_1372_v79_6_0_2_q0 = quantized_final_outp_13_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        grp_linear_forward_no_mu_fu_1372_v79_6_0_2_q0 = quantized_hidden_sta_13_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_1372_v79_6_0_2_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_1372_v79_6_0_3_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state77.read())) {
        grp_linear_forward_no_mu_fu_1372_v79_6_0_3_q0 = quantized_final_outp_12_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        grp_linear_forward_no_mu_fu_1372_v79_6_0_3_q0 = quantized_hidden_sta_12_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_1372_v79_6_0_3_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_1372_v79_7_0_0_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state77.read())) {
        grp_linear_forward_no_mu_fu_1372_v79_7_0_0_q0 = quantized_final_outp_11_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        grp_linear_forward_no_mu_fu_1372_v79_7_0_0_q0 = quantized_hidden_sta_11_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_1372_v79_7_0_0_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_1372_v79_7_0_1_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state77.read())) {
        grp_linear_forward_no_mu_fu_1372_v79_7_0_1_q0 = quantized_final_outp_10_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        grp_linear_forward_no_mu_fu_1372_v79_7_0_1_q0 = quantized_hidden_sta_10_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_1372_v79_7_0_1_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_1372_v79_7_0_2_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state77.read())) {
        grp_linear_forward_no_mu_fu_1372_v79_7_0_2_q0 = quantized_final_outp_9_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        grp_linear_forward_no_mu_fu_1372_v79_7_0_2_q0 = quantized_hidden_sta_9_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_1372_v79_7_0_2_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_1372_v79_7_0_3_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state77.read())) {
        grp_linear_forward_no_mu_fu_1372_v79_7_0_3_q0 = quantized_final_outp_8_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        grp_linear_forward_no_mu_fu_1372_v79_7_0_3_q0 = quantized_hidden_sta_8_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_1372_v79_7_0_3_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_1372_v79_8_0_0_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state77.read())) {
        grp_linear_forward_no_mu_fu_1372_v79_8_0_0_q0 = quantized_final_outp_7_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        grp_linear_forward_no_mu_fu_1372_v79_8_0_0_q0 = quantized_hidden_sta_7_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_1372_v79_8_0_0_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_1372_v79_8_0_1_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state77.read())) {
        grp_linear_forward_no_mu_fu_1372_v79_8_0_1_q0 = quantized_final_outp_6_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        grp_linear_forward_no_mu_fu_1372_v79_8_0_1_q0 = quantized_hidden_sta_6_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_1372_v79_8_0_1_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_1372_v79_8_0_2_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state77.read())) {
        grp_linear_forward_no_mu_fu_1372_v79_8_0_2_q0 = quantized_final_outp_5_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        grp_linear_forward_no_mu_fu_1372_v79_8_0_2_q0 = quantized_hidden_sta_5_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_1372_v79_8_0_2_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_1372_v79_8_0_3_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state77.read())) {
        grp_linear_forward_no_mu_fu_1372_v79_8_0_3_q0 = quantized_final_outp_4_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        grp_linear_forward_no_mu_fu_1372_v79_8_0_3_q0 = quantized_hidden_sta_4_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_1372_v79_8_0_3_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_1372_v79_9_0_0_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state77.read())) {
        grp_linear_forward_no_mu_fu_1372_v79_9_0_0_q0 = quantized_final_outp_3_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        grp_linear_forward_no_mu_fu_1372_v79_9_0_0_q0 = quantized_hidden_sta_3_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_1372_v79_9_0_0_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_1372_v79_9_0_1_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state77.read())) {
        grp_linear_forward_no_mu_fu_1372_v79_9_0_1_q0 = quantized_final_outp_2_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        grp_linear_forward_no_mu_fu_1372_v79_9_0_1_q0 = quantized_hidden_sta_2_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_1372_v79_9_0_1_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_1372_v79_9_0_2_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state77.read())) {
        grp_linear_forward_no_mu_fu_1372_v79_9_0_2_q0 = quantized_final_outp_1_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        grp_linear_forward_no_mu_fu_1372_v79_9_0_2_q0 = quantized_hidden_sta_1_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_1372_v79_9_0_2_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_1372_v79_9_0_3_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state77.read())) {
        grp_linear_forward_no_mu_fu_1372_v79_9_0_3_q0 = quantized_final_outp_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        grp_linear_forward_no_mu_fu_1372_v79_9_0_3_q0 = quantized_hidden_sta_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_1372_v79_9_0_3_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_1372_v81_0_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state77.read())) {
        grp_linear_forward_no_mu_fu_1372_v81_0_q0 = v271_0_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        grp_linear_forward_no_mu_fu_1372_v81_0_q0 = v267_0_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        grp_linear_forward_no_mu_fu_1372_v81_0_q0 = v265_0_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_1372_v81_0_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_1372_v81_10_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state77.read())) {
        grp_linear_forward_no_mu_fu_1372_v81_10_q0 = v271_10_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        grp_linear_forward_no_mu_fu_1372_v81_10_q0 = v267_10_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        grp_linear_forward_no_mu_fu_1372_v81_10_q0 = v265_10_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_1372_v81_10_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_1372_v81_11_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state77.read())) {
        grp_linear_forward_no_mu_fu_1372_v81_11_q0 = v271_11_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        grp_linear_forward_no_mu_fu_1372_v81_11_q0 = v267_11_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        grp_linear_forward_no_mu_fu_1372_v81_11_q0 = v265_11_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_1372_v81_11_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_1372_v81_12_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state77.read())) {
        grp_linear_forward_no_mu_fu_1372_v81_12_q0 = v271_12_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        grp_linear_forward_no_mu_fu_1372_v81_12_q0 = v267_12_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        grp_linear_forward_no_mu_fu_1372_v81_12_q0 = v265_12_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_1372_v81_12_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_1372_v81_13_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state77.read())) {
        grp_linear_forward_no_mu_fu_1372_v81_13_q0 = v271_13_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        grp_linear_forward_no_mu_fu_1372_v81_13_q0 = v267_13_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        grp_linear_forward_no_mu_fu_1372_v81_13_q0 = v265_13_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_1372_v81_13_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_1372_v81_14_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state77.read())) {
        grp_linear_forward_no_mu_fu_1372_v81_14_q0 = v271_14_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        grp_linear_forward_no_mu_fu_1372_v81_14_q0 = v267_14_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        grp_linear_forward_no_mu_fu_1372_v81_14_q0 = v265_14_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_1372_v81_14_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_1372_v81_15_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state77.read())) {
        grp_linear_forward_no_mu_fu_1372_v81_15_q0 = v271_15_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        grp_linear_forward_no_mu_fu_1372_v81_15_q0 = v267_15_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        grp_linear_forward_no_mu_fu_1372_v81_15_q0 = v265_15_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_1372_v81_15_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_1372_v81_16_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state77.read())) {
        grp_linear_forward_no_mu_fu_1372_v81_16_q0 = v271_16_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        grp_linear_forward_no_mu_fu_1372_v81_16_q0 = v267_16_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        grp_linear_forward_no_mu_fu_1372_v81_16_q0 = v265_16_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_1372_v81_16_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_1372_v81_17_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state77.read())) {
        grp_linear_forward_no_mu_fu_1372_v81_17_q0 = v271_17_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        grp_linear_forward_no_mu_fu_1372_v81_17_q0 = v267_17_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        grp_linear_forward_no_mu_fu_1372_v81_17_q0 = v265_17_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_1372_v81_17_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_1372_v81_18_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state77.read())) {
        grp_linear_forward_no_mu_fu_1372_v81_18_q0 = v271_18_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        grp_linear_forward_no_mu_fu_1372_v81_18_q0 = v267_18_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        grp_linear_forward_no_mu_fu_1372_v81_18_q0 = v265_18_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_1372_v81_18_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_1372_v81_19_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state77.read())) {
        grp_linear_forward_no_mu_fu_1372_v81_19_q0 = v271_19_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        grp_linear_forward_no_mu_fu_1372_v81_19_q0 = v267_19_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        grp_linear_forward_no_mu_fu_1372_v81_19_q0 = v265_19_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_1372_v81_19_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_1372_v81_1_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state77.read())) {
        grp_linear_forward_no_mu_fu_1372_v81_1_q0 = v271_1_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        grp_linear_forward_no_mu_fu_1372_v81_1_q0 = v267_1_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        grp_linear_forward_no_mu_fu_1372_v81_1_q0 = v265_1_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_1372_v81_1_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_1372_v81_20_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state77.read())) {
        grp_linear_forward_no_mu_fu_1372_v81_20_q0 = v271_20_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        grp_linear_forward_no_mu_fu_1372_v81_20_q0 = v267_20_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        grp_linear_forward_no_mu_fu_1372_v81_20_q0 = v265_20_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_1372_v81_20_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_1372_v81_21_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state77.read())) {
        grp_linear_forward_no_mu_fu_1372_v81_21_q0 = v271_21_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        grp_linear_forward_no_mu_fu_1372_v81_21_q0 = v267_21_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        grp_linear_forward_no_mu_fu_1372_v81_21_q0 = v265_21_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_1372_v81_21_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_1372_v81_22_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state77.read())) {
        grp_linear_forward_no_mu_fu_1372_v81_22_q0 = v271_22_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        grp_linear_forward_no_mu_fu_1372_v81_22_q0 = v267_22_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        grp_linear_forward_no_mu_fu_1372_v81_22_q0 = v265_22_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_1372_v81_22_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_1372_v81_23_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state77.read())) {
        grp_linear_forward_no_mu_fu_1372_v81_23_q0 = v271_23_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        grp_linear_forward_no_mu_fu_1372_v81_23_q0 = v267_23_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        grp_linear_forward_no_mu_fu_1372_v81_23_q0 = v265_23_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_1372_v81_23_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_1372_v81_2_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state77.read())) {
        grp_linear_forward_no_mu_fu_1372_v81_2_q0 = v271_2_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        grp_linear_forward_no_mu_fu_1372_v81_2_q0 = v267_2_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        grp_linear_forward_no_mu_fu_1372_v81_2_q0 = v265_2_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_1372_v81_2_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_1372_v81_3_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state77.read())) {
        grp_linear_forward_no_mu_fu_1372_v81_3_q0 = v271_3_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        grp_linear_forward_no_mu_fu_1372_v81_3_q0 = v267_3_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        grp_linear_forward_no_mu_fu_1372_v81_3_q0 = v265_3_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_1372_v81_3_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_1372_v81_4_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state77.read())) {
        grp_linear_forward_no_mu_fu_1372_v81_4_q0 = v271_4_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        grp_linear_forward_no_mu_fu_1372_v81_4_q0 = v267_4_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        grp_linear_forward_no_mu_fu_1372_v81_4_q0 = v265_4_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_1372_v81_4_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_1372_v81_5_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state77.read())) {
        grp_linear_forward_no_mu_fu_1372_v81_5_q0 = v271_5_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        grp_linear_forward_no_mu_fu_1372_v81_5_q0 = v267_5_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        grp_linear_forward_no_mu_fu_1372_v81_5_q0 = v265_5_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_1372_v81_5_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_1372_v81_6_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state77.read())) {
        grp_linear_forward_no_mu_fu_1372_v81_6_q0 = v271_6_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        grp_linear_forward_no_mu_fu_1372_v81_6_q0 = v267_6_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        grp_linear_forward_no_mu_fu_1372_v81_6_q0 = v265_6_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_1372_v81_6_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_1372_v81_7_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state77.read())) {
        grp_linear_forward_no_mu_fu_1372_v81_7_q0 = v271_7_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        grp_linear_forward_no_mu_fu_1372_v81_7_q0 = v267_7_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        grp_linear_forward_no_mu_fu_1372_v81_7_q0 = v265_7_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_1372_v81_7_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_1372_v81_8_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state77.read())) {
        grp_linear_forward_no_mu_fu_1372_v81_8_q0 = v271_8_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        grp_linear_forward_no_mu_fu_1372_v81_8_q0 = v267_8_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        grp_linear_forward_no_mu_fu_1372_v81_8_q0 = v265_8_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_1372_v81_8_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_1372_v81_9_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state77.read())) {
        grp_linear_forward_no_mu_fu_1372_v81_9_q0 = v271_9_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        grp_linear_forward_no_mu_fu_1372_v81_9_q0 = v267_9_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        grp_linear_forward_no_mu_fu_1372_v81_9_q0 = v265_9_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_1372_v81_9_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_1372_v82_V() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state77.read())) {
        grp_linear_forward_no_mu_fu_1372_v82_V = v308_V_reg_4386.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        grp_linear_forward_no_mu_fu_1372_v82_V = v304_V_reg_4336.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        grp_linear_forward_no_mu_fu_1372_v82_V = v302_V_reg_4251.read();
    } else {
        grp_linear_forward_no_mu_fu_1372_v82_V =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_1643_ap_start() {
    grp_linear_forward_no_mu_fu_1643_ap_start = grp_linear_forward_no_mu_fu_1643_ap_start_reg.read();
}

void attention::thread_grp_quantize_activation_fu_2055_ap_start() {
    grp_quantize_activation_fu_2055_ap_start = grp_quantize_activation_fu_2055_ap_start_reg.read();
}

void attention::thread_grp_quantize_activation_fu_2055_v22_0_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read())) {
        grp_quantize_activation_fu_2055_v22_0_q0 = rms_attn_output_0_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        grp_quantize_activation_fu_2055_v22_0_q0 = rms_hidden_states_0_q0.read();
    } else {
        grp_quantize_activation_fu_2055_v22_0_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void attention::thread_grp_reshape_2D_to_3D_fu_2109_ap_start() {
    grp_reshape_2D_to_3D_fu_2109_ap_start = grp_reshape_2D_to_3D_fu_2109_ap_start_reg.read();
}

void attention::thread_grp_reshape_2D_to_3D_fu_2109_v147_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read())) {
        grp_reshape_2D_to_3D_fu_2109_v147_q0 = k_proj_re_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        grp_reshape_2D_to_3D_fu_2109_v147_q0 = q_proj_re_q0.read();
    } else {
        grp_reshape_2D_to_3D_fu_2109_v147_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void attention::thread_grp_reshape_2D_to_3D_fu_2117_ap_start() {
    grp_reshape_2D_to_3D_fu_2117_ap_start = grp_reshape_2D_to_3D_fu_2117_ap_start_reg.read();
}

void attention::thread_grp_rms_norm_fu_2031_ap_start() {
    grp_rms_norm_fu_2031_ap_start = grp_rms_norm_fu_2031_ap_start_reg.read();
}

void attention::thread_grp_rms_norm_fu_2031_v0_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state73.read())) {
        grp_rms_norm_fu_2031_v0_q0 = attn_output_2D_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        grp_rms_norm_fu_2031_v0_q0 = v264_q0.read();
    } else {
        grp_rms_norm_fu_2031_v0_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void attention::thread_grp_rms_norm_fu_2031_v1_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state73.read())) {
        grp_rms_norm_fu_2031_v1_q0 = v276_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        grp_rms_norm_fu_2031_v1_q0 = v275_q0.read();
    } else {
        grp_rms_norm_fu_2031_v1_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void attention::thread_grp_softmax_fu_2011_ap_start() {
    grp_softmax_fu_2011_ap_start = grp_softmax_fu_2011_ap_start_reg.read();
}

void attention::thread_grp_transpose_last_two_d_fu_2102_ap_start() {
    grp_transpose_last_two_d_fu_2102_ap_start = grp_transpose_last_two_d_fu_2102_ap_start_reg.read();
}

void attention::thread_h6_fu_3828_p2() {
    h6_fu_3828_p2 = (!h6_0_reg_1262.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(h6_0_reg_1262.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void attention::thread_i11_fu_3764_p2() {
    i11_fu_3764_p2 = (!i11_0_reg_1240.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(i11_0_reg_1240.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void attention::thread_icmp_ln480_fu_2152_p2() {
    icmp_ln480_fu_2152_p2 = (!v284_0_0_reg_1064.read().is_01() || !ap_const_lv11_600.is_01())? sc_lv<1>(): sc_lv<1>(v284_0_0_reg_1064.read() == ap_const_lv11_600);
}

void attention::thread_icmp_ln502_fu_2169_p2() {
    icmp_ln502_fu_2169_p2 = (!v295_0_0_reg_1075.read().is_01() || !ap_const_lv11_600.is_01())? sc_lv<1>(): sc_lv<1>(v295_0_0_reg_1075.read() == ap_const_lv11_600);
}

void attention::thread_icmp_ln508_fu_2186_p2() {
    icmp_ln508_fu_2186_p2 = (!v298_0_0_reg_1086.read().is_01() || !ap_const_lv11_600.is_01())? sc_lv<1>(): sc_lv<1>(v298_0_0_reg_1086.read() == ap_const_lv11_600);
}

void attention::thread_icmp_ln514_fu_2203_p2() {
    icmp_ln514_fu_2203_p2 = (!v301_0_0_reg_1097.read().is_01() || !ap_const_lv11_600.is_01())? sc_lv<1>(): sc_lv<1>(v301_0_0_reg_1097.read() == ap_const_lv11_600);
}

void attention::thread_icmp_ln571_1_fu_2557_p2() {
    icmp_ln571_1_fu_2557_p2 = (!trunc_ln556_1_fu_2501_p1.read().is_01() || !ap_const_lv63_0.is_01())? sc_lv<1>(): sc_lv<1>(trunc_ln556_1_fu_2501_p1.read() == ap_const_lv63_0);
}

void attention::thread_icmp_ln571_2_fu_2675_p2() {
    icmp_ln571_2_fu_2675_p2 = (!trunc_ln556_2_fu_2619_p1.read().is_01() || !ap_const_lv63_0.is_01())? sc_lv<1>(): sc_lv<1>(trunc_ln556_2_fu_2619_p1.read() == ap_const_lv63_0);
}

void attention::thread_icmp_ln571_3_fu_3111_p2() {
    icmp_ln571_3_fu_3111_p2 = (!trunc_ln556_3_fu_3055_p1.read().is_01() || !ap_const_lv63_0.is_01())? sc_lv<1>(): sc_lv<1>(trunc_ln556_3_fu_3055_p1.read() == ap_const_lv63_0);
}

void attention::thread_icmp_ln571_fu_2280_p2() {
    icmp_ln571_fu_2280_p2 = (!trunc_ln556_fu_2224_p1.read().is_01() || !ap_const_lv63_0.is_01())? sc_lv<1>(): sc_lv<1>(trunc_ln556_fu_2224_p1.read() == ap_const_lv63_0);
}

void attention::thread_icmp_ln581_1_fu_2569_p2() {
    icmp_ln581_1_fu_2569_p2 = (!F2_1_fu_2563_p2.read().is_01() || !ap_const_lv12_14.is_01())? sc_lv<1>(): (sc_bigint<12>(F2_1_fu_2563_p2.read()) > sc_bigint<12>(ap_const_lv12_14));
}

void attention::thread_icmp_ln581_2_fu_2687_p2() {
    icmp_ln581_2_fu_2687_p2 = (!F2_2_fu_2681_p2.read().is_01() || !ap_const_lv12_14.is_01())? sc_lv<1>(): (sc_bigint<12>(F2_2_fu_2681_p2.read()) > sc_bigint<12>(ap_const_lv12_14));
}

void attention::thread_icmp_ln581_3_fu_3123_p2() {
    icmp_ln581_3_fu_3123_p2 = (!F2_3_fu_3117_p2.read().is_01() || !ap_const_lv12_14.is_01())? sc_lv<1>(): (sc_bigint<12>(F2_3_fu_3117_p2.read()) > sc_bigint<12>(ap_const_lv12_14));
}

void attention::thread_icmp_ln581_fu_2292_p2() {
    icmp_ln581_fu_2292_p2 = (!F2_fu_2286_p2.read().is_01() || !ap_const_lv12_14.is_01())? sc_lv<1>(): (sc_bigint<12>(F2_fu_2286_p2.read()) > sc_bigint<12>(ap_const_lv12_14));
}

void attention::thread_icmp_ln582_1_fu_2595_p2() {
    icmp_ln582_1_fu_2595_p2 = (!F2_1_fu_2563_p2.read().is_01() || !ap_const_lv12_14.is_01())? sc_lv<1>(): sc_lv<1>(F2_1_fu_2563_p2.read() == ap_const_lv12_14);
}

void attention::thread_icmp_ln582_2_fu_2713_p2() {
    icmp_ln582_2_fu_2713_p2 = (!F2_2_fu_2681_p2.read().is_01() || !ap_const_lv12_14.is_01())? sc_lv<1>(): sc_lv<1>(F2_2_fu_2681_p2.read() == ap_const_lv12_14);
}

void attention::thread_icmp_ln582_3_fu_3149_p2() {
    icmp_ln582_3_fu_3149_p2 = (!F2_3_fu_3117_p2.read().is_01() || !ap_const_lv12_14.is_01())? sc_lv<1>(): sc_lv<1>(F2_3_fu_3117_p2.read() == ap_const_lv12_14);
}

void attention::thread_icmp_ln582_4_fu_3328_p2() {
    icmp_ln582_4_fu_3328_p2 = (!v334_0_reg_1108.read().is_01() || !ap_const_lv5_10.is_01())? sc_lv<1>(): sc_lv<1>(v334_0_reg_1108.read() == ap_const_lv5_10);
}

void attention::thread_icmp_ln582_fu_2318_p2() {
    icmp_ln582_fu_2318_p2 = (!F2_fu_2286_p2.read().is_01() || !ap_const_lv12_14.is_01())? sc_lv<1>(): sc_lv<1>(F2_fu_2286_p2.read() == ap_const_lv12_14);
}

void attention::thread_icmp_ln584_fu_3366_p2() {
    icmp_ln584_fu_3366_p2 = (!v336_0_0_reg_1119.read().is_01() || !ap_const_lv7_60.is_01())? sc_lv<1>(): sc_lv<1>(v336_0_0_reg_1119.read() == ap_const_lv7_60);
}

void attention::thread_icmp_ln585_1_fu_2736_p2() {
    icmp_ln585_1_fu_2736_p2 = (!sh_amt_1_reg_4273.read().is_01() || !ap_const_lv12_36.is_01())? sc_lv<1>(): (sc_biguint<12>(sh_amt_1_reg_4273.read()) < sc_biguint<12>(ap_const_lv12_36));
}

void attention::thread_icmp_ln585_2_fu_2895_p2() {
    icmp_ln585_2_fu_2895_p2 = (!sh_amt_2_reg_4313.read().is_01() || !ap_const_lv12_36.is_01())? sc_lv<1>(): (sc_biguint<12>(sh_amt_2_reg_4313.read()) < sc_biguint<12>(ap_const_lv12_36));
}

void attention::thread_icmp_ln585_3_fu_3172_p2() {
    icmp_ln585_3_fu_3172_p2 = (!sh_amt_3_reg_4363.read().is_01() || !ap_const_lv12_36.is_01())? sc_lv<1>(): (sc_biguint<12>(sh_amt_3_reg_4363.read()) < sc_biguint<12>(ap_const_lv12_36));
}

void attention::thread_icmp_ln585_fu_2341_p2() {
    icmp_ln585_fu_2341_p2 = (!sh_amt_reg_4228.read().is_01() || !ap_const_lv12_36.is_01())? sc_lv<1>(): (sc_biguint<12>(sh_amt_reg_4228.read()) < sc_biguint<12>(ap_const_lv12_36));
}

void attention::thread_icmp_ln590_fu_3392_p2() {
    icmp_ln590_fu_3392_p2 = (!v338_0_reg_1130.read().is_01() || !ap_const_lv5_10.is_01())? sc_lv<1>(): sc_lv<1>(v338_0_reg_1130.read() == ap_const_lv5_10);
}

void attention::thread_icmp_ln592_fu_3430_p2() {
    icmp_ln592_fu_3430_p2 = (!v340_0_0_reg_1141.read().is_01() || !ap_const_lv7_60.is_01())? sc_lv<1>(): sc_lv<1>(v340_0_0_reg_1141.read() == ap_const_lv7_60);
}

void attention::thread_icmp_ln599_fu_3456_p2() {
    icmp_ln599_fu_3456_p2 = (!v342_0_reg_1152.read().is_01() || !ap_const_lv5_10.is_01())? sc_lv<1>(): sc_lv<1>(v342_0_reg_1152.read() == ap_const_lv5_10);
}

void attention::thread_icmp_ln600_fu_3502_p2() {
    icmp_ln600_fu_3502_p2 = (!v343_0_reg_1163.read().is_01() || !ap_const_lv3_6.is_01())? sc_lv<1>(): sc_lv<1>(v343_0_reg_1163.read() == ap_const_lv3_6);
}

void attention::thread_icmp_ln601_fu_3549_p2() {
    icmp_ln601_fu_3549_p2 = (!v344_0_reg_1174.read().is_01() || !ap_const_lv7_60.is_01())? sc_lv<1>(): sc_lv<1>(v344_0_reg_1174.read() == ap_const_lv7_60);
}

void attention::thread_icmp_ln603_1_fu_2741_p2() {
    icmp_ln603_1_fu_2741_p2 = (!tmp_56_reg_4291.read().is_01() || !ap_const_lv7_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_56_reg_4291.read() == ap_const_lv7_0);
}

void attention::thread_icmp_ln603_2_fu_2900_p2() {
    icmp_ln603_2_fu_2900_p2 = (!tmp_69_reg_4331.read().is_01() || !ap_const_lv7_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_69_reg_4331.read() == ap_const_lv7_0);
}

void attention::thread_icmp_ln603_3_fu_3177_p2() {
    icmp_ln603_3_fu_3177_p2 = (!tmp_72_reg_4381.read().is_01() || !ap_const_lv7_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_72_reg_4381.read() == ap_const_lv7_0);
}

void attention::thread_icmp_ln603_fu_2346_p2() {
    icmp_ln603_fu_2346_p2 = (!tmp_43_reg_4246.read().is_01() || !ap_const_lv7_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_43_reg_4246.read() == ap_const_lv7_0);
}

void attention::thread_icmp_ln607_fu_3575_p2() {
    icmp_ln607_fu_3575_p2 = (!v346_0_reg_1185.read().is_01() || !ap_const_lv5_10.is_01())? sc_lv<1>(): sc_lv<1>(v346_0_reg_1185.read() == ap_const_lv5_10);
}

void attention::thread_icmp_ln608_fu_3621_p2() {
    icmp_ln608_fu_3621_p2 = (!v347_0_reg_1196.read().is_01() || !ap_const_lv3_6.is_01())? sc_lv<1>(): sc_lv<1>(v347_0_reg_1196.read() == ap_const_lv3_6);
}

void attention::thread_icmp_ln609_fu_3668_p2() {
    icmp_ln609_fu_3668_p2 = (!v348_0_reg_1207.read().is_01() || !ap_const_lv7_60.is_01())? sc_lv<1>(): sc_lv<1>(v348_0_reg_1207.read() == ap_const_lv7_60);
}

void attention::thread_icmp_ln626_fu_3694_p2() {
    icmp_ln626_fu_3694_p2 = (!v354_0_reg_1218.read().is_01() || !ap_const_lv5_10.is_01())? sc_lv<1>(): sc_lv<1>(v354_0_reg_1218.read() == ap_const_lv5_10);
}

void attention::thread_icmp_ln628_fu_3732_p2() {
    icmp_ln628_fu_3732_p2 = (!v356_0_0_reg_1229.read().is_01() || !ap_const_lv3_6.is_01())? sc_lv<1>(): sc_lv<1>(v356_0_0_reg_1229.read() == ap_const_lv3_6);
}

void attention::thread_icmp_ln636_fu_3758_p2() {
    icmp_ln636_fu_3758_p2 = (!i11_0_reg_1240.read().is_01() || !ap_const_lv5_10.is_01())? sc_lv<1>(): sc_lv<1>(i11_0_reg_1240.read() == ap_const_lv5_10);
}

void attention::thread_icmp_ln638_fu_3796_p2() {
    icmp_ln638_fu_3796_p2 = (!k10_0_0_reg_1251.read().is_01() || !ap_const_lv3_6.is_01())? sc_lv<1>(): sc_lv<1>(k10_0_0_reg_1251.read() == ap_const_lv3_6);
}

void attention::thread_icmp_ln653_fu_3822_p2() {
    icmp_ln653_fu_3822_p2 = (!h6_0_reg_1262.read().is_01() || !ap_const_lv5_10.is_01())? sc_lv<1>(): sc_lv<1>(h6_0_reg_1262.read() == ap_const_lv5_10);
}

void attention::thread_icmp_ln664_fu_3865_p2() {
    icmp_ln664_fu_3865_p2 = (!v374_0_reg_1273.read().is_01() || !ap_const_lv5_10.is_01())? sc_lv<1>(): sc_lv<1>(v374_0_reg_1273.read() == ap_const_lv5_10);
}

void attention::thread_icmp_ln666_fu_3903_p2() {
    icmp_ln666_fu_3903_p2 = (!v376_0_0_reg_1284.read().is_01() || !ap_const_lv3_6.is_01())? sc_lv<1>(): sc_lv<1>(v376_0_0_reg_1284.read() == ap_const_lv3_6);
}

void attention::thread_icmp_ln673_fu_3929_p2() {
    icmp_ln673_fu_3929_p2 = (!v378_0_reg_1295.read().is_01() || !ap_const_lv5_10.is_01())? sc_lv<1>(): sc_lv<1>(v378_0_reg_1295.read() == ap_const_lv5_10);
}

void attention::thread_icmp_ln675_fu_3967_p2() {
    icmp_ln675_fu_3967_p2 = (!v380_0_0_reg_1306.read().is_01() || !ap_const_lv7_60.is_01())? sc_lv<1>(): sc_lv<1>(v380_0_0_reg_1306.read() == ap_const_lv7_60);
}

void attention::thread_icmp_ln683_fu_3993_p2() {
    icmp_ln683_fu_3993_p2 = (!v383_0_0_reg_1317.read().is_01() || !ap_const_lv11_600.is_01())? sc_lv<1>(): sc_lv<1>(v383_0_0_reg_1317.read() == ap_const_lv11_600);
}

void attention::thread_icmp_ln688_fu_4010_p2() {
    icmp_ln688_fu_4010_p2 = (!h7_0_0_reg_1328.read().is_01() || !ap_const_lv5_10.is_01())? sc_lv<1>(): sc_lv<1>(h7_0_0_reg_1328.read() == ap_const_lv5_10);
}

void attention::thread_icmp_ln689_fu_4086_p2() {
    icmp_ln689_fu_4086_p2 = (!d4_0_0_reg_1339.read().is_01() || !ap_const_lv7_60.is_01())? sc_lv<1>(): sc_lv<1>(d4_0_0_reg_1339.read() == ap_const_lv7_60);
}

void attention::thread_icmp_ln697_fu_4121_p2() {
    icmp_ln697_fu_4121_p2 = (!v390_0_0_reg_1350.read().is_01() || !ap_const_lv11_600.is_01())? sc_lv<1>(): sc_lv<1>(v390_0_0_reg_1350.read() == ap_const_lv11_600);
}

void attention::thread_icmp_ln736_fu_4138_p2() {
    icmp_ln736_fu_4138_p2 = (!v408_0_0_reg_1361.read().is_01() || !ap_const_lv11_600.is_01())? sc_lv<1>(): sc_lv<1>(v408_0_0_reg_1361.read() == ap_const_lv11_600);
}

void attention::thread_ireg_V_1_fu_2497_p1() {
    ireg_V_1_fu_2497_p1 = grp_fu_2134_p1.read();
}

void attention::thread_ireg_V_2_fu_2615_p1() {
    ireg_V_2_fu_2615_p1 = grp_fu_2137_p1.read();
}

void attention::thread_ireg_V_3_fu_3051_p1() {
    ireg_V_3_fu_3051_p1 = grp_fu_2134_p1.read();
}

void attention::thread_ireg_V_fu_2220_p1() {
    ireg_V_fu_2220_p1 = grp_fu_2134_p1.read();
}

void attention::thread_k_embed_0_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        k_embed_0_address0 =  (sc_lv<11>) (sext_ln593_fu_3451_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state28.read())) {
        k_embed_0_address0 = grp_cache_update_fu_2092_v194_0_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read())) {
        k_embed_0_address0 = grp_apply_rotary_pos_emb_fu_2063_v166_0_address0.read();
    } else {
        k_embed_0_address0 = "XXXXXXXXXXX";
    }
}

void attention::thread_k_embed_0_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        k_embed_0_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state28.read())) {
        k_embed_0_ce0 = grp_cache_update_fu_2092_v194_0_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read())) {
        k_embed_0_ce0 = grp_apply_rotary_pos_emb_fu_2063_v166_0_ce0.read();
    } else {
        k_embed_0_ce0 = ap_const_logic_0;
    }
}

void attention::thread_k_embed_0_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        k_embed_0_d0 = ap_const_lv32_0;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read())) {
        k_embed_0_d0 = grp_apply_rotary_pos_emb_fu_2063_v166_0_d0.read();
    } else {
        k_embed_0_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void attention::thread_k_embed_0_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln592_fu_3430_p2.read()))) {
        k_embed_0_we0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read())) {
        k_embed_0_we0 = grp_apply_rotary_pos_emb_fu_2063_v166_0_we0.read();
    } else {
        k_embed_0_we0 = ap_const_logic_0;
    }
}

void attention::thread_k_proj_0_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read())) {
        k_proj_0_address0 = grp_reshape_2D_to_3D_fu_2109_v148_0_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read())) {
        k_proj_0_address0 = grp_apply_rotary_pos_emb_fu_2063_k_proj_0_address0.read();
    } else {
        k_proj_0_address0 = "XXXXXXXXXXX";
    }
}

void attention::thread_k_proj_0_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read())) {
        k_proj_0_ce0 = grp_reshape_2D_to_3D_fu_2109_v148_0_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read())) {
        k_proj_0_ce0 = grp_apply_rotary_pos_emb_fu_2063_k_proj_0_ce0.read();
    } else {
        k_proj_0_ce0 = ap_const_logic_0;
    }
}

void attention::thread_k_proj_0_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read())) {
        k_proj_0_ce1 = grp_apply_rotary_pos_emb_fu_2063_k_proj_0_ce1.read();
    } else {
        k_proj_0_ce1 = ap_const_logic_0;
    }
}

void attention::thread_k_proj_0_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read())) {
        k_proj_0_we0 = grp_reshape_2D_to_3D_fu_2109_v148_0_we0.read();
    } else {
        k_proj_0_we0 = ap_const_logic_0;
    }
}

void attention::thread_k_proj_re_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        k_proj_re_address0 =  (sc_lv<11>) (zext_ln509_fu_2198_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read())) {
        k_proj_re_address0 = grp_reshape_2D_to_3D_fu_2109_v147_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        k_proj_re_address0 = grp_linear_forward_no_mu_fu_1372_v83_address0.read();
    } else {
        k_proj_re_address0 = "XXXXXXXXXXX";
    }
}

void attention::thread_k_proj_re_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        k_proj_re_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read())) {
        k_proj_re_ce0 = grp_reshape_2D_to_3D_fu_2109_v147_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        k_proj_re_ce0 = grp_linear_forward_no_mu_fu_1372_v83_ce0.read();
    } else {
        k_proj_re_ce0 = ap_const_logic_0;
    }
}

void attention::thread_k_proj_re_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        k_proj_re_d0 = ap_const_lv32_0;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        k_proj_re_d0 = grp_linear_forward_no_mu_fu_1372_v83_d0.read();
    } else {
        k_proj_re_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void attention::thread_k_proj_re_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln508_fu_2186_p2.read()))) {
        k_proj_re_we0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        k_proj_re_we0 = grp_linear_forward_no_mu_fu_1372_v83_we0.read();
    } else {
        k_proj_re_we0 = ap_const_logic_0;
    }
}

void attention::thread_k_proj_transposed_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state30.read())) {
        k_proj_transposed_address0 = grp_transpose_last_two_d_fu_2102_v205_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read())) {
        k_proj_transposed_address0 = grp_GEMM_3D_float_fu_2077_k_proj_transposed_address0.read();
    } else {
        k_proj_transposed_address0 =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
    }
}

void attention::thread_k_proj_transposed_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state30.read())) {
        k_proj_transposed_ce0 = grp_transpose_last_two_d_fu_2102_v205_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read())) {
        k_proj_transposed_ce0 = grp_GEMM_3D_float_fu_2077_k_proj_transposed_ce0.read();
    } else {
        k_proj_transposed_ce0 = ap_const_logic_0;
    }
}

void attention::thread_k_proj_transposed_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state30.read())) {
        k_proj_transposed_we0 = grp_transpose_last_two_d_fu_2102_v205_we0.read();
    } else {
        k_proj_transposed_we0 = ap_const_logic_0;
    }
}

void attention::thread_man_V_10_fu_3097_p2() {
    man_V_10_fu_3097_p2 = (!ap_const_lv54_0.is_01() || !p_Result_65_fu_3093_p1.read().is_01())? sc_lv<54>(): (sc_biguint<54>(ap_const_lv54_0) - sc_biguint<54>(p_Result_65_fu_3093_p1.read()));
}

void attention::thread_man_V_11_fu_3103_p3() {
    man_V_11_fu_3103_p3 = (!p_Result_64_fu_3059_p3.read()[0].is_01())? sc_lv<54>(): ((p_Result_64_fu_3059_p3.read()[0].to_bool())? man_V_10_fu_3097_p2.read(): p_Result_65_fu_3093_p1.read());
}

void attention::thread_man_V_1_fu_2266_p2() {
    man_V_1_fu_2266_p2 = (!ap_const_lv54_0.is_01() || !p_Result_59_fu_2262_p1.read().is_01())? sc_lv<54>(): (sc_biguint<54>(ap_const_lv54_0) - sc_biguint<54>(p_Result_59_fu_2262_p1.read()));
}

void attention::thread_man_V_2_fu_2272_p3() {
    man_V_2_fu_2272_p3 = (!p_Result_s_fu_2228_p3.read()[0].is_01())? sc_lv<54>(): ((p_Result_s_fu_2228_p3.read()[0].to_bool())? man_V_1_fu_2266_p2.read(): p_Result_59_fu_2262_p1.read());
}

void attention::thread_man_V_4_fu_2543_p2() {
    man_V_4_fu_2543_p2 = (!ap_const_lv54_0.is_01() || !p_Result_61_fu_2539_p1.read().is_01())? sc_lv<54>(): (sc_biguint<54>(ap_const_lv54_0) - sc_biguint<54>(p_Result_61_fu_2539_p1.read()));
}

void attention::thread_man_V_5_fu_2549_p3() {
    man_V_5_fu_2549_p3 = (!p_Result_60_fu_2505_p3.read()[0].is_01())? sc_lv<54>(): ((p_Result_60_fu_2505_p3.read()[0].to_bool())? man_V_4_fu_2543_p2.read(): p_Result_61_fu_2539_p1.read());
}

void attention::thread_man_V_7_fu_2661_p2() {
    man_V_7_fu_2661_p2 = (!ap_const_lv54_0.is_01() || !p_Result_63_fu_2657_p1.read().is_01())? sc_lv<54>(): (sc_biguint<54>(ap_const_lv54_0) - sc_biguint<54>(p_Result_63_fu_2657_p1.read()));
}

void attention::thread_man_V_8_fu_2667_p3() {
    man_V_8_fu_2667_p3 = (!p_Result_62_fu_2623_p3.read()[0].is_01())? sc_lv<54>(): ((p_Result_62_fu_2623_p3.read()[0].to_bool())? man_V_7_fu_2661_p2.read(): p_Result_63_fu_2657_p1.read());
}

void attention::thread_or_ln581_1_fu_2826_p2() {
    or_ln581_1_fu_2826_p2 = (or_ln582_1_fu_2793_p2.read() | icmp_ln581_1_reg_4267.read());
}

void attention::thread_or_ln581_2_fu_2985_p2() {
    or_ln581_2_fu_2985_p2 = (or_ln582_2_fu_2952_p2.read() | icmp_ln581_2_reg_4307.read());
}

void attention::thread_or_ln581_3_fu_3262_p2() {
    or_ln581_3_fu_3262_p2 = (or_ln582_3_fu_3229_p2.read() | icmp_ln581_3_reg_4357.read());
}

void attention::thread_or_ln581_fu_2431_p2() {
    or_ln581_fu_2431_p2 = (or_ln582_fu_2398_p2.read() | icmp_ln581_reg_4222.read());
}

void attention::thread_or_ln582_1_fu_2793_p2() {
    or_ln582_1_fu_2793_p2 = (icmp_ln571_1_reg_4261.read() | icmp_ln582_1_reg_4279.read());
}

void attention::thread_or_ln582_2_fu_2952_p2() {
    or_ln582_2_fu_2952_p2 = (icmp_ln571_2_reg_4301.read() | icmp_ln582_2_reg_4319.read());
}

void attention::thread_or_ln582_3_fu_3229_p2() {
    or_ln582_3_fu_3229_p2 = (icmp_ln571_3_reg_4351.read() | icmp_ln582_3_reg_4369.read());
}

void attention::thread_or_ln582_fu_2398_p2() {
    or_ln582_fu_2398_p2 = (icmp_ln571_reg_4216.read() | icmp_ln582_reg_4234.read());
}

void attention::thread_or_ln603_10_fu_3037_p2() {
    or_ln603_10_fu_3037_p2 = (or_ln603_8_fu_3010_p2.read() | or_ln603_9_fu_3023_p2.read());
}

void attention::thread_or_ln603_11_fu_3287_p2() {
    or_ln603_11_fu_3287_p2 = (and_ln603_3_fu_3273_p2.read() | and_ln585_8_fu_3256_p2.read());
}

void attention::thread_or_ln603_12_fu_3300_p2() {
    or_ln603_12_fu_3300_p2 = (and_ln585_7_fu_3250_p2.read() | and_ln582_3_fu_3224_p2.read());
}

void attention::thread_or_ln603_13_fu_3314_p2() {
    or_ln603_13_fu_3314_p2 = (or_ln603_11_fu_3287_p2.read() | or_ln603_12_fu_3300_p2.read());
}

void attention::thread_or_ln603_3_fu_2469_p2() {
    or_ln603_3_fu_2469_p2 = (and_ln585_fu_2419_p2.read() | and_ln582_fu_2393_p2.read());
}

void attention::thread_or_ln603_4_fu_2483_p2() {
    or_ln603_4_fu_2483_p2 = (or_ln603_fu_2456_p2.read() | or_ln603_3_fu_2469_p2.read());
}

void attention::thread_or_ln603_5_fu_2851_p2() {
    or_ln603_5_fu_2851_p2 = (and_ln603_1_fu_2837_p2.read() | and_ln585_4_fu_2820_p2.read());
}

void attention::thread_or_ln603_6_fu_2864_p2() {
    or_ln603_6_fu_2864_p2 = (and_ln585_3_fu_2814_p2.read() | and_ln582_1_fu_2788_p2.read());
}

void attention::thread_or_ln603_7_fu_2878_p2() {
    or_ln603_7_fu_2878_p2 = (or_ln603_5_fu_2851_p2.read() | or_ln603_6_fu_2864_p2.read());
}

void attention::thread_or_ln603_8_fu_3010_p2() {
    or_ln603_8_fu_3010_p2 = (and_ln603_2_fu_2996_p2.read() | and_ln585_6_fu_2979_p2.read());
}

void attention::thread_or_ln603_9_fu_3023_p2() {
    or_ln603_9_fu_3023_p2 = (and_ln585_5_fu_2973_p2.read() | and_ln582_2_fu_2947_p2.read());
}

void attention::thread_or_ln603_fu_2456_p2() {
    or_ln603_fu_2456_p2 = (and_ln603_fu_2442_p2.read() | and_ln585_2_fu_2425_p2.read());
}

void attention::thread_p_Result_59_fu_2262_p1() {
    p_Result_59_fu_2262_p1 = esl_zext<54,53>(tmp_fu_2254_p3.read());
}

void attention::thread_p_Result_60_fu_2505_p3() {
    p_Result_60_fu_2505_p3 = ireg_V_1_fu_2497_p1.read().range(63, 63);
}

void attention::thread_p_Result_61_fu_2539_p1() {
    p_Result_61_fu_2539_p1 = esl_zext<54,53>(tmp_s_fu_2531_p3.read());
}

void attention::thread_p_Result_62_fu_2623_p3() {
    p_Result_62_fu_2623_p3 = ireg_V_2_fu_2615_p1.read().range(63, 63);
}

void attention::thread_p_Result_63_fu_2657_p1() {
    p_Result_63_fu_2657_p1 = esl_zext<54,53>(tmp_8_fu_2649_p3.read());
}

void attention::thread_p_Result_64_fu_3059_p3() {
    p_Result_64_fu_3059_p3 = ireg_V_3_fu_3051_p1.read().range(63, 63);
}

void attention::thread_p_Result_65_fu_3093_p1() {
    p_Result_65_fu_3093_p1 = esl_zext<54,53>(tmp_9_fu_3085_p3.read());
}

void attention::thread_p_Result_s_fu_2228_p3() {
    p_Result_s_fu_2228_p3 = ireg_V_fu_2220_p1.read().range(63, 63);
}

void attention::thread_p_shl2_cast_fu_3654_p3() {
    p_shl2_cast_fu_3654_p3 = esl_concat<10,5>(add_ln610_fu_3637_p2.read(), ap_const_lv5_0);
}

void attention::thread_p_shl8_cast_fu_3527_p3() {
    p_shl8_cast_fu_3527_p3 = esl_concat<8,7>(trunc_ln602_fu_3523_p1.read(), ap_const_lv7_0);
}

void attention::thread_p_shl9_cast_fu_3535_p3() {
    p_shl9_cast_fu_3535_p3 = esl_concat<10,5>(add_ln602_fu_3518_p2.read(), ap_const_lv5_0);
}

void attention::thread_p_shl_cast_fu_3646_p3() {
    p_shl_cast_fu_3646_p3 = esl_concat<8,7>(trunc_ln610_fu_3642_p1.read(), ap_const_lv7_0);
}

void attention::thread_q_embed_0_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        q_embed_0_address0 =  (sc_lv<11>) (sext_ln585_fu_3387_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read())) {
        q_embed_0_address0 = grp_GEMM_3D_float_fu_2077_v210_0_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read())) {
        q_embed_0_address0 = grp_apply_rotary_pos_emb_fu_2063_v165_0_address0.read();
    } else {
        q_embed_0_address0 = "XXXXXXXXXXX";
    }
}

void attention::thread_q_embed_0_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        q_embed_0_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read())) {
        q_embed_0_ce0 = grp_GEMM_3D_float_fu_2077_v210_0_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read())) {
        q_embed_0_ce0 = grp_apply_rotary_pos_emb_fu_2063_v165_0_ce0.read();
    } else {
        q_embed_0_ce0 = ap_const_logic_0;
    }
}

void attention::thread_q_embed_0_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        q_embed_0_d0 = ap_const_lv32_0;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read())) {
        q_embed_0_d0 = grp_apply_rotary_pos_emb_fu_2063_v165_0_d0.read();
    } else {
        q_embed_0_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void attention::thread_q_embed_0_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln584_fu_3366_p2.read()))) {
        q_embed_0_we0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read())) {
        q_embed_0_we0 = grp_apply_rotary_pos_emb_fu_2063_v165_0_we0.read();
    } else {
        q_embed_0_we0 = ap_const_logic_0;
    }
}

void attention::thread_q_proj_0_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        q_proj_0_address0 = grp_reshape_2D_to_3D_fu_2109_v148_0_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read())) {
        q_proj_0_address0 = grp_apply_rotary_pos_emb_fu_2063_q_proj_0_address0.read();
    } else {
        q_proj_0_address0 = "XXXXXXXXXXX";
    }
}

void attention::thread_q_proj_0_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        q_proj_0_ce0 = grp_reshape_2D_to_3D_fu_2109_v148_0_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read())) {
        q_proj_0_ce0 = grp_apply_rotary_pos_emb_fu_2063_q_proj_0_ce0.read();
    } else {
        q_proj_0_ce0 = ap_const_logic_0;
    }
}

void attention::thread_q_proj_0_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read())) {
        q_proj_0_ce1 = grp_apply_rotary_pos_emb_fu_2063_q_proj_0_ce1.read();
    } else {
        q_proj_0_ce1 = ap_const_logic_0;
    }
}

void attention::thread_q_proj_0_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        q_proj_0_we0 = grp_reshape_2D_to_3D_fu_2109_v148_0_we0.read();
    } else {
        q_proj_0_we0 = ap_const_logic_0;
    }
}

void attention::thread_q_proj_re_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        q_proj_re_address0 =  (sc_lv<11>) (zext_ln503_fu_2181_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        q_proj_re_address0 = grp_reshape_2D_to_3D_fu_2109_v147_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        q_proj_re_address0 = grp_linear_forward_no_mu_fu_1372_v83_address0.read();
    } else {
        q_proj_re_address0 = "XXXXXXXXXXX";
    }
}

void attention::thread_q_proj_re_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        q_proj_re_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        q_proj_re_ce0 = grp_reshape_2D_to_3D_fu_2109_v147_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        q_proj_re_ce0 = grp_linear_forward_no_mu_fu_1372_v83_ce0.read();
    } else {
        q_proj_re_ce0 = ap_const_logic_0;
    }
}

void attention::thread_q_proj_re_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        q_proj_re_d0 = ap_const_lv32_0;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        q_proj_re_d0 = grp_linear_forward_no_mu_fu_1372_v83_d0.read();
    } else {
        q_proj_re_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void attention::thread_q_proj_re_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln502_fu_2169_p2.read()))) {
        q_proj_re_we0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        q_proj_re_we0 = grp_linear_forward_no_mu_fu_1372_v83_we0.read();
    } else {
        q_proj_re_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_final_outp_10_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state77.read())) {
        quantized_final_outp_10_ce0 = grp_linear_forward_no_mu_fu_1372_v79_7_0_1_ce0.read();
    } else {
        quantized_final_outp_10_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_final_outp_11_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state77.read())) {
        quantized_final_outp_11_ce0 = grp_linear_forward_no_mu_fu_1372_v79_7_0_0_ce0.read();
    } else {
        quantized_final_outp_11_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_final_outp_12_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state77.read())) {
        quantized_final_outp_12_ce0 = grp_linear_forward_no_mu_fu_1372_v79_6_0_3_ce0.read();
    } else {
        quantized_final_outp_12_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_final_outp_13_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state77.read())) {
        quantized_final_outp_13_ce0 = grp_linear_forward_no_mu_fu_1372_v79_6_0_2_ce0.read();
    } else {
        quantized_final_outp_13_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_final_outp_14_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state77.read())) {
        quantized_final_outp_14_ce0 = grp_linear_forward_no_mu_fu_1372_v79_6_0_1_ce0.read();
    } else {
        quantized_final_outp_14_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_final_outp_15_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state77.read())) {
        quantized_final_outp_15_ce0 = grp_linear_forward_no_mu_fu_1372_v79_6_0_0_ce0.read();
    } else {
        quantized_final_outp_15_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_final_outp_16_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state77.read())) {
        quantized_final_outp_16_ce0 = grp_linear_forward_no_mu_fu_1372_v79_5_0_3_ce0.read();
    } else {
        quantized_final_outp_16_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_final_outp_17_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state77.read())) {
        quantized_final_outp_17_ce0 = grp_linear_forward_no_mu_fu_1372_v79_5_0_2_ce0.read();
    } else {
        quantized_final_outp_17_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_final_outp_18_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state77.read())) {
        quantized_final_outp_18_ce0 = grp_linear_forward_no_mu_fu_1372_v79_5_0_1_ce0.read();
    } else {
        quantized_final_outp_18_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_final_outp_19_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state77.read())) {
        quantized_final_outp_19_ce0 = grp_linear_forward_no_mu_fu_1372_v79_5_0_0_ce0.read();
    } else {
        quantized_final_outp_19_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_final_outp_1_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state77.read())) {
        quantized_final_outp_1_ce0 = grp_linear_forward_no_mu_fu_1372_v79_9_0_2_ce0.read();
    } else {
        quantized_final_outp_1_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_final_outp_20_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state77.read())) {
        quantized_final_outp_20_ce0 = grp_linear_forward_no_mu_fu_1372_v79_4_0_3_ce0.read();
    } else {
        quantized_final_outp_20_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_final_outp_21_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state77.read())) {
        quantized_final_outp_21_ce0 = grp_linear_forward_no_mu_fu_1372_v79_4_0_2_ce0.read();
    } else {
        quantized_final_outp_21_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_final_outp_22_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state77.read())) {
        quantized_final_outp_22_ce0 = grp_linear_forward_no_mu_fu_1372_v79_4_0_1_ce0.read();
    } else {
        quantized_final_outp_22_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_final_outp_23_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state77.read())) {
        quantized_final_outp_23_ce0 = grp_linear_forward_no_mu_fu_1372_v79_4_0_0_ce0.read();
    } else {
        quantized_final_outp_23_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_final_outp_24_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state77.read())) {
        quantized_final_outp_24_ce0 = grp_linear_forward_no_mu_fu_1372_v79_3_0_3_ce0.read();
    } else {
        quantized_final_outp_24_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_final_outp_25_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state77.read())) {
        quantized_final_outp_25_ce0 = grp_linear_forward_no_mu_fu_1372_v79_3_0_2_ce0.read();
    } else {
        quantized_final_outp_25_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_final_outp_26_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state77.read())) {
        quantized_final_outp_26_ce0 = grp_linear_forward_no_mu_fu_1372_v79_3_0_1_ce0.read();
    } else {
        quantized_final_outp_26_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_final_outp_27_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state77.read())) {
        quantized_final_outp_27_ce0 = grp_linear_forward_no_mu_fu_1372_v79_3_0_0_ce0.read();
    } else {
        quantized_final_outp_27_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_final_outp_28_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state77.read())) {
        quantized_final_outp_28_ce0 = grp_linear_forward_no_mu_fu_1372_v79_23_0_3_ce0.read();
    } else {
        quantized_final_outp_28_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_final_outp_29_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state77.read())) {
        quantized_final_outp_29_ce0 = grp_linear_forward_no_mu_fu_1372_v79_23_0_2_ce0.read();
    } else {
        quantized_final_outp_29_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_final_outp_2_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state77.read())) {
        quantized_final_outp_2_ce0 = grp_linear_forward_no_mu_fu_1372_v79_9_0_1_ce0.read();
    } else {
        quantized_final_outp_2_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_final_outp_30_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state77.read())) {
        quantized_final_outp_30_ce0 = grp_linear_forward_no_mu_fu_1372_v79_23_0_1_ce0.read();
    } else {
        quantized_final_outp_30_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_final_outp_31_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state77.read())) {
        quantized_final_outp_31_ce0 = grp_linear_forward_no_mu_fu_1372_v79_23_0_0_ce0.read();
    } else {
        quantized_final_outp_31_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_final_outp_32_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state77.read())) {
        quantized_final_outp_32_ce0 = grp_linear_forward_no_mu_fu_1372_v79_22_0_3_ce0.read();
    } else {
        quantized_final_outp_32_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_final_outp_33_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state77.read())) {
        quantized_final_outp_33_ce0 = grp_linear_forward_no_mu_fu_1372_v79_22_0_2_ce0.read();
    } else {
        quantized_final_outp_33_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_final_outp_34_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state77.read())) {
        quantized_final_outp_34_ce0 = grp_linear_forward_no_mu_fu_1372_v79_22_0_1_ce0.read();
    } else {
        quantized_final_outp_34_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_final_outp_35_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state77.read())) {
        quantized_final_outp_35_ce0 = grp_linear_forward_no_mu_fu_1372_v79_22_0_0_ce0.read();
    } else {
        quantized_final_outp_35_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_final_outp_36_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state77.read())) {
        quantized_final_outp_36_ce0 = grp_linear_forward_no_mu_fu_1372_v79_21_0_3_ce0.read();
    } else {
        quantized_final_outp_36_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_final_outp_37_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state77.read())) {
        quantized_final_outp_37_ce0 = grp_linear_forward_no_mu_fu_1372_v79_21_0_2_ce0.read();
    } else {
        quantized_final_outp_37_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_final_outp_38_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state77.read())) {
        quantized_final_outp_38_ce0 = grp_linear_forward_no_mu_fu_1372_v79_21_0_1_ce0.read();
    } else {
        quantized_final_outp_38_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_final_outp_39_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state77.read())) {
        quantized_final_outp_39_ce0 = grp_linear_forward_no_mu_fu_1372_v79_21_0_0_ce0.read();
    } else {
        quantized_final_outp_39_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_final_outp_3_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state77.read())) {
        quantized_final_outp_3_ce0 = grp_linear_forward_no_mu_fu_1372_v79_9_0_0_ce0.read();
    } else {
        quantized_final_outp_3_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_final_outp_40_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state77.read())) {
        quantized_final_outp_40_ce0 = grp_linear_forward_no_mu_fu_1372_v79_20_0_3_ce0.read();
    } else {
        quantized_final_outp_40_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_final_outp_41_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state77.read())) {
        quantized_final_outp_41_ce0 = grp_linear_forward_no_mu_fu_1372_v79_20_0_2_ce0.read();
    } else {
        quantized_final_outp_41_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_final_outp_42_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state77.read())) {
        quantized_final_outp_42_ce0 = grp_linear_forward_no_mu_fu_1372_v79_20_0_1_ce0.read();
    } else {
        quantized_final_outp_42_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_final_outp_43_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state77.read())) {
        quantized_final_outp_43_ce0 = grp_linear_forward_no_mu_fu_1372_v79_20_0_0_ce0.read();
    } else {
        quantized_final_outp_43_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_final_outp_44_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state77.read())) {
        quantized_final_outp_44_ce0 = grp_linear_forward_no_mu_fu_1372_v79_2_0_3_ce0.read();
    } else {
        quantized_final_outp_44_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_final_outp_45_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state77.read())) {
        quantized_final_outp_45_ce0 = grp_linear_forward_no_mu_fu_1372_v79_2_0_2_ce0.read();
    } else {
        quantized_final_outp_45_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_final_outp_46_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state77.read())) {
        quantized_final_outp_46_ce0 = grp_linear_forward_no_mu_fu_1372_v79_2_0_1_ce0.read();
    } else {
        quantized_final_outp_46_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_final_outp_47_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state77.read())) {
        quantized_final_outp_47_ce0 = grp_linear_forward_no_mu_fu_1372_v79_2_0_0_ce0.read();
    } else {
        quantized_final_outp_47_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_final_outp_48_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state77.read())) {
        quantized_final_outp_48_ce0 = grp_linear_forward_no_mu_fu_1372_v79_19_0_3_ce0.read();
    } else {
        quantized_final_outp_48_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_final_outp_49_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state77.read())) {
        quantized_final_outp_49_ce0 = grp_linear_forward_no_mu_fu_1372_v79_19_0_2_ce0.read();
    } else {
        quantized_final_outp_49_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_final_outp_4_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state77.read())) {
        quantized_final_outp_4_ce0 = grp_linear_forward_no_mu_fu_1372_v79_8_0_3_ce0.read();
    } else {
        quantized_final_outp_4_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_final_outp_50_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state77.read())) {
        quantized_final_outp_50_ce0 = grp_linear_forward_no_mu_fu_1372_v79_19_0_1_ce0.read();
    } else {
        quantized_final_outp_50_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_final_outp_51_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state77.read())) {
        quantized_final_outp_51_ce0 = grp_linear_forward_no_mu_fu_1372_v79_19_0_0_ce0.read();
    } else {
        quantized_final_outp_51_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_final_outp_52_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state77.read())) {
        quantized_final_outp_52_ce0 = grp_linear_forward_no_mu_fu_1372_v79_18_0_3_ce0.read();
    } else {
        quantized_final_outp_52_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_final_outp_53_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state77.read())) {
        quantized_final_outp_53_ce0 = grp_linear_forward_no_mu_fu_1372_v79_18_0_2_ce0.read();
    } else {
        quantized_final_outp_53_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_final_outp_54_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state77.read())) {
        quantized_final_outp_54_ce0 = grp_linear_forward_no_mu_fu_1372_v79_18_0_1_ce0.read();
    } else {
        quantized_final_outp_54_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_final_outp_55_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state77.read())) {
        quantized_final_outp_55_ce0 = grp_linear_forward_no_mu_fu_1372_v79_18_0_0_ce0.read();
    } else {
        quantized_final_outp_55_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_final_outp_56_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state77.read())) {
        quantized_final_outp_56_ce0 = grp_linear_forward_no_mu_fu_1372_v79_17_0_3_ce0.read();
    } else {
        quantized_final_outp_56_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_final_outp_57_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state77.read())) {
        quantized_final_outp_57_ce0 = grp_linear_forward_no_mu_fu_1372_v79_17_0_2_ce0.read();
    } else {
        quantized_final_outp_57_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_final_outp_58_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state77.read())) {
        quantized_final_outp_58_ce0 = grp_linear_forward_no_mu_fu_1372_v79_17_0_1_ce0.read();
    } else {
        quantized_final_outp_58_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_final_outp_59_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state77.read())) {
        quantized_final_outp_59_ce0 = grp_linear_forward_no_mu_fu_1372_v79_17_0_0_ce0.read();
    } else {
        quantized_final_outp_59_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_final_outp_5_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state77.read())) {
        quantized_final_outp_5_ce0 = grp_linear_forward_no_mu_fu_1372_v79_8_0_2_ce0.read();
    } else {
        quantized_final_outp_5_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_final_outp_60_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state77.read())) {
        quantized_final_outp_60_ce0 = grp_linear_forward_no_mu_fu_1372_v79_16_0_3_ce0.read();
    } else {
        quantized_final_outp_60_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_final_outp_61_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state77.read())) {
        quantized_final_outp_61_ce0 = grp_linear_forward_no_mu_fu_1372_v79_16_0_2_ce0.read();
    } else {
        quantized_final_outp_61_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_final_outp_62_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state77.read())) {
        quantized_final_outp_62_ce0 = grp_linear_forward_no_mu_fu_1372_v79_16_0_1_ce0.read();
    } else {
        quantized_final_outp_62_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_final_outp_63_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state77.read())) {
        quantized_final_outp_63_ce0 = grp_linear_forward_no_mu_fu_1372_v79_16_0_0_ce0.read();
    } else {
        quantized_final_outp_63_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_final_outp_64_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state77.read())) {
        quantized_final_outp_64_ce0 = grp_linear_forward_no_mu_fu_1372_v79_15_0_3_ce0.read();
    } else {
        quantized_final_outp_64_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_final_outp_65_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state77.read())) {
        quantized_final_outp_65_ce0 = grp_linear_forward_no_mu_fu_1372_v79_15_0_2_ce0.read();
    } else {
        quantized_final_outp_65_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_final_outp_66_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state77.read())) {
        quantized_final_outp_66_ce0 = grp_linear_forward_no_mu_fu_1372_v79_15_0_1_ce0.read();
    } else {
        quantized_final_outp_66_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_final_outp_67_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state77.read())) {
        quantized_final_outp_67_ce0 = grp_linear_forward_no_mu_fu_1372_v79_15_0_0_ce0.read();
    } else {
        quantized_final_outp_67_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_final_outp_68_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state77.read())) {
        quantized_final_outp_68_ce0 = grp_linear_forward_no_mu_fu_1372_v79_14_0_3_ce0.read();
    } else {
        quantized_final_outp_68_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_final_outp_69_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state77.read())) {
        quantized_final_outp_69_ce0 = grp_linear_forward_no_mu_fu_1372_v79_14_0_2_ce0.read();
    } else {
        quantized_final_outp_69_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_final_outp_6_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state77.read())) {
        quantized_final_outp_6_ce0 = grp_linear_forward_no_mu_fu_1372_v79_8_0_1_ce0.read();
    } else {
        quantized_final_outp_6_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_final_outp_70_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state77.read())) {
        quantized_final_outp_70_ce0 = grp_linear_forward_no_mu_fu_1372_v79_14_0_1_ce0.read();
    } else {
        quantized_final_outp_70_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_final_outp_71_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state77.read())) {
        quantized_final_outp_71_ce0 = grp_linear_forward_no_mu_fu_1372_v79_14_0_0_ce0.read();
    } else {
        quantized_final_outp_71_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_final_outp_72_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state77.read())) {
        quantized_final_outp_72_ce0 = grp_linear_forward_no_mu_fu_1372_v79_13_0_3_ce0.read();
    } else {
        quantized_final_outp_72_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_final_outp_73_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state77.read())) {
        quantized_final_outp_73_ce0 = grp_linear_forward_no_mu_fu_1372_v79_13_0_2_ce0.read();
    } else {
        quantized_final_outp_73_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_final_outp_74_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state77.read())) {
        quantized_final_outp_74_ce0 = grp_linear_forward_no_mu_fu_1372_v79_13_0_1_ce0.read();
    } else {
        quantized_final_outp_74_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_final_outp_75_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state77.read())) {
        quantized_final_outp_75_ce0 = grp_linear_forward_no_mu_fu_1372_v79_13_0_0_ce0.read();
    } else {
        quantized_final_outp_75_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_final_outp_76_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state77.read())) {
        quantized_final_outp_76_ce0 = grp_linear_forward_no_mu_fu_1372_v79_12_0_3_ce0.read();
    } else {
        quantized_final_outp_76_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_final_outp_77_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state77.read())) {
        quantized_final_outp_77_ce0 = grp_linear_forward_no_mu_fu_1372_v79_12_0_2_ce0.read();
    } else {
        quantized_final_outp_77_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_final_outp_78_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state77.read())) {
        quantized_final_outp_78_ce0 = grp_linear_forward_no_mu_fu_1372_v79_12_0_1_ce0.read();
    } else {
        quantized_final_outp_78_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_final_outp_79_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state77.read())) {
        quantized_final_outp_79_ce0 = grp_linear_forward_no_mu_fu_1372_v79_12_0_0_ce0.read();
    } else {
        quantized_final_outp_79_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_final_outp_7_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state77.read())) {
        quantized_final_outp_7_ce0 = grp_linear_forward_no_mu_fu_1372_v79_8_0_0_ce0.read();
    } else {
        quantized_final_outp_7_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_final_outp_80_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state77.read())) {
        quantized_final_outp_80_ce0 = grp_linear_forward_no_mu_fu_1372_v79_11_0_3_ce0.read();
    } else {
        quantized_final_outp_80_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_final_outp_81_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state77.read())) {
        quantized_final_outp_81_ce0 = grp_linear_forward_no_mu_fu_1372_v79_11_0_2_ce0.read();
    } else {
        quantized_final_outp_81_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_final_outp_82_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state77.read())) {
        quantized_final_outp_82_ce0 = grp_linear_forward_no_mu_fu_1372_v79_11_0_1_ce0.read();
    } else {
        quantized_final_outp_82_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_final_outp_83_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state77.read())) {
        quantized_final_outp_83_ce0 = grp_linear_forward_no_mu_fu_1372_v79_11_0_0_ce0.read();
    } else {
        quantized_final_outp_83_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_final_outp_84_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state77.read())) {
        quantized_final_outp_84_ce0 = grp_linear_forward_no_mu_fu_1372_v79_10_0_3_ce0.read();
    } else {
        quantized_final_outp_84_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_final_outp_85_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state77.read())) {
        quantized_final_outp_85_ce0 = grp_linear_forward_no_mu_fu_1372_v79_10_0_2_ce0.read();
    } else {
        quantized_final_outp_85_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_final_outp_86_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state77.read())) {
        quantized_final_outp_86_ce0 = grp_linear_forward_no_mu_fu_1372_v79_10_0_1_ce0.read();
    } else {
        quantized_final_outp_86_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_final_outp_87_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state77.read())) {
        quantized_final_outp_87_ce0 = grp_linear_forward_no_mu_fu_1372_v79_10_0_0_ce0.read();
    } else {
        quantized_final_outp_87_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_final_outp_88_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state77.read())) {
        quantized_final_outp_88_ce0 = grp_linear_forward_no_mu_fu_1372_v79_1_0_3_ce0.read();
    } else {
        quantized_final_outp_88_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_final_outp_89_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state77.read())) {
        quantized_final_outp_89_ce0 = grp_linear_forward_no_mu_fu_1372_v79_1_0_2_ce0.read();
    } else {
        quantized_final_outp_89_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_final_outp_8_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state77.read())) {
        quantized_final_outp_8_ce0 = grp_linear_forward_no_mu_fu_1372_v79_7_0_3_ce0.read();
    } else {
        quantized_final_outp_8_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_final_outp_90_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state77.read())) {
        quantized_final_outp_90_ce0 = grp_linear_forward_no_mu_fu_1372_v79_1_0_1_ce0.read();
    } else {
        quantized_final_outp_90_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_final_outp_91_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state77.read())) {
        quantized_final_outp_91_ce0 = grp_linear_forward_no_mu_fu_1372_v79_1_0_0_ce0.read();
    } else {
        quantized_final_outp_91_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_final_outp_92_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state77.read())) {
        quantized_final_outp_92_ce0 = grp_linear_forward_no_mu_fu_1372_v79_0_0_3_ce0.read();
    } else {
        quantized_final_outp_92_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_final_outp_93_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state77.read())) {
        quantized_final_outp_93_ce0 = grp_linear_forward_no_mu_fu_1372_v79_0_0_2_ce0.read();
    } else {
        quantized_final_outp_93_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_final_outp_94_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state77.read())) {
        quantized_final_outp_94_ce0 = grp_linear_forward_no_mu_fu_1372_v79_0_0_1_ce0.read();
    } else {
        quantized_final_outp_94_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_final_outp_95_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state77.read())) {
        quantized_final_outp_95_ce0 = grp_linear_forward_no_mu_fu_1372_v79_0_0_0_ce0.read();
    } else {
        quantized_final_outp_95_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_final_outp_96_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read())) {
        quantized_final_outp_96_ce0 = grp_quantize_activation_fu_2055_v24_0_ce0.read();
    } else {
        quantized_final_outp_96_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_final_outp_96_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read())) {
        quantized_final_outp_96_we0 = grp_quantize_activation_fu_2055_v24_0_we0.read();
    } else {
        quantized_final_outp_96_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_final_outp_9_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state77.read())) {
        quantized_final_outp_9_ce0 = grp_linear_forward_no_mu_fu_1372_v79_7_0_2_ce0.read();
    } else {
        quantized_final_outp_9_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_final_outp_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state77.read())) {
        quantized_final_outp_ce0 = grp_linear_forward_no_mu_fu_1372_v79_9_0_3_ce0.read();
    } else {
        quantized_final_outp_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_10_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        quantized_hidden_sta_10_address0 = grp_linear_forward_no_mu_fu_1643_v79_7_0_1_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        quantized_hidden_sta_10_address0 = grp_linear_forward_no_mu_fu_1372_v79_7_0_1_address0.read();
    } else {
        quantized_hidden_sta_10_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void attention::thread_quantized_hidden_sta_10_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        quantized_hidden_sta_10_ce0 = grp_linear_forward_no_mu_fu_1643_v79_7_0_1_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        quantized_hidden_sta_10_ce0 = grp_linear_forward_no_mu_fu_1372_v79_7_0_1_ce0.read();
    } else {
        quantized_hidden_sta_10_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_11_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        quantized_hidden_sta_11_address0 = grp_linear_forward_no_mu_fu_1643_v79_7_0_0_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        quantized_hidden_sta_11_address0 = grp_linear_forward_no_mu_fu_1372_v79_7_0_0_address0.read();
    } else {
        quantized_hidden_sta_11_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void attention::thread_quantized_hidden_sta_11_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        quantized_hidden_sta_11_ce0 = grp_linear_forward_no_mu_fu_1643_v79_7_0_0_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        quantized_hidden_sta_11_ce0 = grp_linear_forward_no_mu_fu_1372_v79_7_0_0_ce0.read();
    } else {
        quantized_hidden_sta_11_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_12_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        quantized_hidden_sta_12_address0 = grp_linear_forward_no_mu_fu_1643_v79_6_0_3_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        quantized_hidden_sta_12_address0 = grp_linear_forward_no_mu_fu_1372_v79_6_0_3_address0.read();
    } else {
        quantized_hidden_sta_12_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void attention::thread_quantized_hidden_sta_12_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        quantized_hidden_sta_12_ce0 = grp_linear_forward_no_mu_fu_1643_v79_6_0_3_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        quantized_hidden_sta_12_ce0 = grp_linear_forward_no_mu_fu_1372_v79_6_0_3_ce0.read();
    } else {
        quantized_hidden_sta_12_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_13_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        quantized_hidden_sta_13_address0 = grp_linear_forward_no_mu_fu_1643_v79_6_0_2_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        quantized_hidden_sta_13_address0 = grp_linear_forward_no_mu_fu_1372_v79_6_0_2_address0.read();
    } else {
        quantized_hidden_sta_13_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void attention::thread_quantized_hidden_sta_13_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        quantized_hidden_sta_13_ce0 = grp_linear_forward_no_mu_fu_1643_v79_6_0_2_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        quantized_hidden_sta_13_ce0 = grp_linear_forward_no_mu_fu_1372_v79_6_0_2_ce0.read();
    } else {
        quantized_hidden_sta_13_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_14_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        quantized_hidden_sta_14_address0 = grp_linear_forward_no_mu_fu_1643_v79_6_0_1_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        quantized_hidden_sta_14_address0 = grp_linear_forward_no_mu_fu_1372_v79_6_0_1_address0.read();
    } else {
        quantized_hidden_sta_14_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void attention::thread_quantized_hidden_sta_14_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        quantized_hidden_sta_14_ce0 = grp_linear_forward_no_mu_fu_1643_v79_6_0_1_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        quantized_hidden_sta_14_ce0 = grp_linear_forward_no_mu_fu_1372_v79_6_0_1_ce0.read();
    } else {
        quantized_hidden_sta_14_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_15_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        quantized_hidden_sta_15_address0 = grp_linear_forward_no_mu_fu_1643_v79_6_0_0_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        quantized_hidden_sta_15_address0 = grp_linear_forward_no_mu_fu_1372_v79_6_0_0_address0.read();
    } else {
        quantized_hidden_sta_15_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void attention::thread_quantized_hidden_sta_15_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        quantized_hidden_sta_15_ce0 = grp_linear_forward_no_mu_fu_1643_v79_6_0_0_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        quantized_hidden_sta_15_ce0 = grp_linear_forward_no_mu_fu_1372_v79_6_0_0_ce0.read();
    } else {
        quantized_hidden_sta_15_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_16_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        quantized_hidden_sta_16_address0 = grp_linear_forward_no_mu_fu_1643_v79_5_0_3_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        quantized_hidden_sta_16_address0 = grp_linear_forward_no_mu_fu_1372_v79_5_0_3_address0.read();
    } else {
        quantized_hidden_sta_16_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void attention::thread_quantized_hidden_sta_16_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        quantized_hidden_sta_16_ce0 = grp_linear_forward_no_mu_fu_1643_v79_5_0_3_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        quantized_hidden_sta_16_ce0 = grp_linear_forward_no_mu_fu_1372_v79_5_0_3_ce0.read();
    } else {
        quantized_hidden_sta_16_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_17_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        quantized_hidden_sta_17_address0 = grp_linear_forward_no_mu_fu_1643_v79_5_0_2_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        quantized_hidden_sta_17_address0 = grp_linear_forward_no_mu_fu_1372_v79_5_0_2_address0.read();
    } else {
        quantized_hidden_sta_17_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void attention::thread_quantized_hidden_sta_17_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        quantized_hidden_sta_17_ce0 = grp_linear_forward_no_mu_fu_1643_v79_5_0_2_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        quantized_hidden_sta_17_ce0 = grp_linear_forward_no_mu_fu_1372_v79_5_0_2_ce0.read();
    } else {
        quantized_hidden_sta_17_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_18_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        quantized_hidden_sta_18_address0 = grp_linear_forward_no_mu_fu_1643_v79_5_0_1_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        quantized_hidden_sta_18_address0 = grp_linear_forward_no_mu_fu_1372_v79_5_0_1_address0.read();
    } else {
        quantized_hidden_sta_18_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void attention::thread_quantized_hidden_sta_18_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        quantized_hidden_sta_18_ce0 = grp_linear_forward_no_mu_fu_1643_v79_5_0_1_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        quantized_hidden_sta_18_ce0 = grp_linear_forward_no_mu_fu_1372_v79_5_0_1_ce0.read();
    } else {
        quantized_hidden_sta_18_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_19_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        quantized_hidden_sta_19_address0 = grp_linear_forward_no_mu_fu_1643_v79_5_0_0_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        quantized_hidden_sta_19_address0 = grp_linear_forward_no_mu_fu_1372_v79_5_0_0_address0.read();
    } else {
        quantized_hidden_sta_19_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void attention::thread_quantized_hidden_sta_19_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        quantized_hidden_sta_19_ce0 = grp_linear_forward_no_mu_fu_1643_v79_5_0_0_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        quantized_hidden_sta_19_ce0 = grp_linear_forward_no_mu_fu_1372_v79_5_0_0_ce0.read();
    } else {
        quantized_hidden_sta_19_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_1_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        quantized_hidden_sta_1_address0 = grp_linear_forward_no_mu_fu_1643_v79_9_0_2_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        quantized_hidden_sta_1_address0 = grp_linear_forward_no_mu_fu_1372_v79_9_0_2_address0.read();
    } else {
        quantized_hidden_sta_1_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void attention::thread_quantized_hidden_sta_1_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        quantized_hidden_sta_1_ce0 = grp_linear_forward_no_mu_fu_1643_v79_9_0_2_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        quantized_hidden_sta_1_ce0 = grp_linear_forward_no_mu_fu_1372_v79_9_0_2_ce0.read();
    } else {
        quantized_hidden_sta_1_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_20_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        quantized_hidden_sta_20_address0 = grp_linear_forward_no_mu_fu_1643_v79_4_0_3_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        quantized_hidden_sta_20_address0 = grp_linear_forward_no_mu_fu_1372_v79_4_0_3_address0.read();
    } else {
        quantized_hidden_sta_20_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void attention::thread_quantized_hidden_sta_20_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        quantized_hidden_sta_20_ce0 = grp_linear_forward_no_mu_fu_1643_v79_4_0_3_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        quantized_hidden_sta_20_ce0 = grp_linear_forward_no_mu_fu_1372_v79_4_0_3_ce0.read();
    } else {
        quantized_hidden_sta_20_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_21_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        quantized_hidden_sta_21_address0 = grp_linear_forward_no_mu_fu_1643_v79_4_0_2_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        quantized_hidden_sta_21_address0 = grp_linear_forward_no_mu_fu_1372_v79_4_0_2_address0.read();
    } else {
        quantized_hidden_sta_21_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void attention::thread_quantized_hidden_sta_21_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        quantized_hidden_sta_21_ce0 = grp_linear_forward_no_mu_fu_1643_v79_4_0_2_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        quantized_hidden_sta_21_ce0 = grp_linear_forward_no_mu_fu_1372_v79_4_0_2_ce0.read();
    } else {
        quantized_hidden_sta_21_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_22_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        quantized_hidden_sta_22_address0 = grp_linear_forward_no_mu_fu_1643_v79_4_0_1_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        quantized_hidden_sta_22_address0 = grp_linear_forward_no_mu_fu_1372_v79_4_0_1_address0.read();
    } else {
        quantized_hidden_sta_22_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void attention::thread_quantized_hidden_sta_22_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        quantized_hidden_sta_22_ce0 = grp_linear_forward_no_mu_fu_1643_v79_4_0_1_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        quantized_hidden_sta_22_ce0 = grp_linear_forward_no_mu_fu_1372_v79_4_0_1_ce0.read();
    } else {
        quantized_hidden_sta_22_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_23_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        quantized_hidden_sta_23_address0 = grp_linear_forward_no_mu_fu_1643_v79_4_0_0_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        quantized_hidden_sta_23_address0 = grp_linear_forward_no_mu_fu_1372_v79_4_0_0_address0.read();
    } else {
        quantized_hidden_sta_23_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void attention::thread_quantized_hidden_sta_23_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        quantized_hidden_sta_23_ce0 = grp_linear_forward_no_mu_fu_1643_v79_4_0_0_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        quantized_hidden_sta_23_ce0 = grp_linear_forward_no_mu_fu_1372_v79_4_0_0_ce0.read();
    } else {
        quantized_hidden_sta_23_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_24_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        quantized_hidden_sta_24_address0 = grp_linear_forward_no_mu_fu_1643_v79_3_0_3_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        quantized_hidden_sta_24_address0 = grp_linear_forward_no_mu_fu_1372_v79_3_0_3_address0.read();
    } else {
        quantized_hidden_sta_24_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void attention::thread_quantized_hidden_sta_24_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        quantized_hidden_sta_24_ce0 = grp_linear_forward_no_mu_fu_1643_v79_3_0_3_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        quantized_hidden_sta_24_ce0 = grp_linear_forward_no_mu_fu_1372_v79_3_0_3_ce0.read();
    } else {
        quantized_hidden_sta_24_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_25_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        quantized_hidden_sta_25_address0 = grp_linear_forward_no_mu_fu_1643_v79_3_0_2_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        quantized_hidden_sta_25_address0 = grp_linear_forward_no_mu_fu_1372_v79_3_0_2_address0.read();
    } else {
        quantized_hidden_sta_25_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void attention::thread_quantized_hidden_sta_25_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        quantized_hidden_sta_25_ce0 = grp_linear_forward_no_mu_fu_1643_v79_3_0_2_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        quantized_hidden_sta_25_ce0 = grp_linear_forward_no_mu_fu_1372_v79_3_0_2_ce0.read();
    } else {
        quantized_hidden_sta_25_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_26_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        quantized_hidden_sta_26_address0 = grp_linear_forward_no_mu_fu_1643_v79_3_0_1_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        quantized_hidden_sta_26_address0 = grp_linear_forward_no_mu_fu_1372_v79_3_0_1_address0.read();
    } else {
        quantized_hidden_sta_26_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void attention::thread_quantized_hidden_sta_26_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        quantized_hidden_sta_26_ce0 = grp_linear_forward_no_mu_fu_1643_v79_3_0_1_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        quantized_hidden_sta_26_ce0 = grp_linear_forward_no_mu_fu_1372_v79_3_0_1_ce0.read();
    } else {
        quantized_hidden_sta_26_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_27_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        quantized_hidden_sta_27_address0 = grp_linear_forward_no_mu_fu_1643_v79_3_0_0_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        quantized_hidden_sta_27_address0 = grp_linear_forward_no_mu_fu_1372_v79_3_0_0_address0.read();
    } else {
        quantized_hidden_sta_27_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void attention::thread_quantized_hidden_sta_27_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        quantized_hidden_sta_27_ce0 = grp_linear_forward_no_mu_fu_1643_v79_3_0_0_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        quantized_hidden_sta_27_ce0 = grp_linear_forward_no_mu_fu_1372_v79_3_0_0_ce0.read();
    } else {
        quantized_hidden_sta_27_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_28_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        quantized_hidden_sta_28_address0 = grp_linear_forward_no_mu_fu_1643_v79_23_0_3_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        quantized_hidden_sta_28_address0 = grp_linear_forward_no_mu_fu_1372_v79_23_0_3_address0.read();
    } else {
        quantized_hidden_sta_28_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void attention::thread_quantized_hidden_sta_28_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        quantized_hidden_sta_28_ce0 = grp_linear_forward_no_mu_fu_1643_v79_23_0_3_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        quantized_hidden_sta_28_ce0 = grp_linear_forward_no_mu_fu_1372_v79_23_0_3_ce0.read();
    } else {
        quantized_hidden_sta_28_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_29_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        quantized_hidden_sta_29_address0 = grp_linear_forward_no_mu_fu_1643_v79_23_0_2_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        quantized_hidden_sta_29_address0 = grp_linear_forward_no_mu_fu_1372_v79_23_0_2_address0.read();
    } else {
        quantized_hidden_sta_29_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void attention::thread_quantized_hidden_sta_29_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        quantized_hidden_sta_29_ce0 = grp_linear_forward_no_mu_fu_1643_v79_23_0_2_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        quantized_hidden_sta_29_ce0 = grp_linear_forward_no_mu_fu_1372_v79_23_0_2_ce0.read();
    } else {
        quantized_hidden_sta_29_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_2_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        quantized_hidden_sta_2_address0 = grp_linear_forward_no_mu_fu_1643_v79_9_0_1_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        quantized_hidden_sta_2_address0 = grp_linear_forward_no_mu_fu_1372_v79_9_0_1_address0.read();
    } else {
        quantized_hidden_sta_2_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void attention::thread_quantized_hidden_sta_2_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        quantized_hidden_sta_2_ce0 = grp_linear_forward_no_mu_fu_1643_v79_9_0_1_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        quantized_hidden_sta_2_ce0 = grp_linear_forward_no_mu_fu_1372_v79_9_0_1_ce0.read();
    } else {
        quantized_hidden_sta_2_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_30_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        quantized_hidden_sta_30_address0 = grp_linear_forward_no_mu_fu_1643_v79_23_0_1_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        quantized_hidden_sta_30_address0 = grp_linear_forward_no_mu_fu_1372_v79_23_0_1_address0.read();
    } else {
        quantized_hidden_sta_30_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void attention::thread_quantized_hidden_sta_30_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        quantized_hidden_sta_30_ce0 = grp_linear_forward_no_mu_fu_1643_v79_23_0_1_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        quantized_hidden_sta_30_ce0 = grp_linear_forward_no_mu_fu_1372_v79_23_0_1_ce0.read();
    } else {
        quantized_hidden_sta_30_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_31_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        quantized_hidden_sta_31_address0 = grp_linear_forward_no_mu_fu_1643_v79_23_0_0_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        quantized_hidden_sta_31_address0 = grp_linear_forward_no_mu_fu_1372_v79_23_0_0_address0.read();
    } else {
        quantized_hidden_sta_31_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void attention::thread_quantized_hidden_sta_31_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        quantized_hidden_sta_31_ce0 = grp_linear_forward_no_mu_fu_1643_v79_23_0_0_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        quantized_hidden_sta_31_ce0 = grp_linear_forward_no_mu_fu_1372_v79_23_0_0_ce0.read();
    } else {
        quantized_hidden_sta_31_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_32_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        quantized_hidden_sta_32_address0 = grp_linear_forward_no_mu_fu_1643_v79_22_0_3_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        quantized_hidden_sta_32_address0 = grp_linear_forward_no_mu_fu_1372_v79_22_0_3_address0.read();
    } else {
        quantized_hidden_sta_32_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void attention::thread_quantized_hidden_sta_32_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        quantized_hidden_sta_32_ce0 = grp_linear_forward_no_mu_fu_1643_v79_22_0_3_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        quantized_hidden_sta_32_ce0 = grp_linear_forward_no_mu_fu_1372_v79_22_0_3_ce0.read();
    } else {
        quantized_hidden_sta_32_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_33_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        quantized_hidden_sta_33_address0 = grp_linear_forward_no_mu_fu_1643_v79_22_0_2_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        quantized_hidden_sta_33_address0 = grp_linear_forward_no_mu_fu_1372_v79_22_0_2_address0.read();
    } else {
        quantized_hidden_sta_33_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void attention::thread_quantized_hidden_sta_33_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        quantized_hidden_sta_33_ce0 = grp_linear_forward_no_mu_fu_1643_v79_22_0_2_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        quantized_hidden_sta_33_ce0 = grp_linear_forward_no_mu_fu_1372_v79_22_0_2_ce0.read();
    } else {
        quantized_hidden_sta_33_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_34_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        quantized_hidden_sta_34_address0 = grp_linear_forward_no_mu_fu_1643_v79_22_0_1_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        quantized_hidden_sta_34_address0 = grp_linear_forward_no_mu_fu_1372_v79_22_0_1_address0.read();
    } else {
        quantized_hidden_sta_34_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void attention::thread_quantized_hidden_sta_34_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        quantized_hidden_sta_34_ce0 = grp_linear_forward_no_mu_fu_1643_v79_22_0_1_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        quantized_hidden_sta_34_ce0 = grp_linear_forward_no_mu_fu_1372_v79_22_0_1_ce0.read();
    } else {
        quantized_hidden_sta_34_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_35_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        quantized_hidden_sta_35_address0 = grp_linear_forward_no_mu_fu_1643_v79_22_0_0_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        quantized_hidden_sta_35_address0 = grp_linear_forward_no_mu_fu_1372_v79_22_0_0_address0.read();
    } else {
        quantized_hidden_sta_35_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void attention::thread_quantized_hidden_sta_35_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        quantized_hidden_sta_35_ce0 = grp_linear_forward_no_mu_fu_1643_v79_22_0_0_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        quantized_hidden_sta_35_ce0 = grp_linear_forward_no_mu_fu_1372_v79_22_0_0_ce0.read();
    } else {
        quantized_hidden_sta_35_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_36_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        quantized_hidden_sta_36_address0 = grp_linear_forward_no_mu_fu_1643_v79_21_0_3_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        quantized_hidden_sta_36_address0 = grp_linear_forward_no_mu_fu_1372_v79_21_0_3_address0.read();
    } else {
        quantized_hidden_sta_36_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void attention::thread_quantized_hidden_sta_36_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        quantized_hidden_sta_36_ce0 = grp_linear_forward_no_mu_fu_1643_v79_21_0_3_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        quantized_hidden_sta_36_ce0 = grp_linear_forward_no_mu_fu_1372_v79_21_0_3_ce0.read();
    } else {
        quantized_hidden_sta_36_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_37_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        quantized_hidden_sta_37_address0 = grp_linear_forward_no_mu_fu_1643_v79_21_0_2_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        quantized_hidden_sta_37_address0 = grp_linear_forward_no_mu_fu_1372_v79_21_0_2_address0.read();
    } else {
        quantized_hidden_sta_37_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void attention::thread_quantized_hidden_sta_37_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        quantized_hidden_sta_37_ce0 = grp_linear_forward_no_mu_fu_1643_v79_21_0_2_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        quantized_hidden_sta_37_ce0 = grp_linear_forward_no_mu_fu_1372_v79_21_0_2_ce0.read();
    } else {
        quantized_hidden_sta_37_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_38_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        quantized_hidden_sta_38_address0 = grp_linear_forward_no_mu_fu_1643_v79_21_0_1_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        quantized_hidden_sta_38_address0 = grp_linear_forward_no_mu_fu_1372_v79_21_0_1_address0.read();
    } else {
        quantized_hidden_sta_38_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void attention::thread_quantized_hidden_sta_38_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        quantized_hidden_sta_38_ce0 = grp_linear_forward_no_mu_fu_1643_v79_21_0_1_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        quantized_hidden_sta_38_ce0 = grp_linear_forward_no_mu_fu_1372_v79_21_0_1_ce0.read();
    } else {
        quantized_hidden_sta_38_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_39_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        quantized_hidden_sta_39_address0 = grp_linear_forward_no_mu_fu_1643_v79_21_0_0_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        quantized_hidden_sta_39_address0 = grp_linear_forward_no_mu_fu_1372_v79_21_0_0_address0.read();
    } else {
        quantized_hidden_sta_39_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void attention::thread_quantized_hidden_sta_39_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        quantized_hidden_sta_39_ce0 = grp_linear_forward_no_mu_fu_1643_v79_21_0_0_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        quantized_hidden_sta_39_ce0 = grp_linear_forward_no_mu_fu_1372_v79_21_0_0_ce0.read();
    } else {
        quantized_hidden_sta_39_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_3_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        quantized_hidden_sta_3_address0 = grp_linear_forward_no_mu_fu_1643_v79_9_0_0_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        quantized_hidden_sta_3_address0 = grp_linear_forward_no_mu_fu_1372_v79_9_0_0_address0.read();
    } else {
        quantized_hidden_sta_3_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void attention::thread_quantized_hidden_sta_3_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        quantized_hidden_sta_3_ce0 = grp_linear_forward_no_mu_fu_1643_v79_9_0_0_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        quantized_hidden_sta_3_ce0 = grp_linear_forward_no_mu_fu_1372_v79_9_0_0_ce0.read();
    } else {
        quantized_hidden_sta_3_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_40_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        quantized_hidden_sta_40_address0 = grp_linear_forward_no_mu_fu_1643_v79_20_0_3_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        quantized_hidden_sta_40_address0 = grp_linear_forward_no_mu_fu_1372_v79_20_0_3_address0.read();
    } else {
        quantized_hidden_sta_40_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void attention::thread_quantized_hidden_sta_40_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        quantized_hidden_sta_40_ce0 = grp_linear_forward_no_mu_fu_1643_v79_20_0_3_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        quantized_hidden_sta_40_ce0 = grp_linear_forward_no_mu_fu_1372_v79_20_0_3_ce0.read();
    } else {
        quantized_hidden_sta_40_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_41_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        quantized_hidden_sta_41_address0 = grp_linear_forward_no_mu_fu_1643_v79_20_0_2_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        quantized_hidden_sta_41_address0 = grp_linear_forward_no_mu_fu_1372_v79_20_0_2_address0.read();
    } else {
        quantized_hidden_sta_41_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void attention::thread_quantized_hidden_sta_41_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        quantized_hidden_sta_41_ce0 = grp_linear_forward_no_mu_fu_1643_v79_20_0_2_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        quantized_hidden_sta_41_ce0 = grp_linear_forward_no_mu_fu_1372_v79_20_0_2_ce0.read();
    } else {
        quantized_hidden_sta_41_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_42_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        quantized_hidden_sta_42_address0 = grp_linear_forward_no_mu_fu_1643_v79_20_0_1_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        quantized_hidden_sta_42_address0 = grp_linear_forward_no_mu_fu_1372_v79_20_0_1_address0.read();
    } else {
        quantized_hidden_sta_42_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void attention::thread_quantized_hidden_sta_42_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        quantized_hidden_sta_42_ce0 = grp_linear_forward_no_mu_fu_1643_v79_20_0_1_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        quantized_hidden_sta_42_ce0 = grp_linear_forward_no_mu_fu_1372_v79_20_0_1_ce0.read();
    } else {
        quantized_hidden_sta_42_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_43_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        quantized_hidden_sta_43_address0 = grp_linear_forward_no_mu_fu_1643_v79_20_0_0_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        quantized_hidden_sta_43_address0 = grp_linear_forward_no_mu_fu_1372_v79_20_0_0_address0.read();
    } else {
        quantized_hidden_sta_43_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void attention::thread_quantized_hidden_sta_43_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        quantized_hidden_sta_43_ce0 = grp_linear_forward_no_mu_fu_1643_v79_20_0_0_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        quantized_hidden_sta_43_ce0 = grp_linear_forward_no_mu_fu_1372_v79_20_0_0_ce0.read();
    } else {
        quantized_hidden_sta_43_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_44_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        quantized_hidden_sta_44_address0 = grp_linear_forward_no_mu_fu_1643_v79_2_0_3_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        quantized_hidden_sta_44_address0 = grp_linear_forward_no_mu_fu_1372_v79_2_0_3_address0.read();
    } else {
        quantized_hidden_sta_44_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void attention::thread_quantized_hidden_sta_44_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        quantized_hidden_sta_44_ce0 = grp_linear_forward_no_mu_fu_1643_v79_2_0_3_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        quantized_hidden_sta_44_ce0 = grp_linear_forward_no_mu_fu_1372_v79_2_0_3_ce0.read();
    } else {
        quantized_hidden_sta_44_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_45_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        quantized_hidden_sta_45_address0 = grp_linear_forward_no_mu_fu_1643_v79_2_0_2_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        quantized_hidden_sta_45_address0 = grp_linear_forward_no_mu_fu_1372_v79_2_0_2_address0.read();
    } else {
        quantized_hidden_sta_45_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void attention::thread_quantized_hidden_sta_45_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        quantized_hidden_sta_45_ce0 = grp_linear_forward_no_mu_fu_1643_v79_2_0_2_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        quantized_hidden_sta_45_ce0 = grp_linear_forward_no_mu_fu_1372_v79_2_0_2_ce0.read();
    } else {
        quantized_hidden_sta_45_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_46_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        quantized_hidden_sta_46_address0 = grp_linear_forward_no_mu_fu_1643_v79_2_0_1_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        quantized_hidden_sta_46_address0 = grp_linear_forward_no_mu_fu_1372_v79_2_0_1_address0.read();
    } else {
        quantized_hidden_sta_46_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void attention::thread_quantized_hidden_sta_46_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        quantized_hidden_sta_46_ce0 = grp_linear_forward_no_mu_fu_1643_v79_2_0_1_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        quantized_hidden_sta_46_ce0 = grp_linear_forward_no_mu_fu_1372_v79_2_0_1_ce0.read();
    } else {
        quantized_hidden_sta_46_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_47_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        quantized_hidden_sta_47_address0 = grp_linear_forward_no_mu_fu_1643_v79_2_0_0_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        quantized_hidden_sta_47_address0 = grp_linear_forward_no_mu_fu_1372_v79_2_0_0_address0.read();
    } else {
        quantized_hidden_sta_47_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void attention::thread_quantized_hidden_sta_47_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        quantized_hidden_sta_47_ce0 = grp_linear_forward_no_mu_fu_1643_v79_2_0_0_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        quantized_hidden_sta_47_ce0 = grp_linear_forward_no_mu_fu_1372_v79_2_0_0_ce0.read();
    } else {
        quantized_hidden_sta_47_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_48_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        quantized_hidden_sta_48_address0 = grp_linear_forward_no_mu_fu_1643_v79_19_0_3_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        quantized_hidden_sta_48_address0 = grp_linear_forward_no_mu_fu_1372_v79_19_0_3_address0.read();
    } else {
        quantized_hidden_sta_48_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void attention::thread_quantized_hidden_sta_48_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        quantized_hidden_sta_48_ce0 = grp_linear_forward_no_mu_fu_1643_v79_19_0_3_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        quantized_hidden_sta_48_ce0 = grp_linear_forward_no_mu_fu_1372_v79_19_0_3_ce0.read();
    } else {
        quantized_hidden_sta_48_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_49_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        quantized_hidden_sta_49_address0 = grp_linear_forward_no_mu_fu_1643_v79_19_0_2_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        quantized_hidden_sta_49_address0 = grp_linear_forward_no_mu_fu_1372_v79_19_0_2_address0.read();
    } else {
        quantized_hidden_sta_49_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void attention::thread_quantized_hidden_sta_49_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        quantized_hidden_sta_49_ce0 = grp_linear_forward_no_mu_fu_1643_v79_19_0_2_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        quantized_hidden_sta_49_ce0 = grp_linear_forward_no_mu_fu_1372_v79_19_0_2_ce0.read();
    } else {
        quantized_hidden_sta_49_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_4_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        quantized_hidden_sta_4_address0 = grp_linear_forward_no_mu_fu_1643_v79_8_0_3_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        quantized_hidden_sta_4_address0 = grp_linear_forward_no_mu_fu_1372_v79_8_0_3_address0.read();
    } else {
        quantized_hidden_sta_4_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void attention::thread_quantized_hidden_sta_4_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        quantized_hidden_sta_4_ce0 = grp_linear_forward_no_mu_fu_1643_v79_8_0_3_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        quantized_hidden_sta_4_ce0 = grp_linear_forward_no_mu_fu_1372_v79_8_0_3_ce0.read();
    } else {
        quantized_hidden_sta_4_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_50_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        quantized_hidden_sta_50_address0 = grp_linear_forward_no_mu_fu_1643_v79_19_0_1_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        quantized_hidden_sta_50_address0 = grp_linear_forward_no_mu_fu_1372_v79_19_0_1_address0.read();
    } else {
        quantized_hidden_sta_50_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void attention::thread_quantized_hidden_sta_50_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        quantized_hidden_sta_50_ce0 = grp_linear_forward_no_mu_fu_1643_v79_19_0_1_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        quantized_hidden_sta_50_ce0 = grp_linear_forward_no_mu_fu_1372_v79_19_0_1_ce0.read();
    } else {
        quantized_hidden_sta_50_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_51_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        quantized_hidden_sta_51_address0 = grp_linear_forward_no_mu_fu_1643_v79_19_0_0_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        quantized_hidden_sta_51_address0 = grp_linear_forward_no_mu_fu_1372_v79_19_0_0_address0.read();
    } else {
        quantized_hidden_sta_51_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void attention::thread_quantized_hidden_sta_51_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        quantized_hidden_sta_51_ce0 = grp_linear_forward_no_mu_fu_1643_v79_19_0_0_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        quantized_hidden_sta_51_ce0 = grp_linear_forward_no_mu_fu_1372_v79_19_0_0_ce0.read();
    } else {
        quantized_hidden_sta_51_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_52_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        quantized_hidden_sta_52_address0 = grp_linear_forward_no_mu_fu_1643_v79_18_0_3_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        quantized_hidden_sta_52_address0 = grp_linear_forward_no_mu_fu_1372_v79_18_0_3_address0.read();
    } else {
        quantized_hidden_sta_52_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void attention::thread_quantized_hidden_sta_52_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        quantized_hidden_sta_52_ce0 = grp_linear_forward_no_mu_fu_1643_v79_18_0_3_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        quantized_hidden_sta_52_ce0 = grp_linear_forward_no_mu_fu_1372_v79_18_0_3_ce0.read();
    } else {
        quantized_hidden_sta_52_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_53_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        quantized_hidden_sta_53_address0 = grp_linear_forward_no_mu_fu_1643_v79_18_0_2_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        quantized_hidden_sta_53_address0 = grp_linear_forward_no_mu_fu_1372_v79_18_0_2_address0.read();
    } else {
        quantized_hidden_sta_53_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void attention::thread_quantized_hidden_sta_53_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        quantized_hidden_sta_53_ce0 = grp_linear_forward_no_mu_fu_1643_v79_18_0_2_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        quantized_hidden_sta_53_ce0 = grp_linear_forward_no_mu_fu_1372_v79_18_0_2_ce0.read();
    } else {
        quantized_hidden_sta_53_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_54_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        quantized_hidden_sta_54_address0 = grp_linear_forward_no_mu_fu_1643_v79_18_0_1_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        quantized_hidden_sta_54_address0 = grp_linear_forward_no_mu_fu_1372_v79_18_0_1_address0.read();
    } else {
        quantized_hidden_sta_54_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void attention::thread_quantized_hidden_sta_54_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        quantized_hidden_sta_54_ce0 = grp_linear_forward_no_mu_fu_1643_v79_18_0_1_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        quantized_hidden_sta_54_ce0 = grp_linear_forward_no_mu_fu_1372_v79_18_0_1_ce0.read();
    } else {
        quantized_hidden_sta_54_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_55_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        quantized_hidden_sta_55_address0 = grp_linear_forward_no_mu_fu_1643_v79_18_0_0_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        quantized_hidden_sta_55_address0 = grp_linear_forward_no_mu_fu_1372_v79_18_0_0_address0.read();
    } else {
        quantized_hidden_sta_55_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void attention::thread_quantized_hidden_sta_55_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        quantized_hidden_sta_55_ce0 = grp_linear_forward_no_mu_fu_1643_v79_18_0_0_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        quantized_hidden_sta_55_ce0 = grp_linear_forward_no_mu_fu_1372_v79_18_0_0_ce0.read();
    } else {
        quantized_hidden_sta_55_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_56_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        quantized_hidden_sta_56_address0 = grp_linear_forward_no_mu_fu_1643_v79_17_0_3_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        quantized_hidden_sta_56_address0 = grp_linear_forward_no_mu_fu_1372_v79_17_0_3_address0.read();
    } else {
        quantized_hidden_sta_56_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void attention::thread_quantized_hidden_sta_56_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        quantized_hidden_sta_56_ce0 = grp_linear_forward_no_mu_fu_1643_v79_17_0_3_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        quantized_hidden_sta_56_ce0 = grp_linear_forward_no_mu_fu_1372_v79_17_0_3_ce0.read();
    } else {
        quantized_hidden_sta_56_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_57_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        quantized_hidden_sta_57_address0 = grp_linear_forward_no_mu_fu_1643_v79_17_0_2_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        quantized_hidden_sta_57_address0 = grp_linear_forward_no_mu_fu_1372_v79_17_0_2_address0.read();
    } else {
        quantized_hidden_sta_57_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void attention::thread_quantized_hidden_sta_57_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        quantized_hidden_sta_57_ce0 = grp_linear_forward_no_mu_fu_1643_v79_17_0_2_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        quantized_hidden_sta_57_ce0 = grp_linear_forward_no_mu_fu_1372_v79_17_0_2_ce0.read();
    } else {
        quantized_hidden_sta_57_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_58_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        quantized_hidden_sta_58_address0 = grp_linear_forward_no_mu_fu_1643_v79_17_0_1_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        quantized_hidden_sta_58_address0 = grp_linear_forward_no_mu_fu_1372_v79_17_0_1_address0.read();
    } else {
        quantized_hidden_sta_58_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void attention::thread_quantized_hidden_sta_58_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        quantized_hidden_sta_58_ce0 = grp_linear_forward_no_mu_fu_1643_v79_17_0_1_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        quantized_hidden_sta_58_ce0 = grp_linear_forward_no_mu_fu_1372_v79_17_0_1_ce0.read();
    } else {
        quantized_hidden_sta_58_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_59_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        quantized_hidden_sta_59_address0 = grp_linear_forward_no_mu_fu_1643_v79_17_0_0_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        quantized_hidden_sta_59_address0 = grp_linear_forward_no_mu_fu_1372_v79_17_0_0_address0.read();
    } else {
        quantized_hidden_sta_59_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void attention::thread_quantized_hidden_sta_59_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        quantized_hidden_sta_59_ce0 = grp_linear_forward_no_mu_fu_1643_v79_17_0_0_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        quantized_hidden_sta_59_ce0 = grp_linear_forward_no_mu_fu_1372_v79_17_0_0_ce0.read();
    } else {
        quantized_hidden_sta_59_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_5_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        quantized_hidden_sta_5_address0 = grp_linear_forward_no_mu_fu_1643_v79_8_0_2_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        quantized_hidden_sta_5_address0 = grp_linear_forward_no_mu_fu_1372_v79_8_0_2_address0.read();
    } else {
        quantized_hidden_sta_5_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void attention::thread_quantized_hidden_sta_5_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        quantized_hidden_sta_5_ce0 = grp_linear_forward_no_mu_fu_1643_v79_8_0_2_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        quantized_hidden_sta_5_ce0 = grp_linear_forward_no_mu_fu_1372_v79_8_0_2_ce0.read();
    } else {
        quantized_hidden_sta_5_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_60_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        quantized_hidden_sta_60_address0 = grp_linear_forward_no_mu_fu_1643_v79_16_0_3_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        quantized_hidden_sta_60_address0 = grp_linear_forward_no_mu_fu_1372_v79_16_0_3_address0.read();
    } else {
        quantized_hidden_sta_60_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void attention::thread_quantized_hidden_sta_60_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        quantized_hidden_sta_60_ce0 = grp_linear_forward_no_mu_fu_1643_v79_16_0_3_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        quantized_hidden_sta_60_ce0 = grp_linear_forward_no_mu_fu_1372_v79_16_0_3_ce0.read();
    } else {
        quantized_hidden_sta_60_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_61_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        quantized_hidden_sta_61_address0 = grp_linear_forward_no_mu_fu_1643_v79_16_0_2_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        quantized_hidden_sta_61_address0 = grp_linear_forward_no_mu_fu_1372_v79_16_0_2_address0.read();
    } else {
        quantized_hidden_sta_61_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void attention::thread_quantized_hidden_sta_61_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        quantized_hidden_sta_61_ce0 = grp_linear_forward_no_mu_fu_1643_v79_16_0_2_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        quantized_hidden_sta_61_ce0 = grp_linear_forward_no_mu_fu_1372_v79_16_0_2_ce0.read();
    } else {
        quantized_hidden_sta_61_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_62_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        quantized_hidden_sta_62_address0 = grp_linear_forward_no_mu_fu_1643_v79_16_0_1_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        quantized_hidden_sta_62_address0 = grp_linear_forward_no_mu_fu_1372_v79_16_0_1_address0.read();
    } else {
        quantized_hidden_sta_62_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void attention::thread_quantized_hidden_sta_62_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        quantized_hidden_sta_62_ce0 = grp_linear_forward_no_mu_fu_1643_v79_16_0_1_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        quantized_hidden_sta_62_ce0 = grp_linear_forward_no_mu_fu_1372_v79_16_0_1_ce0.read();
    } else {
        quantized_hidden_sta_62_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_63_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        quantized_hidden_sta_63_address0 = grp_linear_forward_no_mu_fu_1643_v79_16_0_0_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        quantized_hidden_sta_63_address0 = grp_linear_forward_no_mu_fu_1372_v79_16_0_0_address0.read();
    } else {
        quantized_hidden_sta_63_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void attention::thread_quantized_hidden_sta_63_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        quantized_hidden_sta_63_ce0 = grp_linear_forward_no_mu_fu_1643_v79_16_0_0_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        quantized_hidden_sta_63_ce0 = grp_linear_forward_no_mu_fu_1372_v79_16_0_0_ce0.read();
    } else {
        quantized_hidden_sta_63_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_64_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        quantized_hidden_sta_64_address0 = grp_linear_forward_no_mu_fu_1643_v79_15_0_3_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        quantized_hidden_sta_64_address0 = grp_linear_forward_no_mu_fu_1372_v79_15_0_3_address0.read();
    } else {
        quantized_hidden_sta_64_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void attention::thread_quantized_hidden_sta_64_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        quantized_hidden_sta_64_ce0 = grp_linear_forward_no_mu_fu_1643_v79_15_0_3_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        quantized_hidden_sta_64_ce0 = grp_linear_forward_no_mu_fu_1372_v79_15_0_3_ce0.read();
    } else {
        quantized_hidden_sta_64_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_65_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        quantized_hidden_sta_65_address0 = grp_linear_forward_no_mu_fu_1643_v79_15_0_2_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        quantized_hidden_sta_65_address0 = grp_linear_forward_no_mu_fu_1372_v79_15_0_2_address0.read();
    } else {
        quantized_hidden_sta_65_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void attention::thread_quantized_hidden_sta_65_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        quantized_hidden_sta_65_ce0 = grp_linear_forward_no_mu_fu_1643_v79_15_0_2_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        quantized_hidden_sta_65_ce0 = grp_linear_forward_no_mu_fu_1372_v79_15_0_2_ce0.read();
    } else {
        quantized_hidden_sta_65_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_66_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        quantized_hidden_sta_66_address0 = grp_linear_forward_no_mu_fu_1643_v79_15_0_1_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        quantized_hidden_sta_66_address0 = grp_linear_forward_no_mu_fu_1372_v79_15_0_1_address0.read();
    } else {
        quantized_hidden_sta_66_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void attention::thread_quantized_hidden_sta_66_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        quantized_hidden_sta_66_ce0 = grp_linear_forward_no_mu_fu_1643_v79_15_0_1_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        quantized_hidden_sta_66_ce0 = grp_linear_forward_no_mu_fu_1372_v79_15_0_1_ce0.read();
    } else {
        quantized_hidden_sta_66_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_67_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        quantized_hidden_sta_67_address0 = grp_linear_forward_no_mu_fu_1643_v79_15_0_0_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        quantized_hidden_sta_67_address0 = grp_linear_forward_no_mu_fu_1372_v79_15_0_0_address0.read();
    } else {
        quantized_hidden_sta_67_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void attention::thread_quantized_hidden_sta_67_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        quantized_hidden_sta_67_ce0 = grp_linear_forward_no_mu_fu_1643_v79_15_0_0_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        quantized_hidden_sta_67_ce0 = grp_linear_forward_no_mu_fu_1372_v79_15_0_0_ce0.read();
    } else {
        quantized_hidden_sta_67_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_68_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        quantized_hidden_sta_68_address0 = grp_linear_forward_no_mu_fu_1643_v79_14_0_3_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        quantized_hidden_sta_68_address0 = grp_linear_forward_no_mu_fu_1372_v79_14_0_3_address0.read();
    } else {
        quantized_hidden_sta_68_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void attention::thread_quantized_hidden_sta_68_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        quantized_hidden_sta_68_ce0 = grp_linear_forward_no_mu_fu_1643_v79_14_0_3_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        quantized_hidden_sta_68_ce0 = grp_linear_forward_no_mu_fu_1372_v79_14_0_3_ce0.read();
    } else {
        quantized_hidden_sta_68_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_69_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        quantized_hidden_sta_69_address0 = grp_linear_forward_no_mu_fu_1643_v79_14_0_2_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        quantized_hidden_sta_69_address0 = grp_linear_forward_no_mu_fu_1372_v79_14_0_2_address0.read();
    } else {
        quantized_hidden_sta_69_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void attention::thread_quantized_hidden_sta_69_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        quantized_hidden_sta_69_ce0 = grp_linear_forward_no_mu_fu_1643_v79_14_0_2_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        quantized_hidden_sta_69_ce0 = grp_linear_forward_no_mu_fu_1372_v79_14_0_2_ce0.read();
    } else {
        quantized_hidden_sta_69_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_6_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        quantized_hidden_sta_6_address0 = grp_linear_forward_no_mu_fu_1643_v79_8_0_1_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        quantized_hidden_sta_6_address0 = grp_linear_forward_no_mu_fu_1372_v79_8_0_1_address0.read();
    } else {
        quantized_hidden_sta_6_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void attention::thread_quantized_hidden_sta_6_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        quantized_hidden_sta_6_ce0 = grp_linear_forward_no_mu_fu_1643_v79_8_0_1_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        quantized_hidden_sta_6_ce0 = grp_linear_forward_no_mu_fu_1372_v79_8_0_1_ce0.read();
    } else {
        quantized_hidden_sta_6_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_70_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        quantized_hidden_sta_70_address0 = grp_linear_forward_no_mu_fu_1643_v79_14_0_1_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        quantized_hidden_sta_70_address0 = grp_linear_forward_no_mu_fu_1372_v79_14_0_1_address0.read();
    } else {
        quantized_hidden_sta_70_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void attention::thread_quantized_hidden_sta_70_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        quantized_hidden_sta_70_ce0 = grp_linear_forward_no_mu_fu_1643_v79_14_0_1_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        quantized_hidden_sta_70_ce0 = grp_linear_forward_no_mu_fu_1372_v79_14_0_1_ce0.read();
    } else {
        quantized_hidden_sta_70_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_71_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        quantized_hidden_sta_71_address0 = grp_linear_forward_no_mu_fu_1643_v79_14_0_0_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        quantized_hidden_sta_71_address0 = grp_linear_forward_no_mu_fu_1372_v79_14_0_0_address0.read();
    } else {
        quantized_hidden_sta_71_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void attention::thread_quantized_hidden_sta_71_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        quantized_hidden_sta_71_ce0 = grp_linear_forward_no_mu_fu_1643_v79_14_0_0_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        quantized_hidden_sta_71_ce0 = grp_linear_forward_no_mu_fu_1372_v79_14_0_0_ce0.read();
    } else {
        quantized_hidden_sta_71_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_72_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        quantized_hidden_sta_72_address0 = grp_linear_forward_no_mu_fu_1643_v79_13_0_3_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        quantized_hidden_sta_72_address0 = grp_linear_forward_no_mu_fu_1372_v79_13_0_3_address0.read();
    } else {
        quantized_hidden_sta_72_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void attention::thread_quantized_hidden_sta_72_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        quantized_hidden_sta_72_ce0 = grp_linear_forward_no_mu_fu_1643_v79_13_0_3_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        quantized_hidden_sta_72_ce0 = grp_linear_forward_no_mu_fu_1372_v79_13_0_3_ce0.read();
    } else {
        quantized_hidden_sta_72_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_73_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        quantized_hidden_sta_73_address0 = grp_linear_forward_no_mu_fu_1643_v79_13_0_2_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        quantized_hidden_sta_73_address0 = grp_linear_forward_no_mu_fu_1372_v79_13_0_2_address0.read();
    } else {
        quantized_hidden_sta_73_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void attention::thread_quantized_hidden_sta_73_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        quantized_hidden_sta_73_ce0 = grp_linear_forward_no_mu_fu_1643_v79_13_0_2_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        quantized_hidden_sta_73_ce0 = grp_linear_forward_no_mu_fu_1372_v79_13_0_2_ce0.read();
    } else {
        quantized_hidden_sta_73_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_74_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        quantized_hidden_sta_74_address0 = grp_linear_forward_no_mu_fu_1643_v79_13_0_1_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        quantized_hidden_sta_74_address0 = grp_linear_forward_no_mu_fu_1372_v79_13_0_1_address0.read();
    } else {
        quantized_hidden_sta_74_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void attention::thread_quantized_hidden_sta_74_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        quantized_hidden_sta_74_ce0 = grp_linear_forward_no_mu_fu_1643_v79_13_0_1_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        quantized_hidden_sta_74_ce0 = grp_linear_forward_no_mu_fu_1372_v79_13_0_1_ce0.read();
    } else {
        quantized_hidden_sta_74_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_75_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        quantized_hidden_sta_75_address0 = grp_linear_forward_no_mu_fu_1643_v79_13_0_0_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        quantized_hidden_sta_75_address0 = grp_linear_forward_no_mu_fu_1372_v79_13_0_0_address0.read();
    } else {
        quantized_hidden_sta_75_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void attention::thread_quantized_hidden_sta_75_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        quantized_hidden_sta_75_ce0 = grp_linear_forward_no_mu_fu_1643_v79_13_0_0_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        quantized_hidden_sta_75_ce0 = grp_linear_forward_no_mu_fu_1372_v79_13_0_0_ce0.read();
    } else {
        quantized_hidden_sta_75_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_76_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        quantized_hidden_sta_76_address0 = grp_linear_forward_no_mu_fu_1643_v79_12_0_3_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        quantized_hidden_sta_76_address0 = grp_linear_forward_no_mu_fu_1372_v79_12_0_3_address0.read();
    } else {
        quantized_hidden_sta_76_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void attention::thread_quantized_hidden_sta_76_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        quantized_hidden_sta_76_ce0 = grp_linear_forward_no_mu_fu_1643_v79_12_0_3_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        quantized_hidden_sta_76_ce0 = grp_linear_forward_no_mu_fu_1372_v79_12_0_3_ce0.read();
    } else {
        quantized_hidden_sta_76_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_77_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        quantized_hidden_sta_77_address0 = grp_linear_forward_no_mu_fu_1643_v79_12_0_2_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        quantized_hidden_sta_77_address0 = grp_linear_forward_no_mu_fu_1372_v79_12_0_2_address0.read();
    } else {
        quantized_hidden_sta_77_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void attention::thread_quantized_hidden_sta_77_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        quantized_hidden_sta_77_ce0 = grp_linear_forward_no_mu_fu_1643_v79_12_0_2_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        quantized_hidden_sta_77_ce0 = grp_linear_forward_no_mu_fu_1372_v79_12_0_2_ce0.read();
    } else {
        quantized_hidden_sta_77_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_78_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        quantized_hidden_sta_78_address0 = grp_linear_forward_no_mu_fu_1643_v79_12_0_1_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        quantized_hidden_sta_78_address0 = grp_linear_forward_no_mu_fu_1372_v79_12_0_1_address0.read();
    } else {
        quantized_hidden_sta_78_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void attention::thread_quantized_hidden_sta_78_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        quantized_hidden_sta_78_ce0 = grp_linear_forward_no_mu_fu_1643_v79_12_0_1_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        quantized_hidden_sta_78_ce0 = grp_linear_forward_no_mu_fu_1372_v79_12_0_1_ce0.read();
    } else {
        quantized_hidden_sta_78_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_79_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        quantized_hidden_sta_79_address0 = grp_linear_forward_no_mu_fu_1643_v79_12_0_0_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        quantized_hidden_sta_79_address0 = grp_linear_forward_no_mu_fu_1372_v79_12_0_0_address0.read();
    } else {
        quantized_hidden_sta_79_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void attention::thread_quantized_hidden_sta_79_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        quantized_hidden_sta_79_ce0 = grp_linear_forward_no_mu_fu_1643_v79_12_0_0_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        quantized_hidden_sta_79_ce0 = grp_linear_forward_no_mu_fu_1372_v79_12_0_0_ce0.read();
    } else {
        quantized_hidden_sta_79_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_7_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        quantized_hidden_sta_7_address0 = grp_linear_forward_no_mu_fu_1643_v79_8_0_0_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        quantized_hidden_sta_7_address0 = grp_linear_forward_no_mu_fu_1372_v79_8_0_0_address0.read();
    } else {
        quantized_hidden_sta_7_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void attention::thread_quantized_hidden_sta_7_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        quantized_hidden_sta_7_ce0 = grp_linear_forward_no_mu_fu_1643_v79_8_0_0_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        quantized_hidden_sta_7_ce0 = grp_linear_forward_no_mu_fu_1372_v79_8_0_0_ce0.read();
    } else {
        quantized_hidden_sta_7_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_80_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        quantized_hidden_sta_80_address0 = grp_linear_forward_no_mu_fu_1643_v79_11_0_3_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        quantized_hidden_sta_80_address0 = grp_linear_forward_no_mu_fu_1372_v79_11_0_3_address0.read();
    } else {
        quantized_hidden_sta_80_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void attention::thread_quantized_hidden_sta_80_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        quantized_hidden_sta_80_ce0 = grp_linear_forward_no_mu_fu_1643_v79_11_0_3_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        quantized_hidden_sta_80_ce0 = grp_linear_forward_no_mu_fu_1372_v79_11_0_3_ce0.read();
    } else {
        quantized_hidden_sta_80_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_81_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        quantized_hidden_sta_81_address0 = grp_linear_forward_no_mu_fu_1643_v79_11_0_2_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        quantized_hidden_sta_81_address0 = grp_linear_forward_no_mu_fu_1372_v79_11_0_2_address0.read();
    } else {
        quantized_hidden_sta_81_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void attention::thread_quantized_hidden_sta_81_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        quantized_hidden_sta_81_ce0 = grp_linear_forward_no_mu_fu_1643_v79_11_0_2_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        quantized_hidden_sta_81_ce0 = grp_linear_forward_no_mu_fu_1372_v79_11_0_2_ce0.read();
    } else {
        quantized_hidden_sta_81_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_82_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        quantized_hidden_sta_82_address0 = grp_linear_forward_no_mu_fu_1643_v79_11_0_1_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        quantized_hidden_sta_82_address0 = grp_linear_forward_no_mu_fu_1372_v79_11_0_1_address0.read();
    } else {
        quantized_hidden_sta_82_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void attention::thread_quantized_hidden_sta_82_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        quantized_hidden_sta_82_ce0 = grp_linear_forward_no_mu_fu_1643_v79_11_0_1_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        quantized_hidden_sta_82_ce0 = grp_linear_forward_no_mu_fu_1372_v79_11_0_1_ce0.read();
    } else {
        quantized_hidden_sta_82_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_83_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        quantized_hidden_sta_83_address0 = grp_linear_forward_no_mu_fu_1643_v79_11_0_0_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        quantized_hidden_sta_83_address0 = grp_linear_forward_no_mu_fu_1372_v79_11_0_0_address0.read();
    } else {
        quantized_hidden_sta_83_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void attention::thread_quantized_hidden_sta_83_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        quantized_hidden_sta_83_ce0 = grp_linear_forward_no_mu_fu_1643_v79_11_0_0_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        quantized_hidden_sta_83_ce0 = grp_linear_forward_no_mu_fu_1372_v79_11_0_0_ce0.read();
    } else {
        quantized_hidden_sta_83_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_84_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        quantized_hidden_sta_84_address0 = grp_linear_forward_no_mu_fu_1643_v79_10_0_3_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        quantized_hidden_sta_84_address0 = grp_linear_forward_no_mu_fu_1372_v79_10_0_3_address0.read();
    } else {
        quantized_hidden_sta_84_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void attention::thread_quantized_hidden_sta_84_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        quantized_hidden_sta_84_ce0 = grp_linear_forward_no_mu_fu_1643_v79_10_0_3_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        quantized_hidden_sta_84_ce0 = grp_linear_forward_no_mu_fu_1372_v79_10_0_3_ce0.read();
    } else {
        quantized_hidden_sta_84_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_85_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        quantized_hidden_sta_85_address0 = grp_linear_forward_no_mu_fu_1643_v79_10_0_2_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        quantized_hidden_sta_85_address0 = grp_linear_forward_no_mu_fu_1372_v79_10_0_2_address0.read();
    } else {
        quantized_hidden_sta_85_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void attention::thread_quantized_hidden_sta_85_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        quantized_hidden_sta_85_ce0 = grp_linear_forward_no_mu_fu_1643_v79_10_0_2_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        quantized_hidden_sta_85_ce0 = grp_linear_forward_no_mu_fu_1372_v79_10_0_2_ce0.read();
    } else {
        quantized_hidden_sta_85_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_86_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        quantized_hidden_sta_86_address0 = grp_linear_forward_no_mu_fu_1643_v79_10_0_1_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        quantized_hidden_sta_86_address0 = grp_linear_forward_no_mu_fu_1372_v79_10_0_1_address0.read();
    } else {
        quantized_hidden_sta_86_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void attention::thread_quantized_hidden_sta_86_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        quantized_hidden_sta_86_ce0 = grp_linear_forward_no_mu_fu_1643_v79_10_0_1_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        quantized_hidden_sta_86_ce0 = grp_linear_forward_no_mu_fu_1372_v79_10_0_1_ce0.read();
    } else {
        quantized_hidden_sta_86_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_87_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        quantized_hidden_sta_87_address0 = grp_linear_forward_no_mu_fu_1643_v79_10_0_0_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        quantized_hidden_sta_87_address0 = grp_linear_forward_no_mu_fu_1372_v79_10_0_0_address0.read();
    } else {
        quantized_hidden_sta_87_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void attention::thread_quantized_hidden_sta_87_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        quantized_hidden_sta_87_ce0 = grp_linear_forward_no_mu_fu_1643_v79_10_0_0_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        quantized_hidden_sta_87_ce0 = grp_linear_forward_no_mu_fu_1372_v79_10_0_0_ce0.read();
    } else {
        quantized_hidden_sta_87_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_88_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        quantized_hidden_sta_88_address0 = grp_linear_forward_no_mu_fu_1643_v79_1_0_3_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        quantized_hidden_sta_88_address0 = grp_linear_forward_no_mu_fu_1372_v79_1_0_3_address0.read();
    } else {
        quantized_hidden_sta_88_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void attention::thread_quantized_hidden_sta_88_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        quantized_hidden_sta_88_ce0 = grp_linear_forward_no_mu_fu_1643_v79_1_0_3_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        quantized_hidden_sta_88_ce0 = grp_linear_forward_no_mu_fu_1372_v79_1_0_3_ce0.read();
    } else {
        quantized_hidden_sta_88_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_89_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        quantized_hidden_sta_89_address0 = grp_linear_forward_no_mu_fu_1643_v79_1_0_2_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        quantized_hidden_sta_89_address0 = grp_linear_forward_no_mu_fu_1372_v79_1_0_2_address0.read();
    } else {
        quantized_hidden_sta_89_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void attention::thread_quantized_hidden_sta_89_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        quantized_hidden_sta_89_ce0 = grp_linear_forward_no_mu_fu_1643_v79_1_0_2_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        quantized_hidden_sta_89_ce0 = grp_linear_forward_no_mu_fu_1372_v79_1_0_2_ce0.read();
    } else {
        quantized_hidden_sta_89_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_8_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        quantized_hidden_sta_8_address0 = grp_linear_forward_no_mu_fu_1643_v79_7_0_3_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        quantized_hidden_sta_8_address0 = grp_linear_forward_no_mu_fu_1372_v79_7_0_3_address0.read();
    } else {
        quantized_hidden_sta_8_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void attention::thread_quantized_hidden_sta_8_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        quantized_hidden_sta_8_ce0 = grp_linear_forward_no_mu_fu_1643_v79_7_0_3_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        quantized_hidden_sta_8_ce0 = grp_linear_forward_no_mu_fu_1372_v79_7_0_3_ce0.read();
    } else {
        quantized_hidden_sta_8_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_90_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        quantized_hidden_sta_90_address0 = grp_linear_forward_no_mu_fu_1643_v79_1_0_1_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        quantized_hidden_sta_90_address0 = grp_linear_forward_no_mu_fu_1372_v79_1_0_1_address0.read();
    } else {
        quantized_hidden_sta_90_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void attention::thread_quantized_hidden_sta_90_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        quantized_hidden_sta_90_ce0 = grp_linear_forward_no_mu_fu_1643_v79_1_0_1_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        quantized_hidden_sta_90_ce0 = grp_linear_forward_no_mu_fu_1372_v79_1_0_1_ce0.read();
    } else {
        quantized_hidden_sta_90_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_91_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        quantized_hidden_sta_91_address0 = grp_linear_forward_no_mu_fu_1643_v79_1_0_0_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        quantized_hidden_sta_91_address0 = grp_linear_forward_no_mu_fu_1372_v79_1_0_0_address0.read();
    } else {
        quantized_hidden_sta_91_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void attention::thread_quantized_hidden_sta_91_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        quantized_hidden_sta_91_ce0 = grp_linear_forward_no_mu_fu_1643_v79_1_0_0_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        quantized_hidden_sta_91_ce0 = grp_linear_forward_no_mu_fu_1372_v79_1_0_0_ce0.read();
    } else {
        quantized_hidden_sta_91_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_92_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        quantized_hidden_sta_92_address0 = grp_linear_forward_no_mu_fu_1643_v79_0_0_3_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        quantized_hidden_sta_92_address0 = grp_linear_forward_no_mu_fu_1372_v79_0_0_3_address0.read();
    } else {
        quantized_hidden_sta_92_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void attention::thread_quantized_hidden_sta_92_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        quantized_hidden_sta_92_ce0 = grp_linear_forward_no_mu_fu_1643_v79_0_0_3_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        quantized_hidden_sta_92_ce0 = grp_linear_forward_no_mu_fu_1372_v79_0_0_3_ce0.read();
    } else {
        quantized_hidden_sta_92_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_93_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        quantized_hidden_sta_93_address0 = grp_linear_forward_no_mu_fu_1643_v79_0_0_2_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        quantized_hidden_sta_93_address0 = grp_linear_forward_no_mu_fu_1372_v79_0_0_2_address0.read();
    } else {
        quantized_hidden_sta_93_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void attention::thread_quantized_hidden_sta_93_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        quantized_hidden_sta_93_ce0 = grp_linear_forward_no_mu_fu_1643_v79_0_0_2_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        quantized_hidden_sta_93_ce0 = grp_linear_forward_no_mu_fu_1372_v79_0_0_2_ce0.read();
    } else {
        quantized_hidden_sta_93_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_94_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        quantized_hidden_sta_94_address0 = grp_linear_forward_no_mu_fu_1643_v79_0_0_1_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        quantized_hidden_sta_94_address0 = grp_linear_forward_no_mu_fu_1372_v79_0_0_1_address0.read();
    } else {
        quantized_hidden_sta_94_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void attention::thread_quantized_hidden_sta_94_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        quantized_hidden_sta_94_ce0 = grp_linear_forward_no_mu_fu_1643_v79_0_0_1_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        quantized_hidden_sta_94_ce0 = grp_linear_forward_no_mu_fu_1372_v79_0_0_1_ce0.read();
    } else {
        quantized_hidden_sta_94_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_95_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        quantized_hidden_sta_95_address0 = grp_linear_forward_no_mu_fu_1643_v79_0_0_0_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        quantized_hidden_sta_95_address0 = grp_linear_forward_no_mu_fu_1372_v79_0_0_0_address0.read();
    } else {
        quantized_hidden_sta_95_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void attention::thread_quantized_hidden_sta_95_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        quantized_hidden_sta_95_ce0 = grp_linear_forward_no_mu_fu_1643_v79_0_0_0_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        quantized_hidden_sta_95_ce0 = grp_linear_forward_no_mu_fu_1372_v79_0_0_0_ce0.read();
    } else {
        quantized_hidden_sta_95_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_96_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        quantized_hidden_sta_96_ce0 = grp_quantize_activation_fu_2055_v24_0_ce0.read();
    } else {
        quantized_hidden_sta_96_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_96_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        quantized_hidden_sta_96_we0 = grp_quantize_activation_fu_2055_v24_0_we0.read();
    } else {
        quantized_hidden_sta_96_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_9_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        quantized_hidden_sta_9_address0 = grp_linear_forward_no_mu_fu_1643_v79_7_0_2_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        quantized_hidden_sta_9_address0 = grp_linear_forward_no_mu_fu_1372_v79_7_0_2_address0.read();
    } else {
        quantized_hidden_sta_9_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void attention::thread_quantized_hidden_sta_9_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        quantized_hidden_sta_9_ce0 = grp_linear_forward_no_mu_fu_1643_v79_7_0_2_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        quantized_hidden_sta_9_ce0 = grp_linear_forward_no_mu_fu_1372_v79_7_0_2_ce0.read();
    } else {
        quantized_hidden_sta_9_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        quantized_hidden_sta_address0 = grp_linear_forward_no_mu_fu_1643_v79_9_0_3_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        quantized_hidden_sta_address0 = grp_linear_forward_no_mu_fu_1372_v79_9_0_3_address0.read();
    } else {
        quantized_hidden_sta_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void attention::thread_quantized_hidden_sta_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        quantized_hidden_sta_ce0 = grp_linear_forward_no_mu_fu_1643_v79_9_0_3_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        quantized_hidden_sta_ce0 = grp_linear_forward_no_mu_fu_1372_v79_9_0_3_ce0.read();
    } else {
        quantized_hidden_sta_ce0 = ap_const_logic_0;
    }
}

void attention::thread_rms_attn_output_0_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state72.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln697_fu_4121_p2.read()))) {
        rms_attn_output_0_address0 =  (sc_lv<11>) (zext_ln698_fu_4133_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read())) {
        rms_attn_output_0_address0 = grp_quantize_activation_fu_2055_v22_0_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state73.read())) {
        rms_attn_output_0_address0 = grp_rms_norm_fu_2031_v3_0_address0.read();
    } else {
        rms_attn_output_0_address0 = "XXXXXXXXXXX";
    }
}

void attention::thread_rms_attn_output_0_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state72.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln697_fu_4121_p2.read()))) {
        rms_attn_output_0_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read())) {
        rms_attn_output_0_ce0 = grp_quantize_activation_fu_2055_v22_0_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state73.read())) {
        rms_attn_output_0_ce0 = grp_rms_norm_fu_2031_v3_0_ce0.read();
    } else {
        rms_attn_output_0_ce0 = ap_const_logic_0;
    }
}

void attention::thread_rms_attn_output_0_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state72.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln697_fu_4121_p2.read()))) {
        rms_attn_output_0_d0 = ap_const_lv32_0;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state73.read())) {
        rms_attn_output_0_d0 = grp_rms_norm_fu_2031_v3_0_d0.read();
    } else {
        rms_attn_output_0_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void attention::thread_rms_attn_output_0_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state72.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln697_fu_4121_p2.read()))) {
        rms_attn_output_0_we0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state73.read())) {
        rms_attn_output_0_we0 = grp_rms_norm_fu_2031_v3_0_we0.read();
    } else {
        rms_attn_output_0_we0 = ap_const_logic_0;
    }
}

void attention::thread_rms_hidden_states_0_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln480_fu_2152_p2.read()))) {
        rms_hidden_states_0_address0 =  (sc_lv<11>) (zext_ln481_fu_2164_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        rms_hidden_states_0_address0 = grp_quantize_activation_fu_2055_v22_0_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rms_hidden_states_0_address0 = grp_rms_norm_fu_2031_v3_0_address0.read();
    } else {
        rms_hidden_states_0_address0 = "XXXXXXXXXXX";
    }
}

void attention::thread_rms_hidden_states_0_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln480_fu_2152_p2.read()))) {
        rms_hidden_states_0_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        rms_hidden_states_0_ce0 = grp_quantize_activation_fu_2055_v22_0_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rms_hidden_states_0_ce0 = grp_rms_norm_fu_2031_v3_0_ce0.read();
    } else {
        rms_hidden_states_0_ce0 = ap_const_logic_0;
    }
}

void attention::thread_rms_hidden_states_0_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln480_fu_2152_p2.read()))) {
        rms_hidden_states_0_d0 = ap_const_lv32_0;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rms_hidden_states_0_d0 = grp_rms_norm_fu_2031_v3_0_d0.read();
    } else {
        rms_hidden_states_0_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void attention::thread_rms_hidden_states_0_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln480_fu_2152_p2.read()))) {
        rms_hidden_states_0_we0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rms_hidden_states_0_we0 = grp_rms_norm_fu_2031_v3_0_we0.read();
    } else {
        rms_hidden_states_0_we0 = ap_const_logic_0;
    }
}

void attention::thread_select_ln588_1_fu_2770_p3() {
    select_ln588_1_fu_2770_p3 = (!tmp_57_fu_2762_p3.read()[0].is_01())? sc_lv<32>(): ((tmp_57_fu_2762_p3.read()[0].to_bool())? ap_const_lv32_FFFFFFFF: ap_const_lv32_0);
}

void attention::thread_select_ln588_2_fu_2929_p3() {
    select_ln588_2_fu_2929_p3 = (!tmp_70_fu_2921_p3.read()[0].is_01())? sc_lv<32>(): ((tmp_70_fu_2921_p3.read()[0].to_bool())? ap_const_lv32_FFFFFFFF: ap_const_lv32_0);
}

void attention::thread_select_ln588_3_fu_3206_p3() {
    select_ln588_3_fu_3206_p3 = (!tmp_73_fu_3198_p3.read()[0].is_01())? sc_lv<32>(): ((tmp_73_fu_3198_p3.read()[0].to_bool())? ap_const_lv32_FFFFFFFF: ap_const_lv32_0);
}

void attention::thread_select_ln588_fu_2375_p3() {
    select_ln588_fu_2375_p3 = (!tmp_52_fu_2367_p3.read()[0].is_01())? sc_lv<32>(): ((tmp_52_fu_2367_p3.read()[0].to_bool())? ap_const_lv32_FFFFFFFF: ap_const_lv32_0);
}

void attention::thread_select_ln603_11_fu_3002_p3() {
    select_ln603_11_fu_3002_p3 = (!and_ln603_2_fu_2996_p2.read()[0].is_01())? sc_lv<32>(): ((and_ln603_2_fu_2996_p2.read()[0].to_bool())? shl_ln604_2_fu_2937_p2.read(): trunc_ln586_2_fu_2914_p1.read());
}

void attention::thread_select_ln603_12_fu_3016_p3() {
    select_ln603_12_fu_3016_p3 = (!and_ln585_5_fu_2973_p2.read()[0].is_01())? sc_lv<32>(): ((and_ln585_5_fu_2973_p2.read()[0].to_bool())? select_ln588_2_fu_2929_p3.read(): trunc_ln583_2_reg_4325.read());
}

void attention::thread_select_ln603_13_fu_3029_p3() {
    select_ln603_13_fu_3029_p3 = (!or_ln603_8_fu_3010_p2.read()[0].is_01())? sc_lv<32>(): ((or_ln603_8_fu_3010_p2.read()[0].to_bool())? select_ln603_11_fu_3002_p3.read(): select_ln603_12_fu_3016_p3.read());
}

void attention::thread_select_ln603_15_fu_3279_p3() {
    select_ln603_15_fu_3279_p3 = (!and_ln603_3_fu_3273_p2.read()[0].is_01())? sc_lv<32>(): ((and_ln603_3_fu_3273_p2.read()[0].to_bool())? shl_ln604_3_fu_3214_p2.read(): trunc_ln586_3_fu_3191_p1.read());
}

void attention::thread_select_ln603_16_fu_3293_p3() {
    select_ln603_16_fu_3293_p3 = (!and_ln585_7_fu_3250_p2.read()[0].is_01())? sc_lv<32>(): ((and_ln585_7_fu_3250_p2.read()[0].to_bool())? select_ln588_3_fu_3206_p3.read(): trunc_ln583_3_reg_4375.read());
}

void attention::thread_select_ln603_17_fu_3306_p3() {
    select_ln603_17_fu_3306_p3 = (!or_ln603_11_fu_3287_p2.read()[0].is_01())? sc_lv<32>(): ((or_ln603_11_fu_3287_p2.read()[0].to_bool())? select_ln603_15_fu_3279_p3.read(): select_ln603_16_fu_3293_p3.read());
}

void attention::thread_select_ln603_4_fu_2462_p3() {
    select_ln603_4_fu_2462_p3 = (!and_ln585_fu_2419_p2.read()[0].is_01())? sc_lv<32>(): ((and_ln585_fu_2419_p2.read()[0].to_bool())? select_ln588_fu_2375_p3.read(): trunc_ln583_reg_4240.read());
}

void attention::thread_select_ln603_5_fu_2475_p3() {
    select_ln603_5_fu_2475_p3 = (!or_ln603_fu_2456_p2.read()[0].is_01())? sc_lv<32>(): ((or_ln603_fu_2456_p2.read()[0].to_bool())? select_ln603_fu_2448_p3.read(): select_ln603_4_fu_2462_p3.read());
}

void attention::thread_select_ln603_7_fu_2843_p3() {
    select_ln603_7_fu_2843_p3 = (!and_ln603_1_fu_2837_p2.read()[0].is_01())? sc_lv<32>(): ((and_ln603_1_fu_2837_p2.read()[0].to_bool())? shl_ln604_1_fu_2778_p2.read(): trunc_ln586_1_fu_2755_p1.read());
}

void attention::thread_select_ln603_8_fu_2857_p3() {
    select_ln603_8_fu_2857_p3 = (!and_ln585_3_fu_2814_p2.read()[0].is_01())? sc_lv<32>(): ((and_ln585_3_fu_2814_p2.read()[0].to_bool())? select_ln588_1_fu_2770_p3.read(): trunc_ln583_1_reg_4285.read());
}

void attention::thread_select_ln603_9_fu_2870_p3() {
    select_ln603_9_fu_2870_p3 = (!or_ln603_5_fu_2851_p2.read()[0].is_01())? sc_lv<32>(): ((or_ln603_5_fu_2851_p2.read()[0].to_bool())? select_ln603_7_fu_2843_p3.read(): select_ln603_8_fu_2857_p3.read());
}

void attention::thread_select_ln603_fu_2448_p3() {
    select_ln603_fu_2448_p3 = (!and_ln603_fu_2442_p2.read()[0].is_01())? sc_lv<32>(): ((and_ln603_fu_2442_p2.read()[0].to_bool())? shl_ln604_fu_2383_p2.read(): trunc_ln586_fu_2360_p1.read());
}

void attention::thread_sext_ln581_1_fu_2733_p1() {
    sext_ln581_1_fu_2733_p1 = esl_sext<32,12>(sh_amt_1_reg_4273.read());
}

void attention::thread_sext_ln581_2_fu_2892_p1() {
    sext_ln581_2_fu_2892_p1 = esl_sext<32,12>(sh_amt_2_reg_4313.read());
}

void attention::thread_sext_ln581_3_fu_3169_p1() {
    sext_ln581_3_fu_3169_p1 = esl_sext<32,12>(sh_amt_3_reg_4363.read());
}

void attention::thread_sext_ln581_fu_2338_p1() {
    sext_ln581_fu_2338_p1 = esl_sext<32,12>(sh_amt_reg_4228.read());
}

void attention::thread_sext_ln585_fu_3387_p1() {
    sext_ln585_fu_3387_p1 = esl_sext<64,12>(add_ln585_fu_3382_p2.read());
}

void attention::thread_sext_ln593_fu_3451_p1() {
    sext_ln593_fu_3451_p1 = esl_sext<64,12>(add_ln593_fu_3446_p2.read());
}

void attention::thread_sext_ln602_fu_3498_p1() {
    sext_ln602_fu_3498_p1 = esl_sext<10,9>(sub_ln602_fu_3492_p2.read());
}

void attention::thread_sext_ln610_fu_3617_p1() {
    sext_ln610_fu_3617_p1 = esl_sext<10,9>(sub_ln610_fu_3611_p2.read());
}

void attention::thread_sext_ln629_fu_3753_p1() {
    sext_ln629_fu_3753_p1 = esl_sext<64,8>(add_ln629_fu_3748_p2.read());
}

void attention::thread_sext_ln639_fu_3817_p1() {
    sext_ln639_fu_3817_p1 = esl_sext<64,8>(add_ln639_fu_3812_p2.read());
}

void attention::thread_sext_ln657_fu_3860_p1() {
    sext_ln657_fu_3860_p1 = esl_sext<64,8>(sub_ln657_fu_3854_p2.read());
}

void attention::thread_sext_ln667_fu_3924_p1() {
    sext_ln667_fu_3924_p1 = esl_sext<64,8>(add_ln667_fu_3919_p2.read());
}

void attention::thread_sext_ln676_fu_3988_p1() {
    sext_ln676_fu_3988_p1 = esl_sext<64,12>(add_ln676_fu_3983_p2.read());
}

void attention::thread_sext_ln690_fu_4103_p1() {
    sext_ln690_fu_4103_p1 = esl_sext<64,12>(add_ln690_fu_4098_p2.read());
}

void attention::thread_sext_ln691_fu_4113_p1() {
    sext_ln691_fu_4113_p1 = esl_sext<32,12>(add_ln691_reg_4652.read());
}

void attention::thread_sh_amt_1_fu_2587_p3() {
    sh_amt_1_fu_2587_p3 = (!icmp_ln581_1_fu_2569_p2.read()[0].is_01())? sc_lv<12>(): ((icmp_ln581_1_fu_2569_p2.read()[0].to_bool())? add_ln581_1_fu_2575_p2.read(): sub_ln581_1_fu_2581_p2.read());
}

void attention::thread_sh_amt_2_fu_2705_p3() {
    sh_amt_2_fu_2705_p3 = (!icmp_ln581_2_fu_2687_p2.read()[0].is_01())? sc_lv<12>(): ((icmp_ln581_2_fu_2687_p2.read()[0].to_bool())? add_ln581_2_fu_2693_p2.read(): sub_ln581_2_fu_2699_p2.read());
}

void attention::thread_sh_amt_3_fu_3141_p3() {
    sh_amt_3_fu_3141_p3 = (!icmp_ln581_3_fu_3123_p2.read()[0].is_01())? sc_lv<12>(): ((icmp_ln581_3_fu_3123_p2.read()[0].to_bool())? add_ln581_3_fu_3129_p2.read(): sub_ln581_3_fu_3135_p2.read());
}

void attention::thread_sh_amt_fu_2310_p3() {
    sh_amt_fu_2310_p3 = (!icmp_ln581_fu_2292_p2.read()[0].is_01())? sc_lv<12>(): ((icmp_ln581_fu_2292_p2.read()[0].to_bool())? add_ln581_fu_2298_p2.read(): sub_ln581_fu_2304_p2.read());
}

void attention::thread_shl_ln604_1_fu_2778_p2() {
    shl_ln604_1_fu_2778_p2 = (!sext_ln581_1_fu_2733_p1.read().is_01())? sc_lv<32>(): trunc_ln583_1_reg_4285.read() << (unsigned short)sext_ln581_1_fu_2733_p1.read().to_uint();
}

void attention::thread_shl_ln604_2_fu_2937_p2() {
    shl_ln604_2_fu_2937_p2 = (!sext_ln581_2_fu_2892_p1.read().is_01())? sc_lv<32>(): trunc_ln583_2_reg_4325.read() << (unsigned short)sext_ln581_2_fu_2892_p1.read().to_uint();
}

void attention::thread_shl_ln604_3_fu_3214_p2() {
    shl_ln604_3_fu_3214_p2 = (!sext_ln581_3_fu_3169_p1.read().is_01())? sc_lv<32>(): trunc_ln583_3_reg_4375.read() << (unsigned short)sext_ln581_3_fu_3169_p1.read().to_uint();
}

void attention::thread_shl_ln604_fu_2383_p2() {
    shl_ln604_fu_2383_p2 = (!sext_ln581_fu_2338_p1.read().is_01())? sc_lv<32>(): trunc_ln583_reg_4240.read() << (unsigned short)sext_ln581_fu_2338_p1.read().to_uint();
}

void attention::thread_shl_ln691_1_fu_4064_p3() {
    shl_ln691_1_fu_4064_p3 = esl_concat<4,5>(trunc_ln691_fu_4048_p1.read(), ap_const_lv5_0);
}

void attention::thread_shl_ln_fu_4052_p3() {
    shl_ln_fu_4052_p3 = esl_concat<4,7>(trunc_ln691_fu_4048_p1.read(), ap_const_lv7_0);
}

void attention::thread_softmax_attn_weights_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read())) {
        softmax_attn_weights_address0 =  (sc_lv<7>) (sext_ln667_fu_3924_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state67.read())) {
        softmax_attn_weights_address0 = grp_GEMM_3D_float2_fu_2085_v252_0_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state64.read())) {
        softmax_attn_weights_address0 = grp_softmax_fu_2011_v226_0_address0.read();
    } else {
        softmax_attn_weights_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void attention::thread_softmax_attn_weights_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read())) {
        softmax_attn_weights_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state67.read())) {
        softmax_attn_weights_ce0 = grp_GEMM_3D_float2_fu_2085_v252_0_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state64.read())) {
        softmax_attn_weights_ce0 = grp_softmax_fu_2011_v226_0_ce0.read();
    } else {
        softmax_attn_weights_ce0 = ap_const_logic_0;
    }
}

void attention::thread_softmax_attn_weights_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read())) {
        softmax_attn_weights_d0 = ap_const_lv32_0;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state64.read())) {
        softmax_attn_weights_d0 = grp_softmax_fu_2011_v226_0_d0.read();
    } else {
        softmax_attn_weights_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void attention::thread_softmax_attn_weights_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln666_fu_3903_p2.read()))) {
        softmax_attn_weights_we0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state64.read())) {
        softmax_attn_weights_we0 = grp_softmax_fu_2011_v226_0_we0.read();
    } else {
        softmax_attn_weights_we0 = ap_const_logic_0;
    }
}

void attention::thread_sub_ln581_1_fu_2581_p2() {
    sub_ln581_1_fu_2581_p2 = (!ap_const_lv12_14.is_01() || !F2_1_fu_2563_p2.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_14) - sc_biguint<12>(F2_1_fu_2563_p2.read()));
}

void attention::thread_sub_ln581_2_fu_2699_p2() {
    sub_ln581_2_fu_2699_p2 = (!ap_const_lv12_14.is_01() || !F2_2_fu_2681_p2.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_14) - sc_biguint<12>(F2_2_fu_2681_p2.read()));
}

void attention::thread_sub_ln581_3_fu_3135_p2() {
    sub_ln581_3_fu_3135_p2 = (!ap_const_lv12_14.is_01() || !F2_3_fu_3117_p2.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_14) - sc_biguint<12>(F2_3_fu_3117_p2.read()));
}

void attention::thread_sub_ln581_fu_2304_p2() {
    sub_ln581_fu_2304_p2 = (!ap_const_lv12_14.is_01() || !F2_fu_2286_p2.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_14) - sc_biguint<12>(F2_fu_2286_p2.read()));
}

void attention::thread_sub_ln585_fu_3360_p2() {
    sub_ln585_fu_3360_p2 = (!tmp_28_fu_3340_p3.read().is_01() || !zext_ln585_fu_3356_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(tmp_28_fu_3340_p3.read()) - sc_biguint<12>(zext_ln585_fu_3356_p1.read()));
}

void attention::thread_sub_ln593_fu_3424_p2() {
    sub_ln593_fu_3424_p2 = (!tmp_30_fu_3404_p3.read().is_01() || !zext_ln593_fu_3420_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(tmp_30_fu_3404_p3.read()) - sc_biguint<12>(zext_ln593_fu_3420_p1.read()));
}

void attention::thread_sub_ln602_1_fu_3543_p2() {
    sub_ln602_1_fu_3543_p2 = (!p_shl8_cast_fu_3527_p3.read().is_01() || !p_shl9_cast_fu_3535_p3.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_shl8_cast_fu_3527_p3.read()) - sc_biguint<15>(p_shl9_cast_fu_3535_p3.read()));
}

void attention::thread_sub_ln602_fu_3492_p2() {
    sub_ln602_fu_3492_p2 = (!zext_ln602_fu_3476_p1.read().is_01() || !zext_ln602_1_fu_3488_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln602_fu_3476_p1.read()) - sc_biguint<9>(zext_ln602_1_fu_3488_p1.read()));
}

void attention::thread_sub_ln610_1_fu_3662_p2() {
    sub_ln610_1_fu_3662_p2 = (!p_shl_cast_fu_3646_p3.read().is_01() || !p_shl2_cast_fu_3654_p3.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_shl_cast_fu_3646_p3.read()) - sc_biguint<15>(p_shl2_cast_fu_3654_p3.read()));
}

void attention::thread_sub_ln610_fu_3611_p2() {
    sub_ln610_fu_3611_p2 = (!zext_ln610_fu_3595_p1.read().is_01() || !zext_ln610_1_fu_3607_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln610_fu_3595_p1.read()) - sc_biguint<9>(zext_ln610_1_fu_3607_p1.read()));
}

void attention::thread_sub_ln629_fu_3726_p2() {
    sub_ln629_fu_3726_p2 = (!tmp_36_fu_3706_p3.read().is_01() || !zext_ln629_fu_3722_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_36_fu_3706_p3.read()) - sc_biguint<8>(zext_ln629_fu_3722_p1.read()));
}

void attention::thread_sub_ln639_fu_3790_p2() {
    sub_ln639_fu_3790_p2 = (!tmp_38_fu_3770_p3.read().is_01() || !zext_ln639_fu_3786_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_38_fu_3770_p3.read()) - sc_biguint<8>(zext_ln639_fu_3786_p1.read()));
}

void attention::thread_sub_ln657_fu_3854_p2() {
    sub_ln657_fu_3854_p2 = (!tmp_40_fu_3834_p3.read().is_01() || !zext_ln657_fu_3850_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_40_fu_3834_p3.read()) - sc_biguint<8>(zext_ln657_fu_3850_p1.read()));
}

void attention::thread_sub_ln667_fu_3897_p2() {
    sub_ln667_fu_3897_p2 = (!tmp_42_fu_3877_p3.read().is_01() || !zext_ln667_fu_3893_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_42_fu_3877_p3.read()) - sc_biguint<8>(zext_ln667_fu_3893_p1.read()));
}

void attention::thread_sub_ln676_fu_3961_p2() {
    sub_ln676_fu_3961_p2 = (!tmp_45_fu_3941_p3.read().is_01() || !zext_ln676_fu_3957_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(tmp_45_fu_3941_p3.read()) - sc_biguint<12>(zext_ln676_fu_3957_p1.read()));
}

void attention::thread_sub_ln690_fu_4042_p2() {
    sub_ln690_fu_4042_p2 = (!tmp_47_fu_4022_p3.read().is_01() || !zext_ln690_fu_4038_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(tmp_47_fu_4022_p3.read()) - sc_biguint<12>(zext_ln690_fu_4038_p1.read()));
}

void attention::thread_sub_ln691_fu_4076_p2() {
    sub_ln691_fu_4076_p2 = (!zext_ln691_1_fu_4060_p1.read().is_01() || !zext_ln691_2_fu_4072_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln691_1_fu_4060_p1.read()) - sc_biguint<12>(zext_ln691_2_fu_4072_p1.read()));
}

void attention::thread_tmp_28_fu_3340_p3() {
    tmp_28_fu_3340_p3 = esl_concat<5,7>(v334_0_reg_1108.read(), ap_const_lv7_0);
}

void attention::thread_tmp_29_fu_3348_p3() {
    tmp_29_fu_3348_p3 = esl_concat<5,5>(v334_0_reg_1108.read(), ap_const_lv5_0);
}

void attention::thread_tmp_30_fu_3404_p3() {
    tmp_30_fu_3404_p3 = esl_concat<5,7>(v338_0_reg_1130.read(), ap_const_lv7_0);
}

void attention::thread_tmp_31_fu_3412_p3() {
    tmp_31_fu_3412_p3 = esl_concat<5,5>(v338_0_reg_1130.read(), ap_const_lv5_0);
}

void attention::thread_tmp_32_fu_3468_p3() {
    tmp_32_fu_3468_p3 = esl_concat<5,3>(v342_0_reg_1152.read(), ap_const_lv3_0);
}

void attention::thread_tmp_33_fu_3480_p3() {
    tmp_33_fu_3480_p3 = esl_concat<5,1>(v342_0_reg_1152.read(), ap_const_lv1_0);
}

void attention::thread_tmp_34_fu_3587_p3() {
    tmp_34_fu_3587_p3 = esl_concat<5,3>(v346_0_reg_1185.read(), ap_const_lv3_0);
}

void attention::thread_tmp_35_fu_3599_p3() {
    tmp_35_fu_3599_p3 = esl_concat<5,1>(v346_0_reg_1185.read(), ap_const_lv1_0);
}

void attention::thread_tmp_36_fu_3706_p3() {
    tmp_36_fu_3706_p3 = esl_concat<5,3>(v354_0_reg_1218.read(), ap_const_lv3_0);
}

void attention::thread_tmp_37_fu_3714_p3() {
    tmp_37_fu_3714_p3 = esl_concat<5,1>(v354_0_reg_1218.read(), ap_const_lv1_0);
}

void attention::thread_tmp_38_fu_3770_p3() {
    tmp_38_fu_3770_p3 = esl_concat<5,3>(i11_0_reg_1240.read(), ap_const_lv3_0);
}

void attention::thread_tmp_39_fu_3778_p3() {
    tmp_39_fu_3778_p3 = esl_concat<5,1>(i11_0_reg_1240.read(), ap_const_lv1_0);
}

void attention::thread_tmp_40_fu_3834_p3() {
    tmp_40_fu_3834_p3 = esl_concat<5,3>(h6_0_reg_1262.read(), ap_const_lv3_0);
}

void attention::thread_tmp_41_fu_3842_p3() {
    tmp_41_fu_3842_p3 = esl_concat<5,1>(h6_0_reg_1262.read(), ap_const_lv1_0);
}

void attention::thread_tmp_42_fu_3877_p3() {
    tmp_42_fu_3877_p3 = esl_concat<5,3>(v374_0_reg_1273.read(), ap_const_lv3_0);
}

void attention::thread_tmp_44_fu_3885_p3() {
    tmp_44_fu_3885_p3 = esl_concat<5,1>(v374_0_reg_1273.read(), ap_const_lv1_0);
}

void attention::thread_tmp_45_fu_3941_p3() {
    tmp_45_fu_3941_p3 = esl_concat<5,7>(v378_0_reg_1295.read(), ap_const_lv7_0);
}

void attention::thread_tmp_46_fu_3949_p3() {
    tmp_46_fu_3949_p3 = esl_concat<5,5>(v378_0_reg_1295.read(), ap_const_lv5_0);
}

void attention::thread_tmp_47_fu_4022_p3() {
    tmp_47_fu_4022_p3 = esl_concat<5,7>(h7_0_0_reg_1328.read(), ap_const_lv7_0);
}

void attention::thread_tmp_48_fu_4030_p3() {
    tmp_48_fu_4030_p3 = esl_concat<5,5>(h7_0_0_reg_1328.read(), ap_const_lv5_0);
}

void attention::thread_tmp_52_fu_2367_p3() {
    tmp_52_fu_2367_p3 = bitcast_ln696_fu_2364_p1.read().range(31, 31);
}

void attention::thread_tmp_57_fu_2762_p3() {
    tmp_57_fu_2762_p3 = bitcast_ln696_3_fu_2759_p1.read().range(31, 31);
}

void attention::thread_tmp_70_fu_2921_p3() {
    tmp_70_fu_2921_p3 = bitcast_ln696_5_fu_2918_p1.read().range(31, 31);
}

void attention::thread_tmp_73_fu_3198_p3() {
    tmp_73_fu_3198_p3 = bitcast_ln696_7_fu_3195_p1.read().range(31, 31);
}

void attention::thread_tmp_8_fu_2649_p3() {
    tmp_8_fu_2649_p3 = esl_concat<1,52>(ap_const_lv1_1, trunc_ln565_2_fu_2645_p1.read());
}

void attention::thread_tmp_9_fu_3085_p3() {
    tmp_9_fu_3085_p3 = esl_concat<1,52>(ap_const_lv1_1, trunc_ln565_3_fu_3081_p1.read());
}

void attention::thread_tmp_fu_2254_p3() {
    tmp_fu_2254_p3 = esl_concat<1,52>(ap_const_lv1_1, trunc_ln565_fu_2250_p1.read());
}

void attention::thread_tmp_s_fu_2531_p3() {
    tmp_s_fu_2531_p3 = esl_concat<1,52>(ap_const_lv1_1, trunc_ln565_1_fu_2527_p1.read());
}

void attention::thread_trunc_ln556_1_fu_2501_p1() {
    trunc_ln556_1_fu_2501_p1 = ireg_V_1_fu_2497_p1.read().range(63-1, 0);
}

void attention::thread_trunc_ln556_2_fu_2619_p1() {
    trunc_ln556_2_fu_2619_p1 = ireg_V_2_fu_2615_p1.read().range(63-1, 0);
}

void attention::thread_trunc_ln556_3_fu_3055_p1() {
    trunc_ln556_3_fu_3055_p1 = ireg_V_3_fu_3051_p1.read().range(63-1, 0);
}

void attention::thread_trunc_ln556_fu_2224_p1() {
    trunc_ln556_fu_2224_p1 = ireg_V_fu_2220_p1.read().range(63-1, 0);
}

void attention::thread_trunc_ln565_1_fu_2527_p1() {
    trunc_ln565_1_fu_2527_p1 = ireg_V_1_fu_2497_p1.read().range(52-1, 0);
}

void attention::thread_trunc_ln565_2_fu_2645_p1() {
    trunc_ln565_2_fu_2645_p1 = ireg_V_2_fu_2615_p1.read().range(52-1, 0);
}

void attention::thread_trunc_ln565_3_fu_3081_p1() {
    trunc_ln565_3_fu_3081_p1 = ireg_V_3_fu_3051_p1.read().range(52-1, 0);
}

void attention::thread_trunc_ln565_fu_2250_p1() {
    trunc_ln565_fu_2250_p1 = ireg_V_fu_2220_p1.read().range(52-1, 0);
}

void attention::thread_trunc_ln583_1_fu_2601_p1() {
    trunc_ln583_1_fu_2601_p1 = man_V_5_fu_2549_p3.read().range(32-1, 0);
}

void attention::thread_trunc_ln583_2_fu_2719_p1() {
    trunc_ln583_2_fu_2719_p1 = man_V_8_fu_2667_p3.read().range(32-1, 0);
}

void attention::thread_trunc_ln583_3_fu_3155_p1() {
    trunc_ln583_3_fu_3155_p1 = man_V_11_fu_3103_p3.read().range(32-1, 0);
}

void attention::thread_trunc_ln583_fu_2324_p1() {
    trunc_ln583_fu_2324_p1 = man_V_2_fu_2272_p3.read().range(32-1, 0);
}

void attention::thread_trunc_ln586_1_fu_2755_p1() {
    trunc_ln586_1_fu_2755_p1 = ashr_ln586_1_fu_2750_p2.read().range(32-1, 0);
}

void attention::thread_trunc_ln586_2_fu_2914_p1() {
    trunc_ln586_2_fu_2914_p1 = ashr_ln586_2_fu_2909_p2.read().range(32-1, 0);
}

void attention::thread_trunc_ln586_3_fu_3191_p1() {
    trunc_ln586_3_fu_3191_p1 = ashr_ln586_3_fu_3186_p2.read().range(32-1, 0);
}

void attention::thread_trunc_ln586_fu_2360_p1() {
    trunc_ln586_fu_2360_p1 = ashr_ln586_fu_2355_p2.read().range(32-1, 0);
}

void attention::thread_trunc_ln602_fu_3523_p1() {
    trunc_ln602_fu_3523_p1 = add_ln602_fu_3518_p2.read().range(8-1, 0);
}

void attention::thread_trunc_ln610_fu_3642_p1() {
    trunc_ln610_fu_3642_p1 = add_ln610_fu_3637_p2.read().range(8-1, 0);
}

void attention::thread_trunc_ln691_fu_4048_p1() {
    trunc_ln691_fu_4048_p1 = h7_0_0_reg_1328.read().range(4-1, 0);
}

void attention::thread_updated_k_cache_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state24.read())) {
        updated_k_cache_address0 =  (sc_lv<14>) (zext_ln602_4_fu_3570_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state30.read())) {
        updated_k_cache_address0 = grp_transpose_last_two_d_fu_2102_v204_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state28.read())) {
        updated_k_cache_address0 = grp_cache_update_fu_2092_v195_address0.read();
    } else {
        updated_k_cache_address0 =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
    }
}

void attention::thread_updated_k_cache_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state24.read())) {
        updated_k_cache_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state30.read())) {
        updated_k_cache_ce0 = grp_transpose_last_two_d_fu_2102_v204_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state28.read())) {
        updated_k_cache_ce0 = grp_cache_update_fu_2092_v195_ce0.read();
    } else {
        updated_k_cache_ce0 = ap_const_logic_0;
    }
}

void attention::thread_updated_k_cache_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state24.read())) {
        updated_k_cache_d0 = ap_const_lv32_0;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state28.read())) {
        updated_k_cache_d0 = grp_cache_update_fu_2092_v195_d0.read();
    } else {
        updated_k_cache_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void attention::thread_updated_k_cache_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state24.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln601_fu_3549_p2.read()))) {
        updated_k_cache_we0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state28.read())) {
        updated_k_cache_we0 = grp_cache_update_fu_2092_v195_we0.read();
    } else {
        updated_k_cache_we0 = ap_const_logic_0;
    }
}

void attention::thread_updated_v_cache_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read())) {
        updated_v_cache_address0 =  (sc_lv<14>) (zext_ln610_4_fu_3689_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state30.read())) {
        updated_v_cache_address0 = grp_cache_update_fu_2092_v195_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state67.read())) {
        updated_v_cache_address0 = grp_GEMM_3D_float2_fu_2085_v253_address0.read();
    } else {
        updated_v_cache_address0 =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
    }
}

void attention::thread_updated_v_cache_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read())) {
        updated_v_cache_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state30.read())) {
        updated_v_cache_ce0 = grp_cache_update_fu_2092_v195_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state67.read())) {
        updated_v_cache_ce0 = grp_GEMM_3D_float2_fu_2085_v253_ce0.read();
    } else {
        updated_v_cache_ce0 = ap_const_logic_0;
    }
}

void attention::thread_updated_v_cache_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read())) {
        updated_v_cache_d0 = ap_const_lv32_0;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state30.read())) {
        updated_v_cache_d0 = grp_cache_update_fu_2092_v195_d0.read();
    } else {
        updated_v_cache_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void attention::thread_updated_v_cache_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln609_fu_3668_p2.read()))) {
        updated_v_cache_we0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state30.read())) {
        updated_v_cache_we0 = grp_cache_update_fu_2092_v195_we0.read();
    } else {
        updated_v_cache_we0 = ap_const_logic_0;
    }
}

void attention::thread_v264_address0() {
    v264_address0 = grp_rms_norm_fu_2031_v0_address0.read();
}

void attention::thread_v264_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        v264_ce0 = grp_rms_norm_fu_2031_v0_ce0.read();
    } else {
        v264_ce0 = ap_const_logic_0;
    }
}

void attention::thread_v265_0_address0() {
    v265_0_address0 = grp_linear_forward_no_mu_fu_1372_v81_0_address0.read();
}

void attention::thread_v265_0_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        v265_0_ce0 = grp_linear_forward_no_mu_fu_1372_v81_0_ce0.read();
    } else {
        v265_0_ce0 = ap_const_logic_0;
    }
}

void attention::thread_v265_10_address0() {
    v265_10_address0 = grp_linear_forward_no_mu_fu_1372_v81_10_address0.read();
}

void attention::thread_v265_10_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        v265_10_ce0 = grp_linear_forward_no_mu_fu_1372_v81_10_ce0.read();
    } else {
        v265_10_ce0 = ap_const_logic_0;
    }
}

void attention::thread_v265_11_address0() {
    v265_11_address0 = grp_linear_forward_no_mu_fu_1372_v81_11_address0.read();
}

void attention::thread_v265_11_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        v265_11_ce0 = grp_linear_forward_no_mu_fu_1372_v81_11_ce0.read();
    } else {
        v265_11_ce0 = ap_const_logic_0;
    }
}

void attention::thread_v265_12_address0() {
    v265_12_address0 = grp_linear_forward_no_mu_fu_1372_v81_12_address0.read();
}

void attention::thread_v265_12_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        v265_12_ce0 = grp_linear_forward_no_mu_fu_1372_v81_12_ce0.read();
    } else {
        v265_12_ce0 = ap_const_logic_0;
    }
}

void attention::thread_v265_13_address0() {
    v265_13_address0 = grp_linear_forward_no_mu_fu_1372_v81_13_address0.read();
}

void attention::thread_v265_13_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        v265_13_ce0 = grp_linear_forward_no_mu_fu_1372_v81_13_ce0.read();
    } else {
        v265_13_ce0 = ap_const_logic_0;
    }
}

void attention::thread_v265_14_address0() {
    v265_14_address0 = grp_linear_forward_no_mu_fu_1372_v81_14_address0.read();
}

void attention::thread_v265_14_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        v265_14_ce0 = grp_linear_forward_no_mu_fu_1372_v81_14_ce0.read();
    } else {
        v265_14_ce0 = ap_const_logic_0;
    }
}

void attention::thread_v265_15_address0() {
    v265_15_address0 = grp_linear_forward_no_mu_fu_1372_v81_15_address0.read();
}

void attention::thread_v265_15_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        v265_15_ce0 = grp_linear_forward_no_mu_fu_1372_v81_15_ce0.read();
    } else {
        v265_15_ce0 = ap_const_logic_0;
    }
}

void attention::thread_v265_16_address0() {
    v265_16_address0 = grp_linear_forward_no_mu_fu_1372_v81_16_address0.read();
}

void attention::thread_v265_16_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        v265_16_ce0 = grp_linear_forward_no_mu_fu_1372_v81_16_ce0.read();
    } else {
        v265_16_ce0 = ap_const_logic_0;
    }
}

void attention::thread_v265_17_address0() {
    v265_17_address0 = grp_linear_forward_no_mu_fu_1372_v81_17_address0.read();
}

void attention::thread_v265_17_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        v265_17_ce0 = grp_linear_forward_no_mu_fu_1372_v81_17_ce0.read();
    } else {
        v265_17_ce0 = ap_const_logic_0;
    }
}

void attention::thread_v265_18_address0() {
    v265_18_address0 = grp_linear_forward_no_mu_fu_1372_v81_18_address0.read();
}

void attention::thread_v265_18_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        v265_18_ce0 = grp_linear_forward_no_mu_fu_1372_v81_18_ce0.read();
    } else {
        v265_18_ce0 = ap_const_logic_0;
    }
}

void attention::thread_v265_19_address0() {
    v265_19_address0 = grp_linear_forward_no_mu_fu_1372_v81_19_address0.read();
}

void attention::thread_v265_19_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        v265_19_ce0 = grp_linear_forward_no_mu_fu_1372_v81_19_ce0.read();
    } else {
        v265_19_ce0 = ap_const_logic_0;
    }
}

void attention::thread_v265_1_address0() {
    v265_1_address0 = grp_linear_forward_no_mu_fu_1372_v81_1_address0.read();
}

void attention::thread_v265_1_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        v265_1_ce0 = grp_linear_forward_no_mu_fu_1372_v81_1_ce0.read();
    } else {
        v265_1_ce0 = ap_const_logic_0;
    }
}

void attention::thread_v265_20_address0() {
    v265_20_address0 = grp_linear_forward_no_mu_fu_1372_v81_20_address0.read();
}

void attention::thread_v265_20_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        v265_20_ce0 = grp_linear_forward_no_mu_fu_1372_v81_20_ce0.read();
    } else {
        v265_20_ce0 = ap_const_logic_0;
    }
}

void attention::thread_v265_21_address0() {
    v265_21_address0 = grp_linear_forward_no_mu_fu_1372_v81_21_address0.read();
}

void attention::thread_v265_21_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        v265_21_ce0 = grp_linear_forward_no_mu_fu_1372_v81_21_ce0.read();
    } else {
        v265_21_ce0 = ap_const_logic_0;
    }
}

void attention::thread_v265_22_address0() {
    v265_22_address0 = grp_linear_forward_no_mu_fu_1372_v81_22_address0.read();
}

void attention::thread_v265_22_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        v265_22_ce0 = grp_linear_forward_no_mu_fu_1372_v81_22_ce0.read();
    } else {
        v265_22_ce0 = ap_const_logic_0;
    }
}

void attention::thread_v265_23_address0() {
    v265_23_address0 = grp_linear_forward_no_mu_fu_1372_v81_23_address0.read();
}

void attention::thread_v265_23_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        v265_23_ce0 = grp_linear_forward_no_mu_fu_1372_v81_23_ce0.read();
    } else {
        v265_23_ce0 = ap_const_logic_0;
    }
}

void attention::thread_v265_2_address0() {
    v265_2_address0 = grp_linear_forward_no_mu_fu_1372_v81_2_address0.read();
}

void attention::thread_v265_2_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        v265_2_ce0 = grp_linear_forward_no_mu_fu_1372_v81_2_ce0.read();
    } else {
        v265_2_ce0 = ap_const_logic_0;
    }
}

void attention::thread_v265_3_address0() {
    v265_3_address0 = grp_linear_forward_no_mu_fu_1372_v81_3_address0.read();
}

void attention::thread_v265_3_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        v265_3_ce0 = grp_linear_forward_no_mu_fu_1372_v81_3_ce0.read();
    } else {
        v265_3_ce0 = ap_const_logic_0;
    }
}

void attention::thread_v265_4_address0() {
    v265_4_address0 = grp_linear_forward_no_mu_fu_1372_v81_4_address0.read();
}

void attention::thread_v265_4_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        v265_4_ce0 = grp_linear_forward_no_mu_fu_1372_v81_4_ce0.read();
    } else {
        v265_4_ce0 = ap_const_logic_0;
    }
}

void attention::thread_v265_5_address0() {
    v265_5_address0 = grp_linear_forward_no_mu_fu_1372_v81_5_address0.read();
}

void attention::thread_v265_5_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        v265_5_ce0 = grp_linear_forward_no_mu_fu_1372_v81_5_ce0.read();
    } else {
        v265_5_ce0 = ap_const_logic_0;
    }
}

void attention::thread_v265_6_address0() {
    v265_6_address0 = grp_linear_forward_no_mu_fu_1372_v81_6_address0.read();
}

void attention::thread_v265_6_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        v265_6_ce0 = grp_linear_forward_no_mu_fu_1372_v81_6_ce0.read();
    } else {
        v265_6_ce0 = ap_const_logic_0;
    }
}

void attention::thread_v265_7_address0() {
    v265_7_address0 = grp_linear_forward_no_mu_fu_1372_v81_7_address0.read();
}

void attention::thread_v265_7_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        v265_7_ce0 = grp_linear_forward_no_mu_fu_1372_v81_7_ce0.read();
    } else {
        v265_7_ce0 = ap_const_logic_0;
    }
}

void attention::thread_v265_8_address0() {
    v265_8_address0 = grp_linear_forward_no_mu_fu_1372_v81_8_address0.read();
}

void attention::thread_v265_8_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        v265_8_ce0 = grp_linear_forward_no_mu_fu_1372_v81_8_ce0.read();
    } else {
        v265_8_ce0 = ap_const_logic_0;
    }
}

void attention::thread_v265_9_address0() {
    v265_9_address0 = grp_linear_forward_no_mu_fu_1372_v81_9_address0.read();
}

void attention::thread_v265_9_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        v265_9_ce0 = grp_linear_forward_no_mu_fu_1372_v81_9_ce0.read();
    } else {
        v265_9_ce0 = ap_const_logic_0;
    }
}

void attention::thread_v267_0_address0() {
    v267_0_address0 = grp_linear_forward_no_mu_fu_1372_v81_0_address0.read();
}

void attention::thread_v267_0_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        v267_0_ce0 = grp_linear_forward_no_mu_fu_1372_v81_0_ce0.read();
    } else {
        v267_0_ce0 = ap_const_logic_0;
    }
}

void attention::thread_v267_10_address0() {
    v267_10_address0 = grp_linear_forward_no_mu_fu_1372_v81_10_address0.read();
}

void attention::thread_v267_10_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        v267_10_ce0 = grp_linear_forward_no_mu_fu_1372_v81_10_ce0.read();
    } else {
        v267_10_ce0 = ap_const_logic_0;
    }
}

void attention::thread_v267_11_address0() {
    v267_11_address0 = grp_linear_forward_no_mu_fu_1372_v81_11_address0.read();
}

void attention::thread_v267_11_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        v267_11_ce0 = grp_linear_forward_no_mu_fu_1372_v81_11_ce0.read();
    } else {
        v267_11_ce0 = ap_const_logic_0;
    }
}

void attention::thread_v267_12_address0() {
    v267_12_address0 = grp_linear_forward_no_mu_fu_1372_v81_12_address0.read();
}

void attention::thread_v267_12_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        v267_12_ce0 = grp_linear_forward_no_mu_fu_1372_v81_12_ce0.read();
    } else {
        v267_12_ce0 = ap_const_logic_0;
    }
}

void attention::thread_v267_13_address0() {
    v267_13_address0 = grp_linear_forward_no_mu_fu_1372_v81_13_address0.read();
}

void attention::thread_v267_13_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        v267_13_ce0 = grp_linear_forward_no_mu_fu_1372_v81_13_ce0.read();
    } else {
        v267_13_ce0 = ap_const_logic_0;
    }
}

void attention::thread_v267_14_address0() {
    v267_14_address0 = grp_linear_forward_no_mu_fu_1372_v81_14_address0.read();
}

void attention::thread_v267_14_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        v267_14_ce0 = grp_linear_forward_no_mu_fu_1372_v81_14_ce0.read();
    } else {
        v267_14_ce0 = ap_const_logic_0;
    }
}

void attention::thread_v267_15_address0() {
    v267_15_address0 = grp_linear_forward_no_mu_fu_1372_v81_15_address0.read();
}

void attention::thread_v267_15_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        v267_15_ce0 = grp_linear_forward_no_mu_fu_1372_v81_15_ce0.read();
    } else {
        v267_15_ce0 = ap_const_logic_0;
    }
}

void attention::thread_v267_16_address0() {
    v267_16_address0 = grp_linear_forward_no_mu_fu_1372_v81_16_address0.read();
}

void attention::thread_v267_16_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        v267_16_ce0 = grp_linear_forward_no_mu_fu_1372_v81_16_ce0.read();
    } else {
        v267_16_ce0 = ap_const_logic_0;
    }
}

void attention::thread_v267_17_address0() {
    v267_17_address0 = grp_linear_forward_no_mu_fu_1372_v81_17_address0.read();
}

void attention::thread_v267_17_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        v267_17_ce0 = grp_linear_forward_no_mu_fu_1372_v81_17_ce0.read();
    } else {
        v267_17_ce0 = ap_const_logic_0;
    }
}

void attention::thread_v267_18_address0() {
    v267_18_address0 = grp_linear_forward_no_mu_fu_1372_v81_18_address0.read();
}

void attention::thread_v267_18_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        v267_18_ce0 = grp_linear_forward_no_mu_fu_1372_v81_18_ce0.read();
    } else {
        v267_18_ce0 = ap_const_logic_0;
    }
}

void attention::thread_v267_19_address0() {
    v267_19_address0 = grp_linear_forward_no_mu_fu_1372_v81_19_address0.read();
}

void attention::thread_v267_19_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        v267_19_ce0 = grp_linear_forward_no_mu_fu_1372_v81_19_ce0.read();
    } else {
        v267_19_ce0 = ap_const_logic_0;
    }
}

void attention::thread_v267_1_address0() {
    v267_1_address0 = grp_linear_forward_no_mu_fu_1372_v81_1_address0.read();
}

void attention::thread_v267_1_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        v267_1_ce0 = grp_linear_forward_no_mu_fu_1372_v81_1_ce0.read();
    } else {
        v267_1_ce0 = ap_const_logic_0;
    }
}

void attention::thread_v267_20_address0() {
    v267_20_address0 = grp_linear_forward_no_mu_fu_1372_v81_20_address0.read();
}

void attention::thread_v267_20_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        v267_20_ce0 = grp_linear_forward_no_mu_fu_1372_v81_20_ce0.read();
    } else {
        v267_20_ce0 = ap_const_logic_0;
    }
}

void attention::thread_v267_21_address0() {
    v267_21_address0 = grp_linear_forward_no_mu_fu_1372_v81_21_address0.read();
}

void attention::thread_v267_21_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        v267_21_ce0 = grp_linear_forward_no_mu_fu_1372_v81_21_ce0.read();
    } else {
        v267_21_ce0 = ap_const_logic_0;
    }
}

void attention::thread_v267_22_address0() {
    v267_22_address0 = grp_linear_forward_no_mu_fu_1372_v81_22_address0.read();
}

void attention::thread_v267_22_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        v267_22_ce0 = grp_linear_forward_no_mu_fu_1372_v81_22_ce0.read();
    } else {
        v267_22_ce0 = ap_const_logic_0;
    }
}

void attention::thread_v267_23_address0() {
    v267_23_address0 = grp_linear_forward_no_mu_fu_1372_v81_23_address0.read();
}

void attention::thread_v267_23_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        v267_23_ce0 = grp_linear_forward_no_mu_fu_1372_v81_23_ce0.read();
    } else {
        v267_23_ce0 = ap_const_logic_0;
    }
}

void attention::thread_v267_2_address0() {
    v267_2_address0 = grp_linear_forward_no_mu_fu_1372_v81_2_address0.read();
}

void attention::thread_v267_2_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        v267_2_ce0 = grp_linear_forward_no_mu_fu_1372_v81_2_ce0.read();
    } else {
        v267_2_ce0 = ap_const_logic_0;
    }
}

void attention::thread_v267_3_address0() {
    v267_3_address0 = grp_linear_forward_no_mu_fu_1372_v81_3_address0.read();
}

void attention::thread_v267_3_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        v267_3_ce0 = grp_linear_forward_no_mu_fu_1372_v81_3_ce0.read();
    } else {
        v267_3_ce0 = ap_const_logic_0;
    }
}

void attention::thread_v267_4_address0() {
    v267_4_address0 = grp_linear_forward_no_mu_fu_1372_v81_4_address0.read();
}

void attention::thread_v267_4_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        v267_4_ce0 = grp_linear_forward_no_mu_fu_1372_v81_4_ce0.read();
    } else {
        v267_4_ce0 = ap_const_logic_0;
    }
}

void attention::thread_v267_5_address0() {
    v267_5_address0 = grp_linear_forward_no_mu_fu_1372_v81_5_address0.read();
}

void attention::thread_v267_5_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        v267_5_ce0 = grp_linear_forward_no_mu_fu_1372_v81_5_ce0.read();
    } else {
        v267_5_ce0 = ap_const_logic_0;
    }
}

void attention::thread_v267_6_address0() {
    v267_6_address0 = grp_linear_forward_no_mu_fu_1372_v81_6_address0.read();
}

void attention::thread_v267_6_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        v267_6_ce0 = grp_linear_forward_no_mu_fu_1372_v81_6_ce0.read();
    } else {
        v267_6_ce0 = ap_const_logic_0;
    }
}

void attention::thread_v267_7_address0() {
    v267_7_address0 = grp_linear_forward_no_mu_fu_1372_v81_7_address0.read();
}

void attention::thread_v267_7_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        v267_7_ce0 = grp_linear_forward_no_mu_fu_1372_v81_7_ce0.read();
    } else {
        v267_7_ce0 = ap_const_logic_0;
    }
}

void attention::thread_v267_8_address0() {
    v267_8_address0 = grp_linear_forward_no_mu_fu_1372_v81_8_address0.read();
}

void attention::thread_v267_8_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        v267_8_ce0 = grp_linear_forward_no_mu_fu_1372_v81_8_ce0.read();
    } else {
        v267_8_ce0 = ap_const_logic_0;
    }
}

void attention::thread_v267_9_address0() {
    v267_9_address0 = grp_linear_forward_no_mu_fu_1372_v81_9_address0.read();
}

void attention::thread_v267_9_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        v267_9_ce0 = grp_linear_forward_no_mu_fu_1372_v81_9_ce0.read();
    } else {
        v267_9_ce0 = ap_const_logic_0;
    }
}

void attention::thread_v269_0_address0() {
    v269_0_address0 = grp_linear_forward_no_mu_fu_1643_v81_0_address0.read();
}

void attention::thread_v269_0_ce0() {
    v269_0_ce0 = grp_linear_forward_no_mu_fu_1643_v81_0_ce0.read();
}

void attention::thread_v269_10_address0() {
    v269_10_address0 = grp_linear_forward_no_mu_fu_1643_v81_10_address0.read();
}

void attention::thread_v269_10_ce0() {
    v269_10_ce0 = grp_linear_forward_no_mu_fu_1643_v81_10_ce0.read();
}

void attention::thread_v269_11_address0() {
    v269_11_address0 = grp_linear_forward_no_mu_fu_1643_v81_11_address0.read();
}

void attention::thread_v269_11_ce0() {
    v269_11_ce0 = grp_linear_forward_no_mu_fu_1643_v81_11_ce0.read();
}

void attention::thread_v269_12_address0() {
    v269_12_address0 = grp_linear_forward_no_mu_fu_1643_v81_12_address0.read();
}

void attention::thread_v269_12_ce0() {
    v269_12_ce0 = grp_linear_forward_no_mu_fu_1643_v81_12_ce0.read();
}

void attention::thread_v269_13_address0() {
    v269_13_address0 = grp_linear_forward_no_mu_fu_1643_v81_13_address0.read();
}

void attention::thread_v269_13_ce0() {
    v269_13_ce0 = grp_linear_forward_no_mu_fu_1643_v81_13_ce0.read();
}

void attention::thread_v269_14_address0() {
    v269_14_address0 = grp_linear_forward_no_mu_fu_1643_v81_14_address0.read();
}

void attention::thread_v269_14_ce0() {
    v269_14_ce0 = grp_linear_forward_no_mu_fu_1643_v81_14_ce0.read();
}

void attention::thread_v269_15_address0() {
    v269_15_address0 = grp_linear_forward_no_mu_fu_1643_v81_15_address0.read();
}

void attention::thread_v269_15_ce0() {
    v269_15_ce0 = grp_linear_forward_no_mu_fu_1643_v81_15_ce0.read();
}

void attention::thread_v269_16_address0() {
    v269_16_address0 = grp_linear_forward_no_mu_fu_1643_v81_16_address0.read();
}

void attention::thread_v269_16_ce0() {
    v269_16_ce0 = grp_linear_forward_no_mu_fu_1643_v81_16_ce0.read();
}

void attention::thread_v269_17_address0() {
    v269_17_address0 = grp_linear_forward_no_mu_fu_1643_v81_17_address0.read();
}

void attention::thread_v269_17_ce0() {
    v269_17_ce0 = grp_linear_forward_no_mu_fu_1643_v81_17_ce0.read();
}

void attention::thread_v269_18_address0() {
    v269_18_address0 = grp_linear_forward_no_mu_fu_1643_v81_18_address0.read();
}

void attention::thread_v269_18_ce0() {
    v269_18_ce0 = grp_linear_forward_no_mu_fu_1643_v81_18_ce0.read();
}

void attention::thread_v269_19_address0() {
    v269_19_address0 = grp_linear_forward_no_mu_fu_1643_v81_19_address0.read();
}

void attention::thread_v269_19_ce0() {
    v269_19_ce0 = grp_linear_forward_no_mu_fu_1643_v81_19_ce0.read();
}

void attention::thread_v269_1_address0() {
    v269_1_address0 = grp_linear_forward_no_mu_fu_1643_v81_1_address0.read();
}

void attention::thread_v269_1_ce0() {
    v269_1_ce0 = grp_linear_forward_no_mu_fu_1643_v81_1_ce0.read();
}

void attention::thread_v269_20_address0() {
    v269_20_address0 = grp_linear_forward_no_mu_fu_1643_v81_20_address0.read();
}

void attention::thread_v269_20_ce0() {
    v269_20_ce0 = grp_linear_forward_no_mu_fu_1643_v81_20_ce0.read();
}

void attention::thread_v269_21_address0() {
    v269_21_address0 = grp_linear_forward_no_mu_fu_1643_v81_21_address0.read();
}

void attention::thread_v269_21_ce0() {
    v269_21_ce0 = grp_linear_forward_no_mu_fu_1643_v81_21_ce0.read();
}

void attention::thread_v269_22_address0() {
    v269_22_address0 = grp_linear_forward_no_mu_fu_1643_v81_22_address0.read();
}

void attention::thread_v269_22_ce0() {
    v269_22_ce0 = grp_linear_forward_no_mu_fu_1643_v81_22_ce0.read();
}

void attention::thread_v269_23_address0() {
    v269_23_address0 = grp_linear_forward_no_mu_fu_1643_v81_23_address0.read();
}

void attention::thread_v269_23_ce0() {
    v269_23_ce0 = grp_linear_forward_no_mu_fu_1643_v81_23_ce0.read();
}

void attention::thread_v269_2_address0() {
    v269_2_address0 = grp_linear_forward_no_mu_fu_1643_v81_2_address0.read();
}

void attention::thread_v269_2_ce0() {
    v269_2_ce0 = grp_linear_forward_no_mu_fu_1643_v81_2_ce0.read();
}

void attention::thread_v269_3_address0() {
    v269_3_address0 = grp_linear_forward_no_mu_fu_1643_v81_3_address0.read();
}

void attention::thread_v269_3_ce0() {
    v269_3_ce0 = grp_linear_forward_no_mu_fu_1643_v81_3_ce0.read();
}

void attention::thread_v269_4_address0() {
    v269_4_address0 = grp_linear_forward_no_mu_fu_1643_v81_4_address0.read();
}

void attention::thread_v269_4_ce0() {
    v269_4_ce0 = grp_linear_forward_no_mu_fu_1643_v81_4_ce0.read();
}

void attention::thread_v269_5_address0() {
    v269_5_address0 = grp_linear_forward_no_mu_fu_1643_v81_5_address0.read();
}

void attention::thread_v269_5_ce0() {
    v269_5_ce0 = grp_linear_forward_no_mu_fu_1643_v81_5_ce0.read();
}

void attention::thread_v269_6_address0() {
    v269_6_address0 = grp_linear_forward_no_mu_fu_1643_v81_6_address0.read();
}

void attention::thread_v269_6_ce0() {
    v269_6_ce0 = grp_linear_forward_no_mu_fu_1643_v81_6_ce0.read();
}

void attention::thread_v269_7_address0() {
    v269_7_address0 = grp_linear_forward_no_mu_fu_1643_v81_7_address0.read();
}

void attention::thread_v269_7_ce0() {
    v269_7_ce0 = grp_linear_forward_no_mu_fu_1643_v81_7_ce0.read();
}

void attention::thread_v269_8_address0() {
    v269_8_address0 = grp_linear_forward_no_mu_fu_1643_v81_8_address0.read();
}

void attention::thread_v269_8_ce0() {
    v269_8_ce0 = grp_linear_forward_no_mu_fu_1643_v81_8_ce0.read();
}

void attention::thread_v269_9_address0() {
    v269_9_address0 = grp_linear_forward_no_mu_fu_1643_v81_9_address0.read();
}

void attention::thread_v269_9_ce0() {
    v269_9_ce0 = grp_linear_forward_no_mu_fu_1643_v81_9_ce0.read();
}

void attention::thread_v271_0_address0() {
    v271_0_address0 = grp_linear_forward_no_mu_fu_1372_v81_0_address0.read();
}

void attention::thread_v271_0_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state77.read())) {
        v271_0_ce0 = grp_linear_forward_no_mu_fu_1372_v81_0_ce0.read();
    } else {
        v271_0_ce0 = ap_const_logic_0;
    }
}

void attention::thread_v271_10_address0() {
    v271_10_address0 = grp_linear_forward_no_mu_fu_1372_v81_10_address0.read();
}

void attention::thread_v271_10_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state77.read())) {
        v271_10_ce0 = grp_linear_forward_no_mu_fu_1372_v81_10_ce0.read();
    } else {
        v271_10_ce0 = ap_const_logic_0;
    }
}

void attention::thread_v271_11_address0() {
    v271_11_address0 = grp_linear_forward_no_mu_fu_1372_v81_11_address0.read();
}

void attention::thread_v271_11_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state77.read())) {
        v271_11_ce0 = grp_linear_forward_no_mu_fu_1372_v81_11_ce0.read();
    } else {
        v271_11_ce0 = ap_const_logic_0;
    }
}

void attention::thread_v271_12_address0() {
    v271_12_address0 = grp_linear_forward_no_mu_fu_1372_v81_12_address0.read();
}

void attention::thread_v271_12_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state77.read())) {
        v271_12_ce0 = grp_linear_forward_no_mu_fu_1372_v81_12_ce0.read();
    } else {
        v271_12_ce0 = ap_const_logic_0;
    }
}

void attention::thread_v271_13_address0() {
    v271_13_address0 = grp_linear_forward_no_mu_fu_1372_v81_13_address0.read();
}

void attention::thread_v271_13_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state77.read())) {
        v271_13_ce0 = grp_linear_forward_no_mu_fu_1372_v81_13_ce0.read();
    } else {
        v271_13_ce0 = ap_const_logic_0;
    }
}

void attention::thread_v271_14_address0() {
    v271_14_address0 = grp_linear_forward_no_mu_fu_1372_v81_14_address0.read();
}

void attention::thread_v271_14_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state77.read())) {
        v271_14_ce0 = grp_linear_forward_no_mu_fu_1372_v81_14_ce0.read();
    } else {
        v271_14_ce0 = ap_const_logic_0;
    }
}

void attention::thread_v271_15_address0() {
    v271_15_address0 = grp_linear_forward_no_mu_fu_1372_v81_15_address0.read();
}

void attention::thread_v271_15_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state77.read())) {
        v271_15_ce0 = grp_linear_forward_no_mu_fu_1372_v81_15_ce0.read();
    } else {
        v271_15_ce0 = ap_const_logic_0;
    }
}

void attention::thread_v271_16_address0() {
    v271_16_address0 = grp_linear_forward_no_mu_fu_1372_v81_16_address0.read();
}

void attention::thread_v271_16_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state77.read())) {
        v271_16_ce0 = grp_linear_forward_no_mu_fu_1372_v81_16_ce0.read();
    } else {
        v271_16_ce0 = ap_const_logic_0;
    }
}

void attention::thread_v271_17_address0() {
    v271_17_address0 = grp_linear_forward_no_mu_fu_1372_v81_17_address0.read();
}

void attention::thread_v271_17_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state77.read())) {
        v271_17_ce0 = grp_linear_forward_no_mu_fu_1372_v81_17_ce0.read();
    } else {
        v271_17_ce0 = ap_const_logic_0;
    }
}

void attention::thread_v271_18_address0() {
    v271_18_address0 = grp_linear_forward_no_mu_fu_1372_v81_18_address0.read();
}

void attention::thread_v271_18_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state77.read())) {
        v271_18_ce0 = grp_linear_forward_no_mu_fu_1372_v81_18_ce0.read();
    } else {
        v271_18_ce0 = ap_const_logic_0;
    }
}

void attention::thread_v271_19_address0() {
    v271_19_address0 = grp_linear_forward_no_mu_fu_1372_v81_19_address0.read();
}

void attention::thread_v271_19_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state77.read())) {
        v271_19_ce0 = grp_linear_forward_no_mu_fu_1372_v81_19_ce0.read();
    } else {
        v271_19_ce0 = ap_const_logic_0;
    }
}

void attention::thread_v271_1_address0() {
    v271_1_address0 = grp_linear_forward_no_mu_fu_1372_v81_1_address0.read();
}

void attention::thread_v271_1_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state77.read())) {
        v271_1_ce0 = grp_linear_forward_no_mu_fu_1372_v81_1_ce0.read();
    } else {
        v271_1_ce0 = ap_const_logic_0;
    }
}

void attention::thread_v271_20_address0() {
    v271_20_address0 = grp_linear_forward_no_mu_fu_1372_v81_20_address0.read();
}

void attention::thread_v271_20_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state77.read())) {
        v271_20_ce0 = grp_linear_forward_no_mu_fu_1372_v81_20_ce0.read();
    } else {
        v271_20_ce0 = ap_const_logic_0;
    }
}

void attention::thread_v271_21_address0() {
    v271_21_address0 = grp_linear_forward_no_mu_fu_1372_v81_21_address0.read();
}

void attention::thread_v271_21_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state77.read())) {
        v271_21_ce0 = grp_linear_forward_no_mu_fu_1372_v81_21_ce0.read();
    } else {
        v271_21_ce0 = ap_const_logic_0;
    }
}

void attention::thread_v271_22_address0() {
    v271_22_address0 = grp_linear_forward_no_mu_fu_1372_v81_22_address0.read();
}

void attention::thread_v271_22_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state77.read())) {
        v271_22_ce0 = grp_linear_forward_no_mu_fu_1372_v81_22_ce0.read();
    } else {
        v271_22_ce0 = ap_const_logic_0;
    }
}

}


#include "quantize_activation.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void quantize_activation::thread_ap_clk_no_reset_() {
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_CS_fsm = ap_ST_fsm_state1;
    } else {
        ap_CS_fsm = ap_NS_fsm.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        j_0_0_reg_4134 = add_ln87_reg_5296.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        j_0_0_reg_4134 = ap_const_lv11_1;
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read())) {
        ji_0_0_reg_4156 = add_ln95_reg_5345.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state57.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln94_fu_4264_p2.read()))) {
        ji_0_0_reg_4156 = ap_const_lv7_0;
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state58.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln95_fu_4288_p2.read()))) {
        jo_0_0_reg_4145 = add_ln94_reg_5332.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read())) {
        jo_0_0_reg_4145 = ap_const_lv3_0;
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        max_val_V_0_0_reg_4124 = p_Val2_16_fu_4249_p3.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        max_val_V_0_0_reg_4124 = p_Val2_13_reg_5283.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state60.read())) {
        reg_4189 = input_0_V_q1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read())) {
        reg_4189 = input_0_V_q0.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state60.read())) {
        reg_4194 = input_0_V_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read())) {
        reg_4194 = input_0_V_q1.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && esl_seteq<1,1,1>(icmp_ln87_fu_4199_p2.read(), ap_const_lv1_0))) {
        add_ln87_reg_5296 = add_ln87_fu_4210_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state57.read())) {
        add_ln94_reg_5332 = add_ln94_fu_4270_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state58.read())) {
        add_ln95_reg_5345 = add_ln95_fu_4294_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state58.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln95_fu_4288_p2.read()))) {
        lshr_ln_reg_5365 = add_ln96_fu_4304_p2.read().range(8, 6);
        shl_ln1_reg_5354 = shl_ln1_fu_4309_p3.read();
        trunc_ln96_reg_5350 = trunc_ln96_fu_4300_p1.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        p_Val2_13_reg_5283 = grp_fu_4181_p3.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        p_Val2_15_reg_5306 = grp_fu_4181_p3.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state60.read())) {
        p_Val2_17_reg_5391 = mul_ln1118_1_fu_4386_p2.read().range(57, 20);
        p_Val2_9_reg_5385 = mul_ln1118_fu_4367_p2.read().range(57, 20);
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        p_Val2_18_reg_5419 = mul_ln1118_2_fu_4561_p2.read().range(57, 20);
        p_Val2_19_reg_5425 = mul_ln1118_3_fu_4580_p2.read().range(57, 20);
        select_ln850_1_reg_5408 = select_ln850_1_fu_4539_p3.read();
        select_ln850_reg_5397 = select_ln850_fu_4461_p3.read();
        tmp_75_reg_5403 = select_ln850_fu_4461_p3.read().range(17, 7);
        tmp_77_reg_5414 = select_ln850_1_fu_4539_p3.read().range(17, 7);
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state62.read())) {
        select_ln850_2_reg_5567 = select_ln850_2_fu_4725_p3.read();
        select_ln850_3_reg_5578 = select_ln850_3_fu_4803_p3.read();
        select_ln887_1_reg_5431 = select_ln887_1_fu_4622_p3.read();
        select_ln887_3_reg_5499 = select_ln887_3_fu_4657_p3.read();
        tmp_79_reg_5573 = select_ln850_2_fu_4725_p3.read().range(17, 7);
        tmp_81_reg_5584 = select_ln850_3_fu_4803_p3.read().range(17, 7);
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read())) {
        sext_ln94_reg_5321 = sext_ln94_fu_4260_p1.read();
        trunc_ln703_reg_5317 = trunc_ln703_fu_4256_p1.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state57.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln94_fu_4264_p2.read()))) {
        shl_ln_reg_5337 = shl_ln_fu_4276_p3.read();
    }
}

void quantize_activation::thread_ap_NS_fsm() {
    switch (ap_CS_fsm.read().to_uint64()) {
        case 1 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
                ap_NS_fsm = ap_ST_fsm_state2;
            } else {
                ap_NS_fsm = ap_ST_fsm_state1;
            }
            break;
        case 2 : 
            ap_NS_fsm = ap_ST_fsm_state3;
            break;
        case 4 : 
            ap_NS_fsm = ap_ST_fsm_state4;
            break;
        case 8 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && esl_seteq<1,1,1>(icmp_ln87_fu_4199_p2.read(), ap_const_lv1_1))) {
                ap_NS_fsm = ap_ST_fsm_state7;
            } else {
                ap_NS_fsm = ap_ST_fsm_state5;
            }
            break;
        case 16 : 
            ap_NS_fsm = ap_ST_fsm_state6;
            break;
        case 32 : 
            ap_NS_fsm = ap_ST_fsm_state4;
            break;
        case 64 : 
            ap_NS_fsm = ap_ST_fsm_state8;
            break;
        case 128 : 
            ap_NS_fsm = ap_ST_fsm_state9;
            break;
        case 256 : 
            ap_NS_fsm = ap_ST_fsm_state10;
            break;
        case 512 : 
            ap_NS_fsm = ap_ST_fsm_state11;
            break;
        case 1024 : 
            ap_NS_fsm = ap_ST_fsm_state12;
            break;
        case 2048 : 
            ap_NS_fsm = ap_ST_fsm_state13;
            break;
        case 4096 : 
            ap_NS_fsm = ap_ST_fsm_state14;
            break;
        case 8192 : 
            ap_NS_fsm = ap_ST_fsm_state15;
            break;
        case 16384 : 
            ap_NS_fsm = ap_ST_fsm_state16;
            break;
        case 32768 : 
            ap_NS_fsm = ap_ST_fsm_state17;
            break;
        case 65536 : 
            ap_NS_fsm = ap_ST_fsm_state18;
            break;
        case 131072 : 
            ap_NS_fsm = ap_ST_fsm_state19;
            break;
        case 262144 : 
            ap_NS_fsm = ap_ST_fsm_state20;
            break;
        case 524288 : 
            ap_NS_fsm = ap_ST_fsm_state21;
            break;
        case 1048576 : 
            ap_NS_fsm = ap_ST_fsm_state22;
            break;
        case 2097152 : 
            ap_NS_fsm = ap_ST_fsm_state23;
            break;
        case 4194304 : 
            ap_NS_fsm = ap_ST_fsm_state24;
            break;
        case 8388608 : 
            ap_NS_fsm = ap_ST_fsm_state25;
            break;
        case 16777216 : 
            ap_NS_fsm = ap_ST_fsm_state26;
            break;
        case 33554432 : 
            ap_NS_fsm = ap_ST_fsm_state27;
            break;
        case 67108864 : 
            ap_NS_fsm = ap_ST_fsm_state28;
            break;
        case 134217728 : 
            ap_NS_fsm = ap_ST_fsm_state29;
            break;
        case 268435456 : 
            ap_NS_fsm = ap_ST_fsm_state30;
            break;
        case 536870912 : 
            ap_NS_fsm = ap_ST_fsm_state31;
            break;
        case 1073741824 : 
            ap_NS_fsm = ap_ST_fsm_state32;
            break;
        case 2147483648 : 
            ap_NS_fsm = ap_ST_fsm_state33;
            break;
        case 4294967296 : 
            ap_NS_fsm = ap_ST_fsm_state34;
            break;
        case 8589934592 : 
            ap_NS_fsm = ap_ST_fsm_state35;
            break;
        case 17179869184 : 
            ap_NS_fsm = ap_ST_fsm_state36;
            break;
        case 34359738368 : 
            ap_NS_fsm = ap_ST_fsm_state37;
            break;
        case 68719476736 : 
            ap_NS_fsm = ap_ST_fsm_state38;
            break;
        case 137438953472 : 
            ap_NS_fsm = ap_ST_fsm_state39;
            break;
        case 274877906944 : 
            ap_NS_fsm = ap_ST_fsm_state40;
            break;
        case 549755813888 : 
            ap_NS_fsm = ap_ST_fsm_state41;
            break;
        case 1099511627776 : 
            ap_NS_fsm = ap_ST_fsm_state42;
            break;
        case 2199023255552 : 
            ap_NS_fsm = ap_ST_fsm_state43;
            break;
        case 4398046511104 : 
            ap_NS_fsm = ap_ST_fsm_state44;
            break;
        case 8796093022208 : 
            ap_NS_fsm = ap_ST_fsm_state45;
            break;
        case 17592186044416 : 
            ap_NS_fsm = ap_ST_fsm_state46;
            break;
        case 35184372088832 : 
            ap_NS_fsm = ap_ST_fsm_state47;
            break;
        case 70368744177664 : 
            ap_NS_fsm = ap_ST_fsm_state48;
            break;
        case 140737488355328 : 
            ap_NS_fsm = ap_ST_fsm_state49;
            break;
        case 281474976710656 : 
            ap_NS_fsm = ap_ST_fsm_state50;
            break;
        case 562949953421312 : 
            ap_NS_fsm = ap_ST_fsm_state51;
            break;
        case 1125899906842624 : 
            ap_NS_fsm = ap_ST_fsm_state52;
            break;
        case 2251799813685248 : 
            ap_NS_fsm = ap_ST_fsm_state53;
            break;
        case 4503599627370496 : 
            ap_NS_fsm = ap_ST_fsm_state54;
            break;
        case 9007199254740992 : 
            ap_NS_fsm = ap_ST_fsm_state55;
            break;
        case 18014398509481984 : 
            ap_NS_fsm = ap_ST_fsm_state56;
            break;
        case 36028797018963968 : 
            ap_NS_fsm = ap_ST_fsm_state57;
            break;
        case 72057594037927936 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state57.read()) && esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln94_fu_4264_p2.read()))) {
                ap_NS_fsm = ap_ST_fsm_state1;
            } else {
                ap_NS_fsm = ap_ST_fsm_state58;
            }
            break;
        case 144115188075855872 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state58.read()) && esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln95_fu_4288_p2.read()))) {
                ap_NS_fsm = ap_ST_fsm_state57;
            } else {
                ap_NS_fsm = ap_ST_fsm_state59;
            }
            break;
        case 288230376151711744 : 
            ap_NS_fsm = ap_ST_fsm_state60;
            break;
        case 576460752303423488 : 
            ap_NS_fsm = ap_ST_fsm_state61;
            break;
        case 1152921504606846976 : 
            ap_NS_fsm = ap_ST_fsm_state62;
            break;
        case 2305843009213693952 : 
            ap_NS_fsm = ap_ST_fsm_state63;
            break;
        case 4611686018427387904 : 
            ap_NS_fsm = ap_ST_fsm_state58;
            break;
        default : 
            ap_NS_fsm =  (sc_lv<63>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
            break;
    }
}

}


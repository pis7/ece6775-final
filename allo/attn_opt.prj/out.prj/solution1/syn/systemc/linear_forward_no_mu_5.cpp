#include "linear_forward_no_mu.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void linear_forward_no_mu::thread_v80_7_address0() {
    if (esl_seteq<1,1,1>(ap_condition_9425.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(icmp_ln194_1_reg_14986.read(), ap_const_lv1_1)) {
            v80_7_address0 =  (sc_lv<15>) (sext_ln153_79_fu_5752_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln194_1_reg_14986.read()) && 
                    esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln194_reg_14863.read()))) {
            v80_7_address0 =  (sc_lv<15>) (sext_ln153_55_fu_5312_p1.read());
        } else if ((esl_seteq<1,1,1>(icmp_ln194_reg_14863.read(), ap_const_lv1_1) && 
                    esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln194_1_reg_14986.read()))) {
            v80_7_address0 =  (sc_lv<15>) (sext_ln153_31_fu_4872_p1.read());
        } else {
            v80_7_address0 =  (sc_lv<15>) ("XXXXXXXXXXXXXXX");
        }
    } else {
        v80_7_address0 =  (sc_lv<15>) ("XXXXXXXXXXXXXXX");
    }
}

void linear_forward_no_mu::thread_v80_7_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter11.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln140_reg_14814_pp0_iter10_reg.read()) && 
          esl_seteq<1,1,1>(icmp_ln194_reg_14863.read(), ap_const_lv1_1) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln194_1_reg_14986.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter11.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln140_reg_14814_pp0_iter10_reg.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln194_1_reg_14986.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln194_reg_14863.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter11.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln140_reg_14814_pp0_iter10_reg.read()) && 
          esl_seteq<1,1,1>(icmp_ln194_1_reg_14986.read(), ap_const_lv1_1)))) {
        v80_7_ce0 = ap_const_logic_1;
    } else {
        v80_7_ce0 = ap_const_logic_0;
    }
}

void linear_forward_no_mu::thread_v80_8_address0() {
    v80_8_address0 =  (sc_lv<15>) (sext_ln153_3_fu_4109_p1.read());
}

void linear_forward_no_mu::thread_v80_8_address1() {
    if (esl_seteq<1,1,1>(ap_condition_9431.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln194_reg_14863.read())) {
            v80_8_address1 =  (sc_lv<15>) (sext_ln153_58_fu_5367_p1.read());
        } else if (esl_seteq<1,1,1>(icmp_ln194_reg_14863.read(), ap_const_lv1_1)) {
            v80_8_address1 =  (sc_lv<15>) (sext_ln153_34_fu_4927_p1.read());
        } else {
            v80_8_address1 =  (sc_lv<15>) ("XXXXXXXXXXXXXXX");
        }
    } else {
        v80_8_address1 =  (sc_lv<15>) ("XXXXXXXXXXXXXXX");
    }
}

void linear_forward_no_mu::thread_v80_8_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter10.read()))) {
        v80_8_ce0 = ap_const_logic_1;
    } else {
        v80_8_ce0 = ap_const_logic_0;
    }
}

void linear_forward_no_mu::thread_v80_8_ce1() {
    if (((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter11.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln140_reg_14814_pp0_iter10_reg.read()) && 
          esl_seteq<1,1,1>(icmp_ln194_reg_14863.read(), ap_const_lv1_1) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln194_1_reg_14986.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter11.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln140_reg_14814_pp0_iter10_reg.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln194_1_reg_14986.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln194_reg_14863.read())))) {
        v80_8_ce1 = ap_const_logic_1;
    } else {
        v80_8_ce1 = ap_const_logic_0;
    }
}

void linear_forward_no_mu::thread_v80_9_address0() {
    if (esl_seteq<1,1,1>(ap_condition_9425.read(), ap_const_boolean_1)) {
        if ((esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln194_1_reg_14986.read()) && 
             esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln194_reg_14863.read()))) {
            v80_9_address0 =  (sc_lv<15>) (sext_ln153_61_fu_5422_p1.read());
        } else if ((esl_seteq<1,1,1>(icmp_ln194_reg_14863.read(), ap_const_lv1_1) && 
                    esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln194_1_reg_14986.read()))) {
            v80_9_address0 =  (sc_lv<15>) (sext_ln153_37_fu_4982_p1.read());
        } else if (esl_seteq<1,1,1>(icmp_ln194_1_reg_14986.read(), ap_const_lv1_1)) {
            v80_9_address0 =  (sc_lv<15>) (sext_ln153_7_fu_4518_p1.read());
        } else {
            v80_9_address0 =  (sc_lv<15>) ("XXXXXXXXXXXXXXX");
        }
    } else {
        v80_9_address0 =  (sc_lv<15>) ("XXXXXXXXXXXXXXX");
    }
}

void linear_forward_no_mu::thread_v80_9_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter11.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln140_reg_14814_pp0_iter10_reg.read()) && 
          esl_seteq<1,1,1>(icmp_ln194_reg_14863.read(), ap_const_lv1_1) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln194_1_reg_14986.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter11.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln140_reg_14814_pp0_iter10_reg.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln194_1_reg_14986.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln194_reg_14863.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter11.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln140_reg_14814_pp0_iter10_reg.read()) && 
          esl_seteq<1,1,1>(icmp_ln194_1_reg_14986.read(), ap_const_lv1_1)))) {
        v80_9_ce0 = ap_const_logic_1;
    } else {
        v80_9_ce0 = ap_const_logic_0;
    }
}

void linear_forward_no_mu::thread_v82_V_address0() {
    v82_V_address0 = v82_V_addr_reg_14809.read();
}

void linear_forward_no_mu::thread_v82_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state65.read())) {
        v82_V_ce0 = ap_const_logic_1;
    } else {
        v82_V_ce0 = ap_const_logic_0;
    }
}

void linear_forward_no_mu::thread_v82_V_d0() {
    v82_V_d0 = grp_fu_14613_p2.read().range(32-1, 0);
}

void linear_forward_no_mu::thread_v82_V_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state65.read())) {
        v82_V_we0 = ap_const_logic_1;
    } else {
        v82_V_we0 = ap_const_logic_0;
    }
}

void linear_forward_no_mu::thread_zext_ln153_10_fu_4937_p1() {
    zext_ln153_10_fu_4937_p1 = esl_zext<64,8>(sext_ln153_35_fu_4934_p1.read());
}

void linear_forward_no_mu::thread_zext_ln153_11_fu_4992_p1() {
    zext_ln153_11_fu_4992_p1 = esl_zext<64,8>(sext_ln153_38_fu_4989_p1.read());
}

void linear_forward_no_mu::thread_zext_ln153_12_fu_5047_p1() {
    zext_ln153_12_fu_5047_p1 = esl_zext<64,8>(sext_ln153_41_fu_5044_p1.read());
}

void linear_forward_no_mu::thread_zext_ln153_13_fu_5102_p1() {
    zext_ln153_13_fu_5102_p1 = esl_zext<64,8>(sext_ln153_44_fu_5099_p1.read());
}

void linear_forward_no_mu::thread_zext_ln153_14_fu_5157_p1() {
    zext_ln153_14_fu_5157_p1 = esl_zext<64,8>(sext_ln153_47_fu_5154_p1.read());
}

void linear_forward_no_mu::thread_zext_ln153_15_fu_5212_p1() {
    zext_ln153_15_fu_5212_p1 = esl_zext<64,8>(sext_ln153_50_fu_5209_p1.read());
}

void linear_forward_no_mu::thread_zext_ln153_16_fu_5267_p1() {
    zext_ln153_16_fu_5267_p1 = esl_zext<64,8>(sext_ln153_53_fu_5264_p1.read());
}

void linear_forward_no_mu::thread_zext_ln153_17_fu_5322_p1() {
    zext_ln153_17_fu_5322_p1 = esl_zext<64,8>(sext_ln153_56_fu_5319_p1.read());
}

void linear_forward_no_mu::thread_zext_ln153_18_fu_5377_p1() {
    zext_ln153_18_fu_5377_p1 = esl_zext<64,8>(sext_ln153_59_fu_5374_p1.read());
}

void linear_forward_no_mu::thread_zext_ln153_19_fu_5432_p1() {
    zext_ln153_19_fu_5432_p1 = esl_zext<64,8>(sext_ln153_62_fu_5429_p1.read());
}

void linear_forward_no_mu::thread_zext_ln153_1_fu_4450_p1() {
    zext_ln153_1_fu_4450_p1 = esl_zext<64,7>(sext_ln153_fu_4447_p1.read());
}

void linear_forward_no_mu::thread_zext_ln153_20_fu_5487_p1() {
    zext_ln153_20_fu_5487_p1 = esl_zext<64,8>(sext_ln153_65_fu_5484_p1.read());
}

void linear_forward_no_mu::thread_zext_ln153_21_fu_5542_p1() {
    zext_ln153_21_fu_5542_p1 = esl_zext<64,8>(sext_ln153_68_fu_5539_p1.read());
}

void linear_forward_no_mu::thread_zext_ln153_22_fu_5597_p1() {
    zext_ln153_22_fu_5597_p1 = esl_zext<64,8>(sext_ln153_71_fu_5594_p1.read());
}

void linear_forward_no_mu::thread_zext_ln153_23_fu_5652_p1() {
    zext_ln153_23_fu_5652_p1 = esl_zext<64,8>(sext_ln153_74_fu_5649_p1.read());
}

void linear_forward_no_mu::thread_zext_ln153_24_fu_5707_p1() {
    zext_ln153_24_fu_5707_p1 = esl_zext<64,8>(sext_ln153_77_fu_5704_p1.read());
}

void linear_forward_no_mu::thread_zext_ln153_2_fu_4469_p1() {
    zext_ln153_2_fu_4469_p1 = esl_zext<64,7>(sext_ln153_4_fu_4466_p1.read());
}

void linear_forward_no_mu::thread_zext_ln153_3_fu_4528_p1() {
    zext_ln153_3_fu_4528_p1 = esl_zext<64,7>(sext_ln153_8_fu_4525_p1.read());
}

void linear_forward_no_mu::thread_zext_ln153_4_fu_4587_p1() {
    zext_ln153_4_fu_4587_p1 = esl_zext<64,7>(sext_ln153_12_fu_4584_p1.read());
}

void linear_forward_no_mu::thread_zext_ln153_5_fu_4646_p1() {
    zext_ln153_5_fu_4646_p1 = esl_zext<64,7>(sext_ln153_16_fu_4643_p1.read());
}

void linear_forward_no_mu::thread_zext_ln153_6_fu_4705_p1() {
    zext_ln153_6_fu_4705_p1 = esl_zext<64,7>(sext_ln153_20_fu_4702_p1.read());
}

void linear_forward_no_mu::thread_zext_ln153_7_fu_4764_p1() {
    zext_ln153_7_fu_4764_p1 = esl_zext<64,7>(sext_ln153_24_fu_4761_p1.read());
}

void linear_forward_no_mu::thread_zext_ln153_8_fu_4823_p1() {
    zext_ln153_8_fu_4823_p1 = esl_zext<64,7>(sext_ln153_28_fu_4820_p1.read());
}

void linear_forward_no_mu::thread_zext_ln153_9_fu_4882_p1() {
    zext_ln153_9_fu_4882_p1 = esl_zext<64,8>(sext_ln153_32_fu_4879_p1.read());
}

void linear_forward_no_mu::thread_zext_ln153_fu_4007_p1() {
    zext_ln153_fu_4007_p1 = esl_zext<64,11>(j2_0_0_reg_3922.read());
}

void linear_forward_no_mu::thread_zext_ln203_fu_4012_p1() {
    zext_ln203_fu_4012_p1 = esl_zext<16,11>(j2_0_0_reg_3922.read());
}

void linear_forward_no_mu::thread_zext_ln544_fu_4065_p1() {
    zext_ln544_fu_4065_p1 = esl_zext<8,7>(shl_ln_reg_14823_pp0_iter9_reg.read());
}

}


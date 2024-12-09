#include "linear_forward_no_mu.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void linear_forward_no_mu::thread_ap_clk_no_reset_() {
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_CS_fsm = ap_ST_fsm_state1;
    } else {
        ap_CS_fsm = ap_NS_fsm.read();
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_enable_reg_pp0_iter0 = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0) && 
             esl_seteq<1,1,1>(ap_const_logic_1, ap_condition_pp0_exit_iter0_state2.read()))) {
            ap_enable_reg_pp0_iter0 = ap_const_logic_0;
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
                    esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
            ap_enable_reg_pp0_iter0 = ap_const_logic_1;
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_enable_reg_pp0_iter1 = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage3_subdone.read(), ap_const_boolean_0))) {
            ap_enable_reg_pp0_iter1 = ap_enable_reg_pp0_iter0.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_enable_reg_pp0_iter10 = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage3_subdone.read(), ap_const_boolean_0))) {
            ap_enable_reg_pp0_iter10 = ap_enable_reg_pp0_iter9.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_enable_reg_pp0_iter11 = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage3_subdone.read(), ap_const_boolean_0))) {
            ap_enable_reg_pp0_iter11 = ap_enable_reg_pp0_iter10.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_enable_reg_pp0_iter12 = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage3_subdone.read(), ap_const_boolean_0))) {
            ap_enable_reg_pp0_iter12 = ap_enable_reg_pp0_iter11.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_enable_reg_pp0_iter13 = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage3_subdone.read(), ap_const_boolean_0))) {
            ap_enable_reg_pp0_iter13 = ap_enable_reg_pp0_iter12.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_enable_reg_pp0_iter14 = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage3_subdone.read(), ap_const_boolean_0))) {
            ap_enable_reg_pp0_iter14 = ap_enable_reg_pp0_iter13.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_enable_reg_pp0_iter15 = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage3_subdone.read(), ap_const_boolean_0))) {
            ap_enable_reg_pp0_iter15 = ap_enable_reg_pp0_iter14.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_enable_reg_pp0_iter16 = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage3_subdone.read(), ap_const_boolean_0))) {
            ap_enable_reg_pp0_iter16 = ap_enable_reg_pp0_iter15.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_enable_reg_pp0_iter17 = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage3_subdone.read(), ap_const_boolean_0))) {
            ap_enable_reg_pp0_iter17 = ap_enable_reg_pp0_iter16.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_enable_reg_pp0_iter18 = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage3_subdone.read(), ap_const_boolean_0))) {
            ap_enable_reg_pp0_iter18 = ap_enable_reg_pp0_iter17.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_enable_reg_pp0_iter19 = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage3_subdone.read(), ap_const_boolean_0))) {
            ap_enable_reg_pp0_iter19 = ap_enable_reg_pp0_iter18.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_enable_reg_pp0_iter2 = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage3_subdone.read(), ap_const_boolean_0))) {
            ap_enable_reg_pp0_iter2 = ap_enable_reg_pp0_iter1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_enable_reg_pp0_iter20 = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage3_subdone.read(), ap_const_boolean_0))) {
            ap_enable_reg_pp0_iter20 = ap_enable_reg_pp0_iter19.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_enable_reg_pp0_iter21 = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage3_subdone.read(), ap_const_boolean_0))) {
            ap_enable_reg_pp0_iter21 = ap_enable_reg_pp0_iter20.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
                    esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
            ap_enable_reg_pp0_iter21 = ap_const_logic_0;
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_enable_reg_pp0_iter3 = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage3_subdone.read(), ap_const_boolean_0))) {
            ap_enable_reg_pp0_iter3 = ap_enable_reg_pp0_iter2.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_enable_reg_pp0_iter4 = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage3_subdone.read(), ap_const_boolean_0))) {
            ap_enable_reg_pp0_iter4 = ap_enable_reg_pp0_iter3.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_enable_reg_pp0_iter5 = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage3_subdone.read(), ap_const_boolean_0))) {
            ap_enable_reg_pp0_iter5 = ap_enable_reg_pp0_iter4.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_enable_reg_pp0_iter6 = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage3_subdone.read(), ap_const_boolean_0))) {
            ap_enable_reg_pp0_iter6 = ap_enable_reg_pp0_iter5.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_enable_reg_pp0_iter7 = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage3_subdone.read(), ap_const_boolean_0))) {
            ap_enable_reg_pp0_iter7 = ap_enable_reg_pp0_iter6.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_enable_reg_pp0_iter8 = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage3_subdone.read(), ap_const_boolean_0))) {
            ap_enable_reg_pp0_iter8 = ap_enable_reg_pp0_iter7.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_enable_reg_pp0_iter9 = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage3_subdone.read(), ap_const_boolean_0))) {
            ap_enable_reg_pp0_iter9 = ap_enable_reg_pp0_iter8.read();
        }
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(icmp_ln120_reg_6227.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()))) {
        indvar_flatten_reg_1315 = add_ln120_1_reg_6231.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
                esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
        indvar_flatten_reg_1315 = ap_const_lv12_0;
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(icmp_ln120_reg_6227.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()))) {
        j_0_0_reg_1326 = select_ln124_1_reg_6573.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
                esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
        j_0_0_reg_1326 = ap_const_lv9_0;
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(icmp_ln120_reg_6227.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()))) {
        ko_0_0_reg_1338 = add_ln121_reg_7355.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
                esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
        ko_0_0_reg_1338 = ap_const_lv3_0;
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        add_ln120_1_reg_6231 = add_ln120_1_fu_1373_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(icmp_ln120_fu_1367_p2.read(), ap_const_lv1_0))) {
        add_ln120_reg_6236 = add_ln120_fu_1379_p2.read();
        icmp_ln121_reg_6241 = icmp_ln121_fu_1385_p2.read();
        select_ln124_reg_6246 = select_ln124_fu_1391_p3.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && esl_seteq<1,1,1>(icmp_ln120_reg_6227.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0))) {
        add_ln121_reg_7355 = add_ln121_fu_6096_p2.read();
    }
    if ((esl_seteq<1,1,1>(icmp_ln120_reg_6227.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0))) {
        add_ln703_33_reg_7215 = add_ln703_33_fu_4139_p2.read();
        add_ln703_47_reg_7220 = add_ln703_47_fu_4145_p2.read();
        add_ln703_48_reg_7225 = add_ln703_48_fu_4151_p2.read();
        add_ln703_50_reg_7230 = add_ln703_50_fu_4157_p2.read();
        add_ln703_51_reg_7235 = add_ln703_51_fu_4163_p2.read();
        add_ln703_54_reg_7240 = add_ln703_54_fu_4169_p2.read();
        add_ln703_55_reg_7245 = add_ln703_55_fu_4175_p2.read();
        add_ln703_57_reg_7250 = add_ln703_57_fu_4181_p2.read();
        add_ln703_58_reg_7255 = add_ln703_58_fu_4187_p2.read();
        add_ln703_63_reg_7260 = add_ln703_63_fu_4193_p2.read();
        add_ln703_64_reg_7265 = add_ln703_64_fu_4199_p2.read();
        add_ln703_66_reg_7270 = add_ln703_66_fu_4205_p2.read();
        add_ln703_67_reg_7275 = add_ln703_67_fu_4211_p2.read();
        add_ln703_70_reg_7280 = add_ln703_70_fu_4217_p2.read();
        add_ln703_71_reg_7285 = add_ln703_71_fu_4223_p2.read();
        add_ln703_73_reg_7290 = add_ln703_73_fu_4229_p2.read();
        add_ln703_74_reg_7295 = add_ln703_74_fu_4235_p2.read();
        add_ln703_89_reg_7300 = add_ln703_89_fu_4241_p2.read();
        output_0_V_addr_reg_7043 =  (sc_lv<9>) (zext_ln124_fu_1531_p1.read());
        select_ln129_reg_7048 = select_ln129_fu_1575_p3.read();
        trunc_ln126_10_reg_7119 = packed_weights_3_q0.read().range(5, 4);
        trunc_ln126_1_reg_7089 = packed_weights_2_q0.read().range(3, 2);
        trunc_ln126_2_reg_7059 = trunc_ln126_2_fu_1725_p1.read();
        trunc_ln126_35_reg_7131 = trunc_ln126_35_fu_3891_p1.read();
        trunc_ln126_36_reg_7137 = packed_weights_12_q0.read().range(3, 2);
        trunc_ln126_37_reg_7143 = packed_weights_12_q0.read().range(5, 4);
        trunc_ln126_38_reg_7155 = trunc_ln126_38_fu_3925_p1.read();
        trunc_ln126_39_reg_7161 = packed_weights_13_q0.read().range(3, 2);
        trunc_ln126_40_reg_7167 = packed_weights_13_q0.read().range(5, 4);
        trunc_ln126_41_reg_7179 = trunc_ln126_41_fu_3959_p1.read();
        trunc_ln126_42_reg_7185 = packed_weights_14_q0.read().range(3, 2);
        trunc_ln126_43_reg_7191 = packed_weights_14_q0.read().range(5, 4);
        trunc_ln126_44_reg_7203 = trunc_ln126_44_fu_3993_p1.read();
        trunc_ln126_45_reg_7209 = packed_weights_15_q0.read().range(3, 2);
        trunc_ln126_5_reg_7095 = packed_weights_2_q0.read().range(5, 4);
        trunc_ln126_6_reg_7083 = trunc_ln126_6_fu_1759_p1.read();
        trunc_ln126_7_reg_7107 = trunc_ln126_7_fu_1793_p1.read();
        trunc_ln126_8_reg_7065 = packed_weights_1_q0.read().range(3, 2);
        trunc_ln126_9_reg_7071 = packed_weights_1_q0.read().range(5, 4);
        trunc_ln126_s_reg_7113 = packed_weights_3_q0.read().range(3, 2);
        trunc_ln128_10_reg_7125 = packed_weights_11_q0.read().range(7, 6);
        trunc_ln128_11_reg_7149 = packed_weights_12_q0.read().range(7, 6);
        trunc_ln128_12_reg_7173 = packed_weights_13_q0.read().range(7, 6);
        trunc_ln128_13_reg_7197 = packed_weights_14_q0.read().range(7, 6);
        trunc_ln128_1_reg_7077 = packed_weights_1_q0.read().range(7, 6);
        trunc_ln128_2_reg_7101 = packed_weights_2_q0.read().range(7, 6);
        trunc_ln_reg_7053 = packed_weights_0_q0.read().range(7, 6);
    }
    if ((esl_seteq<1,1,1>(icmp_ln120_reg_6227.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0))) {
        add_ln703_34_reg_7305 = add_ln703_34_fu_5725_p2.read();
        add_ln703_37_reg_7310 = add_ln703_37_fu_5751_p2.read();
        add_ln703_41_reg_7315 = add_ln703_41_fu_5777_p2.read();
        add_ln703_44_reg_7320 = add_ln703_44_fu_5803_p2.read();
        add_ln703_61_reg_7325 = add_ln703_61_fu_5893_p2.read();
        add_ln703_77_reg_7330 = add_ln703_77_fu_5983_p2.read();
        add_ln703_80_reg_7335 = add_ln703_80_fu_6009_p2.read();
        add_ln703_83_reg_7340 = add_ln703_83_fu_6035_p2.read();
        add_ln703_87_reg_7345 = add_ln703_87_fu_6061_p2.read();
        add_ln703_91_reg_7350 = add_ln703_91_fu_6090_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(icmp_ln120_reg_6227.read(), ap_const_lv1_0))) {
        add_ln703_46_reg_7361 = add_ln703_46_fu_6125_p2.read();
        add_ln703_94_reg_7366 = add_ln703_94_fu_6176_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(icmp_ln120_reg_6227_pp0_iter1_reg.read(), ap_const_lv1_0))) {
        add_ln703_95_reg_7371 = add_ln703_95_fu_6193_p2.read();
        icmp_ln121_1_reg_7376 = icmp_ln121_1_fu_6200_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        icmp_ln120_reg_6227 = icmp_ln120_fu_1367_p2.read();
        icmp_ln120_reg_6227_pp0_iter1_reg = icmp_ln120_reg_6227.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0))) {
        icmp_ln121_1_reg_7376_pp0_iter10_reg = icmp_ln121_1_reg_7376_pp0_iter9_reg.read();
        icmp_ln121_1_reg_7376_pp0_iter11_reg = icmp_ln121_1_reg_7376_pp0_iter10_reg.read();
        icmp_ln121_1_reg_7376_pp0_iter12_reg = icmp_ln121_1_reg_7376_pp0_iter11_reg.read();
        icmp_ln121_1_reg_7376_pp0_iter13_reg = icmp_ln121_1_reg_7376_pp0_iter12_reg.read();
        icmp_ln121_1_reg_7376_pp0_iter14_reg = icmp_ln121_1_reg_7376_pp0_iter13_reg.read();
        icmp_ln121_1_reg_7376_pp0_iter15_reg = icmp_ln121_1_reg_7376_pp0_iter14_reg.read();
        icmp_ln121_1_reg_7376_pp0_iter16_reg = icmp_ln121_1_reg_7376_pp0_iter15_reg.read();
        icmp_ln121_1_reg_7376_pp0_iter17_reg = icmp_ln121_1_reg_7376_pp0_iter16_reg.read();
        icmp_ln121_1_reg_7376_pp0_iter18_reg = icmp_ln121_1_reg_7376_pp0_iter17_reg.read();
        icmp_ln121_1_reg_7376_pp0_iter19_reg = icmp_ln121_1_reg_7376_pp0_iter18_reg.read();
        icmp_ln121_1_reg_7376_pp0_iter20_reg = icmp_ln121_1_reg_7376_pp0_iter19_reg.read();
        icmp_ln121_1_reg_7376_pp0_iter21_reg = icmp_ln121_1_reg_7376_pp0_iter20_reg.read();
        icmp_ln121_1_reg_7376_pp0_iter2_reg = icmp_ln121_1_reg_7376.read();
        icmp_ln121_1_reg_7376_pp0_iter3_reg = icmp_ln121_1_reg_7376_pp0_iter2_reg.read();
        icmp_ln121_1_reg_7376_pp0_iter4_reg = icmp_ln121_1_reg_7376_pp0_iter3_reg.read();
        icmp_ln121_1_reg_7376_pp0_iter5_reg = icmp_ln121_1_reg_7376_pp0_iter4_reg.read();
        icmp_ln121_1_reg_7376_pp0_iter6_reg = icmp_ln121_1_reg_7376_pp0_iter5_reg.read();
        icmp_ln121_1_reg_7376_pp0_iter7_reg = icmp_ln121_1_reg_7376_pp0_iter6_reg.read();
        icmp_ln121_1_reg_7376_pp0_iter8_reg = icmp_ln121_1_reg_7376_pp0_iter7_reg.read();
        icmp_ln121_1_reg_7376_pp0_iter9_reg = icmp_ln121_1_reg_7376_pp0_iter8_reg.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(icmp_ln120_reg_6227.read(), ap_const_lv1_0))) {
        input_0_0_0_V_loa_reg_6659 = input_0_0_0_V_q0.read();
        input_0_1_0_V_loa_reg_6665 = input_0_1_0_V_q0.read();
        input_0_2_0_V_loa_reg_6671 = input_0_2_0_V_q0.read();
        input_0_3_0_V_loa_reg_6677 = input_0_3_0_V_q0.read();
        input_10_0_0_V_lo_reg_6899 = input_10_0_0_V_q0.read();
        input_10_1_0_V_lo_reg_6905 = input_10_1_0_V_q0.read();
        input_10_2_0_V_lo_reg_6911 = input_10_2_0_V_q0.read();
        input_10_3_0_V_lo_reg_6917 = input_10_3_0_V_q0.read();
        input_11_0_0_V_lo_reg_6923 = input_11_0_0_V_q0.read();
        input_11_1_0_V_lo_reg_6929 = input_11_1_0_V_q0.read();
        input_11_2_0_V_lo_reg_6935 = input_11_2_0_V_q0.read();
        input_11_3_0_V_lo_reg_6941 = input_11_3_0_V_q0.read();
        input_12_0_0_V_lo_reg_6947 = input_12_0_0_V_q0.read();
        input_12_1_0_V_lo_reg_6953 = input_12_1_0_V_q0.read();
        input_12_2_0_V_lo_reg_6959 = input_12_2_0_V_q0.read();
        input_12_3_0_V_lo_reg_6965 = input_12_3_0_V_q0.read();
        input_13_0_0_V_lo_reg_6971 = input_13_0_0_V_q0.read();
        input_13_1_0_V_lo_reg_6977 = input_13_1_0_V_q0.read();
        input_13_2_0_V_lo_reg_6983 = input_13_2_0_V_q0.read();
        input_13_3_0_V_lo_reg_6989 = input_13_3_0_V_q0.read();
        input_14_0_0_V_lo_reg_6995 = input_14_0_0_V_q0.read();
        input_14_1_0_V_lo_reg_7001 = input_14_1_0_V_q0.read();
        input_14_2_0_V_lo_reg_7007 = input_14_2_0_V_q0.read();
        input_14_3_0_V_lo_reg_7013 = input_14_3_0_V_q0.read();
        input_15_0_0_V_lo_reg_7019 = input_15_0_0_V_q0.read();
        input_15_1_0_V_lo_reg_7025 = input_15_1_0_V_q0.read();
        input_15_2_0_V_lo_reg_7031 = input_15_2_0_V_q0.read();
        input_15_3_0_V_lo_reg_7037 = input_15_3_0_V_q0.read();
        input_1_0_0_V_loa_reg_6683 = input_1_0_0_V_q0.read();
        input_1_1_0_V_loa_reg_6689 = input_1_1_0_V_q0.read();
        input_1_2_0_V_loa_reg_6695 = input_1_2_0_V_q0.read();
        input_1_3_0_V_loa_reg_6701 = input_1_3_0_V_q0.read();
        input_2_0_0_V_loa_reg_6707 = input_2_0_0_V_q0.read();
        input_2_1_0_V_loa_reg_6713 = input_2_1_0_V_q0.read();
        input_2_2_0_V_loa_reg_6719 = input_2_2_0_V_q0.read();
        input_2_3_0_V_loa_reg_6725 = input_2_3_0_V_q0.read();
        input_3_0_0_V_loa_reg_6731 = input_3_0_0_V_q0.read();
        input_3_1_0_V_loa_reg_6737 = input_3_1_0_V_q0.read();
        input_3_2_0_V_loa_reg_6743 = input_3_2_0_V_q0.read();
        input_3_3_0_V_loa_reg_6749 = input_3_3_0_V_q0.read();
        input_4_0_0_V_loa_reg_6755 = input_4_0_0_V_q0.read();
        input_4_1_0_V_loa_reg_6761 = input_4_1_0_V_q0.read();
        input_4_2_0_V_loa_reg_6767 = input_4_2_0_V_q0.read();
        input_4_3_0_V_loa_reg_6773 = input_4_3_0_V_q0.read();
        input_5_0_0_V_loa_reg_6779 = input_5_0_0_V_q0.read();
        input_5_1_0_V_loa_reg_6785 = input_5_1_0_V_q0.read();
        input_5_2_0_V_loa_reg_6791 = input_5_2_0_V_q0.read();
        input_5_3_0_V_loa_reg_6797 = input_5_3_0_V_q0.read();
        input_6_0_0_V_loa_reg_6803 = input_6_0_0_V_q0.read();
        input_6_1_0_V_loa_reg_6809 = input_6_1_0_V_q0.read();
        input_6_2_0_V_loa_reg_6815 = input_6_2_0_V_q0.read();
        input_6_3_0_V_loa_reg_6821 = input_6_3_0_V_q0.read();
        input_7_0_0_V_loa_reg_6827 = input_7_0_0_V_q0.read();
        input_7_1_0_V_loa_reg_6833 = input_7_1_0_V_q0.read();
        input_7_2_0_V_loa_reg_6839 = input_7_2_0_V_q0.read();
        input_7_3_0_V_loa_reg_6845 = input_7_3_0_V_q0.read();
        input_8_0_0_V_loa_reg_6851 = input_8_0_0_V_q0.read();
        input_8_1_0_V_loa_reg_6857 = input_8_1_0_V_q0.read();
        input_8_2_0_V_loa_reg_6863 = input_8_2_0_V_q0.read();
        input_8_3_0_V_loa_reg_6869 = input_8_3_0_V_q0.read();
        input_9_0_0_V_loa_reg_6875 = input_9_0_0_V_q0.read();
        input_9_1_0_V_loa_reg_6881 = input_9_1_0_V_q0.read();
        input_9_2_0_V_loa_reg_6887 = input_9_2_0_V_q0.read();
        input_9_3_0_V_loa_reg_6893 = input_9_3_0_V_q0.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0))) {
        output_0_V_addr_reg_7043_pp0_iter10_reg = output_0_V_addr_reg_7043_pp0_iter9_reg.read();
        output_0_V_addr_reg_7043_pp0_iter11_reg = output_0_V_addr_reg_7043_pp0_iter10_reg.read();
        output_0_V_addr_reg_7043_pp0_iter12_reg = output_0_V_addr_reg_7043_pp0_iter11_reg.read();
        output_0_V_addr_reg_7043_pp0_iter13_reg = output_0_V_addr_reg_7043_pp0_iter12_reg.read();
        output_0_V_addr_reg_7043_pp0_iter14_reg = output_0_V_addr_reg_7043_pp0_iter13_reg.read();
        output_0_V_addr_reg_7043_pp0_iter15_reg = output_0_V_addr_reg_7043_pp0_iter14_reg.read();
        output_0_V_addr_reg_7043_pp0_iter16_reg = output_0_V_addr_reg_7043_pp0_iter15_reg.read();
        output_0_V_addr_reg_7043_pp0_iter17_reg = output_0_V_addr_reg_7043_pp0_iter16_reg.read();
        output_0_V_addr_reg_7043_pp0_iter18_reg = output_0_V_addr_reg_7043_pp0_iter17_reg.read();
        output_0_V_addr_reg_7043_pp0_iter19_reg = output_0_V_addr_reg_7043_pp0_iter18_reg.read();
        output_0_V_addr_reg_7043_pp0_iter1_reg = output_0_V_addr_reg_7043.read();
        output_0_V_addr_reg_7043_pp0_iter20_reg = output_0_V_addr_reg_7043_pp0_iter19_reg.read();
        output_0_V_addr_reg_7043_pp0_iter21_reg = output_0_V_addr_reg_7043_pp0_iter20_reg.read();
        output_0_V_addr_reg_7043_pp0_iter2_reg = output_0_V_addr_reg_7043_pp0_iter1_reg.read();
        output_0_V_addr_reg_7043_pp0_iter3_reg = output_0_V_addr_reg_7043_pp0_iter2_reg.read();
        output_0_V_addr_reg_7043_pp0_iter4_reg = output_0_V_addr_reg_7043_pp0_iter3_reg.read();
        output_0_V_addr_reg_7043_pp0_iter5_reg = output_0_V_addr_reg_7043_pp0_iter4_reg.read();
        output_0_V_addr_reg_7043_pp0_iter6_reg = output_0_V_addr_reg_7043_pp0_iter5_reg.read();
        output_0_V_addr_reg_7043_pp0_iter7_reg = output_0_V_addr_reg_7043_pp0_iter6_reg.read();
        output_0_V_addr_reg_7043_pp0_iter8_reg = output_0_V_addr_reg_7043_pp0_iter7_reg.read();
        output_0_V_addr_reg_7043_pp0_iter9_reg = output_0_V_addr_reg_7043_pp0_iter8_reg.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(icmp_ln120_reg_6227.read(), ap_const_lv1_0))) {
        select_ln124_1_reg_6573 = select_ln124_1_fu_1467_p3.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
        sext_ln1148_reg_6222 = sext_ln1148_fu_1363_p1.read();
    }
}

void linear_forward_no_mu::thread_ap_NS_fsm() {
    switch (ap_CS_fsm.read().to_uint64()) {
        case 1 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
                ap_NS_fsm = ap_ST_fsm_pp0_stage0;
            } else {
                ap_NS_fsm = ap_ST_fsm_state1;
            }
            break;
        case 2 : 
            if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0) && !(esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(icmp_ln120_fu_1367_p2.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_0)))) {
                ap_NS_fsm = ap_ST_fsm_pp0_stage1;
            } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(icmp_ln120_fu_1367_p2.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_0))) {
                ap_NS_fsm = ap_ST_fsm_state90;
            } else {
                ap_NS_fsm = ap_ST_fsm_pp0_stage0;
            }
            break;
        case 4 : 
            if (esl_seteq<1,1,1>(ap_block_pp0_stage1_subdone.read(), ap_const_boolean_0)) {
                ap_NS_fsm = ap_ST_fsm_pp0_stage2;
            } else {
                ap_NS_fsm = ap_ST_fsm_pp0_stage1;
            }
            break;
        case 8 : 
            if (esl_seteq<1,1,1>(ap_block_pp0_stage2_subdone.read(), ap_const_boolean_0)) {
                ap_NS_fsm = ap_ST_fsm_pp0_stage3;
            } else {
                ap_NS_fsm = ap_ST_fsm_pp0_stage2;
            }
            break;
        case 16 : 
            if ((esl_seteq<1,1,1>(ap_block_pp0_stage3_subdone.read(), ap_const_boolean_0) && !(esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage3_subdone.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter21.read()) && esl_seteq<1,1,1>(ap_enable_reg_pp0_iter20.read(), ap_const_logic_0)))) {
                ap_NS_fsm = ap_ST_fsm_pp0_stage0;
            } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage3_subdone.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter21.read()) && esl_seteq<1,1,1>(ap_enable_reg_pp0_iter20.read(), ap_const_logic_0))) {
                ap_NS_fsm = ap_ST_fsm_state90;
            } else {
                ap_NS_fsm = ap_ST_fsm_pp0_stage3;
            }
            break;
        case 32 : 
            ap_NS_fsm = ap_ST_fsm_state1;
            break;
        default : 
            ap_NS_fsm =  (sc_lv<6>) ("XXXXXX");
            break;
    }
}

}


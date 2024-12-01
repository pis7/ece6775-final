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
        if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
              esl_seteq<1,1,1>(ap_block_pp0_stage3_subdone.read(), ap_const_boolean_0)) || 
             (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
              esl_seteq<1,1,1>(ap_block_pp0_stage1_subdone.read(), ap_const_boolean_0)))) {
            ap_enable_reg_pp0_iter20 = ap_enable_reg_pp0_iter19.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
                    esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
            ap_enable_reg_pp0_iter20 = ap_const_logic_0;
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
         esl_seteq<1,1,1>(icmp_ln161_reg_6264.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()))) {
        indvar_flatten_reg_1317 = add_ln161_1_reg_6268.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
                esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
        indvar_flatten_reg_1317 = ap_const_lv12_0;
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(icmp_ln161_reg_6264.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()))) {
        j_0_0_reg_1328 = select_ln165_1_reg_6610.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
                esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
        j_0_0_reg_1328 = ap_const_lv9_0;
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(icmp_ln161_reg_6264.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()))) {
        ko_0_0_reg_1340 = add_ln162_reg_7306.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
                esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
        ko_0_0_reg_1340 = ap_const_lv3_0;
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        add_ln161_1_reg_6268 = add_ln161_1_fu_1375_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(icmp_ln161_fu_1369_p2.read(), ap_const_lv1_0))) {
        add_ln161_reg_6273 = add_ln161_fu_1381_p2.read();
        icmp_ln162_reg_6278 = icmp_ln162_fu_1387_p2.read();
        select_ln165_reg_6283 = select_ln165_fu_1393_p3.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && esl_seteq<1,1,1>(icmp_ln161_reg_6264.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0))) {
        add_ln162_reg_7306 = add_ln162_fu_6172_p2.read();
    }
    if ((esl_seteq<1,1,1>(icmp_ln161_reg_6264.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0))) {
        add_ln703_27_reg_7126 = add_ln703_27_fu_5378_p2.read();
        add_ln703_33_reg_7131 = add_ln703_33_fu_5384_p2.read();
        add_ln703_34_reg_7136 = add_ln703_34_fu_5390_p2.read();
        add_ln703_36_reg_7141 = add_ln703_36_fu_5396_p2.read();
        add_ln703_37_reg_7146 = add_ln703_37_fu_5402_p2.read();
        add_ln703_41_reg_7151 = add_ln703_41_fu_5408_p2.read();
        add_ln703_42_reg_7156 = add_ln703_42_fu_5414_p2.read();
        add_ln703_44_reg_7161 = add_ln703_44_fu_5420_p2.read();
        add_ln703_45_reg_7166 = add_ln703_45_fu_5426_p2.read();
        add_ln703_48_reg_7171 = add_ln703_48_fu_5432_p2.read();
        add_ln703_49_reg_7176 = add_ln703_49_fu_5438_p2.read();
        add_ln703_51_reg_7181 = add_ln703_51_fu_5444_p2.read();
        add_ln703_52_reg_7186 = add_ln703_52_fu_5450_p2.read();
        add_ln703_57_reg_7191 = add_ln703_57_fu_5456_p2.read();
        add_ln703_58_reg_7196 = add_ln703_58_fu_5462_p2.read();
        add_ln703_60_reg_7201 = add_ln703_60_fu_5468_p2.read();
        add_ln703_61_reg_7206 = add_ln703_61_fu_5474_p2.read();
        add_ln703_64_reg_7211 = add_ln703_64_fu_5480_p2.read();
        add_ln703_65_reg_7216 = add_ln703_65_fu_5486_p2.read();
        add_ln703_67_reg_7221 = add_ln703_67_fu_5492_p2.read();
        add_ln703_68_reg_7226 = add_ln703_68_fu_5498_p2.read();
        add_ln703_72_reg_7231 = add_ln703_72_fu_5504_p2.read();
        add_ln703_73_reg_7236 = add_ln703_73_fu_5510_p2.read();
        add_ln703_75_reg_7241 = add_ln703_75_fu_5516_p2.read();
        add_ln703_76_reg_7246 = add_ln703_76_fu_5522_p2.read();
        add_ln703_79_reg_7251 = add_ln703_79_fu_5528_p2.read();
        add_ln703_80_reg_7256 = add_ln703_80_fu_5534_p2.read();
        add_ln703_82_reg_7261 = add_ln703_82_fu_5540_p2.read();
        add_ln703_83_reg_7266 = add_ln703_83_fu_5546_p2.read();
        output_0_V_addr_reg_7080 =  (sc_lv<9>) (zext_ln165_fu_1533_p1.read());
        select_ln170_reg_7086 = select_ln170_fu_1577_p3.read();
        sub_ln701_61_reg_7121 = sub_ln701_61_fu_5241_p2.read();
        trunc_ln167_2_reg_7097 = trunc_ln167_2_fu_1727_p1.read();
        trunc_ln167_45_reg_7115 = packed_weights_15_q0.read().range(3, 2);
        trunc_ln167_8_reg_7103 = packed_weights_1_q0.read().range(3, 2);
        trunc_ln167_9_reg_7109 = packed_weights_1_q0.read().range(5, 4);
        trunc_ln_reg_7091 = packed_weights_0_q0.read().range(7, 6);
    }
    if ((esl_seteq<1,1,1>(icmp_ln161_reg_6264.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0))) {
        add_ln703_28_reg_7271 = add_ln703_28_fu_5836_p2.read();
        add_ln703_31_reg_7276 = add_ln703_31_fu_5862_p2.read();
        add_ln703_39_reg_7281 = add_ln703_39_fu_5900_p2.read();
        add_ln703_55_reg_7286 = add_ln703_55_fu_5990_p2.read();
        add_ln703_71_reg_7291 = add_ln703_71_fu_6080_p2.read();
        add_ln703_78_reg_7296 = add_ln703_78_fu_6118_p2.read();
        add_ln703_86_reg_7301 = add_ln703_86_fu_6166_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(icmp_ln161_reg_6264.read(), ap_const_lv1_0))) {
        add_ln703_40_reg_7312 = add_ln703_40_fu_6188_p2.read();
        add_ln703_88_reg_7317 = add_ln703_88_fu_6213_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(icmp_ln161_reg_6264_pp0_iter1_reg.read(), ap_const_lv1_0))) {
        add_ln703_89_reg_7322 = add_ln703_89_fu_6230_p2.read();
        icmp_ln162_1_reg_7327 = icmp_ln162_1_fu_6237_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        icmp_ln161_reg_6264 = icmp_ln161_fu_1369_p2.read();
        icmp_ln161_reg_6264_pp0_iter1_reg = icmp_ln161_reg_6264.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0))) {
        icmp_ln162_1_reg_7327_pp0_iter10_reg = icmp_ln162_1_reg_7327_pp0_iter9_reg.read();
        icmp_ln162_1_reg_7327_pp0_iter11_reg = icmp_ln162_1_reg_7327_pp0_iter10_reg.read();
        icmp_ln162_1_reg_7327_pp0_iter12_reg = icmp_ln162_1_reg_7327_pp0_iter11_reg.read();
        icmp_ln162_1_reg_7327_pp0_iter13_reg = icmp_ln162_1_reg_7327_pp0_iter12_reg.read();
        icmp_ln162_1_reg_7327_pp0_iter14_reg = icmp_ln162_1_reg_7327_pp0_iter13_reg.read();
        icmp_ln162_1_reg_7327_pp0_iter15_reg = icmp_ln162_1_reg_7327_pp0_iter14_reg.read();
        icmp_ln162_1_reg_7327_pp0_iter16_reg = icmp_ln162_1_reg_7327_pp0_iter15_reg.read();
        icmp_ln162_1_reg_7327_pp0_iter17_reg = icmp_ln162_1_reg_7327_pp0_iter16_reg.read();
        icmp_ln162_1_reg_7327_pp0_iter18_reg = icmp_ln162_1_reg_7327_pp0_iter17_reg.read();
        icmp_ln162_1_reg_7327_pp0_iter19_reg = icmp_ln162_1_reg_7327_pp0_iter18_reg.read();
        icmp_ln162_1_reg_7327_pp0_iter2_reg = icmp_ln162_1_reg_7327.read();
        icmp_ln162_1_reg_7327_pp0_iter3_reg = icmp_ln162_1_reg_7327_pp0_iter2_reg.read();
        icmp_ln162_1_reg_7327_pp0_iter4_reg = icmp_ln162_1_reg_7327_pp0_iter3_reg.read();
        icmp_ln162_1_reg_7327_pp0_iter5_reg = icmp_ln162_1_reg_7327_pp0_iter4_reg.read();
        icmp_ln162_1_reg_7327_pp0_iter6_reg = icmp_ln162_1_reg_7327_pp0_iter5_reg.read();
        icmp_ln162_1_reg_7327_pp0_iter7_reg = icmp_ln162_1_reg_7327_pp0_iter6_reg.read();
        icmp_ln162_1_reg_7327_pp0_iter8_reg = icmp_ln162_1_reg_7327_pp0_iter7_reg.read();
        icmp_ln162_1_reg_7327_pp0_iter9_reg = icmp_ln162_1_reg_7327_pp0_iter8_reg.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(icmp_ln161_reg_6264.read(), ap_const_lv1_0))) {
        input_0_0_0_V_loa_reg_6696 = input_0_0_0_V_q0.read();
        input_0_1_0_V_loa_reg_6702 = input_0_1_0_V_q0.read();
        input_0_2_0_V_loa_reg_6708 = input_0_2_0_V_q0.read();
        input_0_3_0_V_loa_reg_6714 = input_0_3_0_V_q0.read();
        input_10_0_0_V_lo_reg_6936 = input_10_0_0_V_q0.read();
        input_10_1_0_V_lo_reg_6942 = input_10_1_0_V_q0.read();
        input_10_2_0_V_lo_reg_6948 = input_10_2_0_V_q0.read();
        input_10_3_0_V_lo_reg_6954 = input_10_3_0_V_q0.read();
        input_11_0_0_V_lo_reg_6960 = input_11_0_0_V_q0.read();
        input_11_1_0_V_lo_reg_6966 = input_11_1_0_V_q0.read();
        input_11_2_0_V_lo_reg_6972 = input_11_2_0_V_q0.read();
        input_11_3_0_V_lo_reg_6978 = input_11_3_0_V_q0.read();
        input_12_0_0_V_lo_reg_6984 = input_12_0_0_V_q0.read();
        input_12_1_0_V_lo_reg_6990 = input_12_1_0_V_q0.read();
        input_12_2_0_V_lo_reg_6996 = input_12_2_0_V_q0.read();
        input_12_3_0_V_lo_reg_7002 = input_12_3_0_V_q0.read();
        input_13_0_0_V_lo_reg_7008 = input_13_0_0_V_q0.read();
        input_13_1_0_V_lo_reg_7014 = input_13_1_0_V_q0.read();
        input_13_2_0_V_lo_reg_7020 = input_13_2_0_V_q0.read();
        input_13_3_0_V_lo_reg_7026 = input_13_3_0_V_q0.read();
        input_14_0_0_V_lo_reg_7032 = input_14_0_0_V_q0.read();
        input_14_1_0_V_lo_reg_7038 = input_14_1_0_V_q0.read();
        input_14_2_0_V_lo_reg_7044 = input_14_2_0_V_q0.read();
        input_14_3_0_V_lo_reg_7050 = input_14_3_0_V_q0.read();
        input_15_0_0_V_lo_reg_7056 = input_15_0_0_V_q0.read();
        input_15_1_0_V_lo_reg_7062 = input_15_1_0_V_q0.read();
        input_15_2_0_V_lo_reg_7068 = input_15_2_0_V_q0.read();
        input_15_3_0_V_lo_reg_7074 = input_15_3_0_V_q0.read();
        input_1_0_0_V_loa_reg_6720 = input_1_0_0_V_q0.read();
        input_1_1_0_V_loa_reg_6726 = input_1_1_0_V_q0.read();
        input_1_2_0_V_loa_reg_6732 = input_1_2_0_V_q0.read();
        input_1_3_0_V_loa_reg_6738 = input_1_3_0_V_q0.read();
        input_2_0_0_V_loa_reg_6744 = input_2_0_0_V_q0.read();
        input_2_1_0_V_loa_reg_6750 = input_2_1_0_V_q0.read();
        input_2_2_0_V_loa_reg_6756 = input_2_2_0_V_q0.read();
        input_2_3_0_V_loa_reg_6762 = input_2_3_0_V_q0.read();
        input_3_0_0_V_loa_reg_6768 = input_3_0_0_V_q0.read();
        input_3_1_0_V_loa_reg_6774 = input_3_1_0_V_q0.read();
        input_3_2_0_V_loa_reg_6780 = input_3_2_0_V_q0.read();
        input_3_3_0_V_loa_reg_6786 = input_3_3_0_V_q0.read();
        input_4_0_0_V_loa_reg_6792 = input_4_0_0_V_q0.read();
        input_4_1_0_V_loa_reg_6798 = input_4_1_0_V_q0.read();
        input_4_2_0_V_loa_reg_6804 = input_4_2_0_V_q0.read();
        input_4_3_0_V_loa_reg_6810 = input_4_3_0_V_q0.read();
        input_5_0_0_V_loa_reg_6816 = input_5_0_0_V_q0.read();
        input_5_1_0_V_loa_reg_6822 = input_5_1_0_V_q0.read();
        input_5_2_0_V_loa_reg_6828 = input_5_2_0_V_q0.read();
        input_5_3_0_V_loa_reg_6834 = input_5_3_0_V_q0.read();
        input_6_0_0_V_loa_reg_6840 = input_6_0_0_V_q0.read();
        input_6_1_0_V_loa_reg_6846 = input_6_1_0_V_q0.read();
        input_6_2_0_V_loa_reg_6852 = input_6_2_0_V_q0.read();
        input_6_3_0_V_loa_reg_6858 = input_6_3_0_V_q0.read();
        input_7_0_0_V_loa_reg_6864 = input_7_0_0_V_q0.read();
        input_7_1_0_V_loa_reg_6870 = input_7_1_0_V_q0.read();
        input_7_2_0_V_loa_reg_6876 = input_7_2_0_V_q0.read();
        input_7_3_0_V_loa_reg_6882 = input_7_3_0_V_q0.read();
        input_8_0_0_V_loa_reg_6888 = input_8_0_0_V_q0.read();
        input_8_1_0_V_loa_reg_6894 = input_8_1_0_V_q0.read();
        input_8_2_0_V_loa_reg_6900 = input_8_2_0_V_q0.read();
        input_8_3_0_V_loa_reg_6906 = input_8_3_0_V_q0.read();
        input_9_0_0_V_loa_reg_6912 = input_9_0_0_V_q0.read();
        input_9_1_0_V_loa_reg_6918 = input_9_1_0_V_q0.read();
        input_9_2_0_V_loa_reg_6924 = input_9_2_0_V_q0.read();
        input_9_3_0_V_loa_reg_6930 = input_9_3_0_V_q0.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0))) {
        output_0_V_addr_reg_7080_pp0_iter10_reg = output_0_V_addr_reg_7080_pp0_iter9_reg.read();
        output_0_V_addr_reg_7080_pp0_iter11_reg = output_0_V_addr_reg_7080_pp0_iter10_reg.read();
        output_0_V_addr_reg_7080_pp0_iter12_reg = output_0_V_addr_reg_7080_pp0_iter11_reg.read();
        output_0_V_addr_reg_7080_pp0_iter13_reg = output_0_V_addr_reg_7080_pp0_iter12_reg.read();
        output_0_V_addr_reg_7080_pp0_iter14_reg = output_0_V_addr_reg_7080_pp0_iter13_reg.read();
        output_0_V_addr_reg_7080_pp0_iter15_reg = output_0_V_addr_reg_7080_pp0_iter14_reg.read();
        output_0_V_addr_reg_7080_pp0_iter16_reg = output_0_V_addr_reg_7080_pp0_iter15_reg.read();
        output_0_V_addr_reg_7080_pp0_iter17_reg = output_0_V_addr_reg_7080_pp0_iter16_reg.read();
        output_0_V_addr_reg_7080_pp0_iter18_reg = output_0_V_addr_reg_7080_pp0_iter17_reg.read();
        output_0_V_addr_reg_7080_pp0_iter19_reg = output_0_V_addr_reg_7080_pp0_iter18_reg.read();
        output_0_V_addr_reg_7080_pp0_iter1_reg = output_0_V_addr_reg_7080.read();
        output_0_V_addr_reg_7080_pp0_iter2_reg = output_0_V_addr_reg_7080_pp0_iter1_reg.read();
        output_0_V_addr_reg_7080_pp0_iter3_reg = output_0_V_addr_reg_7080_pp0_iter2_reg.read();
        output_0_V_addr_reg_7080_pp0_iter4_reg = output_0_V_addr_reg_7080_pp0_iter3_reg.read();
        output_0_V_addr_reg_7080_pp0_iter5_reg = output_0_V_addr_reg_7080_pp0_iter4_reg.read();
        output_0_V_addr_reg_7080_pp0_iter6_reg = output_0_V_addr_reg_7080_pp0_iter5_reg.read();
        output_0_V_addr_reg_7080_pp0_iter7_reg = output_0_V_addr_reg_7080_pp0_iter6_reg.read();
        output_0_V_addr_reg_7080_pp0_iter8_reg = output_0_V_addr_reg_7080_pp0_iter7_reg.read();
        output_0_V_addr_reg_7080_pp0_iter9_reg = output_0_V_addr_reg_7080_pp0_iter8_reg.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(icmp_ln161_reg_6264.read(), ap_const_lv1_0))) {
        select_ln165_1_reg_6610 = select_ln165_1_fu_1469_p3.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
        sext_ln161_reg_6259 = sext_ln161_fu_1365_p1.read();
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
            if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0) && !(esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(icmp_ln161_fu_1369_p2.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_0)))) {
                ap_NS_fsm = ap_ST_fsm_pp0_stage1;
            } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(icmp_ln161_fu_1369_p2.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_0))) {
                ap_NS_fsm = ap_ST_fsm_state84;
            } else {
                ap_NS_fsm = ap_ST_fsm_pp0_stage0;
            }
            break;
        case 4 : 
            if ((esl_seteq<1,1,1>(ap_block_pp0_stage1_subdone.read(), ap_const_boolean_0) && !(esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage1_subdone.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter20.read()) && esl_seteq<1,1,1>(ap_enable_reg_pp0_iter19.read(), ap_const_logic_0)))) {
                ap_NS_fsm = ap_ST_fsm_pp0_stage2;
            } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage1_subdone.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter20.read()) && esl_seteq<1,1,1>(ap_enable_reg_pp0_iter19.read(), ap_const_logic_0))) {
                ap_NS_fsm = ap_ST_fsm_state84;
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
            if (esl_seteq<1,1,1>(ap_block_pp0_stage3_subdone.read(), ap_const_boolean_0)) {
                ap_NS_fsm = ap_ST_fsm_pp0_stage0;
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


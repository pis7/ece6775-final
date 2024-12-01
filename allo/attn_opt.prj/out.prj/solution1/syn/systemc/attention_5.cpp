#include "attention.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void attention::thread_v257_8_address1() {
    v257_8_address1 = grp_linear_forward_no_mu_fu_1330_v80_8_address1.read();
}

void attention::thread_v257_8_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read())) {
        v257_8_ce0 = grp_linear_forward_no_mu_fu_1330_v80_8_ce0.read();
    } else {
        v257_8_ce0 = ap_const_logic_0;
    }
}

void attention::thread_v257_8_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read())) {
        v257_8_ce1 = grp_linear_forward_no_mu_fu_1330_v80_8_ce1.read();
    } else {
        v257_8_ce1 = ap_const_logic_0;
    }
}

void attention::thread_v257_9_address0() {
    v257_9_address0 = grp_linear_forward_no_mu_fu_1330_v80_9_address0.read();
}

void attention::thread_v257_9_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read())) {
        v257_9_ce0 = grp_linear_forward_no_mu_fu_1330_v80_9_ce0.read();
    } else {
        v257_9_ce0 = ap_const_logic_0;
    }
}

void attention::thread_v259_0_address0() {
    v259_0_address0 = grp_linear_forward_no_mu_fu_1330_v80_0_address0.read();
}

void attention::thread_v259_0_address1() {
    v259_0_address1 = grp_linear_forward_no_mu_fu_1330_v80_0_address1.read();
}

void attention::thread_v259_0_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read())) {
        v259_0_ce0 = grp_linear_forward_no_mu_fu_1330_v80_0_ce0.read();
    } else {
        v259_0_ce0 = ap_const_logic_0;
    }
}

void attention::thread_v259_0_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read())) {
        v259_0_ce1 = grp_linear_forward_no_mu_fu_1330_v80_0_ce1.read();
    } else {
        v259_0_ce1 = ap_const_logic_0;
    }
}

void attention::thread_v259_10_address0() {
    v259_10_address0 = grp_linear_forward_no_mu_fu_1330_v80_10_address0.read();
}

void attention::thread_v259_10_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read())) {
        v259_10_ce0 = grp_linear_forward_no_mu_fu_1330_v80_10_ce0.read();
    } else {
        v259_10_ce0 = ap_const_logic_0;
    }
}

void attention::thread_v259_11_address0() {
    v259_11_address0 = grp_linear_forward_no_mu_fu_1330_v80_11_address0.read();
}

void attention::thread_v259_11_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read())) {
        v259_11_ce0 = grp_linear_forward_no_mu_fu_1330_v80_11_ce0.read();
    } else {
        v259_11_ce0 = ap_const_logic_0;
    }
}

void attention::thread_v259_12_address0() {
    v259_12_address0 = grp_linear_forward_no_mu_fu_1330_v80_12_address0.read();
}

void attention::thread_v259_12_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read())) {
        v259_12_ce0 = grp_linear_forward_no_mu_fu_1330_v80_12_ce0.read();
    } else {
        v259_12_ce0 = ap_const_logic_0;
    }
}

void attention::thread_v259_13_address0() {
    v259_13_address0 = grp_linear_forward_no_mu_fu_1330_v80_13_address0.read();
}

void attention::thread_v259_13_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read())) {
        v259_13_ce0 = grp_linear_forward_no_mu_fu_1330_v80_13_ce0.read();
    } else {
        v259_13_ce0 = ap_const_logic_0;
    }
}

void attention::thread_v259_14_address0() {
    v259_14_address0 = grp_linear_forward_no_mu_fu_1330_v80_14_address0.read();
}

void attention::thread_v259_14_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read())) {
        v259_14_ce0 = grp_linear_forward_no_mu_fu_1330_v80_14_ce0.read();
    } else {
        v259_14_ce0 = ap_const_logic_0;
    }
}

void attention::thread_v259_15_address0() {
    v259_15_address0 = grp_linear_forward_no_mu_fu_1330_v80_15_address0.read();
}

void attention::thread_v259_15_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read())) {
        v259_15_ce0 = grp_linear_forward_no_mu_fu_1330_v80_15_ce0.read();
    } else {
        v259_15_ce0 = ap_const_logic_0;
    }
}

void attention::thread_v259_16_address0() {
    v259_16_address0 = grp_linear_forward_no_mu_fu_1330_v80_16_address0.read();
}

void attention::thread_v259_16_address1() {
    v259_16_address1 = grp_linear_forward_no_mu_fu_1330_v80_16_address1.read();
}

void attention::thread_v259_16_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read())) {
        v259_16_ce0 = grp_linear_forward_no_mu_fu_1330_v80_16_ce0.read();
    } else {
        v259_16_ce0 = ap_const_logic_0;
    }
}

void attention::thread_v259_16_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read())) {
        v259_16_ce1 = grp_linear_forward_no_mu_fu_1330_v80_16_ce1.read();
    } else {
        v259_16_ce1 = ap_const_logic_0;
    }
}

void attention::thread_v259_17_address0() {
    v259_17_address0 = grp_linear_forward_no_mu_fu_1330_v80_17_address0.read();
}

void attention::thread_v259_17_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read())) {
        v259_17_ce0 = grp_linear_forward_no_mu_fu_1330_v80_17_ce0.read();
    } else {
        v259_17_ce0 = ap_const_logic_0;
    }
}

void attention::thread_v259_18_address0() {
    v259_18_address0 = grp_linear_forward_no_mu_fu_1330_v80_18_address0.read();
}

void attention::thread_v259_18_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read())) {
        v259_18_ce0 = grp_linear_forward_no_mu_fu_1330_v80_18_ce0.read();
    } else {
        v259_18_ce0 = ap_const_logic_0;
    }
}

void attention::thread_v259_19_address0() {
    v259_19_address0 = grp_linear_forward_no_mu_fu_1330_v80_19_address0.read();
}

void attention::thread_v259_19_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read())) {
        v259_19_ce0 = grp_linear_forward_no_mu_fu_1330_v80_19_ce0.read();
    } else {
        v259_19_ce0 = ap_const_logic_0;
    }
}

void attention::thread_v259_1_address0() {
    v259_1_address0 = grp_linear_forward_no_mu_fu_1330_v80_1_address0.read();
}

void attention::thread_v259_1_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read())) {
        v259_1_ce0 = grp_linear_forward_no_mu_fu_1330_v80_1_ce0.read();
    } else {
        v259_1_ce0 = ap_const_logic_0;
    }
}

void attention::thread_v259_20_address0() {
    v259_20_address0 = grp_linear_forward_no_mu_fu_1330_v80_20_address0.read();
}

void attention::thread_v259_20_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read())) {
        v259_20_ce0 = grp_linear_forward_no_mu_fu_1330_v80_20_ce0.read();
    } else {
        v259_20_ce0 = ap_const_logic_0;
    }
}

void attention::thread_v259_21_address0() {
    v259_21_address0 = grp_linear_forward_no_mu_fu_1330_v80_21_address0.read();
}

void attention::thread_v259_21_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read())) {
        v259_21_ce0 = grp_linear_forward_no_mu_fu_1330_v80_21_ce0.read();
    } else {
        v259_21_ce0 = ap_const_logic_0;
    }
}

void attention::thread_v259_22_address0() {
    v259_22_address0 = grp_linear_forward_no_mu_fu_1330_v80_22_address0.read();
}

void attention::thread_v259_22_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read())) {
        v259_22_ce0 = grp_linear_forward_no_mu_fu_1330_v80_22_ce0.read();
    } else {
        v259_22_ce0 = ap_const_logic_0;
    }
}

void attention::thread_v259_23_address0() {
    v259_23_address0 = grp_linear_forward_no_mu_fu_1330_v80_23_address0.read();
}

void attention::thread_v259_23_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read())) {
        v259_23_ce0 = grp_linear_forward_no_mu_fu_1330_v80_23_ce0.read();
    } else {
        v259_23_ce0 = ap_const_logic_0;
    }
}

void attention::thread_v259_2_address0() {
    v259_2_address0 = grp_linear_forward_no_mu_fu_1330_v80_2_address0.read();
}

void attention::thread_v259_2_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read())) {
        v259_2_ce0 = grp_linear_forward_no_mu_fu_1330_v80_2_ce0.read();
    } else {
        v259_2_ce0 = ap_const_logic_0;
    }
}

void attention::thread_v259_3_address0() {
    v259_3_address0 = grp_linear_forward_no_mu_fu_1330_v80_3_address0.read();
}

void attention::thread_v259_3_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read())) {
        v259_3_ce0 = grp_linear_forward_no_mu_fu_1330_v80_3_ce0.read();
    } else {
        v259_3_ce0 = ap_const_logic_0;
    }
}

void attention::thread_v259_4_address0() {
    v259_4_address0 = grp_linear_forward_no_mu_fu_1330_v80_4_address0.read();
}

void attention::thread_v259_4_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read())) {
        v259_4_ce0 = grp_linear_forward_no_mu_fu_1330_v80_4_ce0.read();
    } else {
        v259_4_ce0 = ap_const_logic_0;
    }
}

void attention::thread_v259_5_address0() {
    v259_5_address0 = grp_linear_forward_no_mu_fu_1330_v80_5_address0.read();
}

void attention::thread_v259_5_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read())) {
        v259_5_ce0 = grp_linear_forward_no_mu_fu_1330_v80_5_ce0.read();
    } else {
        v259_5_ce0 = ap_const_logic_0;
    }
}

void attention::thread_v259_6_address0() {
    v259_6_address0 = grp_linear_forward_no_mu_fu_1330_v80_6_address0.read();
}

void attention::thread_v259_6_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read())) {
        v259_6_ce0 = grp_linear_forward_no_mu_fu_1330_v80_6_ce0.read();
    } else {
        v259_6_ce0 = ap_const_logic_0;
    }
}

void attention::thread_v259_7_address0() {
    v259_7_address0 = grp_linear_forward_no_mu_fu_1330_v80_7_address0.read();
}

void attention::thread_v259_7_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read())) {
        v259_7_ce0 = grp_linear_forward_no_mu_fu_1330_v80_7_ce0.read();
    } else {
        v259_7_ce0 = ap_const_logic_0;
    }
}

void attention::thread_v259_8_address0() {
    v259_8_address0 = grp_linear_forward_no_mu_fu_1330_v80_8_address0.read();
}

void attention::thread_v259_8_address1() {
    v259_8_address1 = grp_linear_forward_no_mu_fu_1330_v80_8_address1.read();
}

void attention::thread_v259_8_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read())) {
        v259_8_ce0 = grp_linear_forward_no_mu_fu_1330_v80_8_ce0.read();
    } else {
        v259_8_ce0 = ap_const_logic_0;
    }
}

void attention::thread_v259_8_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read())) {
        v259_8_ce1 = grp_linear_forward_no_mu_fu_1330_v80_8_ce1.read();
    } else {
        v259_8_ce1 = ap_const_logic_0;
    }
}

void attention::thread_v259_9_address0() {
    v259_9_address0 = grp_linear_forward_no_mu_fu_1330_v80_9_address0.read();
}

void attention::thread_v259_9_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read())) {
        v259_9_ce0 = grp_linear_forward_no_mu_fu_1330_v80_9_ce0.read();
    } else {
        v259_9_ce0 = ap_const_logic_0;
    }
}

void attention::thread_v261_0_address0() {
    v261_0_address0 = grp_linear_forward_no_mu_fu_1330_v80_0_address0.read();
}

void attention::thread_v261_0_address1() {
    v261_0_address1 = grp_linear_forward_no_mu_fu_1330_v80_0_address1.read();
}

void attention::thread_v261_0_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read())) {
        v261_0_ce0 = grp_linear_forward_no_mu_fu_1330_v80_0_ce0.read();
    } else {
        v261_0_ce0 = ap_const_logic_0;
    }
}

void attention::thread_v261_0_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read())) {
        v261_0_ce1 = grp_linear_forward_no_mu_fu_1330_v80_0_ce1.read();
    } else {
        v261_0_ce1 = ap_const_logic_0;
    }
}

void attention::thread_v261_10_address0() {
    v261_10_address0 = grp_linear_forward_no_mu_fu_1330_v80_10_address0.read();
}

void attention::thread_v261_10_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read())) {
        v261_10_ce0 = grp_linear_forward_no_mu_fu_1330_v80_10_ce0.read();
    } else {
        v261_10_ce0 = ap_const_logic_0;
    }
}

void attention::thread_v261_11_address0() {
    v261_11_address0 = grp_linear_forward_no_mu_fu_1330_v80_11_address0.read();
}

void attention::thread_v261_11_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read())) {
        v261_11_ce0 = grp_linear_forward_no_mu_fu_1330_v80_11_ce0.read();
    } else {
        v261_11_ce0 = ap_const_logic_0;
    }
}

void attention::thread_v261_12_address0() {
    v261_12_address0 = grp_linear_forward_no_mu_fu_1330_v80_12_address0.read();
}

void attention::thread_v261_12_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read())) {
        v261_12_ce0 = grp_linear_forward_no_mu_fu_1330_v80_12_ce0.read();
    } else {
        v261_12_ce0 = ap_const_logic_0;
    }
}

void attention::thread_v261_13_address0() {
    v261_13_address0 = grp_linear_forward_no_mu_fu_1330_v80_13_address0.read();
}

void attention::thread_v261_13_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read())) {
        v261_13_ce0 = grp_linear_forward_no_mu_fu_1330_v80_13_ce0.read();
    } else {
        v261_13_ce0 = ap_const_logic_0;
    }
}

void attention::thread_v261_14_address0() {
    v261_14_address0 = grp_linear_forward_no_mu_fu_1330_v80_14_address0.read();
}

void attention::thread_v261_14_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read())) {
        v261_14_ce0 = grp_linear_forward_no_mu_fu_1330_v80_14_ce0.read();
    } else {
        v261_14_ce0 = ap_const_logic_0;
    }
}

void attention::thread_v261_15_address0() {
    v261_15_address0 = grp_linear_forward_no_mu_fu_1330_v80_15_address0.read();
}

void attention::thread_v261_15_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read())) {
        v261_15_ce0 = grp_linear_forward_no_mu_fu_1330_v80_15_ce0.read();
    } else {
        v261_15_ce0 = ap_const_logic_0;
    }
}

void attention::thread_v261_16_address0() {
    v261_16_address0 = grp_linear_forward_no_mu_fu_1330_v80_16_address0.read();
}

void attention::thread_v261_16_address1() {
    v261_16_address1 = grp_linear_forward_no_mu_fu_1330_v80_16_address1.read();
}

void attention::thread_v261_16_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read())) {
        v261_16_ce0 = grp_linear_forward_no_mu_fu_1330_v80_16_ce0.read();
    } else {
        v261_16_ce0 = ap_const_logic_0;
    }
}

void attention::thread_v261_16_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read())) {
        v261_16_ce1 = grp_linear_forward_no_mu_fu_1330_v80_16_ce1.read();
    } else {
        v261_16_ce1 = ap_const_logic_0;
    }
}

void attention::thread_v261_17_address0() {
    v261_17_address0 = grp_linear_forward_no_mu_fu_1330_v80_17_address0.read();
}

void attention::thread_v261_17_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read())) {
        v261_17_ce0 = grp_linear_forward_no_mu_fu_1330_v80_17_ce0.read();
    } else {
        v261_17_ce0 = ap_const_logic_0;
    }
}

void attention::thread_v261_18_address0() {
    v261_18_address0 = grp_linear_forward_no_mu_fu_1330_v80_18_address0.read();
}

void attention::thread_v261_18_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read())) {
        v261_18_ce0 = grp_linear_forward_no_mu_fu_1330_v80_18_ce0.read();
    } else {
        v261_18_ce0 = ap_const_logic_0;
    }
}

void attention::thread_v261_19_address0() {
    v261_19_address0 = grp_linear_forward_no_mu_fu_1330_v80_19_address0.read();
}

void attention::thread_v261_19_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read())) {
        v261_19_ce0 = grp_linear_forward_no_mu_fu_1330_v80_19_ce0.read();
    } else {
        v261_19_ce0 = ap_const_logic_0;
    }
}

void attention::thread_v261_1_address0() {
    v261_1_address0 = grp_linear_forward_no_mu_fu_1330_v80_1_address0.read();
}

void attention::thread_v261_1_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read())) {
        v261_1_ce0 = grp_linear_forward_no_mu_fu_1330_v80_1_ce0.read();
    } else {
        v261_1_ce0 = ap_const_logic_0;
    }
}

void attention::thread_v261_20_address0() {
    v261_20_address0 = grp_linear_forward_no_mu_fu_1330_v80_20_address0.read();
}

void attention::thread_v261_20_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read())) {
        v261_20_ce0 = grp_linear_forward_no_mu_fu_1330_v80_20_ce0.read();
    } else {
        v261_20_ce0 = ap_const_logic_0;
    }
}

void attention::thread_v261_21_address0() {
    v261_21_address0 = grp_linear_forward_no_mu_fu_1330_v80_21_address0.read();
}

void attention::thread_v261_21_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read())) {
        v261_21_ce0 = grp_linear_forward_no_mu_fu_1330_v80_21_ce0.read();
    } else {
        v261_21_ce0 = ap_const_logic_0;
    }
}

void attention::thread_v261_22_address0() {
    v261_22_address0 = grp_linear_forward_no_mu_fu_1330_v80_22_address0.read();
}

void attention::thread_v261_22_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read())) {
        v261_22_ce0 = grp_linear_forward_no_mu_fu_1330_v80_22_ce0.read();
    } else {
        v261_22_ce0 = ap_const_logic_0;
    }
}

void attention::thread_v261_23_address0() {
    v261_23_address0 = grp_linear_forward_no_mu_fu_1330_v80_23_address0.read();
}

void attention::thread_v261_23_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read())) {
        v261_23_ce0 = grp_linear_forward_no_mu_fu_1330_v80_23_ce0.read();
    } else {
        v261_23_ce0 = ap_const_logic_0;
    }
}

void attention::thread_v261_2_address0() {
    v261_2_address0 = grp_linear_forward_no_mu_fu_1330_v80_2_address0.read();
}

void attention::thread_v261_2_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read())) {
        v261_2_ce0 = grp_linear_forward_no_mu_fu_1330_v80_2_ce0.read();
    } else {
        v261_2_ce0 = ap_const_logic_0;
    }
}

void attention::thread_v261_3_address0() {
    v261_3_address0 = grp_linear_forward_no_mu_fu_1330_v80_3_address0.read();
}

void attention::thread_v261_3_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read())) {
        v261_3_ce0 = grp_linear_forward_no_mu_fu_1330_v80_3_ce0.read();
    } else {
        v261_3_ce0 = ap_const_logic_0;
    }
}

void attention::thread_v261_4_address0() {
    v261_4_address0 = grp_linear_forward_no_mu_fu_1330_v80_4_address0.read();
}

void attention::thread_v261_4_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read())) {
        v261_4_ce0 = grp_linear_forward_no_mu_fu_1330_v80_4_ce0.read();
    } else {
        v261_4_ce0 = ap_const_logic_0;
    }
}

void attention::thread_v261_5_address0() {
    v261_5_address0 = grp_linear_forward_no_mu_fu_1330_v80_5_address0.read();
}

void attention::thread_v261_5_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read())) {
        v261_5_ce0 = grp_linear_forward_no_mu_fu_1330_v80_5_ce0.read();
    } else {
        v261_5_ce0 = ap_const_logic_0;
    }
}

void attention::thread_v261_6_address0() {
    v261_6_address0 = grp_linear_forward_no_mu_fu_1330_v80_6_address0.read();
}

void attention::thread_v261_6_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read())) {
        v261_6_ce0 = grp_linear_forward_no_mu_fu_1330_v80_6_ce0.read();
    } else {
        v261_6_ce0 = ap_const_logic_0;
    }
}

void attention::thread_v261_7_address0() {
    v261_7_address0 = grp_linear_forward_no_mu_fu_1330_v80_7_address0.read();
}

void attention::thread_v261_7_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read())) {
        v261_7_ce0 = grp_linear_forward_no_mu_fu_1330_v80_7_ce0.read();
    } else {
        v261_7_ce0 = ap_const_logic_0;
    }
}

void attention::thread_v261_8_address0() {
    v261_8_address0 = grp_linear_forward_no_mu_fu_1330_v80_8_address0.read();
}

void attention::thread_v261_8_address1() {
    v261_8_address1 = grp_linear_forward_no_mu_fu_1330_v80_8_address1.read();
}

void attention::thread_v261_8_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read())) {
        v261_8_ce0 = grp_linear_forward_no_mu_fu_1330_v80_8_ce0.read();
    } else {
        v261_8_ce0 = ap_const_logic_0;
    }
}

void attention::thread_v261_8_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read())) {
        v261_8_ce1 = grp_linear_forward_no_mu_fu_1330_v80_8_ce1.read();
    } else {
        v261_8_ce1 = ap_const_logic_0;
    }
}

void attention::thread_v261_9_address0() {
    v261_9_address0 = grp_linear_forward_no_mu_fu_1330_v80_9_address0.read();
}

void attention::thread_v261_9_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read())) {
        v261_9_ce0 = grp_linear_forward_no_mu_fu_1330_v80_9_ce0.read();
    } else {
        v261_9_ce0 = ap_const_logic_0;
    }
}

void attention::thread_v263_0_address0() {
    v263_0_address0 = grp_linear_forward_no_mu_fu_1330_v80_0_address0.read();
}

void attention::thread_v263_0_address1() {
    v263_0_address1 = grp_linear_forward_no_mu_fu_1330_v80_0_address1.read();
}

void attention::thread_v263_0_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        v263_0_ce0 = grp_linear_forward_no_mu_fu_1330_v80_0_ce0.read();
    } else {
        v263_0_ce0 = ap_const_logic_0;
    }
}

void attention::thread_v263_0_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        v263_0_ce1 = grp_linear_forward_no_mu_fu_1330_v80_0_ce1.read();
    } else {
        v263_0_ce1 = ap_const_logic_0;
    }
}

void attention::thread_v263_10_address0() {
    v263_10_address0 = grp_linear_forward_no_mu_fu_1330_v80_10_address0.read();
}

void attention::thread_v263_10_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        v263_10_ce0 = grp_linear_forward_no_mu_fu_1330_v80_10_ce0.read();
    } else {
        v263_10_ce0 = ap_const_logic_0;
    }
}

void attention::thread_v263_11_address0() {
    v263_11_address0 = grp_linear_forward_no_mu_fu_1330_v80_11_address0.read();
}

void attention::thread_v263_11_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        v263_11_ce0 = grp_linear_forward_no_mu_fu_1330_v80_11_ce0.read();
    } else {
        v263_11_ce0 = ap_const_logic_0;
    }
}

void attention::thread_v263_12_address0() {
    v263_12_address0 = grp_linear_forward_no_mu_fu_1330_v80_12_address0.read();
}

void attention::thread_v263_12_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        v263_12_ce0 = grp_linear_forward_no_mu_fu_1330_v80_12_ce0.read();
    } else {
        v263_12_ce0 = ap_const_logic_0;
    }
}

void attention::thread_v263_13_address0() {
    v263_13_address0 = grp_linear_forward_no_mu_fu_1330_v80_13_address0.read();
}

void attention::thread_v263_13_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        v263_13_ce0 = grp_linear_forward_no_mu_fu_1330_v80_13_ce0.read();
    } else {
        v263_13_ce0 = ap_const_logic_0;
    }
}

void attention::thread_v263_14_address0() {
    v263_14_address0 = grp_linear_forward_no_mu_fu_1330_v80_14_address0.read();
}

void attention::thread_v263_14_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        v263_14_ce0 = grp_linear_forward_no_mu_fu_1330_v80_14_ce0.read();
    } else {
        v263_14_ce0 = ap_const_logic_0;
    }
}

void attention::thread_v263_15_address0() {
    v263_15_address0 = grp_linear_forward_no_mu_fu_1330_v80_15_address0.read();
}

void attention::thread_v263_15_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        v263_15_ce0 = grp_linear_forward_no_mu_fu_1330_v80_15_ce0.read();
    } else {
        v263_15_ce0 = ap_const_logic_0;
    }
}

void attention::thread_v263_16_address0() {
    v263_16_address0 = grp_linear_forward_no_mu_fu_1330_v80_16_address0.read();
}

void attention::thread_v263_16_address1() {
    v263_16_address1 = grp_linear_forward_no_mu_fu_1330_v80_16_address1.read();
}

void attention::thread_v263_16_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        v263_16_ce0 = grp_linear_forward_no_mu_fu_1330_v80_16_ce0.read();
    } else {
        v263_16_ce0 = ap_const_logic_0;
    }
}

void attention::thread_v263_16_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        v263_16_ce1 = grp_linear_forward_no_mu_fu_1330_v80_16_ce1.read();
    } else {
        v263_16_ce1 = ap_const_logic_0;
    }
}

void attention::thread_v263_17_address0() {
    v263_17_address0 = grp_linear_forward_no_mu_fu_1330_v80_17_address0.read();
}

void attention::thread_v263_17_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        v263_17_ce0 = grp_linear_forward_no_mu_fu_1330_v80_17_ce0.read();
    } else {
        v263_17_ce0 = ap_const_logic_0;
    }
}

void attention::thread_v263_18_address0() {
    v263_18_address0 = grp_linear_forward_no_mu_fu_1330_v80_18_address0.read();
}

void attention::thread_v263_18_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        v263_18_ce0 = grp_linear_forward_no_mu_fu_1330_v80_18_ce0.read();
    } else {
        v263_18_ce0 = ap_const_logic_0;
    }
}

void attention::thread_v263_19_address0() {
    v263_19_address0 = grp_linear_forward_no_mu_fu_1330_v80_19_address0.read();
}

void attention::thread_v263_19_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        v263_19_ce0 = grp_linear_forward_no_mu_fu_1330_v80_19_ce0.read();
    } else {
        v263_19_ce0 = ap_const_logic_0;
    }
}

void attention::thread_v263_1_address0() {
    v263_1_address0 = grp_linear_forward_no_mu_fu_1330_v80_1_address0.read();
}

void attention::thread_v263_1_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        v263_1_ce0 = grp_linear_forward_no_mu_fu_1330_v80_1_ce0.read();
    } else {
        v263_1_ce0 = ap_const_logic_0;
    }
}

void attention::thread_v263_20_address0() {
    v263_20_address0 = grp_linear_forward_no_mu_fu_1330_v80_20_address0.read();
}

void attention::thread_v263_20_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        v263_20_ce0 = grp_linear_forward_no_mu_fu_1330_v80_20_ce0.read();
    } else {
        v263_20_ce0 = ap_const_logic_0;
    }
}

void attention::thread_v263_21_address0() {
    v263_21_address0 = grp_linear_forward_no_mu_fu_1330_v80_21_address0.read();
}

void attention::thread_v263_21_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        v263_21_ce0 = grp_linear_forward_no_mu_fu_1330_v80_21_ce0.read();
    } else {
        v263_21_ce0 = ap_const_logic_0;
    }
}

void attention::thread_v263_22_address0() {
    v263_22_address0 = grp_linear_forward_no_mu_fu_1330_v80_22_address0.read();
}

void attention::thread_v263_22_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        v263_22_ce0 = grp_linear_forward_no_mu_fu_1330_v80_22_ce0.read();
    } else {
        v263_22_ce0 = ap_const_logic_0;
    }
}

void attention::thread_v263_23_address0() {
    v263_23_address0 = grp_linear_forward_no_mu_fu_1330_v80_23_address0.read();
}

void attention::thread_v263_23_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        v263_23_ce0 = grp_linear_forward_no_mu_fu_1330_v80_23_ce0.read();
    } else {
        v263_23_ce0 = ap_const_logic_0;
    }
}

void attention::thread_v263_2_address0() {
    v263_2_address0 = grp_linear_forward_no_mu_fu_1330_v80_2_address0.read();
}

void attention::thread_v263_2_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        v263_2_ce0 = grp_linear_forward_no_mu_fu_1330_v80_2_ce0.read();
    } else {
        v263_2_ce0 = ap_const_logic_0;
    }
}

void attention::thread_v263_3_address0() {
    v263_3_address0 = grp_linear_forward_no_mu_fu_1330_v80_3_address0.read();
}

void attention::thread_v263_3_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        v263_3_ce0 = grp_linear_forward_no_mu_fu_1330_v80_3_ce0.read();
    } else {
        v263_3_ce0 = ap_const_logic_0;
    }
}

void attention::thread_v263_4_address0() {
    v263_4_address0 = grp_linear_forward_no_mu_fu_1330_v80_4_address0.read();
}

void attention::thread_v263_4_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        v263_4_ce0 = grp_linear_forward_no_mu_fu_1330_v80_4_ce0.read();
    } else {
        v263_4_ce0 = ap_const_logic_0;
    }
}

void attention::thread_v263_5_address0() {
    v263_5_address0 = grp_linear_forward_no_mu_fu_1330_v80_5_address0.read();
}

void attention::thread_v263_5_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        v263_5_ce0 = grp_linear_forward_no_mu_fu_1330_v80_5_ce0.read();
    } else {
        v263_5_ce0 = ap_const_logic_0;
    }
}

void attention::thread_v263_6_address0() {
    v263_6_address0 = grp_linear_forward_no_mu_fu_1330_v80_6_address0.read();
}

void attention::thread_v263_6_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        v263_6_ce0 = grp_linear_forward_no_mu_fu_1330_v80_6_ce0.read();
    } else {
        v263_6_ce0 = ap_const_logic_0;
    }
}

void attention::thread_v263_7_address0() {
    v263_7_address0 = grp_linear_forward_no_mu_fu_1330_v80_7_address0.read();
}

void attention::thread_v263_7_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        v263_7_ce0 = grp_linear_forward_no_mu_fu_1330_v80_7_ce0.read();
    } else {
        v263_7_ce0 = ap_const_logic_0;
    }
}

void attention::thread_v263_8_address0() {
    v263_8_address0 = grp_linear_forward_no_mu_fu_1330_v80_8_address0.read();
}

void attention::thread_v263_8_address1() {
    v263_8_address1 = grp_linear_forward_no_mu_fu_1330_v80_8_address1.read();
}

void attention::thread_v263_8_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        v263_8_ce0 = grp_linear_forward_no_mu_fu_1330_v80_8_ce0.read();
    } else {
        v263_8_ce0 = ap_const_logic_0;
    }
}

void attention::thread_v263_8_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        v263_8_ce1 = grp_linear_forward_no_mu_fu_1330_v80_8_ce1.read();
    } else {
        v263_8_ce1 = ap_const_logic_0;
    }
}

void attention::thread_v263_9_address0() {
    v263_9_address0 = grp_linear_forward_no_mu_fu_1330_v80_9_address0.read();
}

void attention::thread_v263_9_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        v263_9_ce0 = grp_linear_forward_no_mu_fu_1330_v80_9_ce0.read();
    } else {
        v263_9_ce0 = ap_const_logic_0;
    }
}

void attention::thread_v265_V_address0() {
    v265_V_address0 = grp_apply_rotary_pos_emb_fu_2095_v155_V_address0.read();
}

void attention::thread_v265_V_ce0() {
    v265_V_ce0 = grp_apply_rotary_pos_emb_fu_2095_v155_V_ce0.read();
}

void attention::thread_v266_V_address0() {
    v266_V_address0 = grp_apply_rotary_pos_emb_fu_2095_v156_V_address0.read();
}

void attention::thread_v266_V_ce0() {
    v266_V_ce0 = grp_apply_rotary_pos_emb_fu_2095_v156_V_ce0.read();
}

void attention::thread_v267_V_address0() {
    v267_V_address0 = grp_rms_norm_fu_1746_v1_V_address0.read();
}

void attention::thread_v267_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        v267_V_ce0 = grp_rms_norm_fu_1746_v1_V_ce0.read();
    } else {
        v267_V_ce0 = ap_const_logic_0;
    }
}

void attention::thread_v268_V_address0() {
    v268_V_address0 = grp_rms_norm_fu_1746_v1_V_address0.read();
}

void attention::thread_v268_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state51.read())) {
        v268_V_ce0 = grp_rms_norm_fu_1746_v1_V_ce0.read();
    } else {
        v268_V_ce0 = ap_const_logic_0;
    }
}

void attention::thread_v269_V_address0() {
    v269_V_address0 = grp_cache_update_fu_2109_v185_V_address0.read();
}

void attention::thread_v269_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read())) {
        v269_V_ce0 = grp_cache_update_fu_2109_v185_V_ce0.read();
    } else {
        v269_V_ce0 = ap_const_logic_0;
    }
}

void attention::thread_v270_V_address0() {
    v270_V_address0 = grp_cache_update_fu_2109_v185_V_address0.read();
}

void attention::thread_v270_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read())) {
        v270_V_ce0 = grp_cache_update_fu_2109_v185_V_ce0.read();
    } else {
        v270_V_ce0 = ap_const_logic_0;
    }
}

void attention::thread_v272_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state54.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln666_fu_3066_p2.read()))) {
        v272_V_address0 =  (sc_lv<11>) (zext_ln667_fu_3078_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        v272_V_address0 = grp_linear_forward_no_mu_fu_1330_v82_V_address0.read();
    } else {
        v272_V_address0 = "XXXXXXXXXXX";
    }
}

void attention::thread_v272_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state54.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln666_fu_3066_p2.read()))) {
        v272_V_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        v272_V_ce0 = grp_linear_forward_no_mu_fu_1330_v82_V_ce0.read();
    } else {
        v272_V_ce0 = ap_const_logic_0;
    }
}

void attention::thread_v272_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state54.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln666_fu_3066_p2.read()))) {
        v272_V_d0 = ap_const_lv32_0;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        v272_V_d0 = grp_linear_forward_no_mu_fu_1330_v82_V_d0.read();
    } else {
        v272_V_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void attention::thread_v272_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state54.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln666_fu_3066_p2.read()))) {
        v272_V_we0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        v272_V_we0 = grp_linear_forward_no_mu_fu_1330_v82_V_we0.read();
    } else {
        v272_V_we0 = ap_const_logic_0;
    }
}

void attention::thread_v306_fu_2229_p2() {
    v306_fu_2229_p2 = (!v306_0_reg_1077.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(v306_0_reg_1077.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void attention::thread_v310_fu_2293_p2() {
    v310_fu_2293_p2 = (!v310_0_reg_1099.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(v310_0_reg_1099.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void attention::thread_v314_fu_2357_p2() {
    v314_fu_2357_p2 = (!v314_0_reg_1121.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(v314_0_reg_1121.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void attention::thread_v315_fu_2403_p2() {
    v315_fu_2403_p2 = (!v315_0_reg_1132.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(v315_0_reg_1132.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void attention::thread_v316_fu_2450_p2() {
    v316_fu_2450_p2 = (!v316_0_reg_1143.read().is_01() || !ap_const_lv7_1.is_01())? sc_lv<7>(): (sc_biguint<7>(v316_0_reg_1143.read()) + sc_biguint<7>(ap_const_lv7_1));
}

void attention::thread_v318_fu_2476_p2() {
    v318_fu_2476_p2 = (!v318_0_reg_1154.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(v318_0_reg_1154.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void attention::thread_v319_fu_2522_p2() {
    v319_fu_2522_p2 = (!v319_0_reg_1165.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(v319_0_reg_1165.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void attention::thread_v320_fu_2569_p2() {
    v320_fu_2569_p2 = (!v320_0_reg_1176.read().is_01() || !ap_const_lv7_1.is_01())? sc_lv<7>(): (sc_biguint<7>(v320_0_reg_1176.read()) + sc_biguint<7>(ap_const_lv7_1));
}

void attention::thread_v326_fu_2595_p2() {
    v326_fu_2595_p2 = (!v326_0_reg_1187.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(v326_0_reg_1187.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void attention::thread_v346_fu_2799_p2() {
    v346_fu_2799_p2 = (!v346_0_reg_1231.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(v346_0_reg_1231.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void attention::thread_v350_fu_2863_p2() {
    v350_fu_2863_p2 = (!v350_0_reg_1253.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(v350_0_reg_1253.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void attention::thread_v_proj_V_0_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read())) {
        v_proj_V_0_address0 = grp_reshape_2D_to_3D_fu_2141_v140_0_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read())) {
        v_proj_V_0_address0 = grp_cache_update_fu_2109_v186_0_V_address0.read();
    } else {
        v_proj_V_0_address0 = "XXXXXXXXXXX";
    }
}

void attention::thread_v_proj_V_0_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read())) {
        v_proj_V_0_ce0 = grp_reshape_2D_to_3D_fu_2141_v140_0_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read())) {
        v_proj_V_0_ce0 = grp_cache_update_fu_2109_v186_0_V_ce0.read();
    } else {
        v_proj_V_0_ce0 = ap_const_logic_0;
    }
}

void attention::thread_v_proj_V_0_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read())) {
        v_proj_V_0_we0 = grp_reshape_2D_to_3D_fu_2141_v140_0_V_we0.read();
    } else {
        v_proj_V_0_we0 = ap_const_logic_0;
    }
}

void attention::thread_v_proj_re_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        v_proj_re_V_address0 =  (sc_lv<11>) (zext_ln497_fu_2218_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read())) {
        v_proj_re_V_address0 = grp_reshape_2D_to_3D_fu_2141_v139_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read())) {
        v_proj_re_V_address0 = grp_linear_forward_no_mu_fu_1330_v82_V_address0.read();
    } else {
        v_proj_re_V_address0 = "XXXXXXXXXXX";
    }
}

void attention::thread_v_proj_re_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        v_proj_re_V_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read())) {
        v_proj_re_V_ce0 = grp_reshape_2D_to_3D_fu_2141_v139_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read())) {
        v_proj_re_V_ce0 = grp_linear_forward_no_mu_fu_1330_v82_V_ce0.read();
    } else {
        v_proj_re_V_ce0 = ap_const_logic_0;
    }
}

void attention::thread_v_proj_re_V_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        v_proj_re_V_d0 = ap_const_lv32_0;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read())) {
        v_proj_re_V_d0 = grp_linear_forward_no_mu_fu_1330_v82_V_d0.read();
    } else {
        v_proj_re_V_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void attention::thread_v_proj_re_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln496_fu_2206_p2.read()))) {
        v_proj_re_V_we0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read())) {
        v_proj_re_V_we0 = grp_linear_forward_no_mu_fu_1330_v82_V_we0.read();
    } else {
        v_proj_re_V_we0 = ap_const_logic_0;
    }
}

void attention::thread_zext_ln203_10_fu_2383_p1() {
    zext_ln203_10_fu_2383_p1 = esl_zext<9,6>(tmp_28_fu_2375_p3.read());
}

void attention::thread_zext_ln203_11_fu_2337_p1() {
    zext_ln203_11_fu_2337_p1 = esl_zext<12,7>(v312_0_0_reg_1110.read());
}

void attention::thread_zext_ln203_12_fu_2490_p1() {
    zext_ln203_12_fu_2490_p1 = esl_zext<9,8>(tmp_29_fu_2482_p3.read());
}

void attention::thread_zext_ln203_13_fu_2502_p1() {
    zext_ln203_13_fu_2502_p1 = esl_zext<9,6>(tmp_30_fu_2494_p3.read());
}

void attention::thread_zext_ln203_14_fu_2409_p1() {
    zext_ln203_14_fu_2409_p1 = esl_zext<10,3>(v315_0_reg_1132.read());
}

void attention::thread_zext_ln203_15_fu_2617_p1() {
    zext_ln203_15_fu_2617_p1 = esl_zext<8,6>(tmp_32_fu_2609_p3.read());
}

void attention::thread_zext_ln203_16_fu_2528_p1() {
    zext_ln203_16_fu_2528_p1 = esl_zext<10,3>(v319_0_reg_1165.read());
}

void attention::thread_zext_ln203_17_fu_2456_p1() {
    zext_ln203_17_fu_2456_p1 = esl_zext<15,7>(v316_0_reg_1143.read());
}

void attention::thread_zext_ln203_18_fu_2465_p1() {
    zext_ln203_18_fu_2465_p1 = esl_zext<64,15>(add_ln203_9_fu_2460_p2.read());
}

void attention::thread_zext_ln203_19_fu_2639_p1() {
    zext_ln203_19_fu_2639_p1 = esl_zext<8,3>(v328_0_0_reg_1198.read());
}

void attention::thread_zext_ln203_20_fu_2575_p1() {
    zext_ln203_20_fu_2575_p1 = esl_zext<15,7>(v320_0_reg_1176.read());
}

void attention::thread_zext_ln203_21_fu_2584_p1() {
    zext_ln203_21_fu_2584_p1 = esl_zext<64,15>(add_ln203_11_fu_2579_p2.read());
}

void attention::thread_zext_ln203_22_fu_2821_p1() {
    zext_ln203_22_fu_2821_p1 = esl_zext<8,6>(tmp_36_fu_2813_p3.read());
}

void attention::thread_zext_ln203_23_fu_2885_p1() {
    zext_ln203_23_fu_2885_p1 = esl_zext<12,10>(tmp_38_fu_2877_p3.read());
}

void attention::thread_zext_ln203_24_fu_2843_p1() {
    zext_ln203_24_fu_2843_p1 = esl_zext<8,3>(v348_0_0_reg_1242.read());
}

void attention::thread_zext_ln203_25_fu_2907_p1() {
    zext_ln203_25_fu_2907_p1 = esl_zext<12,7>(v352_0_0_reg_1264.read());
}

void attention::thread_zext_ln203_7_fu_2315_p1() {
    zext_ln203_7_fu_2315_p1 = esl_zext<12,10>(tmp_26_fu_2307_p3.read());
}

void attention::thread_zext_ln203_8_fu_2273_p1() {
    zext_ln203_8_fu_2273_p1 = esl_zext<12,7>(v308_0_0_reg_1088.read());
}

void attention::thread_zext_ln203_9_fu_2371_p1() {
    zext_ln203_9_fu_2371_p1 = esl_zext<9,8>(tmp_27_fu_2363_p3.read());
}

void attention::thread_zext_ln203_fu_2251_p1() {
    zext_ln203_fu_2251_p1 = esl_zext<12,10>(tmp_24_fu_2243_p3.read());
}

void attention::thread_zext_ln464_fu_2167_p1() {
    zext_ln464_fu_2167_p1 = esl_zext<64,11>(v276_0_0_reg_1033.read());
}

void attention::thread_zext_ln485_fu_2184_p1() {
    zext_ln485_fu_2184_p1 = esl_zext<64,11>(v286_0_0_reg_1044.read());
}

void attention::thread_zext_ln491_fu_2201_p1() {
    zext_ln491_fu_2201_p1 = esl_zext<64,11>(v289_0_0_reg_1055.read());
}

void attention::thread_zext_ln497_fu_2218_p1() {
    zext_ln497_fu_2218_p1 = esl_zext<64,11>(v292_0_0_reg_1066.read());
}

void attention::thread_zext_ln588_1_fu_2703_p1() {
    zext_ln588_1_fu_2703_p1 = esl_zext<8,3>(k9_0_0_reg_1220.read());
}

void attention::thread_zext_ln588_fu_2681_p1() {
    zext_ln588_fu_2681_p1 = esl_zext<8,6>(tmp_34_fu_2673_p3.read());
}

void attention::thread_zext_ln633_fu_2933_p1() {
    zext_ln633_fu_2933_p1 = esl_zext<64,11>(v355_0_0_reg_1275.read());
}

void attention::thread_zext_ln638_fu_3010_p1() {
    zext_ln638_fu_3010_p1 = esl_zext<12,7>(d4_0_0_reg_1297.read());
}

void attention::thread_zext_ln639_fu_2966_p1() {
    zext_ln639_fu_2966_p1 = esl_zext<12,10>(tmp_40_fu_2958_p3.read());
}

void attention::thread_zext_ln640_1_fu_2988_p1() {
    zext_ln640_1_fu_2988_p1 = esl_zext<12,11>(shl_ln3_fu_2980_p3.read());
}

void attention::thread_zext_ln640_2_fu_3000_p1() {
    zext_ln640_2_fu_3000_p1 = esl_zext<12,9>(shl_ln640_1_fu_2992_p3.read());
}

void attention::thread_zext_ln640_fu_3044_p1() {
    zext_ln640_fu_3044_p1 = esl_zext<64,32>(sext_ln640_fu_3041_p1.read());
}

void attention::thread_zext_ln647_fu_3061_p1() {
    zext_ln647_fu_3061_p1 = esl_zext<64,11>(v362_0_0_reg_1308.read());
}

void attention::thread_zext_ln667_fu_3078_p1() {
    zext_ln667_fu_3078_p1 = esl_zext<64,11>(v371_0_0_reg_1319.read());
}

}


// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2 (64-bit)
// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef __dut_udiv_40ns_40neOg__HH__
#define __dut_udiv_40ns_40neOg__HH__
#include "ACMP_udiv_seq.h"
#include <systemc>

template<
    int ID,
    int NUM_STAGE,
    int din0_WIDTH,
    int din1_WIDTH,
    int dout_WIDTH>
SC_MODULE(dut_udiv_40ns_40neOg) {
    sc_core::sc_in_clk clk;
    sc_core::sc_in<sc_dt::sc_logic> reset;
    sc_core::sc_in<sc_dt::sc_logic> ce;
    sc_core::sc_in< sc_dt::sc_logic >   start;
    sc_core::sc_out< sc_dt::sc_logic >   done;
    sc_core::sc_in< sc_dt::sc_lv<din0_WIDTH> >   din0;
    sc_core::sc_in< sc_dt::sc_lv<din1_WIDTH> >   din1;
    sc_core::sc_out< sc_dt::sc_lv<dout_WIDTH> >   dout;



    ACMP_udiv_seq<ID, 44, din0_WIDTH, din1_WIDTH, dout_WIDTH> ACMP_udiv_seq_U;

    SC_CTOR(dut_udiv_40ns_40neOg):  ACMP_udiv_seq_U ("ACMP_udiv_seq_U") {
        ACMP_udiv_seq_U.clk(clk);
        ACMP_udiv_seq_U.reset(reset);
        ACMP_udiv_seq_U.ce(ce);
        ACMP_udiv_seq_U.din0(din0);
        ACMP_udiv_seq_U.din1(din1);
        ACMP_udiv_seq_U.dout(dout);
        ACMP_udiv_seq_U.start(start);
        ACMP_udiv_seq_U.done(done);

    }

};

#endif //
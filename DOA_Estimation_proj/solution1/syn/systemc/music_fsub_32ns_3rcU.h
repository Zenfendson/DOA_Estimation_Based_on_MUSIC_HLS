// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.1 (64-bit)
// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef __music_fsub_32ns_3rcU__HH__
#define __music_fsub_32ns_3rcU__HH__
#include "ACMP_fsub.h"
#include <systemc>

template<
    int ID,
    int NUM_STAGE,
    int din0_WIDTH,
    int din1_WIDTH,
    int dout_WIDTH>
SC_MODULE(music_fsub_32ns_3rcU) {
    sc_core::sc_in_clk clk;
    sc_core::sc_in<sc_dt::sc_logic> reset;
    sc_core::sc_in<sc_dt::sc_logic> ce;
    sc_core::sc_in< sc_dt::sc_lv<din0_WIDTH> >   din0;
    sc_core::sc_in< sc_dt::sc_lv<din1_WIDTH> >   din1;
    sc_core::sc_out< sc_dt::sc_lv<dout_WIDTH> >   dout;



    ACMP_fsub<ID, 5, din0_WIDTH, din1_WIDTH, dout_WIDTH> ACMP_fsub_U;

    SC_CTOR(music_fsub_32ns_3rcU):  ACMP_fsub_U ("ACMP_fsub_U") {
        ACMP_fsub_U.clk(clk);
        ACMP_fsub_U.reset(reset);
        ACMP_fsub_U.ce(ce);
        ACMP_fsub_U.din0(din0);
        ACMP_fsub_U.din1(din1);
        ACMP_fsub_U.dout(dout);

    }

};

#endif //

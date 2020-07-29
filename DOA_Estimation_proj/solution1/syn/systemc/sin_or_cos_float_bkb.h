// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.1 (64-bit)
// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef __sin_or_cos_float_bkb_H__
#define __sin_or_cos_float_bkb_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct sin_or_cos_float_bkb_ram : public sc_core::sc_module {

  static const unsigned DataWidth = 100;
  static const unsigned AddressRange = 13;
  static const unsigned AddressWidth = 4;

//latency = 1
//input_reg = 1
//output_reg = 0
sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in <sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


sc_lv<DataWidth> ram[AddressRange];


   SC_CTOR(sin_or_cos_float_bkb_ram) {
        ram[0] = "0b0000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001010001011";
        ram[1] = "0b0000000000000000000000000000000000000000000000000000000000000000000000000010100010111110011000001101";
        ram[2] = "0b0000000000000000000000000000000000000000000000000000000000101000101111100110000011011011100100111001";
        ram[3] = "0b0000000000000000000000000000000000000000001010001011111001100000110110111001001110010001000001010100";
        ram[4] = "0b0000000000000000000000000010100010111110011000001101101110010011100100010000010101001010011111110000";
        ram[5] = "0b0000000000101000101111100110000011011011100100111001000100000101010010100111111100001001110101011111";
        ram[6] = "0b1011111001100000110110111001001110010001000001010100101001111111000010011101010111110100011111010100";
        ram[7] = "0b1101101110010011100100010000010101001010011111110000100111010101111101000111110101001101001101110111";
        ram[8] = "0b1001000100000101010010100111111100001001110101011111010001111101010011010011011101110000001101101101";
        ram[9] = "0b0100101001111111000010011101010111110100011111010100110100110111011100000011011011011000101001010110";
        ram[10] = "0b0000100111010101111101000111110101001101001101110111000000110110110110001010010101100110010011110001";
        ram[11] = "0b1111010001111101010011010011011101110000001101101101100010100101011001100100111100010000111001000001";
        ram[12] = "0b0100110100110111011100000011011011011000101001010110011001001111000100001110010000010111111110010100";


SC_METHOD(prc_write_0);
  sensitive<<clk.pos();
   }


void prc_write_0()
{
    if (ce0.read() == sc_dt::Log_1) 
    {
            if(address0.read().is_01() && address0.read().to_uint()<AddressRange)
              q0 = ram[address0.read().to_uint()];
            else
              q0 = sc_lv<DataWidth>();
    }
}


}; //endmodule


SC_MODULE(sin_or_cos_float_bkb) {


static const unsigned DataWidth = 100;
static const unsigned AddressRange = 13;
static const unsigned AddressWidth = 4;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


sin_or_cos_float_bkb_ram* meminst;


SC_CTOR(sin_or_cos_float_bkb) {
meminst = new sin_or_cos_float_bkb_ram("sin_or_cos_float_bkb_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~sin_or_cos_float_bkb() {
    delete meminst;
}


};//endmodule
#endif

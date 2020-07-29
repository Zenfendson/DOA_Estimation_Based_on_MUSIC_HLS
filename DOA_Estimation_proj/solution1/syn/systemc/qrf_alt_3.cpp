#include "qrf_alt.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void qrf_alt::thread_A_M_imag_address0() {
    A_M_imag_address0 =  (sc_lv<4>) (zext_ln613_2_fu_1373_p1.read());
}

void qrf_alt::thread_A_M_imag_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        A_M_imag_ce0 = ap_const_logic_1;
    } else {
        A_M_imag_ce0 = ap_const_logic_0;
    }
}

void qrf_alt::thread_A_M_real_address0() {
    A_M_real_address0 =  (sc_lv<4>) (zext_ln613_2_fu_1373_p1.read());
}

void qrf_alt::thread_A_M_real_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        A_M_real_ce0 = ap_const_logic_1;
    } else {
        A_M_real_ce0 = ap_const_logic_0;
    }
}

void qrf_alt::thread_CONFIG_BATCH_CNTS_address0() {
    CONFIG_BATCH_CNTS_address0 =  (sc_lv<3>) (zext_ln620_fu_1397_p1.read());
}

void qrf_alt::thread_CONFIG_BATCH_CNTS_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read())) {
        CONFIG_BATCH_CNTS_ce0 = ap_const_logic_1;
    } else {
        CONFIG_BATCH_CNTS_ce0 = ap_const_logic_0;
    }
}

void qrf_alt::thread_CONFIG_SEQUENCE_0_address0() {
    CONFIG_SEQUENCE_0_address0 =  (sc_lv<4>) (zext_ln623_fu_1437_p1.read());
}

void qrf_alt::thread_CONFIG_SEQUENCE_0_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        CONFIG_SEQUENCE_0_ce0 = ap_const_logic_1;
    } else {
        CONFIG_SEQUENCE_0_ce0 = ap_const_logic_0;
    }
}

void qrf_alt::thread_CONFIG_SEQUENCE_1_address0() {
    CONFIG_SEQUENCE_1_address0 =  (sc_lv<4>) (zext_ln623_fu_1437_p1.read());
}

void qrf_alt::thread_CONFIG_SEQUENCE_1_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        CONFIG_SEQUENCE_1_ce0 = ap_const_logic_1;
    } else {
        CONFIG_SEQUENCE_1_ce0 = ap_const_logic_0;
    }
}

void qrf_alt::thread_CONFIG_SEQUENCE_2_address0() {
    CONFIG_SEQUENCE_2_address0 =  (sc_lv<4>) (zext_ln623_fu_1437_p1.read());
}

void qrf_alt::thread_CONFIG_SEQUENCE_2_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        CONFIG_SEQUENCE_2_ce0 = ap_const_logic_1;
    } else {
        CONFIG_SEQUENCE_2_ce0 = ap_const_logic_0;
    }
}

void qrf_alt::thread_Q_M_imag_address0() {
    Q_M_imag_address0 =  (sc_lv<4>) (zext_ln692_1_fu_1777_p1.read());
}

void qrf_alt::thread_Q_M_imag_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()))) {
        Q_M_imag_ce0 = ap_const_logic_1;
    } else {
        Q_M_imag_ce0 = ap_const_logic_0;
    }
}

void qrf_alt::thread_Q_M_imag_d0() {
    Q_M_imag_d0 = xor_ln155_fu_1787_p2.read();
}

void qrf_alt::thread_Q_M_imag_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln680_1_reg_2520.read()))) {
        Q_M_imag_we0 = ap_const_logic_1;
    } else {
        Q_M_imag_we0 = ap_const_logic_0;
    }
}

void qrf_alt::thread_Q_M_real_address0() {
    Q_M_real_address0 =  (sc_lv<4>) (zext_ln692_1_fu_1777_p1.read());
}

void qrf_alt::thread_Q_M_real_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()))) {
        Q_M_real_ce0 = ap_const_logic_1;
    } else {
        Q_M_real_ce0 = ap_const_logic_0;
    }
}

void qrf_alt::thread_Q_M_real_d0() {
    Q_M_real_d0 = q_i_M_real_q1.read();
}

void qrf_alt::thread_Q_M_real_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln680_1_reg_2520.read()))) {
        Q_M_real_we0 = ap_const_logic_1;
    } else {
        Q_M_real_we0 = ap_const_logic_0;
    }
}

void qrf_alt::thread_R_M_imag_address0() {
    R_M_imag_address0 =  (sc_lv<4>) (zext_ln685_2_reg_2524.read());
}

void qrf_alt::thread_R_M_imag_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()))) {
        R_M_imag_ce0 = ap_const_logic_1;
    } else {
        R_M_imag_ce0 = ap_const_logic_0;
    }
}

void qrf_alt::thread_R_M_imag_d0() {
    R_M_imag_d0 = r_i_M_imag_q0.read();
}

void qrf_alt::thread_R_M_imag_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln680_1_reg_2520.read()))) {
        R_M_imag_we0 = ap_const_logic_1;
    } else {
        R_M_imag_we0 = ap_const_logic_0;
    }
}

void qrf_alt::thread_R_M_real_address0() {
    R_M_real_address0 =  (sc_lv<4>) (zext_ln685_2_reg_2524.read());
}

void qrf_alt::thread_R_M_real_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()))) {
        R_M_real_ce0 = ap_const_logic_1;
    } else {
        R_M_real_ce0 = ap_const_logic_0;
    }
}

void qrf_alt::thread_R_M_real_d0() {
    R_M_real_d0 = r_i_M_real_q0.read();
}

void qrf_alt::thread_R_M_real_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln680_1_reg_2520.read()))) {
        R_M_real_we0 = ap_const_logic_1;
    } else {
        R_M_real_we0 = ap_const_logic_0;
    }
}

void qrf_alt::thread_add_ln1067_1_fu_1353_p2() {
    add_ln1067_1_fu_1353_p2 = (!zext_ln1067_reg_1935.read().is_01() || !zext_ln1067_2_fu_1349_p1.read().is_01())? sc_lv<6>(): (sc_biguint<6>(zext_ln1067_reg_1935.read()) + sc_biguint<6>(zext_ln1067_2_fu_1349_p1.read()));
}

void qrf_alt::thread_add_ln1067_fu_1325_p2() {
    add_ln1067_fu_1325_p2 = (!zext_ln613_fu_1309_p1.read().is_01() || !zext_ln1067_fu_1321_p1.read().is_01())? sc_lv<6>(): (sc_biguint<6>(zext_ln613_fu_1309_p1.read()) + sc_biguint<6>(zext_ln1067_fu_1321_p1.read()));
}

void qrf_alt::thread_add_ln579_1_fu_1215_p2() {
    add_ln579_1_fu_1215_p2 = (!phi_ln579_1_reg_944.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(phi_ln579_1_reg_944.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void qrf_alt::thread_add_ln579_fu_1209_p2() {
    add_ln579_fu_1209_p2 = (!phi_ln579_reg_932.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(phi_ln579_reg_932.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void qrf_alt::thread_add_ln580_1_fu_1253_p2() {
    add_ln580_1_fu_1253_p2 = (!phi_ln580_1_reg_967.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(phi_ln580_1_reg_967.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void qrf_alt::thread_add_ln580_fu_1247_p2() {
    add_ln580_fu_1247_p2 = (!phi_ln580_reg_955.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(phi_ln580_reg_955.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void qrf_alt::thread_add_ln594_fu_1285_p2() {
    add_ln594_fu_1285_p2 = (!phi_ln594_reg_978.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(phi_ln594_reg_978.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void qrf_alt::thread_add_ln600_fu_1379_p2() {
    add_ln600_fu_1379_p2 = (!indvar_reg_1001.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(indvar_reg_1001.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void qrf_alt::thread_add_ln613_fu_1368_p2() {
    add_ln613_fu_1368_p2 = (!zext_ln1067_reg_1935.read().is_01() || !zext_ln613_1_fu_1364_p1.read().is_01())? sc_lv<6>(): (sc_biguint<6>(zext_ln1067_reg_1935.read()) + sc_biguint<6>(zext_ln613_1_fu_1364_p1.read()));
}

void qrf_alt::thread_add_ln620_fu_1422_p2() {
    add_ln620_fu_1422_p2 = (!empty_90_fu_1418_p1.read().is_01() || !CONFIG_BATCH_CNTS_q0.read().is_01())? sc_lv<2>(): (sc_biguint<2>(empty_90_fu_1418_p1.read()) + sc_biguint<2>(CONFIG_BATCH_CNTS_q0.read()));
}

void qrf_alt::thread_add_ln626_fu_1444_p2() {
    add_ln626_fu_1444_p2 = (!seq_cnt_1_reg_1035.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(seq_cnt_1_reg_1035.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void qrf_alt::thread_add_ln643_fu_1658_p2() {
    add_ln643_fu_1658_p2 = (!indvar3_reg_1056.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(indvar3_reg_1056.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void qrf_alt::thread_add_ln669_1_fu_1645_p2() {
    add_ln669_1_fu_1645_p2 = (!sext_ln674_1_cast_reg_2146.read().is_01() || !zext_ln669_fu_1628_p1.read().is_01())? sc_lv<6>(): (sc_biguint<6>(sext_ln674_1_cast_reg_2146.read()) + sc_biguint<6>(zext_ln669_fu_1628_p1.read()));
}

void qrf_alt::thread_add_ln669_fu_1632_p2() {
    add_ln669_fu_1632_p2 = (!sext_ln674_cast_reg_2141.read().is_01() || !zext_ln669_fu_1628_p1.read().is_01())? sc_lv<6>(): (sc_biguint<6>(sext_ln674_cast_reg_2141.read()) + sc_biguint<6>(zext_ln669_fu_1628_p1.read()));
}

void qrf_alt::thread_add_ln680_fu_1763_p2() {
    add_ln680_fu_1763_p2 = (!indvar8_reg_1079.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(indvar8_reg_1079.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void qrf_alt::thread_add_ln685_fu_1742_p2() {
    add_ln685_fu_1742_p2 = (!zext_ln683_reg_2515.read().is_01() || !zext_ln685_1_fu_1738_p1.read().is_01())? sc_lv<6>(): (sc_biguint<6>(zext_ln683_reg_2515.read()) + sc_biguint<6>(zext_ln685_1_fu_1738_p1.read()));
}

void qrf_alt::thread_add_ln692_fu_1772_p2() {
    add_ln692_fu_1772_p2 = (!zext_ln685_reg_2510.read().is_01() || !zext_ln692_fu_1769_p1.read().is_01())? sc_lv<6>(): (sc_biguint<6>(zext_ln685_reg_2510.read()) + sc_biguint<6>(zext_ln692_fu_1769_p1.read()));
}

void qrf_alt::thread_ap_CS_fsm_pp0_stage0() {
    ap_CS_fsm_pp0_stage0 = ap_CS_fsm.read()[7];
}

void qrf_alt::thread_ap_CS_fsm_pp1_stage0() {
    ap_CS_fsm_pp1_stage0 = ap_CS_fsm.read()[11];
}

void qrf_alt::thread_ap_CS_fsm_pp2_stage0() {
    ap_CS_fsm_pp2_stage0 = ap_CS_fsm.read()[14];
}

void qrf_alt::thread_ap_CS_fsm_pp2_stage1() {
    ap_CS_fsm_pp2_stage1 = ap_CS_fsm.read()[15];
}

void qrf_alt::thread_ap_CS_fsm_pp2_stage2() {
    ap_CS_fsm_pp2_stage2 = ap_CS_fsm.read()[16];
}

void qrf_alt::thread_ap_CS_fsm_pp2_stage3() {
    ap_CS_fsm_pp2_stage3 = ap_CS_fsm.read()[17];
}

void qrf_alt::thread_ap_CS_fsm_pp3_stage0() {
    ap_CS_fsm_pp3_stage0 = ap_CS_fsm.read()[20];
}

void qrf_alt::thread_ap_CS_fsm_state1() {
    ap_CS_fsm_state1 = ap_CS_fsm.read()[0];
}

void qrf_alt::thread_ap_CS_fsm_state10() {
    ap_CS_fsm_state10 = ap_CS_fsm.read()[8];
}

void qrf_alt::thread_ap_CS_fsm_state11() {
    ap_CS_fsm_state11 = ap_CS_fsm.read()[9];
}

void qrf_alt::thread_ap_CS_fsm_state113() {
    ap_CS_fsm_state113 = ap_CS_fsm.read()[18];
}

void qrf_alt::thread_ap_CS_fsm_state114() {
    ap_CS_fsm_state114 = ap_CS_fsm.read()[19];
}

void qrf_alt::thread_ap_CS_fsm_state117() {
    ap_CS_fsm_state117 = ap_CS_fsm.read()[21];
}

void qrf_alt::thread_ap_CS_fsm_state12() {
    ap_CS_fsm_state12 = ap_CS_fsm.read()[10];
}

void qrf_alt::thread_ap_CS_fsm_state2() {
    ap_CS_fsm_state2 = ap_CS_fsm.read()[1];
}

void qrf_alt::thread_ap_CS_fsm_state3() {
    ap_CS_fsm_state3 = ap_CS_fsm.read()[2];
}

void qrf_alt::thread_ap_CS_fsm_state4() {
    ap_CS_fsm_state4 = ap_CS_fsm.read()[3];
}

void qrf_alt::thread_ap_CS_fsm_state5() {
    ap_CS_fsm_state5 = ap_CS_fsm.read()[4];
}

void qrf_alt::thread_ap_CS_fsm_state6() {
    ap_CS_fsm_state6 = ap_CS_fsm.read()[5];
}

void qrf_alt::thread_ap_CS_fsm_state7() {
    ap_CS_fsm_state7 = ap_CS_fsm.read()[6];
}

void qrf_alt::thread_ap_CS_fsm_state92() {
    ap_CS_fsm_state92 = ap_CS_fsm.read()[12];
}

void qrf_alt::thread_ap_CS_fsm_state93() {
    ap_CS_fsm_state93 = ap_CS_fsm.read()[13];
}

void qrf_alt::thread_ap_block_pp0_stage0() {
    ap_block_pp0_stage0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void qrf_alt::thread_ap_block_pp0_stage0_11001() {
    ap_block_pp0_stage0_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void qrf_alt::thread_ap_block_pp0_stage0_subdone() {
    ap_block_pp0_stage0_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void qrf_alt::thread_ap_block_pp1_stage0() {
    ap_block_pp1_stage0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void qrf_alt::thread_ap_block_pp1_stage0_01001() {
    ap_block_pp1_stage0_01001 = (((esl_seteq<1,1,1>(ap_const_logic_0, io_acc_block_signal_op421.read()) && 
   esl_seteq<1,1,1>(icmp_ln620_reg_2015_pp1_iter77_reg.read(), ap_const_lv1_0)) || 
  (esl_seteq<1,1,1>(icmp_ln620_reg_2015_pp1_iter77_reg.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, io_acc_block_signal_op422.read())) || 
  (esl_seteq<1,1,1>(icmp_ln620_reg_2015_pp1_iter77_reg.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, io_acc_block_signal_op423.read())) || 
  (esl_seteq<1,1,1>(icmp_ln620_reg_2015_pp1_iter77_reg.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, io_acc_block_signal_op424.read())) || 
  (esl_seteq<1,1,1>(icmp_ln620_reg_2015_pp1_iter77_reg.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, io_acc_block_signal_op425.read())) || 
  (esl_seteq<1,1,1>(icmp_ln620_reg_2015_pp1_iter77_reg.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, to_rot_0_V_full_n.read())) || 
  (esl_seteq<1,1,1>(icmp_ln620_reg_2015_pp1_iter77_reg.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, to_rot_1_V_full_n.read())) || 
  (esl_seteq<1,1,1>(icmp_ln620_reg_2015_pp1_iter77_reg.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, to_rot_2_V_full_n.read()))) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter78.read()));
}

void qrf_alt::thread_ap_block_pp1_stage0_11001() {
    ap_block_pp1_stage0_11001 = (((esl_seteq<1,1,1>(ap_const_logic_0, io_acc_block_signal_op421.read()) && 
   esl_seteq<1,1,1>(icmp_ln620_reg_2015_pp1_iter77_reg.read(), ap_const_lv1_0)) || 
  (esl_seteq<1,1,1>(icmp_ln620_reg_2015_pp1_iter77_reg.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, io_acc_block_signal_op422.read())) || 
  (esl_seteq<1,1,1>(icmp_ln620_reg_2015_pp1_iter77_reg.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, io_acc_block_signal_op423.read())) || 
  (esl_seteq<1,1,1>(icmp_ln620_reg_2015_pp1_iter77_reg.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, io_acc_block_signal_op424.read())) || 
  (esl_seteq<1,1,1>(icmp_ln620_reg_2015_pp1_iter77_reg.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, io_acc_block_signal_op425.read())) || 
  (esl_seteq<1,1,1>(icmp_ln620_reg_2015_pp1_iter77_reg.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, to_rot_0_V_full_n.read())) || 
  (esl_seteq<1,1,1>(icmp_ln620_reg_2015_pp1_iter77_reg.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, to_rot_1_V_full_n.read())) || 
  (esl_seteq<1,1,1>(icmp_ln620_reg_2015_pp1_iter77_reg.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, to_rot_2_V_full_n.read()))) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter78.read()));
}

void qrf_alt::thread_ap_block_pp1_stage0_11001_ignoreCallOp328() {
    ap_block_pp1_stage0_11001_ignoreCallOp328 = (((esl_seteq<1,1,1>(ap_const_logic_0, io_acc_block_signal_op421.read()) && 
   esl_seteq<1,1,1>(icmp_ln620_reg_2015_pp1_iter77_reg.read(), ap_const_lv1_0)) || 
  (esl_seteq<1,1,1>(icmp_ln620_reg_2015_pp1_iter77_reg.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, io_acc_block_signal_op422.read())) || 
  (esl_seteq<1,1,1>(icmp_ln620_reg_2015_pp1_iter77_reg.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, io_acc_block_signal_op423.read())) || 
  (esl_seteq<1,1,1>(icmp_ln620_reg_2015_pp1_iter77_reg.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, io_acc_block_signal_op424.read())) || 
  (esl_seteq<1,1,1>(icmp_ln620_reg_2015_pp1_iter77_reg.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, io_acc_block_signal_op425.read())) || 
  (esl_seteq<1,1,1>(icmp_ln620_reg_2015_pp1_iter77_reg.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, to_rot_0_V_full_n.read())) || 
  (esl_seteq<1,1,1>(icmp_ln620_reg_2015_pp1_iter77_reg.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, to_rot_1_V_full_n.read())) || 
  (esl_seteq<1,1,1>(icmp_ln620_reg_2015_pp1_iter77_reg.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, to_rot_2_V_full_n.read()))) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter78.read()));
}

void qrf_alt::thread_ap_block_pp1_stage0_subdone() {
    ap_block_pp1_stage0_subdone = (((esl_seteq<1,1,1>(ap_const_logic_0, io_acc_block_signal_op421.read()) && 
   esl_seteq<1,1,1>(icmp_ln620_reg_2015_pp1_iter77_reg.read(), ap_const_lv1_0)) || 
  (esl_seteq<1,1,1>(icmp_ln620_reg_2015_pp1_iter77_reg.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, io_acc_block_signal_op422.read())) || 
  (esl_seteq<1,1,1>(icmp_ln620_reg_2015_pp1_iter77_reg.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, io_acc_block_signal_op423.read())) || 
  (esl_seteq<1,1,1>(icmp_ln620_reg_2015_pp1_iter77_reg.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, io_acc_block_signal_op424.read())) || 
  (esl_seteq<1,1,1>(icmp_ln620_reg_2015_pp1_iter77_reg.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, io_acc_block_signal_op425.read())) || 
  (esl_seteq<1,1,1>(icmp_ln620_reg_2015_pp1_iter77_reg.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, to_rot_0_V_full_n.read())) || 
  (esl_seteq<1,1,1>(icmp_ln620_reg_2015_pp1_iter77_reg.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, to_rot_1_V_full_n.read())) || 
  (esl_seteq<1,1,1>(icmp_ln620_reg_2015_pp1_iter77_reg.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, to_rot_2_V_full_n.read()))) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter78.read()));
}

void qrf_alt::thread_ap_block_pp2_stage0() {
    ap_block_pp2_stage0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void qrf_alt::thread_ap_block_pp2_stage0_11001() {
    ap_block_pp2_stage0_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void qrf_alt::thread_ap_block_pp2_stage0_subdone() {
    ap_block_pp2_stage0_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void qrf_alt::thread_ap_block_pp2_stage1() {
    ap_block_pp2_stage1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void qrf_alt::thread_ap_block_pp2_stage1_11001() {
    ap_block_pp2_stage1_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void qrf_alt::thread_ap_block_pp2_stage1_subdone() {
    ap_block_pp2_stage1_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void qrf_alt::thread_ap_block_pp2_stage2() {
    ap_block_pp2_stage2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void qrf_alt::thread_ap_block_pp2_stage2_11001() {
    ap_block_pp2_stage2_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void qrf_alt::thread_ap_block_pp2_stage2_subdone() {
    ap_block_pp2_stage2_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void qrf_alt::thread_ap_block_pp2_stage3() {
    ap_block_pp2_stage3 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void qrf_alt::thread_ap_block_pp2_stage3_11001() {
    ap_block_pp2_stage3_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void qrf_alt::thread_ap_block_pp2_stage3_subdone() {
    ap_block_pp2_stage3_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void qrf_alt::thread_ap_block_pp3_stage0() {
    ap_block_pp3_stage0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void qrf_alt::thread_ap_block_pp3_stage0_11001() {
    ap_block_pp3_stage0_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void qrf_alt::thread_ap_block_pp3_stage0_subdone() {
    ap_block_pp3_stage0_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void qrf_alt::thread_ap_block_state100_pp2_stage2_iter1() {
    ap_block_state100_pp2_stage2_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void qrf_alt::thread_ap_block_state101_pp2_stage3_iter1() {
    ap_block_state101_pp2_stage3_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void qrf_alt::thread_ap_block_state102_pp2_stage0_iter2() {
    ap_block_state102_pp2_stage0_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void qrf_alt::thread_ap_block_state103_pp2_stage1_iter2() {
    ap_block_state103_pp2_stage1_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void qrf_alt::thread_ap_block_state104_pp2_stage2_iter2() {
    ap_block_state104_pp2_stage2_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void qrf_alt::thread_ap_block_state105_pp2_stage3_iter2() {
    ap_block_state105_pp2_stage3_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void qrf_alt::thread_ap_block_state106_pp2_stage0_iter3() {
    ap_block_state106_pp2_stage0_iter3 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void qrf_alt::thread_ap_block_state107_pp2_stage1_iter3() {
    ap_block_state107_pp2_stage1_iter3 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void qrf_alt::thread_ap_block_state108_pp2_stage2_iter3() {
    ap_block_state108_pp2_stage2_iter3 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void qrf_alt::thread_ap_block_state109_pp2_stage3_iter3() {
    ap_block_state109_pp2_stage3_iter3 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void qrf_alt::thread_ap_block_state110_pp2_stage0_iter4() {
    ap_block_state110_pp2_stage0_iter4 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void qrf_alt::thread_ap_block_state111_pp2_stage1_iter4() {
    ap_block_state111_pp2_stage1_iter4 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void qrf_alt::thread_ap_block_state112_pp2_stage2_iter4() {
    ap_block_state112_pp2_stage2_iter4 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void qrf_alt::thread_ap_block_state115_pp3_stage0_iter0() {
    ap_block_state115_pp3_stage0_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void qrf_alt::thread_ap_block_state116_pp3_stage0_iter1() {
    ap_block_state116_pp3_stage0_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void qrf_alt::thread_ap_block_state13_pp1_stage0_iter0() {
    ap_block_state13_pp1_stage0_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void qrf_alt::thread_ap_block_state13_pp1_stage0_iter0_ignore_call27() {
    ap_block_state13_pp1_stage0_iter0_ignore_call27 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void qrf_alt::thread_ap_block_state14_pp1_stage0_iter1() {
    ap_block_state14_pp1_stage0_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void qrf_alt::thread_ap_block_state14_pp1_stage0_iter1_ignore_call27() {
    ap_block_state14_pp1_stage0_iter1_ignore_call27 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void qrf_alt::thread_ap_block_state15_pp1_stage0_iter2() {
    ap_block_state15_pp1_stage0_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void qrf_alt::thread_ap_block_state15_pp1_stage0_iter2_ignore_call27() {
    ap_block_state15_pp1_stage0_iter2_ignore_call27 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void qrf_alt::thread_ap_block_state16_pp1_stage0_iter3() {
    ap_block_state16_pp1_stage0_iter3 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void qrf_alt::thread_ap_block_state16_pp1_stage0_iter3_ignore_call27() {
    ap_block_state16_pp1_stage0_iter3_ignore_call27 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void qrf_alt::thread_ap_block_state17_pp1_stage0_iter4() {
    ap_block_state17_pp1_stage0_iter4 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void qrf_alt::thread_ap_block_state17_pp1_stage0_iter4_ignore_call27() {
    ap_block_state17_pp1_stage0_iter4_ignore_call27 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void qrf_alt::thread_ap_block_state18_pp1_stage0_iter5() {
    ap_block_state18_pp1_stage0_iter5 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void qrf_alt::thread_ap_block_state18_pp1_stage0_iter5_ignore_call27() {
    ap_block_state18_pp1_stage0_iter5_ignore_call27 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void qrf_alt::thread_ap_block_state19_pp1_stage0_iter6() {
    ap_block_state19_pp1_stage0_iter6 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void qrf_alt::thread_ap_block_state19_pp1_stage0_iter6_ignore_call27() {
    ap_block_state19_pp1_stage0_iter6_ignore_call27 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void qrf_alt::thread_ap_block_state20_pp1_stage0_iter7() {
    ap_block_state20_pp1_stage0_iter7 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void qrf_alt::thread_ap_block_state20_pp1_stage0_iter7_ignore_call27() {
    ap_block_state20_pp1_stage0_iter7_ignore_call27 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void qrf_alt::thread_ap_block_state21_pp1_stage0_iter8() {
    ap_block_state21_pp1_stage0_iter8 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void qrf_alt::thread_ap_block_state21_pp1_stage0_iter8_ignore_call27() {
    ap_block_state21_pp1_stage0_iter8_ignore_call27 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void qrf_alt::thread_ap_block_state22_pp1_stage0_iter9() {
    ap_block_state22_pp1_stage0_iter9 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void qrf_alt::thread_ap_block_state22_pp1_stage0_iter9_ignore_call27() {
    ap_block_state22_pp1_stage0_iter9_ignore_call27 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void qrf_alt::thread_ap_block_state23_pp1_stage0_iter10() {
    ap_block_state23_pp1_stage0_iter10 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void qrf_alt::thread_ap_block_state23_pp1_stage0_iter10_ignore_call27() {
    ap_block_state23_pp1_stage0_iter10_ignore_call27 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void qrf_alt::thread_ap_block_state24_pp1_stage0_iter11() {
    ap_block_state24_pp1_stage0_iter11 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void qrf_alt::thread_ap_block_state24_pp1_stage0_iter11_ignore_call27() {
    ap_block_state24_pp1_stage0_iter11_ignore_call27 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void qrf_alt::thread_ap_block_state25_pp1_stage0_iter12() {
    ap_block_state25_pp1_stage0_iter12 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void qrf_alt::thread_ap_block_state25_pp1_stage0_iter12_ignore_call27() {
    ap_block_state25_pp1_stage0_iter12_ignore_call27 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void qrf_alt::thread_ap_block_state26_pp1_stage0_iter13() {
    ap_block_state26_pp1_stage0_iter13 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void qrf_alt::thread_ap_block_state26_pp1_stage0_iter13_ignore_call27() {
    ap_block_state26_pp1_stage0_iter13_ignore_call27 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void qrf_alt::thread_ap_block_state27_pp1_stage0_iter14() {
    ap_block_state27_pp1_stage0_iter14 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void qrf_alt::thread_ap_block_state27_pp1_stage0_iter14_ignore_call27() {
    ap_block_state27_pp1_stage0_iter14_ignore_call27 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void qrf_alt::thread_ap_block_state28_pp1_stage0_iter15() {
    ap_block_state28_pp1_stage0_iter15 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void qrf_alt::thread_ap_block_state28_pp1_stage0_iter15_ignore_call27() {
    ap_block_state28_pp1_stage0_iter15_ignore_call27 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void qrf_alt::thread_ap_block_state29_pp1_stage0_iter16() {
    ap_block_state29_pp1_stage0_iter16 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void qrf_alt::thread_ap_block_state29_pp1_stage0_iter16_ignore_call27() {
    ap_block_state29_pp1_stage0_iter16_ignore_call27 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void qrf_alt::thread_ap_block_state30_pp1_stage0_iter17() {
    ap_block_state30_pp1_stage0_iter17 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void qrf_alt::thread_ap_block_state30_pp1_stage0_iter17_ignore_call27() {
    ap_block_state30_pp1_stage0_iter17_ignore_call27 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void qrf_alt::thread_ap_block_state31_pp1_stage0_iter18() {
    ap_block_state31_pp1_stage0_iter18 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void qrf_alt::thread_ap_block_state31_pp1_stage0_iter18_ignore_call27() {
    ap_block_state31_pp1_stage0_iter18_ignore_call27 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void qrf_alt::thread_ap_block_state32_pp1_stage0_iter19() {
    ap_block_state32_pp1_stage0_iter19 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void qrf_alt::thread_ap_block_state32_pp1_stage0_iter19_ignore_call27() {
    ap_block_state32_pp1_stage0_iter19_ignore_call27 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void qrf_alt::thread_ap_block_state33_pp1_stage0_iter20() {
    ap_block_state33_pp1_stage0_iter20 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void qrf_alt::thread_ap_block_state33_pp1_stage0_iter20_ignore_call27() {
    ap_block_state33_pp1_stage0_iter20_ignore_call27 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void qrf_alt::thread_ap_block_state34_pp1_stage0_iter21() {
    ap_block_state34_pp1_stage0_iter21 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void qrf_alt::thread_ap_block_state34_pp1_stage0_iter21_ignore_call27() {
    ap_block_state34_pp1_stage0_iter21_ignore_call27 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void qrf_alt::thread_ap_block_state35_pp1_stage0_iter22() {
    ap_block_state35_pp1_stage0_iter22 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void qrf_alt::thread_ap_block_state35_pp1_stage0_iter22_ignore_call27() {
    ap_block_state35_pp1_stage0_iter22_ignore_call27 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void qrf_alt::thread_ap_block_state36_pp1_stage0_iter23() {
    ap_block_state36_pp1_stage0_iter23 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void qrf_alt::thread_ap_block_state36_pp1_stage0_iter23_ignore_call27() {
    ap_block_state36_pp1_stage0_iter23_ignore_call27 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void qrf_alt::thread_ap_block_state37_pp1_stage0_iter24() {
    ap_block_state37_pp1_stage0_iter24 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void qrf_alt::thread_ap_block_state37_pp1_stage0_iter24_ignore_call27() {
    ap_block_state37_pp1_stage0_iter24_ignore_call27 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void qrf_alt::thread_ap_block_state38_pp1_stage0_iter25() {
    ap_block_state38_pp1_stage0_iter25 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void qrf_alt::thread_ap_block_state38_pp1_stage0_iter25_ignore_call27() {
    ap_block_state38_pp1_stage0_iter25_ignore_call27 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void qrf_alt::thread_ap_block_state39_pp1_stage0_iter26() {
    ap_block_state39_pp1_stage0_iter26 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void qrf_alt::thread_ap_block_state39_pp1_stage0_iter26_ignore_call27() {
    ap_block_state39_pp1_stage0_iter26_ignore_call27 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void qrf_alt::thread_ap_block_state40_pp1_stage0_iter27() {
    ap_block_state40_pp1_stage0_iter27 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void qrf_alt::thread_ap_block_state40_pp1_stage0_iter27_ignore_call27() {
    ap_block_state40_pp1_stage0_iter27_ignore_call27 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void qrf_alt::thread_ap_block_state41_pp1_stage0_iter28() {
    ap_block_state41_pp1_stage0_iter28 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void qrf_alt::thread_ap_block_state41_pp1_stage0_iter28_ignore_call27() {
    ap_block_state41_pp1_stage0_iter28_ignore_call27 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void qrf_alt::thread_ap_block_state42_pp1_stage0_iter29() {
    ap_block_state42_pp1_stage0_iter29 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void qrf_alt::thread_ap_block_state42_pp1_stage0_iter29_ignore_call27() {
    ap_block_state42_pp1_stage0_iter29_ignore_call27 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void qrf_alt::thread_ap_block_state43_pp1_stage0_iter30() {
    ap_block_state43_pp1_stage0_iter30 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void qrf_alt::thread_ap_block_state43_pp1_stage0_iter30_ignore_call27() {
    ap_block_state43_pp1_stage0_iter30_ignore_call27 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void qrf_alt::thread_ap_block_state44_pp1_stage0_iter31() {
    ap_block_state44_pp1_stage0_iter31 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void qrf_alt::thread_ap_block_state44_pp1_stage0_iter31_ignore_call27() {
    ap_block_state44_pp1_stage0_iter31_ignore_call27 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void qrf_alt::thread_ap_block_state45_pp1_stage0_iter32() {
    ap_block_state45_pp1_stage0_iter32 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void qrf_alt::thread_ap_block_state45_pp1_stage0_iter32_ignore_call27() {
    ap_block_state45_pp1_stage0_iter32_ignore_call27 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void qrf_alt::thread_ap_block_state46_pp1_stage0_iter33() {
    ap_block_state46_pp1_stage0_iter33 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void qrf_alt::thread_ap_block_state46_pp1_stage0_iter33_ignore_call27() {
    ap_block_state46_pp1_stage0_iter33_ignore_call27 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void qrf_alt::thread_ap_block_state47_pp1_stage0_iter34() {
    ap_block_state47_pp1_stage0_iter34 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void qrf_alt::thread_ap_block_state47_pp1_stage0_iter34_ignore_call27() {
    ap_block_state47_pp1_stage0_iter34_ignore_call27 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void qrf_alt::thread_ap_block_state48_pp1_stage0_iter35() {
    ap_block_state48_pp1_stage0_iter35 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void qrf_alt::thread_ap_block_state48_pp1_stage0_iter35_ignore_call27() {
    ap_block_state48_pp1_stage0_iter35_ignore_call27 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void qrf_alt::thread_ap_block_state49_pp1_stage0_iter36() {
    ap_block_state49_pp1_stage0_iter36 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void qrf_alt::thread_ap_block_state49_pp1_stage0_iter36_ignore_call27() {
    ap_block_state49_pp1_stage0_iter36_ignore_call27 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void qrf_alt::thread_ap_block_state50_pp1_stage0_iter37() {
    ap_block_state50_pp1_stage0_iter37 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void qrf_alt::thread_ap_block_state50_pp1_stage0_iter37_ignore_call27() {
    ap_block_state50_pp1_stage0_iter37_ignore_call27 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void qrf_alt::thread_ap_block_state51_pp1_stage0_iter38() {
    ap_block_state51_pp1_stage0_iter38 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void qrf_alt::thread_ap_block_state51_pp1_stage0_iter38_ignore_call27() {
    ap_block_state51_pp1_stage0_iter38_ignore_call27 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void qrf_alt::thread_ap_block_state52_pp1_stage0_iter39() {
    ap_block_state52_pp1_stage0_iter39 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void qrf_alt::thread_ap_block_state52_pp1_stage0_iter39_ignore_call27() {
    ap_block_state52_pp1_stage0_iter39_ignore_call27 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void qrf_alt::thread_ap_block_state53_pp1_stage0_iter40() {
    ap_block_state53_pp1_stage0_iter40 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void qrf_alt::thread_ap_block_state53_pp1_stage0_iter40_ignore_call27() {
    ap_block_state53_pp1_stage0_iter40_ignore_call27 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void qrf_alt::thread_ap_block_state54_pp1_stage0_iter41() {
    ap_block_state54_pp1_stage0_iter41 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void qrf_alt::thread_ap_block_state54_pp1_stage0_iter41_ignore_call27() {
    ap_block_state54_pp1_stage0_iter41_ignore_call27 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void qrf_alt::thread_ap_block_state55_pp1_stage0_iter42() {
    ap_block_state55_pp1_stage0_iter42 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void qrf_alt::thread_ap_block_state55_pp1_stage0_iter42_ignore_call27() {
    ap_block_state55_pp1_stage0_iter42_ignore_call27 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void qrf_alt::thread_ap_block_state56_pp1_stage0_iter43() {
    ap_block_state56_pp1_stage0_iter43 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void qrf_alt::thread_ap_block_state56_pp1_stage0_iter43_ignore_call27() {
    ap_block_state56_pp1_stage0_iter43_ignore_call27 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void qrf_alt::thread_ap_block_state57_pp1_stage0_iter44() {
    ap_block_state57_pp1_stage0_iter44 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void qrf_alt::thread_ap_block_state57_pp1_stage0_iter44_ignore_call27() {
    ap_block_state57_pp1_stage0_iter44_ignore_call27 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void qrf_alt::thread_ap_block_state58_pp1_stage0_iter45() {
    ap_block_state58_pp1_stage0_iter45 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void qrf_alt::thread_ap_block_state58_pp1_stage0_iter45_ignore_call27() {
    ap_block_state58_pp1_stage0_iter45_ignore_call27 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void qrf_alt::thread_ap_block_state59_pp1_stage0_iter46() {
    ap_block_state59_pp1_stage0_iter46 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void qrf_alt::thread_ap_block_state59_pp1_stage0_iter46_ignore_call27() {
    ap_block_state59_pp1_stage0_iter46_ignore_call27 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void qrf_alt::thread_ap_block_state6() {
    ap_block_state6 = ((esl_seteq<1,1,1>(ap_const_logic_0, rotations_V_M_real_3_full_n.read()) && 
  esl_seteq<1,3,3>(phi_ln594_reg_978.read(), ap_const_lv3_3)) || (esl_seteq<1,3,3>(phi_ln594_reg_978.read(), ap_const_lv3_3) && 
  esl_seteq<1,1,1>(ap_const_logic_0, rotations_V_M_imag_3_full_n.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, rotations_V_M_real_2_full_n.read()) && 
  esl_seteq<1,3,3>(phi_ln594_reg_978.read(), ap_const_lv3_2)) || (esl_seteq<1,3,3>(phi_ln594_reg_978.read(), ap_const_lv3_2) && 
  esl_seteq<1,1,1>(ap_const_logic_0, rotations_V_M_imag_2_full_n.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, rotations_V_M_real_1_full_n.read()) && 
  esl_seteq<1,3,3>(phi_ln594_reg_978.read(), ap_const_lv3_1)) || (esl_seteq<1,3,3>(phi_ln594_reg_978.read(), ap_const_lv3_1) && 
  esl_seteq<1,1,1>(ap_const_logic_0, rotations_V_M_imag_1_full_n.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, rotations_V_M_real_s_full_n.read()) && 
  esl_seteq<1,3,3>(phi_ln594_reg_978.read(), ap_const_lv3_0)) || (esl_seteq<1,3,3>(phi_ln594_reg_978.read(), ap_const_lv3_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, rotations_V_M_imag_s_full_n.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, rotations_V_M_real_4_full_n.read()) && 
  esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op213_write_state6.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, rotations_V_M_imag_4_full_n.read()) && 
  esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op214_write_state6.read())));
}

void qrf_alt::thread_ap_block_state60_pp1_stage0_iter47() {
    ap_block_state60_pp1_stage0_iter47 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void qrf_alt::thread_ap_block_state60_pp1_stage0_iter47_ignore_call27() {
    ap_block_state60_pp1_stage0_iter47_ignore_call27 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void qrf_alt::thread_ap_block_state61_pp1_stage0_iter48() {
    ap_block_state61_pp1_stage0_iter48 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void qrf_alt::thread_ap_block_state61_pp1_stage0_iter48_ignore_call27() {
    ap_block_state61_pp1_stage0_iter48_ignore_call27 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void qrf_alt::thread_ap_block_state62_pp1_stage0_iter49() {
    ap_block_state62_pp1_stage0_iter49 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void qrf_alt::thread_ap_block_state62_pp1_stage0_iter49_ignore_call27() {
    ap_block_state62_pp1_stage0_iter49_ignore_call27 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void qrf_alt::thread_ap_block_state63_pp1_stage0_iter50() {
    ap_block_state63_pp1_stage0_iter50 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void qrf_alt::thread_ap_block_state63_pp1_stage0_iter50_ignore_call27() {
    ap_block_state63_pp1_stage0_iter50_ignore_call27 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void qrf_alt::thread_ap_block_state64_pp1_stage0_iter51() {
    ap_block_state64_pp1_stage0_iter51 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void qrf_alt::thread_ap_block_state64_pp1_stage0_iter51_ignore_call27() {
    ap_block_state64_pp1_stage0_iter51_ignore_call27 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void qrf_alt::thread_ap_block_state65_pp1_stage0_iter52() {
    ap_block_state65_pp1_stage0_iter52 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void qrf_alt::thread_ap_block_state65_pp1_stage0_iter52_ignore_call27() {
    ap_block_state65_pp1_stage0_iter52_ignore_call27 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void qrf_alt::thread_ap_block_state66_pp1_stage0_iter53() {
    ap_block_state66_pp1_stage0_iter53 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void qrf_alt::thread_ap_block_state66_pp1_stage0_iter53_ignore_call27() {
    ap_block_state66_pp1_stage0_iter53_ignore_call27 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void qrf_alt::thread_ap_block_state67_pp1_stage0_iter54() {
    ap_block_state67_pp1_stage0_iter54 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void qrf_alt::thread_ap_block_state67_pp1_stage0_iter54_ignore_call27() {
    ap_block_state67_pp1_stage0_iter54_ignore_call27 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void qrf_alt::thread_ap_block_state68_pp1_stage0_iter55() {
    ap_block_state68_pp1_stage0_iter55 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void qrf_alt::thread_ap_block_state68_pp1_stage0_iter55_ignore_call27() {
    ap_block_state68_pp1_stage0_iter55_ignore_call27 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void qrf_alt::thread_ap_block_state69_pp1_stage0_iter56() {
    ap_block_state69_pp1_stage0_iter56 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void qrf_alt::thread_ap_block_state69_pp1_stage0_iter56_ignore_call27() {
    ap_block_state69_pp1_stage0_iter56_ignore_call27 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void qrf_alt::thread_ap_block_state70_pp1_stage0_iter57() {
    ap_block_state70_pp1_stage0_iter57 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void qrf_alt::thread_ap_block_state70_pp1_stage0_iter57_ignore_call27() {
    ap_block_state70_pp1_stage0_iter57_ignore_call27 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void qrf_alt::thread_ap_block_state71_pp1_stage0_iter58() {
    ap_block_state71_pp1_stage0_iter58 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void qrf_alt::thread_ap_block_state71_pp1_stage0_iter58_ignore_call27() {
    ap_block_state71_pp1_stage0_iter58_ignore_call27 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void qrf_alt::thread_ap_block_state72_pp1_stage0_iter59() {
    ap_block_state72_pp1_stage0_iter59 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void qrf_alt::thread_ap_block_state72_pp1_stage0_iter59_ignore_call27() {
    ap_block_state72_pp1_stage0_iter59_ignore_call27 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void qrf_alt::thread_ap_block_state73_pp1_stage0_iter60() {
    ap_block_state73_pp1_stage0_iter60 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void qrf_alt::thread_ap_block_state73_pp1_stage0_iter60_ignore_call27() {
    ap_block_state73_pp1_stage0_iter60_ignore_call27 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void qrf_alt::thread_ap_block_state74_pp1_stage0_iter61() {
    ap_block_state74_pp1_stage0_iter61 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void qrf_alt::thread_ap_block_state74_pp1_stage0_iter61_ignore_call27() {
    ap_block_state74_pp1_stage0_iter61_ignore_call27 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void qrf_alt::thread_ap_block_state75_pp1_stage0_iter62() {
    ap_block_state75_pp1_stage0_iter62 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void qrf_alt::thread_ap_block_state75_pp1_stage0_iter62_ignore_call27() {
    ap_block_state75_pp1_stage0_iter62_ignore_call27 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void qrf_alt::thread_ap_block_state76_pp1_stage0_iter63() {
    ap_block_state76_pp1_stage0_iter63 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void qrf_alt::thread_ap_block_state76_pp1_stage0_iter63_ignore_call27() {
    ap_block_state76_pp1_stage0_iter63_ignore_call27 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void qrf_alt::thread_ap_block_state77_pp1_stage0_iter64() {
    ap_block_state77_pp1_stage0_iter64 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void qrf_alt::thread_ap_block_state77_pp1_stage0_iter64_ignore_call27() {
    ap_block_state77_pp1_stage0_iter64_ignore_call27 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void qrf_alt::thread_ap_block_state78_pp1_stage0_iter65() {
    ap_block_state78_pp1_stage0_iter65 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void qrf_alt::thread_ap_block_state78_pp1_stage0_iter65_ignore_call27() {
    ap_block_state78_pp1_stage0_iter65_ignore_call27 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void qrf_alt::thread_ap_block_state79_pp1_stage0_iter66() {
    ap_block_state79_pp1_stage0_iter66 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void qrf_alt::thread_ap_block_state79_pp1_stage0_iter66_ignore_call27() {
    ap_block_state79_pp1_stage0_iter66_ignore_call27 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void qrf_alt::thread_ap_block_state80_pp1_stage0_iter67() {
    ap_block_state80_pp1_stage0_iter67 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void qrf_alt::thread_ap_block_state80_pp1_stage0_iter67_ignore_call27() {
    ap_block_state80_pp1_stage0_iter67_ignore_call27 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void qrf_alt::thread_ap_block_state81_pp1_stage0_iter68() {
    ap_block_state81_pp1_stage0_iter68 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void qrf_alt::thread_ap_block_state81_pp1_stage0_iter68_ignore_call27() {
    ap_block_state81_pp1_stage0_iter68_ignore_call27 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void qrf_alt::thread_ap_block_state82_pp1_stage0_iter69() {
    ap_block_state82_pp1_stage0_iter69 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void qrf_alt::thread_ap_block_state82_pp1_stage0_iter69_ignore_call27() {
    ap_block_state82_pp1_stage0_iter69_ignore_call27 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void qrf_alt::thread_ap_block_state83_pp1_stage0_iter70() {
    ap_block_state83_pp1_stage0_iter70 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void qrf_alt::thread_ap_block_state83_pp1_stage0_iter70_ignore_call27() {
    ap_block_state83_pp1_stage0_iter70_ignore_call27 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void qrf_alt::thread_ap_block_state84_pp1_stage0_iter71() {
    ap_block_state84_pp1_stage0_iter71 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void qrf_alt::thread_ap_block_state84_pp1_stage0_iter71_ignore_call27() {
    ap_block_state84_pp1_stage0_iter71_ignore_call27 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void qrf_alt::thread_ap_block_state85_pp1_stage0_iter72() {
    ap_block_state85_pp1_stage0_iter72 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void qrf_alt::thread_ap_block_state85_pp1_stage0_iter72_ignore_call27() {
    ap_block_state85_pp1_stage0_iter72_ignore_call27 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void qrf_alt::thread_ap_block_state86_pp1_stage0_iter73() {
    ap_block_state86_pp1_stage0_iter73 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void qrf_alt::thread_ap_block_state86_pp1_stage0_iter73_ignore_call27() {
    ap_block_state86_pp1_stage0_iter73_ignore_call27 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void qrf_alt::thread_ap_block_state87_pp1_stage0_iter74() {
    ap_block_state87_pp1_stage0_iter74 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void qrf_alt::thread_ap_block_state87_pp1_stage0_iter74_ignore_call27() {
    ap_block_state87_pp1_stage0_iter74_ignore_call27 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void qrf_alt::thread_ap_block_state88_pp1_stage0_iter75() {
    ap_block_state88_pp1_stage0_iter75 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void qrf_alt::thread_ap_block_state88_pp1_stage0_iter75_ignore_call27() {
    ap_block_state88_pp1_stage0_iter75_ignore_call27 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void qrf_alt::thread_ap_block_state89_pp1_stage0_iter76() {
    ap_block_state89_pp1_stage0_iter76 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void qrf_alt::thread_ap_block_state89_pp1_stage0_iter76_ignore_call27() {
    ap_block_state89_pp1_stage0_iter76_ignore_call27 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void qrf_alt::thread_ap_block_state8_pp0_stage0_iter0() {
    ap_block_state8_pp0_stage0_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void qrf_alt::thread_ap_block_state90_pp1_stage0_iter77() {
    ap_block_state90_pp1_stage0_iter77 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void qrf_alt::thread_ap_block_state90_pp1_stage0_iter77_ignore_call27() {
    ap_block_state90_pp1_stage0_iter77_ignore_call27 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void qrf_alt::thread_ap_block_state91_pp1_stage0_iter78() {
    ap_block_state91_pp1_stage0_iter78 = ((esl_seteq<1,1,1>(ap_const_logic_0, io_acc_block_signal_op421.read()) && 
  esl_seteq<1,1,1>(icmp_ln620_reg_2015_pp1_iter77_reg.read(), ap_const_lv1_0)) || (esl_seteq<1,1,1>(icmp_ln620_reg_2015_pp1_iter77_reg.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, io_acc_block_signal_op422.read())) || (esl_seteq<1,1,1>(icmp_ln620_reg_2015_pp1_iter77_reg.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, io_acc_block_signal_op423.read())) || (esl_seteq<1,1,1>(icmp_ln620_reg_2015_pp1_iter77_reg.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, io_acc_block_signal_op424.read())) || (esl_seteq<1,1,1>(icmp_ln620_reg_2015_pp1_iter77_reg.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, io_acc_block_signal_op425.read())) || (esl_seteq<1,1,1>(icmp_ln620_reg_2015_pp1_iter77_reg.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, to_rot_0_V_full_n.read())) || (esl_seteq<1,1,1>(icmp_ln620_reg_2015_pp1_iter77_reg.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, to_rot_1_V_full_n.read())) || (esl_seteq<1,1,1>(icmp_ln620_reg_2015_pp1_iter77_reg.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, to_rot_2_V_full_n.read())));
}

void qrf_alt::thread_ap_block_state91_pp1_stage0_iter78_ignore_call27() {
    ap_block_state91_pp1_stage0_iter78_ignore_call27 = ((esl_seteq<1,1,1>(ap_const_logic_0, io_acc_block_signal_op421.read()) && 
  esl_seteq<1,1,1>(icmp_ln620_reg_2015_pp1_iter77_reg.read(), ap_const_lv1_0)) || (esl_seteq<1,1,1>(icmp_ln620_reg_2015_pp1_iter77_reg.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, io_acc_block_signal_op422.read())) || (esl_seteq<1,1,1>(icmp_ln620_reg_2015_pp1_iter77_reg.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, io_acc_block_signal_op423.read())) || (esl_seteq<1,1,1>(icmp_ln620_reg_2015_pp1_iter77_reg.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, io_acc_block_signal_op424.read())) || (esl_seteq<1,1,1>(icmp_ln620_reg_2015_pp1_iter77_reg.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, io_acc_block_signal_op425.read())) || (esl_seteq<1,1,1>(icmp_ln620_reg_2015_pp1_iter77_reg.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, to_rot_0_V_full_n.read())) || (esl_seteq<1,1,1>(icmp_ln620_reg_2015_pp1_iter77_reg.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, to_rot_1_V_full_n.read())) || (esl_seteq<1,1,1>(icmp_ln620_reg_2015_pp1_iter77_reg.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, to_rot_2_V_full_n.read())));
}

void qrf_alt::thread_ap_block_state93() {
    ap_block_state93 = ((esl_seteq<1,1,1>(ap_const_logic_0, io_acc_block_signal_op439.read()) && 
  esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln643_fu_1535_p2.read())) || (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln643_fu_1535_p2.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_0, io_acc_block_signal_op442.read())) || (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln643_fu_1535_p2.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_0, io_acc_block_signal_op445.read())) || (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln643_fu_1535_p2.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_0, io_acc_block_signal_op448.read())) || (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln643_fu_1535_p2.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_0, io_acc_block_signal_op451.read())) || (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln643_fu_1535_p2.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_0, to_rot_0_V_empty_n.read())) || (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln643_fu_1535_p2.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_0, to_rot_1_V_empty_n.read())) || (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln643_fu_1535_p2.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_0, to_rot_2_V_empty_n.read())));
}

void qrf_alt::thread_ap_block_state94_pp2_stage0_iter0() {
    ap_block_state94_pp2_stage0_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void qrf_alt::thread_ap_block_state95_pp2_stage1_iter0() {
    ap_block_state95_pp2_stage1_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void qrf_alt::thread_ap_block_state96_pp2_stage2_iter0() {
    ap_block_state96_pp2_stage2_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void qrf_alt::thread_ap_block_state97_pp2_stage3_iter0() {
    ap_block_state97_pp2_stage3_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void qrf_alt::thread_ap_block_state98_pp2_stage0_iter1() {
    ap_block_state98_pp2_stage0_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void qrf_alt::thread_ap_block_state99_pp2_stage1_iter1() {
    ap_block_state99_pp2_stage1_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void qrf_alt::thread_ap_block_state9_pp0_stage0_iter1() {
    ap_block_state9_pp0_stage0_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void qrf_alt::thread_ap_condition_pp0_exit_iter0_state8() {
    if (esl_seteq<1,1,1>(icmp_ln600_1_fu_1337_p2.read(), ap_const_lv1_1)) {
        ap_condition_pp0_exit_iter0_state8 = ap_const_logic_1;
    } else {
        ap_condition_pp0_exit_iter0_state8 = ap_const_logic_0;
    }
}

void qrf_alt::thread_ap_condition_pp1_exit_iter0_state13() {
    if (esl_seteq<1,1,1>(icmp_ln620_fu_1432_p2.read(), ap_const_lv1_1)) {
        ap_condition_pp1_exit_iter0_state13 = ap_const_logic_1;
    } else {
        ap_condition_pp1_exit_iter0_state13 = ap_const_logic_0;
    }
}

void qrf_alt::thread_ap_condition_pp2_exit_iter0_state94() {
    if (esl_seteq<1,1,1>(icmp_ln643_1_fu_1613_p2.read(), ap_const_lv1_1)) {
        ap_condition_pp2_exit_iter0_state94 = ap_const_logic_1;
    } else {
        ap_condition_pp2_exit_iter0_state94 = ap_const_logic_0;
    }
}

void qrf_alt::thread_ap_condition_pp3_exit_iter0_state115() {
    if (esl_seteq<1,1,1>(icmp_ln680_1_fu_1732_p2.read(), ap_const_lv1_1)) {
        ap_condition_pp3_exit_iter0_state115 = ap_const_logic_1;
    } else {
        ap_condition_pp3_exit_iter0_state115 = ap_const_logic_0;
    }
}

void qrf_alt::thread_ap_done() {
    if (((esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state114.read()) && 
          esl_seteq<1,1,1>(icmp_ln680_fu_1704_p2.read(), ap_const_lv1_1)))) {
        ap_done = ap_const_logic_1;
    } else {
        ap_done = ap_const_logic_0;
    }
}

void qrf_alt::thread_ap_enable_pp0() {
    ap_enable_pp0 = (ap_idle_pp0.read() ^ ap_const_logic_1);
}

void qrf_alt::thread_ap_enable_pp1() {
    ap_enable_pp1 = (ap_idle_pp1.read() ^ ap_const_logic_1);
}

void qrf_alt::thread_ap_enable_pp2() {
    ap_enable_pp2 = (ap_idle_pp2.read() ^ ap_const_logic_1);
}

void qrf_alt::thread_ap_enable_pp3() {
    ap_enable_pp3 = (ap_idle_pp3.read() ^ ap_const_logic_1);
}

void qrf_alt::thread_ap_idle() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()))) {
        ap_idle = ap_const_logic_1;
    } else {
        ap_idle = ap_const_logic_0;
    }
}

void qrf_alt::thread_ap_idle_pp0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter1.read()))) {
        ap_idle_pp0 = ap_const_logic_1;
    } else {
        ap_idle_pp0 = ap_const_logic_0;
    }
}

void qrf_alt::thread_ap_idle_pp1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp1_iter4.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp1_iter5.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp1_iter6.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp1_iter7.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp1_iter8.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp1_iter9.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp1_iter10.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp1_iter11.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp1_iter12.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp1_iter13.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp1_iter14.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp1_iter15.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp1_iter16.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp1_iter17.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp1_iter18.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp1_iter19.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp1_iter20.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp1_iter21.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp1_iter22.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp1_iter23.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp1_iter24.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp1_iter25.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp1_iter26.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp1_iter27.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp1_iter28.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp1_iter29.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp1_iter30.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp1_iter31.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp1_iter32.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp1_iter33.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp1_iter34.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp1_iter35.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp1_iter36.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp1_iter37.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp1_iter38.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp1_iter39.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp1_iter40.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp1_iter41.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp1_iter42.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp1_iter43.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp1_iter44.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp1_iter45.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp1_iter46.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp1_iter47.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp1_iter48.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp1_iter49.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp1_iter50.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp1_iter51.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp1_iter52.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp1_iter53.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp1_iter54.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp1_iter55.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp1_iter56.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp1_iter57.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp1_iter58.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp1_iter59.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp1_iter60.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp1_iter61.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp1_iter62.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp1_iter63.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp1_iter64.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp1_iter65.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp1_iter66.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp1_iter67.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp1_iter68.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp1_iter69.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp1_iter70.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp1_iter71.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp1_iter72.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp1_iter73.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp1_iter74.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp1_iter75.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp1_iter76.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp1_iter77.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp1_iter78.read()))) {
        ap_idle_pp1 = ap_const_logic_1;
    } else {
        ap_idle_pp1 = ap_const_logic_0;
    }
}

void qrf_alt::thread_ap_idle_pp2() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp2_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp2_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp2_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp2_iter4.read()))) {
        ap_idle_pp2 = ap_const_logic_1;
    } else {
        ap_idle_pp2 = ap_const_logic_0;
    }
}

void qrf_alt::thread_ap_idle_pp3() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp3_iter1.read()))) {
        ap_idle_pp3 = ap_const_logic_1;
    } else {
        ap_idle_pp3 = ap_const_logic_0;
    }
}

void qrf_alt::thread_ap_phi_mux_indvar3_phi_fu_1060_p4() {
    if ((esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln643_1_reg_2156.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_indvar3_phi_fu_1060_p4 = add_ln643_reg_2236.read();
    } else {
        ap_phi_mux_indvar3_phi_fu_1060_p4 = indvar3_reg_1056.read();
    }
}

void qrf_alt::thread_ap_predicate_op213_write_state6() {
    ap_predicate_op213_write_state6 = (!esl_seteq<1,3,3>(phi_ln594_reg_978.read(), ap_const_lv3_0) && !esl_seteq<1,3,3>(phi_ln594_reg_978.read(), ap_const_lv3_1) && !esl_seteq<1,3,3>(phi_ln594_reg_978.read(), ap_const_lv3_2) && !esl_seteq<1,3,3>(phi_ln594_reg_978.read(), ap_const_lv3_3));
}

void qrf_alt::thread_ap_predicate_op214_write_state6() {
    ap_predicate_op214_write_state6 = (!esl_seteq<1,3,3>(phi_ln594_reg_978.read(), ap_const_lv3_0) && !esl_seteq<1,3,3>(phi_ln594_reg_978.read(), ap_const_lv3_1) && !esl_seteq<1,3,3>(phi_ln594_reg_978.read(), ap_const_lv3_2) && !esl_seteq<1,3,3>(phi_ln594_reg_978.read(), ap_const_lv3_3));
}

void qrf_alt::thread_ap_ready() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state114.read()) && 
         esl_seteq<1,1,1>(icmp_ln680_fu_1704_p2.read(), ap_const_lv1_1))) {
        ap_ready = ap_const_logic_1;
    } else {
        ap_ready = ap_const_logic_0;
    }
}

void qrf_alt::thread_batch_num_fu_1391_p2() {
    batch_num_fu_1391_p2 = (!batch_num_0_reg_1024.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(batch_num_0_reg_1024.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void qrf_alt::thread_bitcast_ln155_fu_1783_p1() {
    bitcast_ln155_fu_1783_p1 = q_i_M_imag_q1.read();
}

void qrf_alt::thread_empty_90_fu_1418_p1() {
    empty_90_fu_1418_p1 = seq_cnt_0_reg_1012.read().range(2-1, 0);
}

void qrf_alt::thread_grp_fu_1103_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        grp_fu_1103_p0 = tmp_i_i_i8_i_reg_2361.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage3.read(), ap_const_boolean_0))) {
        grp_fu_1103_p0 = tmp_i_i_i1_i_reg_2321.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage2.read(), ap_const_boolean_0))) {
        grp_fu_1103_p0 = tmp_i_i_i_i1_reg_2281.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage1.read(), ap_const_boolean_0))) {
        grp_fu_1103_p0 = tmp_i_i_i_i_reg_2241.read();
    } else {
        grp_fu_1103_p0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void qrf_alt::thread_grp_fu_1103_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        grp_fu_1103_p1 = tmp_i_i_i9_i_reg_2366.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage3.read(), ap_const_boolean_0))) {
        grp_fu_1103_p1 = tmp_i_i_i2_i_reg_2326.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage2.read(), ap_const_boolean_0))) {
        grp_fu_1103_p1 = tmp_i_i_i_i1_100_reg_2286.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage1.read(), ap_const_boolean_0))) {
        grp_fu_1103_p1 = tmp_i_i_i_i_98_reg_2246.read();
    } else {
        grp_fu_1103_p1 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void qrf_alt::thread_grp_fu_1107_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        grp_fu_1107_p0 = tmp_1_i_i_i11_i_reg_2371.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage3.read(), ap_const_boolean_0))) {
        grp_fu_1107_p0 = tmp_1_i_i_i4_i_reg_2331.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage2.read(), ap_const_boolean_0))) {
        grp_fu_1107_p0 = tmp_1_i_i_i_i1_reg_2291.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage1.read(), ap_const_boolean_0))) {
        grp_fu_1107_p0 = tmp_1_i_i_i_i_reg_2251.read();
    } else {
        grp_fu_1107_p0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void qrf_alt::thread_grp_fu_1107_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        grp_fu_1107_p1 = tmp_2_i_i_i12_i_reg_2376.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage3.read(), ap_const_boolean_0))) {
        grp_fu_1107_p1 = tmp_2_i_i_i5_i_reg_2336.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage2.read(), ap_const_boolean_0))) {
        grp_fu_1107_p1 = tmp_2_i_i_i_i1_reg_2296.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage1.read(), ap_const_boolean_0))) {
        grp_fu_1107_p1 = tmp_2_i_i_i_i_reg_2256.read();
    } else {
        grp_fu_1107_p1 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void qrf_alt::thread_grp_fu_1111_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        grp_fu_1111_p0 = tmp_i_i1_i18_i_reg_2381.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage3.read(), ap_const_boolean_0))) {
        grp_fu_1111_p0 = tmp_i_i1_i11_i_reg_2341.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage2.read(), ap_const_boolean_0))) {
        grp_fu_1111_p0 = tmp_i_i1_i_i1_reg_2301.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage1.read(), ap_const_boolean_0))) {
        grp_fu_1111_p0 = tmp_i_i1_i_i_reg_2261.read();
    } else {
        grp_fu_1111_p0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void qrf_alt::thread_grp_fu_1111_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        grp_fu_1111_p1 = tmp_i_i2_i19_i_reg_2386.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage3.read(), ap_const_boolean_0))) {
        grp_fu_1111_p1 = tmp_i_i2_i12_i_reg_2346.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage2.read(), ap_const_boolean_0))) {
        grp_fu_1111_p1 = tmp_i_i2_i_i1_reg_2306.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage1.read(), ap_const_boolean_0))) {
        grp_fu_1111_p1 = tmp_i_i2_i_i_reg_2266.read();
    } else {
        grp_fu_1111_p1 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void qrf_alt::thread_grp_fu_1115_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        grp_fu_1115_p0 = tmp_1_i_i4_i21_i_reg_2391.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage3.read(), ap_const_boolean_0))) {
        grp_fu_1115_p0 = tmp_1_i_i4_i14_i_reg_2351.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage2.read(), ap_const_boolean_0))) {
        grp_fu_1115_p0 = tmp_1_i_i4_i_i1_reg_2311.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage1.read(), ap_const_boolean_0))) {
        grp_fu_1115_p0 = tmp_1_i_i4_i_i_reg_2271.read();
    } else {
        grp_fu_1115_p0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void qrf_alt::thread_grp_fu_1115_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        grp_fu_1115_p1 = tmp_2_i_i5_i22_i_reg_2396.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage3.read(), ap_const_boolean_0))) {
        grp_fu_1115_p1 = tmp_2_i_i5_i15_i_reg_2356.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage2.read(), ap_const_boolean_0))) {
        grp_fu_1115_p1 = tmp_2_i_i5_i_i1_reg_2316.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage1.read(), ap_const_boolean_0))) {
        grp_fu_1115_p1 = tmp_2_i_i5_i_i_reg_2276.read();
    } else {
        grp_fu_1115_p1 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void qrf_alt::thread_grp_fu_1119_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage1.read(), ap_const_boolean_0))) {
        grp_fu_1119_p0 = p_r_M_real_7_reg_2461.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        grp_fu_1119_p0 = p_r_M_real_5_reg_2441.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage3.read(), ap_const_boolean_0))) {
        grp_fu_1119_p0 = p_r_M_real_6_reg_2421.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage2.read(), ap_const_boolean_0))) {
        grp_fu_1119_p0 = p_r_M_real_2_reg_2401.read();
    } else {
        grp_fu_1119_p0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void qrf_alt::thread_grp_fu_1119_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage1.read(), ap_const_boolean_0))) {
        grp_fu_1119_p1 = complex_M_real_writ_6_reg_2471.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        grp_fu_1119_p1 = complex_M_real_writ_2_reg_2451.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage3.read(), ap_const_boolean_0))) {
        grp_fu_1119_p1 = complex_M_real_writ_4_reg_2431.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage2.read(), ap_const_boolean_0))) {
        grp_fu_1119_p1 = complex_M_real_writ_reg_2411.read();
    } else {
        grp_fu_1119_p1 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void qrf_alt::thread_grp_fu_1123_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage1.read(), ap_const_boolean_0))) {
        grp_fu_1123_p0 = p_r_M_imag_7_reg_2466.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        grp_fu_1123_p0 = p_r_M_imag_5_reg_2446.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage3.read(), ap_const_boolean_0))) {
        grp_fu_1123_p0 = p_r_M_imag_6_reg_2426.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage2.read(), ap_const_boolean_0))) {
        grp_fu_1123_p0 = p_r_M_imag_2_reg_2406.read();
    } else {
        grp_fu_1123_p0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void qrf_alt::thread_grp_fu_1123_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage1.read(), ap_const_boolean_0))) {
        grp_fu_1123_p1 = complex_M_imag_writ_7_reg_2476.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        grp_fu_1123_p1 = complex_M_imag_writ_3_reg_2456.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage3.read(), ap_const_boolean_0))) {
        grp_fu_1123_p1 = complex_M_imag_writ_5_reg_2436.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage2.read(), ap_const_boolean_0))) {
        grp_fu_1123_p1 = complex_M_imag_writ_reg_2416.read();
    } else {
        grp_fu_1123_p1 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void qrf_alt::thread_grp_fu_1127_p0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage3.read(), ap_const_boolean_0)))) {
        grp_fu_1127_p0 = p_r_M_real_3_reg_2107.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage1.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp2_stage1.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage2.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp2_stage2.read(), ap_const_boolean_0)))) {
        grp_fu_1127_p0 = p_r_M_real_reg_2083.read();
    } else {
        grp_fu_1127_p0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void qrf_alt::thread_grp_fu_1127_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage3.read(), ap_const_boolean_0))) {
        grp_fu_1127_p1 = reg_1167.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage2.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp2_stage2.read(), ap_const_boolean_0)))) {
        grp_fu_1127_p1 = p_t_real_2_reg_2212.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage1.read(), ap_const_boolean_0))) {
        grp_fu_1127_p1 = r_i_M_real_q1.read();
    } else {
        grp_fu_1127_p1 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void qrf_alt::thread_grp_fu_1132_p0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage3.read(), ap_const_boolean_0)))) {
        grp_fu_1132_p0 = p_r_M_imag_3_reg_2113.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage1.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp2_stage1.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage2.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp2_stage2.read(), ap_const_boolean_0)))) {
        grp_fu_1132_p0 = p_r_M_imag_reg_2089.read();
    } else {
        grp_fu_1132_p0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void qrf_alt::thread_grp_fu_1132_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage3.read(), ap_const_boolean_0))) {
        grp_fu_1132_p1 = reg_1175.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage2.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp2_stage2.read(), ap_const_boolean_0)))) {
        grp_fu_1132_p1 = p_t_imag_2_reg_2218.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage1.read(), ap_const_boolean_0))) {
        grp_fu_1132_p1 = r_i_M_imag_q1.read();
    } else {
        grp_fu_1132_p1 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void qrf_alt::thread_grp_fu_1137_p0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage3.read(), ap_const_boolean_0)))) {
        grp_fu_1137_p0 = p_r_M_imag_3_reg_2113.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage1.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp2_stage1.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage2.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp2_stage2.read(), ap_const_boolean_0)))) {
        grp_fu_1137_p0 = p_r_M_imag_reg_2089.read();
    } else {
        grp_fu_1137_p0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void qrf_alt::thread_grp_fu_1137_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage3.read(), ap_const_boolean_0))) {
        grp_fu_1137_p1 = reg_1167.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage2.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp2_stage2.read(), ap_const_boolean_0)))) {
        grp_fu_1137_p1 = p_t_real_2_reg_2212.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage1.read(), ap_const_boolean_0))) {
        grp_fu_1137_p1 = r_i_M_real_q1.read();
    } else {
        grp_fu_1137_p1 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void qrf_alt::thread_grp_fu_1142_p0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage3.read(), ap_const_boolean_0)))) {
        grp_fu_1142_p0 = p_r_M_real_3_reg_2107.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage1.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp2_stage1.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage2.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp2_stage2.read(), ap_const_boolean_0)))) {
        grp_fu_1142_p0 = p_r_M_real_reg_2083.read();
    } else {
        grp_fu_1142_p0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void qrf_alt::thread_grp_fu_1142_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage3.read(), ap_const_boolean_0))) {
        grp_fu_1142_p1 = reg_1175.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage2.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp2_stage2.read(), ap_const_boolean_0)))) {
        grp_fu_1142_p1 = p_t_imag_2_reg_2218.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage1.read(), ap_const_boolean_0))) {
        grp_fu_1142_p1 = r_i_M_imag_q1.read();
    } else {
        grp_fu_1142_p1 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void qrf_alt::thread_grp_fu_1147_p0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage3.read(), ap_const_boolean_0)))) {
        grp_fu_1147_p0 = p_r_M_real_4_reg_2119.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage1.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp2_stage1.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage2.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp2_stage2.read(), ap_const_boolean_0)))) {
        grp_fu_1147_p0 = p_r_M_real_1_reg_2095.read();
    } else {
        grp_fu_1147_p0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void qrf_alt::thread_grp_fu_1147_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage3.read(), ap_const_boolean_0))) {
        grp_fu_1147_p1 = reg_1183.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage2.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp2_stage2.read(), ap_const_boolean_0)))) {
        grp_fu_1147_p1 = p_t_real_3_reg_2224.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage1.read(), ap_const_boolean_0))) {
        grp_fu_1147_p1 = r_i_M_real_q0.read();
    } else {
        grp_fu_1147_p1 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void qrf_alt::thread_grp_fu_1152_p0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage3.read(), ap_const_boolean_0)))) {
        grp_fu_1152_p0 = p_r_M_imag_4_reg_2125.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage1.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp2_stage1.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage2.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp2_stage2.read(), ap_const_boolean_0)))) {
        grp_fu_1152_p0 = p_r_M_imag_1_reg_2101.read();
    } else {
        grp_fu_1152_p0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void qrf_alt::thread_grp_fu_1152_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage3.read(), ap_const_boolean_0))) {
        grp_fu_1152_p1 = reg_1191.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage2.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp2_stage2.read(), ap_const_boolean_0)))) {
        grp_fu_1152_p1 = p_t_imag_3_reg_2230.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage1.read(), ap_const_boolean_0))) {
        grp_fu_1152_p1 = r_i_M_imag_q0.read();
    } else {
        grp_fu_1152_p1 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void qrf_alt::thread_grp_fu_1157_p0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage3.read(), ap_const_boolean_0)))) {
        grp_fu_1157_p0 = p_r_M_imag_4_reg_2125.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage1.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp2_stage1.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage2.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp2_stage2.read(), ap_const_boolean_0)))) {
        grp_fu_1157_p0 = p_r_M_imag_1_reg_2101.read();
    } else {
        grp_fu_1157_p0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void qrf_alt::thread_grp_fu_1157_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage3.read(), ap_const_boolean_0))) {
        grp_fu_1157_p1 = reg_1183.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage2.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp2_stage2.read(), ap_const_boolean_0)))) {
        grp_fu_1157_p1 = p_t_real_3_reg_2224.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage1.read(), ap_const_boolean_0))) {
        grp_fu_1157_p1 = r_i_M_real_q0.read();
    } else {
        grp_fu_1157_p1 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void qrf_alt::thread_grp_fu_1162_p0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage3.read(), ap_const_boolean_0)))) {
        grp_fu_1162_p0 = p_r_M_real_4_reg_2119.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage1.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp2_stage1.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage2.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp2_stage2.read(), ap_const_boolean_0)))) {
        grp_fu_1162_p0 = p_r_M_real_1_reg_2095.read();
    } else {
        grp_fu_1162_p0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void qrf_alt::thread_grp_fu_1162_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage3.read(), ap_const_boolean_0))) {
        grp_fu_1162_p1 = reg_1191.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage2.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp2_stage2.read(), ap_const_boolean_0)))) {
        grp_fu_1162_p1 = p_t_imag_3_reg_2230.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage1.read(), ap_const_boolean_0))) {
        grp_fu_1162_p1 = r_i_M_imag_q0.read();
    } else {
        grp_fu_1162_p1 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void qrf_alt::thread_grp_qrf_givens_float_s_fu_1090_ap_ce() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_11001_ignoreCallOp328.read(), ap_const_boolean_0))) {
        grp_qrf_givens_float_s_fu_1090_ap_ce = ap_const_logic_1;
    } else {
        grp_qrf_givens_float_s_fu_1090_ap_ce = ap_const_logic_0;
    }
}

void qrf_alt::thread_icmp_ln579_1_fu_1241_p2() {
    icmp_ln579_1_fu_1241_p2 = (!phi_ln579_reg_932.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(phi_ln579_reg_932.read() == ap_const_lv2_3);
}

void qrf_alt::thread_icmp_ln579_fu_1235_p2() {
    icmp_ln579_fu_1235_p2 = (!phi_ln579_1_reg_944.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(phi_ln579_1_reg_944.read() == ap_const_lv2_3);
}

void qrf_alt::thread_icmp_ln580_1_fu_1279_p2() {
    icmp_ln580_1_fu_1279_p2 = (!phi_ln580_reg_955.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(phi_ln580_reg_955.read() == ap_const_lv2_3);
}

void qrf_alt::thread_icmp_ln580_fu_1273_p2() {
    icmp_ln580_fu_1273_p2 = (!phi_ln580_1_reg_967.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(phi_ln580_1_reg_967.read() == ap_const_lv2_3);
}

void qrf_alt::thread_icmp_ln594_fu_1291_p2() {
    icmp_ln594_fu_1291_p2 = (!phi_ln594_reg_978.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(phi_ln594_reg_978.read() == ap_const_lv3_4);
}

void qrf_alt::thread_icmp_ln600_1_fu_1337_p2() {
    icmp_ln600_1_fu_1337_p2 = (!indvar_reg_1001.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(indvar_reg_1001.read() == ap_const_lv3_4);
}

void qrf_alt::thread_icmp_ln600_fu_1297_p2() {
    icmp_ln600_fu_1297_p2 = (!r_0_reg_989.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(r_0_reg_989.read() == ap_const_lv3_4);
}

void qrf_alt::thread_icmp_ln605_fu_1343_p2() {
    icmp_ln605_fu_1343_p2 = (!r_0_reg_989.read().is_01() || !indvar_reg_1001.read().is_01())? sc_lv<1>(): sc_lv<1>(r_0_reg_989.read() == indvar_reg_1001.read());
}

void qrf_alt::thread_icmp_ln618_fu_1385_p2() {
    icmp_ln618_fu_1385_p2 = (!batch_num_0_reg_1024.read().is_01() || !ap_const_lv3_5.is_01())? sc_lv<1>(): sc_lv<1>(batch_num_0_reg_1024.read() == ap_const_lv3_5);
}

void qrf_alt::thread_icmp_ln620_fu_1432_p2() {
    icmp_ln620_fu_1432_p2 = (!trunc_ln620_fu_1428_p1.read().is_01() || !add_ln620_reg_2010.read().is_01())? sc_lv<1>(): sc_lv<1>(trunc_ln620_fu_1428_p1.read() == add_ln620_reg_2010.read());
}

void qrf_alt::thread_icmp_ln628_fu_1402_p2() {
    icmp_ln628_fu_1402_p2 = (!batch_num_0_reg_1024.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(batch_num_0_reg_1024.read() == ap_const_lv3_4);
}

void qrf_alt::thread_icmp_ln643_1_fu_1613_p2() {
    icmp_ln643_1_fu_1613_p2 = (!ap_phi_mux_indvar3_phi_fu_1060_p4.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(ap_phi_mux_indvar3_phi_fu_1060_p4.read() == ap_const_lv3_4);
}

void qrf_alt::thread_icmp_ln643_fu_1535_p2() {
    icmp_ln643_fu_1535_p2 = (!px_cnt19_0_reg_1045.read().is_01() || !CONFIG_BATCH_CNTS_lo_reg_2000.read().is_01())? sc_lv<1>(): sc_lv<1>(px_cnt19_0_reg_1045.read() == CONFIG_BATCH_CNTS_lo_reg_2000.read());
}

void qrf_alt::thread_icmp_ln666_fu_1623_p2() {
    icmp_ln666_fu_1623_p2 = (!zext_ln662_fu_1619_p1.read().is_01() || !tmp_34_reg_2136.read().is_01())? sc_lv<1>(): sc_lv<1>(zext_ln662_fu_1619_p1.read() == tmp_34_reg_2136.read());
}

void qrf_alt::thread_icmp_ln680_1_fu_1732_p2() {
    icmp_ln680_1_fu_1732_p2 = (!indvar8_reg_1079.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(indvar8_reg_1079.read() == ap_const_lv3_4);
}

void qrf_alt::thread_icmp_ln680_fu_1704_p2() {
    icmp_ln680_fu_1704_p2 = (!r21_0_reg_1068.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(r21_0_reg_1068.read() == ap_const_lv3_4);
}

void qrf_alt::thread_io_acc_block_signal_op421() {
    io_acc_block_signal_op421 = (rotations_V_M_real_s_full_n.read() & rotations_V_M_imag_s_full_n.read());
}

void qrf_alt::thread_io_acc_block_signal_op422() {
    io_acc_block_signal_op422 = (rotations_V_M_real_1_full_n.read() & rotations_V_M_imag_1_full_n.read());
}

void qrf_alt::thread_io_acc_block_signal_op423() {
    io_acc_block_signal_op423 = (rotations_V_M_real_2_full_n.read() & rotations_V_M_imag_2_full_n.read());
}

void qrf_alt::thread_io_acc_block_signal_op424() {
    io_acc_block_signal_op424 = (rotations_V_M_real_3_full_n.read() & rotations_V_M_imag_3_full_n.read());
}

void qrf_alt::thread_io_acc_block_signal_op425() {
    io_acc_block_signal_op425 = (rotations_V_M_real_4_full_n.read() & rotations_V_M_imag_4_full_n.read());
}

void qrf_alt::thread_io_acc_block_signal_op439() {
    io_acc_block_signal_op439 = (rotations_V_M_real_s_empty_n.read() & rotations_V_M_imag_s_empty_n.read());
}

void qrf_alt::thread_io_acc_block_signal_op442() {
    io_acc_block_signal_op442 = (rotations_V_M_real_1_empty_n.read() & rotations_V_M_imag_1_empty_n.read());
}

void qrf_alt::thread_io_acc_block_signal_op445() {
    io_acc_block_signal_op445 = (rotations_V_M_real_2_empty_n.read() & rotations_V_M_imag_2_empty_n.read());
}

void qrf_alt::thread_io_acc_block_signal_op448() {
    io_acc_block_signal_op448 = (rotations_V_M_real_3_empty_n.read() & rotations_V_M_imag_3_empty_n.read());
}

void qrf_alt::thread_io_acc_block_signal_op451() {
    io_acc_block_signal_op451 = (rotations_V_M_real_4_empty_n.read() & rotations_V_M_imag_4_empty_n.read());
}

void qrf_alt::thread_phitmp15_i_fu_1670_p3() {
    phitmp15_i_fu_1670_p3 = (!icmp_ln628_reg_1992.read()[0].is_01())? sc_lv<32>(): ((icmp_ln628_reg_1992.read()[0].to_bool())? reg_1175_pp2_iter3_reg.read(): ap_const_lv32_0);
}

void qrf_alt::thread_phitmp_i_fu_1664_p3() {
    phitmp_i_fu_1664_p3 = (!icmp_ln628_reg_1992.read()[0].is_01())? sc_lv<32>(): ((icmp_ln628_reg_1992.read()[0].to_bool())? reg_1167_pp2_iter3_reg.read(): rotations_V_M_real_1_97_reg_2131.read());
}

void qrf_alt::thread_px_cnt_fu_1540_p2() {
    px_cnt_fu_1540_p2 = (!px_cnt19_0_reg_1045.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(px_cnt19_0_reg_1045.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void qrf_alt::thread_q_i_M_imag_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        q_i_M_imag_address0 =  (sc_lv<4>) (sext_ln669_fu_1637_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln600_1_fu_1337_p2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln605_fu_1343_p2.read()))) {
        q_i_M_imag_address0 = q_i_M_imag_addr_1_reg_1946.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln600_1_fu_1337_p2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln605_fu_1343_p2.read()))) {
        q_i_M_imag_address0 =  (sc_lv<4>) (zext_ln1067_3_fu_1358_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        q_i_M_imag_address0 =  (sc_lv<4>) (zext_ln1027_fu_1229_p1.read());
    } else {
        q_i_M_imag_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void qrf_alt::thread_q_i_M_imag_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0.read(), ap_const_boolean_0))) {
        q_i_M_imag_address1 =  (sc_lv<4>) (zext_ln685_2_fu_1747_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage2.read(), ap_const_boolean_0))) {
        q_i_M_imag_address1 = q_i_M_imag_addr_5_reg_2207_pp2_iter4_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage1.read(), ap_const_boolean_0))) {
        q_i_M_imag_address1 = q_i_M_imag_addr_4_reg_2201_pp2_iter4_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        q_i_M_imag_address1 =  (sc_lv<4>) (sext_ln669_1_fu_1650_p1.read());
    } else {
        q_i_M_imag_address1 =  (sc_lv<4>) ("XXXX");
    }
}

void qrf_alt::thread_q_i_M_imag_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln600_1_fu_1337_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln605_fu_1343_p2.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln600_1_fu_1337_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln605_fu_1343_p2.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0)))) {
        q_i_M_imag_ce0 = ap_const_logic_1;
    } else {
        q_i_M_imag_ce0 = ap_const_logic_0;
    }
}

void qrf_alt::thread_q_i_M_imag_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage1_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter4.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage2_11001.read(), ap_const_boolean_0)))) {
        q_i_M_imag_ce1 = ap_const_logic_1;
    } else {
        q_i_M_imag_ce1 = ap_const_logic_0;
    }
}

void qrf_alt::thread_q_i_M_imag_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln600_1_fu_1337_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln605_fu_1343_p2.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln600_1_fu_1337_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln605_fu_1343_p2.read())))) {
        q_i_M_imag_we0 = ap_const_logic_1;
    } else {
        q_i_M_imag_we0 = ap_const_logic_0;
    }
}

void qrf_alt::thread_q_i_M_imag_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage1_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln643_1_reg_2156_pp2_iter4_reg.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln643_1_reg_2156_pp2_iter4_reg.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage2_11001.read(), ap_const_boolean_0)))) {
        q_i_M_imag_we1 = ap_const_logic_1;
    } else {
        q_i_M_imag_we1 = ap_const_logic_0;
    }
}

void qrf_alt::thread_q_i_M_real_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        q_i_M_real_address0 =  (sc_lv<4>) (sext_ln669_fu_1637_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln600_1_fu_1337_p2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln605_fu_1343_p2.read()))) {
        q_i_M_real_address0 = q_i_M_real_addr_1_reg_1941.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln600_1_fu_1337_p2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln605_fu_1343_p2.read()))) {
        q_i_M_real_address0 =  (sc_lv<4>) (zext_ln1067_3_fu_1358_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        q_i_M_real_address0 =  (sc_lv<4>) (zext_ln1027_fu_1229_p1.read());
    } else {
        q_i_M_real_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void qrf_alt::thread_q_i_M_real_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0.read(), ap_const_boolean_0))) {
        q_i_M_real_address1 =  (sc_lv<4>) (zext_ln685_2_fu_1747_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage2.read(), ap_const_boolean_0))) {
        q_i_M_real_address1 = q_i_M_real_addr_5_reg_2196_pp2_iter4_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage1.read(), ap_const_boolean_0))) {
        q_i_M_real_address1 = q_i_M_real_addr_4_reg_2190_pp2_iter4_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        q_i_M_real_address1 =  (sc_lv<4>) (sext_ln669_1_fu_1650_p1.read());
    } else {
        q_i_M_real_address1 =  (sc_lv<4>) ("XXXX");
    }
}

void qrf_alt::thread_q_i_M_real_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln600_1_fu_1337_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln605_fu_1343_p2.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln600_1_fu_1337_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln605_fu_1343_p2.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0)))) {
        q_i_M_real_ce0 = ap_const_logic_1;
    } else {
        q_i_M_real_ce0 = ap_const_logic_0;
    }
}

void qrf_alt::thread_q_i_M_real_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage1_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter4.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage2_11001.read(), ap_const_boolean_0)))) {
        q_i_M_real_ce1 = ap_const_logic_1;
    } else {
        q_i_M_real_ce1 = ap_const_logic_0;
    }
}

void qrf_alt::thread_q_i_M_real_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln600_1_fu_1337_p2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln605_fu_1343_p2.read()))) {
        q_i_M_real_d0 = ap_const_lv32_3F800000;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln600_1_fu_1337_p2.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln605_fu_1343_p2.read())))) {
        q_i_M_real_d0 = ap_const_lv32_0;
    } else {
        q_i_M_real_d0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void qrf_alt::thread_q_i_M_real_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln600_1_fu_1337_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln605_fu_1343_p2.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln600_1_fu_1337_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln605_fu_1343_p2.read())))) {
        q_i_M_real_we0 = ap_const_logic_1;
    } else {
        q_i_M_real_we0 = ap_const_logic_0;
    }
}

void qrf_alt::thread_q_i_M_real_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage1_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln643_1_reg_2156_pp2_iter4_reg.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln643_1_reg_2156_pp2_iter4_reg.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage2_11001.read(), ap_const_boolean_0)))) {
        q_i_M_real_we1 = ap_const_logic_1;
    } else {
        q_i_M_real_we1 = ap_const_logic_0;
    }
}

void qrf_alt::thread_r_1_fu_1710_p2() {
    r_1_fu_1710_p2 = (!r21_0_reg_1068.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(r21_0_reg_1068.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void qrf_alt::thread_r_fu_1303_p2() {
    r_fu_1303_p2 = (!r_0_reg_989.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(r_0_reg_989.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void qrf_alt::thread_r_i_M_imag_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0.read(), ap_const_boolean_0))) {
        r_i_M_imag_address0 =  (sc_lv<4>) (zext_ln685_2_fu_1747_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        r_i_M_imag_address0 =  (sc_lv<4>) (sext_ln669_1_fu_1650_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()))) {
        r_i_M_imag_address0 =  (sc_lv<4>) (zext_ln631_fu_1458_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()))) {
        r_i_M_imag_address0 =  (sc_lv<4>) (zext_ln613_2_reg_1958.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        r_i_M_imag_address0 =  (sc_lv<4>) (zext_ln1027_1_fu_1267_p1.read());
    } else {
        r_i_M_imag_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void qrf_alt::thread_r_i_M_imag_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter4.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage1.read(), ap_const_boolean_0))) {
        r_i_M_imag_address1 = r_i_M_imag_addr_6_reg_2184_pp2_iter4_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage3.read(), ap_const_boolean_0))) {
        r_i_M_imag_address1 = r_i_M_imag_addr_5_reg_2179_pp2_iter3_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        r_i_M_imag_address1 =  (sc_lv<4>) (sext_ln669_fu_1637_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()))) {
        r_i_M_imag_address1 =  (sc_lv<4>) (zext_ln631_1_fu_1472_p1.read());
    } else {
        r_i_M_imag_address1 =  (sc_lv<4>) ("XXXX");
    }
}

void qrf_alt::thread_r_i_M_imag_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())))) {
        r_i_M_imag_ce0 = ap_const_logic_1;
    } else {
        r_i_M_imag_ce0 = ap_const_logic_0;
    }
}

void qrf_alt::thread_r_i_M_imag_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage1_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter4.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())))) {
        r_i_M_imag_ce1 = ap_const_logic_1;
    } else {
        r_i_M_imag_ce1 = ap_const_logic_0;
    }
}

void qrf_alt::thread_r_i_M_imag_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()))) {
        r_i_M_imag_d0 = A_M_imag_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        r_i_M_imag_d0 = ap_const_lv32_0;
    } else {
        r_i_M_imag_d0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void qrf_alt::thread_r_i_M_imag_d1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter4.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage1.read(), ap_const_boolean_0))) {
        r_i_M_imag_d1 = select_ln666_3_reg_2496.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage3.read(), ap_const_boolean_0))) {
        r_i_M_imag_d1 = select_ln666_1_reg_2486.read();
    } else {
        r_i_M_imag_d1 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void qrf_alt::thread_r_i_M_imag_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln600_1_reg_1951.read())))) {
        r_i_M_imag_we0 = ap_const_logic_1;
    } else {
        r_i_M_imag_we0 = ap_const_logic_0;
    }
}

void qrf_alt::thread_r_i_M_imag_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage3_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln643_1_reg_2156_pp2_iter3_reg.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage1_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln643_1_reg_2156_pp2_iter4_reg.read())))) {
        r_i_M_imag_we1 = ap_const_logic_1;
    } else {
        r_i_M_imag_we1 = ap_const_logic_0;
    }
}

void qrf_alt::thread_r_i_M_real_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0.read(), ap_const_boolean_0))) {
        r_i_M_real_address0 =  (sc_lv<4>) (zext_ln685_2_fu_1747_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        r_i_M_real_address0 =  (sc_lv<4>) (sext_ln669_1_fu_1650_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()))) {
        r_i_M_real_address0 =  (sc_lv<4>) (zext_ln631_fu_1458_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()))) {
        r_i_M_real_address0 =  (sc_lv<4>) (zext_ln613_2_reg_1958.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        r_i_M_real_address0 =  (sc_lv<4>) (zext_ln1027_1_fu_1267_p1.read());
    } else {
        r_i_M_real_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void qrf_alt::thread_r_i_M_real_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter4.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage1.read(), ap_const_boolean_0))) {
        r_i_M_real_address1 = r_i_M_real_addr_6_reg_2173_pp2_iter4_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage3.read(), ap_const_boolean_0))) {
        r_i_M_real_address1 = r_i_M_real_addr_5_reg_2168_pp2_iter3_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        r_i_M_real_address1 =  (sc_lv<4>) (sext_ln669_fu_1637_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()))) {
        r_i_M_real_address1 =  (sc_lv<4>) (zext_ln631_1_fu_1472_p1.read());
    } else {
        r_i_M_real_address1 =  (sc_lv<4>) ("XXXX");
    }
}

void qrf_alt::thread_r_i_M_real_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())))) {
        r_i_M_real_ce0 = ap_const_logic_1;
    } else {
        r_i_M_real_ce0 = ap_const_logic_0;
    }
}

void qrf_alt::thread_r_i_M_real_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage1_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter4.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())))) {
        r_i_M_real_ce1 = ap_const_logic_1;
    } else {
        r_i_M_real_ce1 = ap_const_logic_0;
    }
}

void qrf_alt::thread_r_i_M_real_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()))) {
        r_i_M_real_d0 = A_M_real_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        r_i_M_real_d0 = ap_const_lv32_0;
    } else {
        r_i_M_real_d0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void qrf_alt::thread_r_i_M_real_d1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter4.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage1.read(), ap_const_boolean_0))) {
        r_i_M_real_d1 = select_ln666_2_reg_2491.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage3.read(), ap_const_boolean_0))) {
        r_i_M_real_d1 = select_ln666_reg_2481.read();
    } else {
        r_i_M_real_d1 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void qrf_alt::thread_r_i_M_real_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln600_1_reg_1951.read())))) {
        r_i_M_real_we0 = ap_const_logic_1;
    } else {
        r_i_M_real_we0 = ap_const_logic_0;
    }
}

void qrf_alt::thread_r_i_M_real_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage3_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln643_1_reg_2156_pp2_iter3_reg.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage1_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln643_1_reg_2156_pp2_iter4_reg.read())))) {
        r_i_M_real_we1 = ap_const_logic_1;
    } else {
        r_i_M_real_we1 = ap_const_logic_0;
    }
}

void qrf_alt::thread_rotations_V_M_imag_1_din() {
    if ((esl_seteq<1,1,1>(icmp_ln620_reg_2015_pp1_iter77_reg.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter78.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_01001.read(), ap_const_boolean_0))) {
        rotations_V_M_imag_1_din = grp_qrf_givens_float_s_fu_1090_ap_return_3.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
                esl_seteq<1,3,3>(phi_ln594_reg_978.read(), ap_const_lv3_1) && 
                !((esl_seteq<1,1,1>(ap_const_logic_0, rotations_V_M_real_3_full_n.read()) && 
  esl_seteq<1,3,3>(phi_ln594_reg_978.read(), ap_const_lv3_3)) || (esl_seteq<1,3,3>(phi_ln594_reg_978.read(), ap_const_lv3_3) && 
  esl_seteq<1,1,1>(ap_const_logic_0, rotations_V_M_imag_3_full_n.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, rotations_V_M_real_2_full_n.read()) && 
  esl_seteq<1,3,3>(phi_ln594_reg_978.read(), ap_const_lv3_2)) || (esl_seteq<1,3,3>(phi_ln594_reg_978.read(), ap_const_lv3_2) && 
  esl_seteq<1,1,1>(ap_const_logic_0, rotations_V_M_imag_2_full_n.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, rotations_V_M_real_1_full_n.read()) && 
  esl_seteq<1,3,3>(phi_ln594_reg_978.read(), ap_const_lv3_1)) || (esl_seteq<1,3,3>(phi_ln594_reg_978.read(), ap_const_lv3_1) && 
  esl_seteq<1,1,1>(ap_const_logic_0, rotations_V_M_imag_1_full_n.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, rotations_V_M_real_s_full_n.read()) && 
  esl_seteq<1,3,3>(phi_ln594_reg_978.read(), ap_const_lv3_0)) || (esl_seteq<1,3,3>(phi_ln594_reg_978.read(), ap_const_lv3_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, rotations_V_M_imag_s_full_n.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, rotations_V_M_real_4_full_n.read()) && 
  esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op213_write_state6.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, rotations_V_M_imag_4_full_n.read()) && 
  esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op214_write_state6.read()))))) {
        rotations_V_M_imag_1_din = ap_const_lv32_0;
    } else {
        rotations_V_M_imag_1_din = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void qrf_alt::thread_rotations_V_M_imag_1_read() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state93.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln643_fu_1535_p2.read()) && 
         !((esl_seteq<1,1,1>(ap_const_logic_0, io_acc_block_signal_op439.read()) && 
  esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln643_fu_1535_p2.read())) || (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln643_fu_1535_p2.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_0, io_acc_block_signal_op442.read())) || (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln643_fu_1535_p2.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_0, io_acc_block_signal_op445.read())) || (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln643_fu_1535_p2.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_0, io_acc_block_signal_op448.read())) || (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln643_fu_1535_p2.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_0, io_acc_block_signal_op451.read())) || (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln643_fu_1535_p2.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_0, to_rot_0_V_empty_n.read())) || (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln643_fu_1535_p2.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_0, to_rot_1_V_empty_n.read())) || (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln643_fu_1535_p2.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_0, to_rot_2_V_empty_n.read()))))) {
        rotations_V_M_imag_1_read = ap_const_logic_1;
    } else {
        rotations_V_M_imag_1_read = ap_const_logic_0;
    }
}

void qrf_alt::thread_rotations_V_M_imag_1_write() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
          esl_seteq<1,3,3>(phi_ln594_reg_978.read(), ap_const_lv3_1) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, rotations_V_M_real_3_full_n.read()) && 
  esl_seteq<1,3,3>(phi_ln594_reg_978.read(), ap_const_lv3_3)) || (esl_seteq<1,3,3>(phi_ln594_reg_978.read(), ap_const_lv3_3) && 
  esl_seteq<1,1,1>(ap_const_logic_0, rotations_V_M_imag_3_full_n.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, rotations_V_M_real_2_full_n.read()) && 
  esl_seteq<1,3,3>(phi_ln594_reg_978.read(), ap_const_lv3_2)) || (esl_seteq<1,3,3>(phi_ln594_reg_978.read(), ap_const_lv3_2) && 
  esl_seteq<1,1,1>(ap_const_logic_0, rotations_V_M_imag_2_full_n.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, rotations_V_M_real_1_full_n.read()) && 
  esl_seteq<1,3,3>(phi_ln594_reg_978.read(), ap_const_lv3_1)) || (esl_seteq<1,3,3>(phi_ln594_reg_978.read(), ap_const_lv3_1) && 
  esl_seteq<1,1,1>(ap_const_logic_0, rotations_V_M_imag_1_full_n.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, rotations_V_M_real_s_full_n.read()) && 
  esl_seteq<1,3,3>(phi_ln594_reg_978.read(), ap_const_lv3_0)) || (esl_seteq<1,3,3>(phi_ln594_reg_978.read(), ap_const_lv3_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, rotations_V_M_imag_s_full_n.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, rotations_V_M_real_4_full_n.read()) && 
  esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op213_write_state6.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, rotations_V_M_imag_4_full_n.read()) && 
  esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op214_write_state6.read())))) || 
         (esl_seteq<1,1,1>(icmp_ln620_reg_2015_pp1_iter77_reg.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter78.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0)))) {
        rotations_V_M_imag_1_write = ap_const_logic_1;
    } else {
        rotations_V_M_imag_1_write = ap_const_logic_0;
    }
}

void qrf_alt::thread_rotations_V_M_imag_2_din() {
    if ((esl_seteq<1,1,1>(icmp_ln620_reg_2015_pp1_iter77_reg.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter78.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_01001.read(), ap_const_boolean_0))) {
        rotations_V_M_imag_2_din = grp_qrf_givens_float_s_fu_1090_ap_return_5.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
                esl_seteq<1,3,3>(phi_ln594_reg_978.read(), ap_const_lv3_2) && 
                !((esl_seteq<1,1,1>(ap_const_logic_0, rotations_V_M_real_3_full_n.read()) && 
  esl_seteq<1,3,3>(phi_ln594_reg_978.read(), ap_const_lv3_3)) || (esl_seteq<1,3,3>(phi_ln594_reg_978.read(), ap_const_lv3_3) && 
  esl_seteq<1,1,1>(ap_const_logic_0, rotations_V_M_imag_3_full_n.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, rotations_V_M_real_2_full_n.read()) && 
  esl_seteq<1,3,3>(phi_ln594_reg_978.read(), ap_const_lv3_2)) || (esl_seteq<1,3,3>(phi_ln594_reg_978.read(), ap_const_lv3_2) && 
  esl_seteq<1,1,1>(ap_const_logic_0, rotations_V_M_imag_2_full_n.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, rotations_V_M_real_1_full_n.read()) && 
  esl_seteq<1,3,3>(phi_ln594_reg_978.read(), ap_const_lv3_1)) || (esl_seteq<1,3,3>(phi_ln594_reg_978.read(), ap_const_lv3_1) && 
  esl_seteq<1,1,1>(ap_const_logic_0, rotations_V_M_imag_1_full_n.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, rotations_V_M_real_s_full_n.read()) && 
  esl_seteq<1,3,3>(phi_ln594_reg_978.read(), ap_const_lv3_0)) || (esl_seteq<1,3,3>(phi_ln594_reg_978.read(), ap_const_lv3_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, rotations_V_M_imag_s_full_n.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, rotations_V_M_real_4_full_n.read()) && 
  esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op213_write_state6.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, rotations_V_M_imag_4_full_n.read()) && 
  esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op214_write_state6.read()))))) {
        rotations_V_M_imag_2_din = ap_const_lv32_0;
    } else {
        rotations_V_M_imag_2_din = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void qrf_alt::thread_rotations_V_M_imag_2_read() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state93.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln643_fu_1535_p2.read()) && 
         !((esl_seteq<1,1,1>(ap_const_logic_0, io_acc_block_signal_op439.read()) && 
  esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln643_fu_1535_p2.read())) || (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln643_fu_1535_p2.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_0, io_acc_block_signal_op442.read())) || (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln643_fu_1535_p2.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_0, io_acc_block_signal_op445.read())) || (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln643_fu_1535_p2.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_0, io_acc_block_signal_op448.read())) || (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln643_fu_1535_p2.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_0, io_acc_block_signal_op451.read())) || (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln643_fu_1535_p2.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_0, to_rot_0_V_empty_n.read())) || (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln643_fu_1535_p2.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_0, to_rot_1_V_empty_n.read())) || (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln643_fu_1535_p2.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_0, to_rot_2_V_empty_n.read()))))) {
        rotations_V_M_imag_2_read = ap_const_logic_1;
    } else {
        rotations_V_M_imag_2_read = ap_const_logic_0;
    }
}

void qrf_alt::thread_rotations_V_M_imag_2_write() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
          esl_seteq<1,3,3>(phi_ln594_reg_978.read(), ap_const_lv3_2) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, rotations_V_M_real_3_full_n.read()) && 
  esl_seteq<1,3,3>(phi_ln594_reg_978.read(), ap_const_lv3_3)) || (esl_seteq<1,3,3>(phi_ln594_reg_978.read(), ap_const_lv3_3) && 
  esl_seteq<1,1,1>(ap_const_logic_0, rotations_V_M_imag_3_full_n.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, rotations_V_M_real_2_full_n.read()) && 
  esl_seteq<1,3,3>(phi_ln594_reg_978.read(), ap_const_lv3_2)) || (esl_seteq<1,3,3>(phi_ln594_reg_978.read(), ap_const_lv3_2) && 
  esl_seteq<1,1,1>(ap_const_logic_0, rotations_V_M_imag_2_full_n.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, rotations_V_M_real_1_full_n.read()) && 
  esl_seteq<1,3,3>(phi_ln594_reg_978.read(), ap_const_lv3_1)) || (esl_seteq<1,3,3>(phi_ln594_reg_978.read(), ap_const_lv3_1) && 
  esl_seteq<1,1,1>(ap_const_logic_0, rotations_V_M_imag_1_full_n.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, rotations_V_M_real_s_full_n.read()) && 
  esl_seteq<1,3,3>(phi_ln594_reg_978.read(), ap_const_lv3_0)) || (esl_seteq<1,3,3>(phi_ln594_reg_978.read(), ap_const_lv3_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, rotations_V_M_imag_s_full_n.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, rotations_V_M_real_4_full_n.read()) && 
  esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op213_write_state6.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, rotations_V_M_imag_4_full_n.read()) && 
  esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op214_write_state6.read())))) || 
         (esl_seteq<1,1,1>(icmp_ln620_reg_2015_pp1_iter77_reg.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter78.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0)))) {
        rotations_V_M_imag_2_write = ap_const_logic_1;
    } else {
        rotations_V_M_imag_2_write = ap_const_logic_0;
    }
}

void qrf_alt::thread_rotations_V_M_imag_3_din() {
    if ((esl_seteq<1,1,1>(icmp_ln620_reg_2015_pp1_iter77_reg.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter78.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_01001.read(), ap_const_boolean_0))) {
        rotations_V_M_imag_3_din = grp_qrf_givens_float_s_fu_1090_ap_return_7.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
                esl_seteq<1,3,3>(phi_ln594_reg_978.read(), ap_const_lv3_3) && 
                !((esl_seteq<1,1,1>(ap_const_logic_0, rotations_V_M_real_3_full_n.read()) && 
  esl_seteq<1,3,3>(phi_ln594_reg_978.read(), ap_const_lv3_3)) || (esl_seteq<1,3,3>(phi_ln594_reg_978.read(), ap_const_lv3_3) && 
  esl_seteq<1,1,1>(ap_const_logic_0, rotations_V_M_imag_3_full_n.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, rotations_V_M_real_2_full_n.read()) && 
  esl_seteq<1,3,3>(phi_ln594_reg_978.read(), ap_const_lv3_2)) || (esl_seteq<1,3,3>(phi_ln594_reg_978.read(), ap_const_lv3_2) && 
  esl_seteq<1,1,1>(ap_const_logic_0, rotations_V_M_imag_2_full_n.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, rotations_V_M_real_1_full_n.read()) && 
  esl_seteq<1,3,3>(phi_ln594_reg_978.read(), ap_const_lv3_1)) || (esl_seteq<1,3,3>(phi_ln594_reg_978.read(), ap_const_lv3_1) && 
  esl_seteq<1,1,1>(ap_const_logic_0, rotations_V_M_imag_1_full_n.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, rotations_V_M_real_s_full_n.read()) && 
  esl_seteq<1,3,3>(phi_ln594_reg_978.read(), ap_const_lv3_0)) || (esl_seteq<1,3,3>(phi_ln594_reg_978.read(), ap_const_lv3_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, rotations_V_M_imag_s_full_n.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, rotations_V_M_real_4_full_n.read()) && 
  esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op213_write_state6.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, rotations_V_M_imag_4_full_n.read()) && 
  esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op214_write_state6.read()))))) {
        rotations_V_M_imag_3_din = ap_const_lv32_0;
    } else {
        rotations_V_M_imag_3_din = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void qrf_alt::thread_rotations_V_M_imag_3_read() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state93.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln643_fu_1535_p2.read()) && 
         !((esl_seteq<1,1,1>(ap_const_logic_0, io_acc_block_signal_op439.read()) && 
  esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln643_fu_1535_p2.read())) || (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln643_fu_1535_p2.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_0, io_acc_block_signal_op442.read())) || (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln643_fu_1535_p2.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_0, io_acc_block_signal_op445.read())) || (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln643_fu_1535_p2.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_0, io_acc_block_signal_op448.read())) || (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln643_fu_1535_p2.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_0, io_acc_block_signal_op451.read())) || (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln643_fu_1535_p2.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_0, to_rot_0_V_empty_n.read())) || (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln643_fu_1535_p2.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_0, to_rot_1_V_empty_n.read())) || (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln643_fu_1535_p2.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_0, to_rot_2_V_empty_n.read()))))) {
        rotations_V_M_imag_3_read = ap_const_logic_1;
    } else {
        rotations_V_M_imag_3_read = ap_const_logic_0;
    }
}

void qrf_alt::thread_rotations_V_M_imag_3_write() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
          esl_seteq<1,3,3>(phi_ln594_reg_978.read(), ap_const_lv3_3) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, rotations_V_M_real_3_full_n.read()) && 
  esl_seteq<1,3,3>(phi_ln594_reg_978.read(), ap_const_lv3_3)) || (esl_seteq<1,3,3>(phi_ln594_reg_978.read(), ap_const_lv3_3) && 
  esl_seteq<1,1,1>(ap_const_logic_0, rotations_V_M_imag_3_full_n.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, rotations_V_M_real_2_full_n.read()) && 
  esl_seteq<1,3,3>(phi_ln594_reg_978.read(), ap_const_lv3_2)) || (esl_seteq<1,3,3>(phi_ln594_reg_978.read(), ap_const_lv3_2) && 
  esl_seteq<1,1,1>(ap_const_logic_0, rotations_V_M_imag_2_full_n.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, rotations_V_M_real_1_full_n.read()) && 
  esl_seteq<1,3,3>(phi_ln594_reg_978.read(), ap_const_lv3_1)) || (esl_seteq<1,3,3>(phi_ln594_reg_978.read(), ap_const_lv3_1) && 
  esl_seteq<1,1,1>(ap_const_logic_0, rotations_V_M_imag_1_full_n.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, rotations_V_M_real_s_full_n.read()) && 
  esl_seteq<1,3,3>(phi_ln594_reg_978.read(), ap_const_lv3_0)) || (esl_seteq<1,3,3>(phi_ln594_reg_978.read(), ap_const_lv3_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, rotations_V_M_imag_s_full_n.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, rotations_V_M_real_4_full_n.read()) && 
  esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op213_write_state6.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, rotations_V_M_imag_4_full_n.read()) && 
  esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op214_write_state6.read())))) || 
         (esl_seteq<1,1,1>(icmp_ln620_reg_2015_pp1_iter77_reg.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter78.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0)))) {
        rotations_V_M_imag_3_write = ap_const_logic_1;
    } else {
        rotations_V_M_imag_3_write = ap_const_logic_0;
    }
}

void qrf_alt::thread_rotations_V_M_imag_4_read() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state93.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln643_fu_1535_p2.read()) && 
         !((esl_seteq<1,1,1>(ap_const_logic_0, io_acc_block_signal_op439.read()) && 
  esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln643_fu_1535_p2.read())) || (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln643_fu_1535_p2.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_0, io_acc_block_signal_op442.read())) || (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln643_fu_1535_p2.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_0, io_acc_block_signal_op445.read())) || (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln643_fu_1535_p2.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_0, io_acc_block_signal_op448.read())) || (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln643_fu_1535_p2.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_0, io_acc_block_signal_op451.read())) || (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln643_fu_1535_p2.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_0, to_rot_0_V_empty_n.read())) || (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln643_fu_1535_p2.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_0, to_rot_1_V_empty_n.read())) || (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln643_fu_1535_p2.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_0, to_rot_2_V_empty_n.read()))))) {
        rotations_V_M_imag_4_read = ap_const_logic_1;
    } else {
        rotations_V_M_imag_4_read = ap_const_logic_0;
    }
}

void qrf_alt::thread_rotations_V_M_imag_4_write() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op214_write_state6.read()) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, rotations_V_M_real_3_full_n.read()) && 
  esl_seteq<1,3,3>(phi_ln594_reg_978.read(), ap_const_lv3_3)) || (esl_seteq<1,3,3>(phi_ln594_reg_978.read(), ap_const_lv3_3) && 
  esl_seteq<1,1,1>(ap_const_logic_0, rotations_V_M_imag_3_full_n.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, rotations_V_M_real_2_full_n.read()) && 
  esl_seteq<1,3,3>(phi_ln594_reg_978.read(), ap_const_lv3_2)) || (esl_seteq<1,3,3>(phi_ln594_reg_978.read(), ap_const_lv3_2) && 
  esl_seteq<1,1,1>(ap_const_logic_0, rotations_V_M_imag_2_full_n.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, rotations_V_M_real_1_full_n.read()) && 
  esl_seteq<1,3,3>(phi_ln594_reg_978.read(), ap_const_lv3_1)) || (esl_seteq<1,3,3>(phi_ln594_reg_978.read(), ap_const_lv3_1) && 
  esl_seteq<1,1,1>(ap_const_logic_0, rotations_V_M_imag_1_full_n.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, rotations_V_M_real_s_full_n.read()) && 
  esl_seteq<1,3,3>(phi_ln594_reg_978.read(), ap_const_lv3_0)) || (esl_seteq<1,3,3>(phi_ln594_reg_978.read(), ap_const_lv3_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, rotations_V_M_imag_s_full_n.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, rotations_V_M_real_4_full_n.read()) && 
  esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op213_write_state6.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, rotations_V_M_imag_4_full_n.read()) && 
  esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op214_write_state6.read())))) || 
         (esl_seteq<1,1,1>(icmp_ln620_reg_2015_pp1_iter77_reg.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter78.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0)))) {
        rotations_V_M_imag_4_write = ap_const_logic_1;
    } else {
        rotations_V_M_imag_4_write = ap_const_logic_0;
    }
}

void qrf_alt::thread_rotations_V_M_imag_s_din() {
    if ((esl_seteq<1,1,1>(icmp_ln620_reg_2015_pp1_iter77_reg.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter78.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_01001.read(), ap_const_boolean_0))) {
        rotations_V_M_imag_s_din = grp_qrf_givens_float_s_fu_1090_ap_return_1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
                esl_seteq<1,3,3>(phi_ln594_reg_978.read(), ap_const_lv3_0) && 
                !((esl_seteq<1,1,1>(ap_const_logic_0, rotations_V_M_real_3_full_n.read()) && 
  esl_seteq<1,3,3>(phi_ln594_reg_978.read(), ap_const_lv3_3)) || (esl_seteq<1,3,3>(phi_ln594_reg_978.read(), ap_const_lv3_3) && 
  esl_seteq<1,1,1>(ap_const_logic_0, rotations_V_M_imag_3_full_n.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, rotations_V_M_real_2_full_n.read()) && 
  esl_seteq<1,3,3>(phi_ln594_reg_978.read(), ap_const_lv3_2)) || (esl_seteq<1,3,3>(phi_ln594_reg_978.read(), ap_const_lv3_2) && 
  esl_seteq<1,1,1>(ap_const_logic_0, rotations_V_M_imag_2_full_n.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, rotations_V_M_real_1_full_n.read()) && 
  esl_seteq<1,3,3>(phi_ln594_reg_978.read(), ap_const_lv3_1)) || (esl_seteq<1,3,3>(phi_ln594_reg_978.read(), ap_const_lv3_1) && 
  esl_seteq<1,1,1>(ap_const_logic_0, rotations_V_M_imag_1_full_n.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, rotations_V_M_real_s_full_n.read()) && 
  esl_seteq<1,3,3>(phi_ln594_reg_978.read(), ap_const_lv3_0)) || (esl_seteq<1,3,3>(phi_ln594_reg_978.read(), ap_const_lv3_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, rotations_V_M_imag_s_full_n.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, rotations_V_M_real_4_full_n.read()) && 
  esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op213_write_state6.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, rotations_V_M_imag_4_full_n.read()) && 
  esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op214_write_state6.read()))))) {
        rotations_V_M_imag_s_din = ap_const_lv32_0;
    } else {
        rotations_V_M_imag_s_din = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void qrf_alt::thread_rotations_V_M_imag_s_read() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state93.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln643_fu_1535_p2.read()) && 
         !((esl_seteq<1,1,1>(ap_const_logic_0, io_acc_block_signal_op439.read()) && 
  esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln643_fu_1535_p2.read())) || (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln643_fu_1535_p2.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_0, io_acc_block_signal_op442.read())) || (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln643_fu_1535_p2.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_0, io_acc_block_signal_op445.read())) || (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln643_fu_1535_p2.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_0, io_acc_block_signal_op448.read())) || (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln643_fu_1535_p2.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_0, io_acc_block_signal_op451.read())) || (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln643_fu_1535_p2.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_0, to_rot_0_V_empty_n.read())) || (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln643_fu_1535_p2.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_0, to_rot_1_V_empty_n.read())) || (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln643_fu_1535_p2.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_0, to_rot_2_V_empty_n.read()))))) {
        rotations_V_M_imag_s_read = ap_const_logic_1;
    } else {
        rotations_V_M_imag_s_read = ap_const_logic_0;
    }
}

void qrf_alt::thread_rotations_V_M_imag_s_write() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
          esl_seteq<1,3,3>(phi_ln594_reg_978.read(), ap_const_lv3_0) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, rotations_V_M_real_3_full_n.read()) && 
  esl_seteq<1,3,3>(phi_ln594_reg_978.read(), ap_const_lv3_3)) || (esl_seteq<1,3,3>(phi_ln594_reg_978.read(), ap_const_lv3_3) && 
  esl_seteq<1,1,1>(ap_const_logic_0, rotations_V_M_imag_3_full_n.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, rotations_V_M_real_2_full_n.read()) && 
  esl_seteq<1,3,3>(phi_ln594_reg_978.read(), ap_const_lv3_2)) || (esl_seteq<1,3,3>(phi_ln594_reg_978.read(), ap_const_lv3_2) && 
  esl_seteq<1,1,1>(ap_const_logic_0, rotations_V_M_imag_2_full_n.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, rotations_V_M_real_1_full_n.read()) && 
  esl_seteq<1,3,3>(phi_ln594_reg_978.read(), ap_const_lv3_1)) || (esl_seteq<1,3,3>(phi_ln594_reg_978.read(), ap_const_lv3_1) && 
  esl_seteq<1,1,1>(ap_const_logic_0, rotations_V_M_imag_1_full_n.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, rotations_V_M_real_s_full_n.read()) && 
  esl_seteq<1,3,3>(phi_ln594_reg_978.read(), ap_const_lv3_0)) || (esl_seteq<1,3,3>(phi_ln594_reg_978.read(), ap_const_lv3_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, rotations_V_M_imag_s_full_n.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, rotations_V_M_real_4_full_n.read()) && 
  esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op213_write_state6.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, rotations_V_M_imag_4_full_n.read()) && 
  esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op214_write_state6.read())))) || 
         (esl_seteq<1,1,1>(icmp_ln620_reg_2015_pp1_iter77_reg.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter78.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0)))) {
        rotations_V_M_imag_s_write = ap_const_logic_1;
    } else {
        rotations_V_M_imag_s_write = ap_const_logic_0;
    }
}

void qrf_alt::thread_rotations_V_M_real_1_din() {
    if ((esl_seteq<1,1,1>(icmp_ln620_reg_2015_pp1_iter77_reg.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter78.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_01001.read(), ap_const_boolean_0))) {
        rotations_V_M_real_1_din = grp_qrf_givens_float_s_fu_1090_ap_return_2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
                esl_seteq<1,3,3>(phi_ln594_reg_978.read(), ap_const_lv3_1) && 
                !((esl_seteq<1,1,1>(ap_const_logic_0, rotations_V_M_real_3_full_n.read()) && 
  esl_seteq<1,3,3>(phi_ln594_reg_978.read(), ap_const_lv3_3)) || (esl_seteq<1,3,3>(phi_ln594_reg_978.read(), ap_const_lv3_3) && 
  esl_seteq<1,1,1>(ap_const_logic_0, rotations_V_M_imag_3_full_n.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, rotations_V_M_real_2_full_n.read()) && 
  esl_seteq<1,3,3>(phi_ln594_reg_978.read(), ap_const_lv3_2)) || (esl_seteq<1,3,3>(phi_ln594_reg_978.read(), ap_const_lv3_2) && 
  esl_seteq<1,1,1>(ap_const_logic_0, rotations_V_M_imag_2_full_n.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, rotations_V_M_real_1_full_n.read()) && 
  esl_seteq<1,3,3>(phi_ln594_reg_978.read(), ap_const_lv3_1)) || (esl_seteq<1,3,3>(phi_ln594_reg_978.read(), ap_const_lv3_1) && 
  esl_seteq<1,1,1>(ap_const_logic_0, rotations_V_M_imag_1_full_n.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, rotations_V_M_real_s_full_n.read()) && 
  esl_seteq<1,3,3>(phi_ln594_reg_978.read(), ap_const_lv3_0)) || (esl_seteq<1,3,3>(phi_ln594_reg_978.read(), ap_const_lv3_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, rotations_V_M_imag_s_full_n.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, rotations_V_M_real_4_full_n.read()) && 
  esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op213_write_state6.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, rotations_V_M_imag_4_full_n.read()) && 
  esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op214_write_state6.read()))))) {
        rotations_V_M_real_1_din = ap_const_lv32_0;
    } else {
        rotations_V_M_real_1_din = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void qrf_alt::thread_rotations_V_M_real_1_read() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state93.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln643_fu_1535_p2.read()) && 
         !((esl_seteq<1,1,1>(ap_const_logic_0, io_acc_block_signal_op439.read()) && 
  esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln643_fu_1535_p2.read())) || (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln643_fu_1535_p2.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_0, io_acc_block_signal_op442.read())) || (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln643_fu_1535_p2.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_0, io_acc_block_signal_op445.read())) || (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln643_fu_1535_p2.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_0, io_acc_block_signal_op448.read())) || (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln643_fu_1535_p2.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_0, io_acc_block_signal_op451.read())) || (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln643_fu_1535_p2.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_0, to_rot_0_V_empty_n.read())) || (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln643_fu_1535_p2.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_0, to_rot_1_V_empty_n.read())) || (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln643_fu_1535_p2.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_0, to_rot_2_V_empty_n.read()))))) {
        rotations_V_M_real_1_read = ap_const_logic_1;
    } else {
        rotations_V_M_real_1_read = ap_const_logic_0;
    }
}

void qrf_alt::thread_rotations_V_M_real_1_write() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
          esl_seteq<1,3,3>(phi_ln594_reg_978.read(), ap_const_lv3_1) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, rotations_V_M_real_3_full_n.read()) && 
  esl_seteq<1,3,3>(phi_ln594_reg_978.read(), ap_const_lv3_3)) || (esl_seteq<1,3,3>(phi_ln594_reg_978.read(), ap_const_lv3_3) && 
  esl_seteq<1,1,1>(ap_const_logic_0, rotations_V_M_imag_3_full_n.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, rotations_V_M_real_2_full_n.read()) && 
  esl_seteq<1,3,3>(phi_ln594_reg_978.read(), ap_const_lv3_2)) || (esl_seteq<1,3,3>(phi_ln594_reg_978.read(), ap_const_lv3_2) && 
  esl_seteq<1,1,1>(ap_const_logic_0, rotations_V_M_imag_2_full_n.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, rotations_V_M_real_1_full_n.read()) && 
  esl_seteq<1,3,3>(phi_ln594_reg_978.read(), ap_const_lv3_1)) || (esl_seteq<1,3,3>(phi_ln594_reg_978.read(), ap_const_lv3_1) && 
  esl_seteq<1,1,1>(ap_const_logic_0, rotations_V_M_imag_1_full_n.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, rotations_V_M_real_s_full_n.read()) && 
  esl_seteq<1,3,3>(phi_ln594_reg_978.read(), ap_const_lv3_0)) || (esl_seteq<1,3,3>(phi_ln594_reg_978.read(), ap_const_lv3_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, rotations_V_M_imag_s_full_n.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, rotations_V_M_real_4_full_n.read()) && 
  esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op213_write_state6.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, rotations_V_M_imag_4_full_n.read()) && 
  esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op214_write_state6.read())))) || 
         (esl_seteq<1,1,1>(icmp_ln620_reg_2015_pp1_iter77_reg.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter78.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0)))) {
        rotations_V_M_real_1_write = ap_const_logic_1;
    } else {
        rotations_V_M_real_1_write = ap_const_logic_0;
    }
}

void qrf_alt::thread_rotations_V_M_real_2_din() {
    if ((esl_seteq<1,1,1>(icmp_ln620_reg_2015_pp1_iter77_reg.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter78.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_01001.read(), ap_const_boolean_0))) {
        rotations_V_M_real_2_din = grp_qrf_givens_float_s_fu_1090_ap_return_4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
                esl_seteq<1,3,3>(phi_ln594_reg_978.read(), ap_const_lv3_2) && 
                !((esl_seteq<1,1,1>(ap_const_logic_0, rotations_V_M_real_3_full_n.read()) && 
  esl_seteq<1,3,3>(phi_ln594_reg_978.read(), ap_const_lv3_3)) || (esl_seteq<1,3,3>(phi_ln594_reg_978.read(), ap_const_lv3_3) && 
  esl_seteq<1,1,1>(ap_const_logic_0, rotations_V_M_imag_3_full_n.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, rotations_V_M_real_2_full_n.read()) && 
  esl_seteq<1,3,3>(phi_ln594_reg_978.read(), ap_const_lv3_2)) || (esl_seteq<1,3,3>(phi_ln594_reg_978.read(), ap_const_lv3_2) && 
  esl_seteq<1,1,1>(ap_const_logic_0, rotations_V_M_imag_2_full_n.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, rotations_V_M_real_1_full_n.read()) && 
  esl_seteq<1,3,3>(phi_ln594_reg_978.read(), ap_const_lv3_1)) || (esl_seteq<1,3,3>(phi_ln594_reg_978.read(), ap_const_lv3_1) && 
  esl_seteq<1,1,1>(ap_const_logic_0, rotations_V_M_imag_1_full_n.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, rotations_V_M_real_s_full_n.read()) && 
  esl_seteq<1,3,3>(phi_ln594_reg_978.read(), ap_const_lv3_0)) || (esl_seteq<1,3,3>(phi_ln594_reg_978.read(), ap_const_lv3_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, rotations_V_M_imag_s_full_n.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, rotations_V_M_real_4_full_n.read()) && 
  esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op213_write_state6.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, rotations_V_M_imag_4_full_n.read()) && 
  esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op214_write_state6.read()))))) {
        rotations_V_M_real_2_din = ap_const_lv32_0;
    } else {
        rotations_V_M_real_2_din = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void qrf_alt::thread_rotations_V_M_real_2_read() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state93.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln643_fu_1535_p2.read()) && 
         !((esl_seteq<1,1,1>(ap_const_logic_0, io_acc_block_signal_op439.read()) && 
  esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln643_fu_1535_p2.read())) || (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln643_fu_1535_p2.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_0, io_acc_block_signal_op442.read())) || (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln643_fu_1535_p2.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_0, io_acc_block_signal_op445.read())) || (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln643_fu_1535_p2.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_0, io_acc_block_signal_op448.read())) || (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln643_fu_1535_p2.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_0, io_acc_block_signal_op451.read())) || (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln643_fu_1535_p2.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_0, to_rot_0_V_empty_n.read())) || (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln643_fu_1535_p2.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_0, to_rot_1_V_empty_n.read())) || (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln643_fu_1535_p2.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_0, to_rot_2_V_empty_n.read()))))) {
        rotations_V_M_real_2_read = ap_const_logic_1;
    } else {
        rotations_V_M_real_2_read = ap_const_logic_0;
    }
}

void qrf_alt::thread_rotations_V_M_real_2_write() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
          esl_seteq<1,3,3>(phi_ln594_reg_978.read(), ap_const_lv3_2) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, rotations_V_M_real_3_full_n.read()) && 
  esl_seteq<1,3,3>(phi_ln594_reg_978.read(), ap_const_lv3_3)) || (esl_seteq<1,3,3>(phi_ln594_reg_978.read(), ap_const_lv3_3) && 
  esl_seteq<1,1,1>(ap_const_logic_0, rotations_V_M_imag_3_full_n.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, rotations_V_M_real_2_full_n.read()) && 
  esl_seteq<1,3,3>(phi_ln594_reg_978.read(), ap_const_lv3_2)) || (esl_seteq<1,3,3>(phi_ln594_reg_978.read(), ap_const_lv3_2) && 
  esl_seteq<1,1,1>(ap_const_logic_0, rotations_V_M_imag_2_full_n.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, rotations_V_M_real_1_full_n.read()) && 
  esl_seteq<1,3,3>(phi_ln594_reg_978.read(), ap_const_lv3_1)) || (esl_seteq<1,3,3>(phi_ln594_reg_978.read(), ap_const_lv3_1) && 
  esl_seteq<1,1,1>(ap_const_logic_0, rotations_V_M_imag_1_full_n.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, rotations_V_M_real_s_full_n.read()) && 
  esl_seteq<1,3,3>(phi_ln594_reg_978.read(), ap_const_lv3_0)) || (esl_seteq<1,3,3>(phi_ln594_reg_978.read(), ap_const_lv3_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, rotations_V_M_imag_s_full_n.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, rotations_V_M_real_4_full_n.read()) && 
  esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op213_write_state6.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, rotations_V_M_imag_4_full_n.read()) && 
  esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op214_write_state6.read())))) || 
         (esl_seteq<1,1,1>(icmp_ln620_reg_2015_pp1_iter77_reg.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter78.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0)))) {
        rotations_V_M_real_2_write = ap_const_logic_1;
    } else {
        rotations_V_M_real_2_write = ap_const_logic_0;
    }
}

void qrf_alt::thread_rotations_V_M_real_3_din() {
    if ((esl_seteq<1,1,1>(icmp_ln620_reg_2015_pp1_iter77_reg.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter78.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_01001.read(), ap_const_boolean_0))) {
        rotations_V_M_real_3_din = grp_qrf_givens_float_s_fu_1090_ap_return_6.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
                esl_seteq<1,3,3>(phi_ln594_reg_978.read(), ap_const_lv3_3) && 
                !((esl_seteq<1,1,1>(ap_const_logic_0, rotations_V_M_real_3_full_n.read()) && 
  esl_seteq<1,3,3>(phi_ln594_reg_978.read(), ap_const_lv3_3)) || (esl_seteq<1,3,3>(phi_ln594_reg_978.read(), ap_const_lv3_3) && 
  esl_seteq<1,1,1>(ap_const_logic_0, rotations_V_M_imag_3_full_n.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, rotations_V_M_real_2_full_n.read()) && 
  esl_seteq<1,3,3>(phi_ln594_reg_978.read(), ap_const_lv3_2)) || (esl_seteq<1,3,3>(phi_ln594_reg_978.read(), ap_const_lv3_2) && 
  esl_seteq<1,1,1>(ap_const_logic_0, rotations_V_M_imag_2_full_n.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, rotations_V_M_real_1_full_n.read()) && 
  esl_seteq<1,3,3>(phi_ln594_reg_978.read(), ap_const_lv3_1)) || (esl_seteq<1,3,3>(phi_ln594_reg_978.read(), ap_const_lv3_1) && 
  esl_seteq<1,1,1>(ap_const_logic_0, rotations_V_M_imag_1_full_n.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, rotations_V_M_real_s_full_n.read()) && 
  esl_seteq<1,3,3>(phi_ln594_reg_978.read(), ap_const_lv3_0)) || (esl_seteq<1,3,3>(phi_ln594_reg_978.read(), ap_const_lv3_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, rotations_V_M_imag_s_full_n.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, rotations_V_M_real_4_full_n.read()) && 
  esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op213_write_state6.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, rotations_V_M_imag_4_full_n.read()) && 
  esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op214_write_state6.read()))))) {
        rotations_V_M_real_3_din = ap_const_lv32_0;
    } else {
        rotations_V_M_real_3_din = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void qrf_alt::thread_rotations_V_M_real_3_read() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state93.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln643_fu_1535_p2.read()) && 
         !((esl_seteq<1,1,1>(ap_const_logic_0, io_acc_block_signal_op439.read()) && 
  esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln643_fu_1535_p2.read())) || (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln643_fu_1535_p2.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_0, io_acc_block_signal_op442.read())) || (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln643_fu_1535_p2.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_0, io_acc_block_signal_op445.read())) || (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln643_fu_1535_p2.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_0, io_acc_block_signal_op448.read())) || (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln643_fu_1535_p2.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_0, io_acc_block_signal_op451.read())) || (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln643_fu_1535_p2.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_0, to_rot_0_V_empty_n.read())) || (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln643_fu_1535_p2.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_0, to_rot_1_V_empty_n.read())) || (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln643_fu_1535_p2.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_0, to_rot_2_V_empty_n.read()))))) {
        rotations_V_M_real_3_read = ap_const_logic_1;
    } else {
        rotations_V_M_real_3_read = ap_const_logic_0;
    }
}

void qrf_alt::thread_rotations_V_M_real_3_write() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
          esl_seteq<1,3,3>(phi_ln594_reg_978.read(), ap_const_lv3_3) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, rotations_V_M_real_3_full_n.read()) && 
  esl_seteq<1,3,3>(phi_ln594_reg_978.read(), ap_const_lv3_3)) || (esl_seteq<1,3,3>(phi_ln594_reg_978.read(), ap_const_lv3_3) && 
  esl_seteq<1,1,1>(ap_const_logic_0, rotations_V_M_imag_3_full_n.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, rotations_V_M_real_2_full_n.read()) && 
  esl_seteq<1,3,3>(phi_ln594_reg_978.read(), ap_const_lv3_2)) || (esl_seteq<1,3,3>(phi_ln594_reg_978.read(), ap_const_lv3_2) && 
  esl_seteq<1,1,1>(ap_const_logic_0, rotations_V_M_imag_2_full_n.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, rotations_V_M_real_1_full_n.read()) && 
  esl_seteq<1,3,3>(phi_ln594_reg_978.read(), ap_const_lv3_1)) || (esl_seteq<1,3,3>(phi_ln594_reg_978.read(), ap_const_lv3_1) && 
  esl_seteq<1,1,1>(ap_const_logic_0, rotations_V_M_imag_1_full_n.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, rotations_V_M_real_s_full_n.read()) && 
  esl_seteq<1,3,3>(phi_ln594_reg_978.read(), ap_const_lv3_0)) || (esl_seteq<1,3,3>(phi_ln594_reg_978.read(), ap_const_lv3_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, rotations_V_M_imag_s_full_n.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, rotations_V_M_real_4_full_n.read()) && 
  esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op213_write_state6.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, rotations_V_M_imag_4_full_n.read()) && 
  esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op214_write_state6.read())))) || 
         (esl_seteq<1,1,1>(icmp_ln620_reg_2015_pp1_iter77_reg.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter78.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0)))) {
        rotations_V_M_real_3_write = ap_const_logic_1;
    } else {
        rotations_V_M_real_3_write = ap_const_logic_0;
    }
}

void qrf_alt::thread_rotations_V_M_real_4_din() {
    if ((esl_seteq<1,1,1>(icmp_ln620_reg_2015_pp1_iter77_reg.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter78.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_01001.read(), ap_const_boolean_0))) {
        rotations_V_M_real_4_din = grp_qrf_givens_float_s_fu_1090_ap_return_8.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op213_write_state6.read()) && 
                !((esl_seteq<1,1,1>(ap_const_logic_0, rotations_V_M_real_3_full_n.read()) && 
  esl_seteq<1,3,3>(phi_ln594_reg_978.read(), ap_const_lv3_3)) || (esl_seteq<1,3,3>(phi_ln594_reg_978.read(), ap_const_lv3_3) && 
  esl_seteq<1,1,1>(ap_const_logic_0, rotations_V_M_imag_3_full_n.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, rotations_V_M_real_2_full_n.read()) && 
  esl_seteq<1,3,3>(phi_ln594_reg_978.read(), ap_const_lv3_2)) || (esl_seteq<1,3,3>(phi_ln594_reg_978.read(), ap_const_lv3_2) && 
  esl_seteq<1,1,1>(ap_const_logic_0, rotations_V_M_imag_2_full_n.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, rotations_V_M_real_1_full_n.read()) && 
  esl_seteq<1,3,3>(phi_ln594_reg_978.read(), ap_const_lv3_1)) || (esl_seteq<1,3,3>(phi_ln594_reg_978.read(), ap_const_lv3_1) && 
  esl_seteq<1,1,1>(ap_const_logic_0, rotations_V_M_imag_1_full_n.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, rotations_V_M_real_s_full_n.read()) && 
  esl_seteq<1,3,3>(phi_ln594_reg_978.read(), ap_const_lv3_0)) || (esl_seteq<1,3,3>(phi_ln594_reg_978.read(), ap_const_lv3_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, rotations_V_M_imag_s_full_n.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, rotations_V_M_real_4_full_n.read()) && 
  esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op213_write_state6.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, rotations_V_M_imag_4_full_n.read()) && 
  esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op214_write_state6.read()))))) {
        rotations_V_M_real_4_din = ap_const_lv32_0;
    } else {
        rotations_V_M_real_4_din = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void qrf_alt::thread_rotations_V_M_real_4_read() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state93.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln643_fu_1535_p2.read()) && 
         !((esl_seteq<1,1,1>(ap_const_logic_0, io_acc_block_signal_op439.read()) && 
  esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln643_fu_1535_p2.read())) || (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln643_fu_1535_p2.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_0, io_acc_block_signal_op442.read())) || (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln643_fu_1535_p2.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_0, io_acc_block_signal_op445.read())) || (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln643_fu_1535_p2.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_0, io_acc_block_signal_op448.read())) || (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln643_fu_1535_p2.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_0, io_acc_block_signal_op451.read())) || (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln643_fu_1535_p2.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_0, to_rot_0_V_empty_n.read())) || (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln643_fu_1535_p2.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_0, to_rot_1_V_empty_n.read())) || (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln643_fu_1535_p2.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_0, to_rot_2_V_empty_n.read()))))) {
        rotations_V_M_real_4_read = ap_const_logic_1;
    } else {
        rotations_V_M_real_4_read = ap_const_logic_0;
    }
}

void qrf_alt::thread_rotations_V_M_real_4_write() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op213_write_state6.read()) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, rotations_V_M_real_3_full_n.read()) && 
  esl_seteq<1,3,3>(phi_ln594_reg_978.read(), ap_const_lv3_3)) || (esl_seteq<1,3,3>(phi_ln594_reg_978.read(), ap_const_lv3_3) && 
  esl_seteq<1,1,1>(ap_const_logic_0, rotations_V_M_imag_3_full_n.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, rotations_V_M_real_2_full_n.read()) && 
  esl_seteq<1,3,3>(phi_ln594_reg_978.read(), ap_const_lv3_2)) || (esl_seteq<1,3,3>(phi_ln594_reg_978.read(), ap_const_lv3_2) && 
  esl_seteq<1,1,1>(ap_const_logic_0, rotations_V_M_imag_2_full_n.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, rotations_V_M_real_1_full_n.read()) && 
  esl_seteq<1,3,3>(phi_ln594_reg_978.read(), ap_const_lv3_1)) || (esl_seteq<1,3,3>(phi_ln594_reg_978.read(), ap_const_lv3_1) && 
  esl_seteq<1,1,1>(ap_const_logic_0, rotations_V_M_imag_1_full_n.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, rotations_V_M_real_s_full_n.read()) && 
  esl_seteq<1,3,3>(phi_ln594_reg_978.read(), ap_const_lv3_0)) || (esl_seteq<1,3,3>(phi_ln594_reg_978.read(), ap_const_lv3_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, rotations_V_M_imag_s_full_n.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, rotations_V_M_real_4_full_n.read()) && 
  esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op213_write_state6.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, rotations_V_M_imag_4_full_n.read()) && 
  esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op214_write_state6.read())))) || 
         (esl_seteq<1,1,1>(icmp_ln620_reg_2015_pp1_iter77_reg.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter78.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0)))) {
        rotations_V_M_real_4_write = ap_const_logic_1;
    } else {
        rotations_V_M_real_4_write = ap_const_logic_0;
    }
}

void qrf_alt::thread_rotations_V_M_real_s_din() {
    if ((esl_seteq<1,1,1>(icmp_ln620_reg_2015_pp1_iter77_reg.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter78.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_01001.read(), ap_const_boolean_0))) {
        rotations_V_M_real_s_din = grp_qrf_givens_float_s_fu_1090_ap_return_0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
                esl_seteq<1,3,3>(phi_ln594_reg_978.read(), ap_const_lv3_0) && 
                !((esl_seteq<1,1,1>(ap_const_logic_0, rotations_V_M_real_3_full_n.read()) && 
  esl_seteq<1,3,3>(phi_ln594_reg_978.read(), ap_const_lv3_3)) || (esl_seteq<1,3,3>(phi_ln594_reg_978.read(), ap_const_lv3_3) && 
  esl_seteq<1,1,1>(ap_const_logic_0, rotations_V_M_imag_3_full_n.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, rotations_V_M_real_2_full_n.read()) && 
  esl_seteq<1,3,3>(phi_ln594_reg_978.read(), ap_const_lv3_2)) || (esl_seteq<1,3,3>(phi_ln594_reg_978.read(), ap_const_lv3_2) && 
  esl_seteq<1,1,1>(ap_const_logic_0, rotations_V_M_imag_2_full_n.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, rotations_V_M_real_1_full_n.read()) && 
  esl_seteq<1,3,3>(phi_ln594_reg_978.read(), ap_const_lv3_1)) || (esl_seteq<1,3,3>(phi_ln594_reg_978.read(), ap_const_lv3_1) && 
  esl_seteq<1,1,1>(ap_const_logic_0, rotations_V_M_imag_1_full_n.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, rotations_V_M_real_s_full_n.read()) && 
  esl_seteq<1,3,3>(phi_ln594_reg_978.read(), ap_const_lv3_0)) || (esl_seteq<1,3,3>(phi_ln594_reg_978.read(), ap_const_lv3_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, rotations_V_M_imag_s_full_n.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, rotations_V_M_real_4_full_n.read()) && 
  esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op213_write_state6.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, rotations_V_M_imag_4_full_n.read()) && 
  esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op214_write_state6.read()))))) {
        rotations_V_M_real_s_din = ap_const_lv32_0;
    } else {
        rotations_V_M_real_s_din = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void qrf_alt::thread_rotations_V_M_real_s_read() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state93.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln643_fu_1535_p2.read()) && 
         !((esl_seteq<1,1,1>(ap_const_logic_0, io_acc_block_signal_op439.read()) && 
  esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln643_fu_1535_p2.read())) || (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln643_fu_1535_p2.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_0, io_acc_block_signal_op442.read())) || (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln643_fu_1535_p2.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_0, io_acc_block_signal_op445.read())) || (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln643_fu_1535_p2.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_0, io_acc_block_signal_op448.read())) || (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln643_fu_1535_p2.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_0, io_acc_block_signal_op451.read())) || (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln643_fu_1535_p2.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_0, to_rot_0_V_empty_n.read())) || (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln643_fu_1535_p2.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_0, to_rot_1_V_empty_n.read())) || (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln643_fu_1535_p2.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_0, to_rot_2_V_empty_n.read()))))) {
        rotations_V_M_real_s_read = ap_const_logic_1;
    } else {
        rotations_V_M_real_s_read = ap_const_logic_0;
    }
}

void qrf_alt::thread_rotations_V_M_real_s_write() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
          esl_seteq<1,3,3>(phi_ln594_reg_978.read(), ap_const_lv3_0) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, rotations_V_M_real_3_full_n.read()) && 
  esl_seteq<1,3,3>(phi_ln594_reg_978.read(), ap_const_lv3_3)) || (esl_seteq<1,3,3>(phi_ln594_reg_978.read(), ap_const_lv3_3) && 
  esl_seteq<1,1,1>(ap_const_logic_0, rotations_V_M_imag_3_full_n.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, rotations_V_M_real_2_full_n.read()) && 
  esl_seteq<1,3,3>(phi_ln594_reg_978.read(), ap_const_lv3_2)) || (esl_seteq<1,3,3>(phi_ln594_reg_978.read(), ap_const_lv3_2) && 
  esl_seteq<1,1,1>(ap_const_logic_0, rotations_V_M_imag_2_full_n.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, rotations_V_M_real_1_full_n.read()) && 
  esl_seteq<1,3,3>(phi_ln594_reg_978.read(), ap_const_lv3_1)) || (esl_seteq<1,3,3>(phi_ln594_reg_978.read(), ap_const_lv3_1) && 
  esl_seteq<1,1,1>(ap_const_logic_0, rotations_V_M_imag_1_full_n.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, rotations_V_M_real_s_full_n.read()) && 
  esl_seteq<1,3,3>(phi_ln594_reg_978.read(), ap_const_lv3_0)) || (esl_seteq<1,3,3>(phi_ln594_reg_978.read(), ap_const_lv3_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, rotations_V_M_imag_s_full_n.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, rotations_V_M_real_4_full_n.read()) && 
  esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op213_write_state6.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, rotations_V_M_imag_4_full_n.read()) && 
  esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op214_write_state6.read())))) || 
         (esl_seteq<1,1,1>(icmp_ln620_reg_2015_pp1_iter77_reg.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter78.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0)))) {
        rotations_V_M_real_s_write = ap_const_logic_1;
    } else {
        rotations_V_M_real_s_write = ap_const_logic_0;
    }
}

void qrf_alt::thread_select_ln132_fu_1606_p3() {
    select_ln132_fu_1606_p3 = (!icmp_ln628_reg_1992.read()[0].is_01())? sc_lv<32>(): ((icmp_ln628_reg_1992.read()[0].to_bool())? rotations_V_M_real_4_dout.read(): ap_const_lv32_0);
}

void qrf_alt::thread_select_ln666_1_fu_1684_p3() {
    select_ln666_1_fu_1684_p3 = (!icmp_ln666_reg_2160_pp2_iter3_reg.read()[0].is_01())? sc_lv<32>(): ((icmp_ln666_reg_2160_pp2_iter3_reg.read()[0].to_bool())? phitmp15_i_fu_1670_p3.read(): grp_fu_1123_p2.read());
}

void qrf_alt::thread_select_ln666_2_fu_1691_p3() {
    select_ln666_2_fu_1691_p3 = (!icmp_ln666_reg_2160_pp2_iter3_reg.read()[0].is_01())? sc_lv<32>(): ((icmp_ln666_reg_2160_pp2_iter3_reg.read()[0].to_bool())? select_ln132_reg_2151.read(): grp_fu_1119_p2.read());
}

void qrf_alt::thread_select_ln666_3_fu_1697_p3() {
    select_ln666_3_fu_1697_p3 = (!icmp_ln666_reg_2160_pp2_iter3_reg.read()[0].is_01())? sc_lv<32>(): ((icmp_ln666_reg_2160_pp2_iter3_reg.read()[0].to_bool())? ap_const_lv32_0: grp_fu_1123_p2.read());
}

void qrf_alt::thread_select_ln666_fu_1677_p3() {
    select_ln666_fu_1677_p3 = (!icmp_ln666_reg_2160_pp2_iter3_reg.read()[0].is_01())? sc_lv<32>(): ((icmp_ln666_reg_2160_pp2_iter3_reg.read()[0].to_bool())? phitmp_i_fu_1664_p3.read(): grp_fu_1119_p2.read());
}

void qrf_alt::thread_seq_cnt_fu_1412_p2() {
    seq_cnt_fu_1412_p2 = (!smax_cast_fu_1408_p1.read().is_01() || !seq_cnt_0_reg_1012.read().is_01())? sc_lv<4>(): (sc_biguint<4>(smax_cast_fu_1408_p1.read()) + sc_biguint<4>(seq_cnt_0_reg_1012.read()));
}

void qrf_alt::thread_sext_ln669_1_fu_1650_p1() {
    sext_ln669_1_fu_1650_p1 = esl_sext<64,6>(add_ln669_1_fu_1645_p2.read());
}

void qrf_alt::thread_sext_ln669_fu_1637_p1() {
    sext_ln669_fu_1637_p1 = esl_sext<64,6>(add_ln669_fu_1632_p2.read());
}

void qrf_alt::thread_sext_ln674_1_cast_fu_1598_p3() {
    sext_ln674_1_cast_fu_1598_p3 = esl_concat<4,2>(trunc_ln132_fu_1594_p1.read(), ap_const_lv2_0);
}

void qrf_alt::thread_sext_ln674_cast_fu_1586_p3() {
    sext_ln674_cast_fu_1586_p3 = esl_concat<4,2>(trunc_ln674_fu_1582_p1.read(), ap_const_lv2_0);
}

void qrf_alt::thread_smax_cast_fu_1408_p1() {
    smax_cast_fu_1408_p1 = esl_zext<4,2>(CONFIG_BATCH_CNTS_q0.read());
}

void qrf_alt::thread_tmp_17_fu_1221_p3() {
    tmp_17_fu_1221_p3 = esl_concat<2,2>(phi_ln579_reg_932.read(), phi_ln579_1_reg_944.read());
}

void qrf_alt::thread_tmp_19_fu_1313_p3() {
    tmp_19_fu_1313_p3 = esl_concat<3,2>(r_0_reg_989.read(), ap_const_lv2_0);
}

void qrf_alt::thread_tmp_21_fu_1720_p3() {
    tmp_21_fu_1720_p3 = esl_concat<3,2>(r21_0_reg_1068.read(), ap_const_lv2_0);
}

void qrf_alt::thread_tmp_22_fu_1450_p3() {
    tmp_22_fu_1450_p3 = esl_concat<2,2>(CONFIG_SEQUENCE_0_q0.read(), CONFIG_SEQUENCE_2_q0.read());
}

void qrf_alt::thread_tmp_23_fu_1464_p3() {
    tmp_23_fu_1464_p3 = esl_concat<2,2>(CONFIG_SEQUENCE_1_q0.read(), CONFIG_SEQUENCE_2_q0.read());
}

void qrf_alt::thread_tmp_28_fu_1755_p3() {
    tmp_28_fu_1755_p3 = esl_concat<3,2>(indvar8_reg_1079.read(), ap_const_lv2_0);
}

void qrf_alt::thread_tmp_fu_1259_p3() {
    tmp_fu_1259_p3 = esl_concat<2,2>(phi_ln580_reg_955.read(), phi_ln580_1_reg_967.read());
}

void qrf_alt::thread_to_rot_0_V_din() {
    to_rot_0_V_din = esl_zext<32,2>(px_row1_reg_2039_pp1_iter77_reg.read());
}

void qrf_alt::thread_to_rot_0_V_read() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state93.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln643_fu_1535_p2.read()) && 
         !((esl_seteq<1,1,1>(ap_const_logic_0, io_acc_block_signal_op439.read()) && 
  esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln643_fu_1535_p2.read())) || (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln643_fu_1535_p2.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_0, io_acc_block_signal_op442.read())) || (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln643_fu_1535_p2.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_0, io_acc_block_signal_op445.read())) || (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln643_fu_1535_p2.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_0, io_acc_block_signal_op448.read())) || (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln643_fu_1535_p2.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_0, io_acc_block_signal_op451.read())) || (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln643_fu_1535_p2.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_0, to_rot_0_V_empty_n.read())) || (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln643_fu_1535_p2.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_0, to_rot_1_V_empty_n.read())) || (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln643_fu_1535_p2.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_0, to_rot_2_V_empty_n.read()))))) {
        to_rot_0_V_read = ap_const_logic_1;
    } else {
        to_rot_0_V_read = ap_const_logic_0;
    }
}

void qrf_alt::thread_to_rot_0_V_write() {
    if ((esl_seteq<1,1,1>(icmp_ln620_reg_2015_pp1_iter77_reg.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter78.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0))) {
        to_rot_0_V_write = ap_const_logic_1;
    } else {
        to_rot_0_V_write = ap_const_logic_0;
    }
}

void qrf_alt::thread_to_rot_1_V_din() {
    to_rot_1_V_din = esl_zext<32,2>(px_row2_reg_2044_pp1_iter77_reg.read());
}

void qrf_alt::thread_to_rot_1_V_read() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state93.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln643_fu_1535_p2.read()) && 
         !((esl_seteq<1,1,1>(ap_const_logic_0, io_acc_block_signal_op439.read()) && 
  esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln643_fu_1535_p2.read())) || (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln643_fu_1535_p2.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_0, io_acc_block_signal_op442.read())) || (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln643_fu_1535_p2.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_0, io_acc_block_signal_op445.read())) || (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln643_fu_1535_p2.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_0, io_acc_block_signal_op448.read())) || (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln643_fu_1535_p2.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_0, io_acc_block_signal_op451.read())) || (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln643_fu_1535_p2.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_0, to_rot_0_V_empty_n.read())) || (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln643_fu_1535_p2.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_0, to_rot_1_V_empty_n.read())) || (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln643_fu_1535_p2.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_0, to_rot_2_V_empty_n.read()))))) {
        to_rot_1_V_read = ap_const_logic_1;
    } else {
        to_rot_1_V_read = ap_const_logic_0;
    }
}

void qrf_alt::thread_to_rot_1_V_write() {
    if ((esl_seteq<1,1,1>(icmp_ln620_reg_2015_pp1_iter77_reg.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter78.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0))) {
        to_rot_1_V_write = ap_const_logic_1;
    } else {
        to_rot_1_V_write = ap_const_logic_0;
    }
}

void qrf_alt::thread_to_rot_2_V_din() {
    to_rot_2_V_din = esl_zext<32,2>(px_col_reg_2049_pp1_iter77_reg.read());
}

void qrf_alt::thread_to_rot_2_V_read() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state93.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln643_fu_1535_p2.read()) && 
         !((esl_seteq<1,1,1>(ap_const_logic_0, io_acc_block_signal_op439.read()) && 
  esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln643_fu_1535_p2.read())) || (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln643_fu_1535_p2.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_0, io_acc_block_signal_op442.read())) || (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln643_fu_1535_p2.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_0, io_acc_block_signal_op445.read())) || (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln643_fu_1535_p2.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_0, io_acc_block_signal_op448.read())) || (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln643_fu_1535_p2.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_0, io_acc_block_signal_op451.read())) || (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln643_fu_1535_p2.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_0, to_rot_0_V_empty_n.read())) || (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln643_fu_1535_p2.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_0, to_rot_1_V_empty_n.read())) || (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln643_fu_1535_p2.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_0, to_rot_2_V_empty_n.read()))))) {
        to_rot_2_V_read = ap_const_logic_1;
    } else {
        to_rot_2_V_read = ap_const_logic_0;
    }
}

void qrf_alt::thread_to_rot_2_V_write() {
    if ((esl_seteq<1,1,1>(icmp_ln620_reg_2015_pp1_iter77_reg.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter78.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0))) {
        to_rot_2_V_write = ap_const_logic_1;
    } else {
        to_rot_2_V_write = ap_const_logic_0;
    }
}

void qrf_alt::thread_trunc_ln132_fu_1594_p1() {
    trunc_ln132_fu_1594_p1 = to_rot_1_V_dout.read().range(4-1, 0);
}

void qrf_alt::thread_trunc_ln620_fu_1428_p1() {
    trunc_ln620_fu_1428_p1 = seq_cnt_1_reg_1035.read().range(2-1, 0);
}

void qrf_alt::thread_trunc_ln674_fu_1582_p1() {
    trunc_ln674_fu_1582_p1 = to_rot_0_V_dout.read().range(4-1, 0);
}

void qrf_alt::thread_xor_ln155_fu_1787_p2() {
    xor_ln155_fu_1787_p2 = (bitcast_ln155_fu_1783_p1.read() ^ ap_const_lv32_80000000);
}

void qrf_alt::thread_zext_ln1027_1_fu_1267_p1() {
    zext_ln1027_1_fu_1267_p1 = esl_zext<64,4>(tmp_fu_1259_p3.read());
}

void qrf_alt::thread_zext_ln1027_fu_1229_p1() {
    zext_ln1027_fu_1229_p1 = esl_zext<64,4>(tmp_17_fu_1221_p3.read());
}

void qrf_alt::thread_zext_ln1067_1_fu_1331_p1() {
    zext_ln1067_1_fu_1331_p1 = esl_zext<64,6>(add_ln1067_fu_1325_p2.read());
}

void qrf_alt::thread_zext_ln1067_2_fu_1349_p1() {
    zext_ln1067_2_fu_1349_p1 = esl_zext<6,3>(indvar_reg_1001.read());
}

void qrf_alt::thread_zext_ln1067_3_fu_1358_p1() {
    zext_ln1067_3_fu_1358_p1 = esl_zext<64,6>(add_ln1067_1_fu_1353_p2.read());
}

void qrf_alt::thread_zext_ln1067_fu_1321_p1() {
    zext_ln1067_fu_1321_p1 = esl_zext<6,5>(tmp_19_fu_1313_p3.read());
}

void qrf_alt::thread_zext_ln613_1_fu_1364_p1() {
    zext_ln613_1_fu_1364_p1 = esl_zext<6,3>(indvar_reg_1001.read());
}

void qrf_alt::thread_zext_ln613_2_fu_1373_p1() {
    zext_ln613_2_fu_1373_p1 = esl_zext<64,6>(add_ln613_fu_1368_p2.read());
}

void qrf_alt::thread_zext_ln613_fu_1309_p1() {
    zext_ln613_fu_1309_p1 = esl_zext<6,3>(r_0_reg_989.read());
}

void qrf_alt::thread_zext_ln620_fu_1397_p1() {
    zext_ln620_fu_1397_p1 = esl_zext<64,3>(batch_num_0_reg_1024.read());
}

void qrf_alt::thread_zext_ln623_fu_1437_p1() {
    zext_ln623_fu_1437_p1 = esl_zext<64,4>(seq_cnt_1_reg_1035.read());
}

void qrf_alt::thread_zext_ln631_1_fu_1472_p1() {
    zext_ln631_1_fu_1472_p1 = esl_zext<64,4>(tmp_23_fu_1464_p3.read());
}

void qrf_alt::thread_zext_ln631_fu_1458_p1() {
    zext_ln631_fu_1458_p1 = esl_zext<64,4>(tmp_22_fu_1450_p3.read());
}

void qrf_alt::thread_zext_ln662_fu_1619_p1() {
    zext_ln662_fu_1619_p1 = esl_zext<32,3>(ap_phi_mux_indvar3_phi_fu_1060_p4.read());
}

void qrf_alt::thread_zext_ln669_fu_1628_p1() {
    zext_ln669_fu_1628_p1 = esl_zext<6,3>(ap_phi_mux_indvar3_phi_fu_1060_p4.read());
}

void qrf_alt::thread_zext_ln683_fu_1728_p1() {
    zext_ln683_fu_1728_p1 = esl_zext<6,5>(tmp_21_fu_1720_p3.read());
}

void qrf_alt::thread_zext_ln685_1_fu_1738_p1() {
    zext_ln685_1_fu_1738_p1 = esl_zext<6,3>(indvar8_reg_1079.read());
}

void qrf_alt::thread_zext_ln685_2_fu_1747_p1() {
    zext_ln685_2_fu_1747_p1 = esl_zext<64,6>(add_ln685_fu_1742_p2.read());
}

void qrf_alt::thread_zext_ln685_fu_1716_p1() {
    zext_ln685_fu_1716_p1 = esl_zext<6,3>(r21_0_reg_1068.read());
}

void qrf_alt::thread_zext_ln692_1_fu_1777_p1() {
    zext_ln692_1_fu_1777_p1 = esl_zext<64,6>(add_ln692_fu_1772_p2.read());
}

void qrf_alt::thread_zext_ln692_fu_1769_p1() {
    zext_ln692_fu_1769_p1 = esl_zext<6,5>(tmp_28_reg_2540.read());
}

}


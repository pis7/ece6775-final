#include "linear_forward_no_mu.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void linear_forward_no_mu::thread_mul_ln728_342_fu_38189_p2() {
    mul_ln728_342_fu_38189_p2 = (!mul_ln728_342_fu_38189_p0.read().is_01() || !mul_ln728_342_fu_38189_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_342_fu_38189_p0.read()) * sc_bigint<8>(mul_ln728_342_fu_38189_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_343_fu_38214_p0() {
    mul_ln728_343_fu_38214_p0 = reg_17104.read();
}

void linear_forward_no_mu::thread_mul_ln728_343_fu_38214_p1() {
    mul_ln728_343_fu_38214_p1 = select_ln173_687_reg_123046.read();
}

void linear_forward_no_mu::thread_mul_ln728_343_fu_38214_p2() {
    mul_ln728_343_fu_38214_p2 = (!mul_ln728_343_fu_38214_p0.read().is_01() || !mul_ln728_343_fu_38214_p1.read().is_01())? sc_lv<9>(): sc_bigint<8>(mul_ln728_343_fu_38214_p0.read()) * sc_bigint<2>(mul_ln728_343_fu_38214_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_344_fu_38497_p0() {
    mul_ln728_344_fu_38497_p0 = select_ln173_689_reg_123081.read();
}

void linear_forward_no_mu::thread_mul_ln728_344_fu_38497_p1() {
    mul_ln728_344_fu_38497_p1 = reg_17076.read();
}

void linear_forward_no_mu::thread_mul_ln728_344_fu_38497_p2() {
    mul_ln728_344_fu_38497_p2 = (!mul_ln728_344_fu_38497_p0.read().is_01() || !mul_ln728_344_fu_38497_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_344_fu_38497_p0.read()) * sc_bigint<8>(mul_ln728_344_fu_38497_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_345_fu_38522_p0() {
    mul_ln728_345_fu_38522_p0 = select_ln173_691_reg_123086.read();
}

void linear_forward_no_mu::thread_mul_ln728_345_fu_38522_p1() {
    mul_ln728_345_fu_38522_p1 = reg_17080.read();
}

void linear_forward_no_mu::thread_mul_ln728_345_fu_38522_p2() {
    mul_ln728_345_fu_38522_p2 = (!mul_ln728_345_fu_38522_p0.read().is_01() || !mul_ln728_345_fu_38522_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_345_fu_38522_p0.read()) * sc_bigint<8>(mul_ln728_345_fu_38522_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_346_fu_38547_p0() {
    mul_ln728_346_fu_38547_p0 = select_ln173_693_reg_123091.read();
}

void linear_forward_no_mu::thread_mul_ln728_346_fu_38547_p1() {
    mul_ln728_346_fu_38547_p1 = reg_17084.read();
}

void linear_forward_no_mu::thread_mul_ln728_346_fu_38547_p2() {
    mul_ln728_346_fu_38547_p2 = (!mul_ln728_346_fu_38547_p0.read().is_01() || !mul_ln728_346_fu_38547_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_346_fu_38547_p0.read()) * sc_bigint<8>(mul_ln728_346_fu_38547_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_347_fu_38572_p0() {
    mul_ln728_347_fu_38572_p0 = reg_17088.read();
}

void linear_forward_no_mu::thread_mul_ln728_347_fu_38572_p1() {
    mul_ln728_347_fu_38572_p1 = select_ln173_695_reg_123096.read();
}

void linear_forward_no_mu::thread_mul_ln728_347_fu_38572_p2() {
    mul_ln728_347_fu_38572_p2 = (!mul_ln728_347_fu_38572_p0.read().is_01() || !mul_ln728_347_fu_38572_p1.read().is_01())? sc_lv<9>(): sc_bigint<8>(mul_ln728_347_fu_38572_p0.read()) * sc_bigint<2>(mul_ln728_347_fu_38572_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_348_fu_38597_p0() {
    mul_ln728_348_fu_38597_p0 = select_ln173_697_reg_123101.read();
}

void linear_forward_no_mu::thread_mul_ln728_348_fu_38597_p1() {
    mul_ln728_348_fu_38597_p1 = reg_17092.read();
}

void linear_forward_no_mu::thread_mul_ln728_348_fu_38597_p2() {
    mul_ln728_348_fu_38597_p2 = (!mul_ln728_348_fu_38597_p0.read().is_01() || !mul_ln728_348_fu_38597_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_348_fu_38597_p0.read()) * sc_bigint<8>(mul_ln728_348_fu_38597_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_349_fu_38645_p0() {
    mul_ln728_349_fu_38645_p0 = select_ln173_699_fu_38629_p3.read();
}

void linear_forward_no_mu::thread_mul_ln728_349_fu_38645_p1() {
    mul_ln728_349_fu_38645_p1 = reg_17096.read();
}

void linear_forward_no_mu::thread_mul_ln728_349_fu_38645_p2() {
    mul_ln728_349_fu_38645_p2 = (!mul_ln728_349_fu_38645_p0.read().is_01() || !mul_ln728_349_fu_38645_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_349_fu_38645_p0.read()) * sc_bigint<8>(mul_ln728_349_fu_38645_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_34_fu_19346_p0() {
    mul_ln728_34_fu_19346_p0 = select_ln173_69_reg_120068.read();
}

void linear_forward_no_mu::thread_mul_ln728_34_fu_19346_p1() {
    mul_ln728_34_fu_19346_p1 = reg_17084.read();
}

void linear_forward_no_mu::thread_mul_ln728_34_fu_19346_p2() {
    mul_ln728_34_fu_19346_p2 = (!mul_ln728_34_fu_19346_p0.read().is_01() || !mul_ln728_34_fu_19346_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_34_fu_19346_p0.read()) * sc_bigint<8>(mul_ln728_34_fu_19346_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_350_fu_38681_p0() {
    mul_ln728_350_fu_38681_p0 = select_ln173_701_fu_38665_p3.read();
}

void linear_forward_no_mu::thread_mul_ln728_350_fu_38681_p1() {
    mul_ln728_350_fu_38681_p1 = reg_17100.read();
}

void linear_forward_no_mu::thread_mul_ln728_350_fu_38681_p2() {
    mul_ln728_350_fu_38681_p2 = (!mul_ln728_350_fu_38681_p0.read().is_01() || !mul_ln728_350_fu_38681_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_350_fu_38681_p0.read()) * sc_bigint<8>(mul_ln728_350_fu_38681_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_351_fu_38694_p0() {
    mul_ln728_351_fu_38694_p0 = reg_17104.read();
}

void linear_forward_no_mu::thread_mul_ln728_351_fu_38694_p1() {
    mul_ln728_351_fu_38694_p1 = select_ln173_703_reg_123106.read();
}

void linear_forward_no_mu::thread_mul_ln728_351_fu_38694_p2() {
    mul_ln728_351_fu_38694_p2 = (!mul_ln728_351_fu_38694_p0.read().is_01() || !mul_ln728_351_fu_38694_p1.read().is_01())? sc_lv<9>(): sc_bigint<8>(mul_ln728_351_fu_38694_p0.read()) * sc_bigint<2>(mul_ln728_351_fu_38694_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_352_fu_39020_p0() {
    mul_ln728_352_fu_39020_p0 = select_ln173_705_reg_123151.read();
}

void linear_forward_no_mu::thread_mul_ln728_352_fu_39020_p1() {
    mul_ln728_352_fu_39020_p1 = reg_17076.read();
}

void linear_forward_no_mu::thread_mul_ln728_352_fu_39020_p2() {
    mul_ln728_352_fu_39020_p2 = (!mul_ln728_352_fu_39020_p0.read().is_01() || !mul_ln728_352_fu_39020_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_352_fu_39020_p0.read()) * sc_bigint<8>(mul_ln728_352_fu_39020_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_353_fu_39045_p0() {
    mul_ln728_353_fu_39045_p0 = select_ln173_707_reg_123156.read();
}

void linear_forward_no_mu::thread_mul_ln728_353_fu_39045_p1() {
    mul_ln728_353_fu_39045_p1 = reg_17080.read();
}

void linear_forward_no_mu::thread_mul_ln728_353_fu_39045_p2() {
    mul_ln728_353_fu_39045_p2 = (!mul_ln728_353_fu_39045_p0.read().is_01() || !mul_ln728_353_fu_39045_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_353_fu_39045_p0.read()) * sc_bigint<8>(mul_ln728_353_fu_39045_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_354_fu_39070_p0() {
    mul_ln728_354_fu_39070_p0 = select_ln173_709_reg_123161.read();
}

void linear_forward_no_mu::thread_mul_ln728_354_fu_39070_p1() {
    mul_ln728_354_fu_39070_p1 = reg_17084.read();
}

void linear_forward_no_mu::thread_mul_ln728_354_fu_39070_p2() {
    mul_ln728_354_fu_39070_p2 = (!mul_ln728_354_fu_39070_p0.read().is_01() || !mul_ln728_354_fu_39070_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_354_fu_39070_p0.read()) * sc_bigint<8>(mul_ln728_354_fu_39070_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_355_fu_39095_p0() {
    mul_ln728_355_fu_39095_p0 = reg_17088.read();
}

void linear_forward_no_mu::thread_mul_ln728_355_fu_39095_p1() {
    mul_ln728_355_fu_39095_p1 = select_ln173_711_reg_123166.read();
}

void linear_forward_no_mu::thread_mul_ln728_355_fu_39095_p2() {
    mul_ln728_355_fu_39095_p2 = (!mul_ln728_355_fu_39095_p0.read().is_01() || !mul_ln728_355_fu_39095_p1.read().is_01())? sc_lv<9>(): sc_bigint<8>(mul_ln728_355_fu_39095_p0.read()) * sc_bigint<2>(mul_ln728_355_fu_39095_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_356_fu_39120_p0() {
    mul_ln728_356_fu_39120_p0 = select_ln173_713_reg_123171.read();
}

void linear_forward_no_mu::thread_mul_ln728_356_fu_39120_p1() {
    mul_ln728_356_fu_39120_p1 = reg_17092.read();
}

void linear_forward_no_mu::thread_mul_ln728_356_fu_39120_p2() {
    mul_ln728_356_fu_39120_p2 = (!mul_ln728_356_fu_39120_p0.read().is_01() || !mul_ln728_356_fu_39120_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_356_fu_39120_p0.read()) * sc_bigint<8>(mul_ln728_356_fu_39120_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_357_fu_39145_p0() {
    mul_ln728_357_fu_39145_p0 = select_ln173_715_reg_123176.read();
}

void linear_forward_no_mu::thread_mul_ln728_357_fu_39145_p1() {
    mul_ln728_357_fu_39145_p1 = reg_17096.read();
}

void linear_forward_no_mu::thread_mul_ln728_357_fu_39145_p2() {
    mul_ln728_357_fu_39145_p2 = (!mul_ln728_357_fu_39145_p0.read().is_01() || !mul_ln728_357_fu_39145_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_357_fu_39145_p0.read()) * sc_bigint<8>(mul_ln728_357_fu_39145_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_358_fu_39193_p0() {
    mul_ln728_358_fu_39193_p0 = select_ln173_717_fu_39177_p3.read();
}

void linear_forward_no_mu::thread_mul_ln728_358_fu_39193_p1() {
    mul_ln728_358_fu_39193_p1 = reg_17100.read();
}

void linear_forward_no_mu::thread_mul_ln728_358_fu_39193_p2() {
    mul_ln728_358_fu_39193_p2 = (!mul_ln728_358_fu_39193_p0.read().is_01() || !mul_ln728_358_fu_39193_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_358_fu_39193_p0.read()) * sc_bigint<8>(mul_ln728_358_fu_39193_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_359_fu_39206_p0() {
    mul_ln728_359_fu_39206_p0 = reg_17104.read();
}

void linear_forward_no_mu::thread_mul_ln728_359_fu_39206_p1() {
    mul_ln728_359_fu_39206_p1 = select_ln173_719_reg_123181.read();
}

void linear_forward_no_mu::thread_mul_ln728_359_fu_39206_p2() {
    mul_ln728_359_fu_39206_p2 = (!mul_ln728_359_fu_39206_p0.read().is_01() || !mul_ln728_359_fu_39206_p1.read().is_01())? sc_lv<9>(): sc_bigint<8>(mul_ln728_359_fu_39206_p0.read()) * sc_bigint<2>(mul_ln728_359_fu_39206_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_35_fu_19371_p0() {
    mul_ln728_35_fu_19371_p0 = reg_17088.read();
}

void linear_forward_no_mu::thread_mul_ln728_35_fu_19371_p1() {
    mul_ln728_35_fu_19371_p1 = select_ln173_71_reg_120073.read();
}

void linear_forward_no_mu::thread_mul_ln728_35_fu_19371_p2() {
    mul_ln728_35_fu_19371_p2 = (!mul_ln728_35_fu_19371_p0.read().is_01() || !mul_ln728_35_fu_19371_p1.read().is_01())? sc_lv<9>(): sc_bigint<8>(mul_ln728_35_fu_19371_p0.read()) * sc_bigint<2>(mul_ln728_35_fu_19371_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_360_fu_39518_p0() {
    mul_ln728_360_fu_39518_p0 = select_ln173_721_reg_123221.read();
}

void linear_forward_no_mu::thread_mul_ln728_360_fu_39518_p1() {
    mul_ln728_360_fu_39518_p1 = reg_17076.read();
}

void linear_forward_no_mu::thread_mul_ln728_360_fu_39518_p2() {
    mul_ln728_360_fu_39518_p2 = (!mul_ln728_360_fu_39518_p0.read().is_01() || !mul_ln728_360_fu_39518_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_360_fu_39518_p0.read()) * sc_bigint<8>(mul_ln728_360_fu_39518_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_361_fu_39543_p0() {
    mul_ln728_361_fu_39543_p0 = select_ln173_723_reg_123226.read();
}

void linear_forward_no_mu::thread_mul_ln728_361_fu_39543_p1() {
    mul_ln728_361_fu_39543_p1 = reg_17080.read();
}

void linear_forward_no_mu::thread_mul_ln728_361_fu_39543_p2() {
    mul_ln728_361_fu_39543_p2 = (!mul_ln728_361_fu_39543_p0.read().is_01() || !mul_ln728_361_fu_39543_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_361_fu_39543_p0.read()) * sc_bigint<8>(mul_ln728_361_fu_39543_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_362_fu_39568_p0() {
    mul_ln728_362_fu_39568_p0 = select_ln173_725_reg_123231.read();
}

void linear_forward_no_mu::thread_mul_ln728_362_fu_39568_p1() {
    mul_ln728_362_fu_39568_p1 = reg_17084.read();
}

void linear_forward_no_mu::thread_mul_ln728_362_fu_39568_p2() {
    mul_ln728_362_fu_39568_p2 = (!mul_ln728_362_fu_39568_p0.read().is_01() || !mul_ln728_362_fu_39568_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_362_fu_39568_p0.read()) * sc_bigint<8>(mul_ln728_362_fu_39568_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_363_fu_39593_p0() {
    mul_ln728_363_fu_39593_p0 = reg_17088.read();
}

void linear_forward_no_mu::thread_mul_ln728_363_fu_39593_p1() {
    mul_ln728_363_fu_39593_p1 = select_ln173_727_reg_123236.read();
}

void linear_forward_no_mu::thread_mul_ln728_363_fu_39593_p2() {
    mul_ln728_363_fu_39593_p2 = (!mul_ln728_363_fu_39593_p0.read().is_01() || !mul_ln728_363_fu_39593_p1.read().is_01())? sc_lv<9>(): sc_bigint<8>(mul_ln728_363_fu_39593_p0.read()) * sc_bigint<2>(mul_ln728_363_fu_39593_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_364_fu_39618_p0() {
    mul_ln728_364_fu_39618_p0 = select_ln173_729_reg_123241.read();
}

void linear_forward_no_mu::thread_mul_ln728_364_fu_39618_p1() {
    mul_ln728_364_fu_39618_p1 = reg_17092.read();
}

void linear_forward_no_mu::thread_mul_ln728_364_fu_39618_p2() {
    mul_ln728_364_fu_39618_p2 = (!mul_ln728_364_fu_39618_p0.read().is_01() || !mul_ln728_364_fu_39618_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_364_fu_39618_p0.read()) * sc_bigint<8>(mul_ln728_364_fu_39618_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_365_fu_39643_p0() {
    mul_ln728_365_fu_39643_p0 = select_ln173_731_reg_123246.read();
}

void linear_forward_no_mu::thread_mul_ln728_365_fu_39643_p1() {
    mul_ln728_365_fu_39643_p1 = reg_17096.read();
}

void linear_forward_no_mu::thread_mul_ln728_365_fu_39643_p2() {
    mul_ln728_365_fu_39643_p2 = (!mul_ln728_365_fu_39643_p0.read().is_01() || !mul_ln728_365_fu_39643_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_365_fu_39643_p0.read()) * sc_bigint<8>(mul_ln728_365_fu_39643_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_366_fu_39668_p0() {
    mul_ln728_366_fu_39668_p0 = select_ln173_733_reg_123251.read();
}

void linear_forward_no_mu::thread_mul_ln728_366_fu_39668_p1() {
    mul_ln728_366_fu_39668_p1 = reg_17100.read();
}

void linear_forward_no_mu::thread_mul_ln728_366_fu_39668_p2() {
    mul_ln728_366_fu_39668_p2 = (!mul_ln728_366_fu_39668_p0.read().is_01() || !mul_ln728_366_fu_39668_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_366_fu_39668_p0.read()) * sc_bigint<8>(mul_ln728_366_fu_39668_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_367_fu_39693_p0() {
    mul_ln728_367_fu_39693_p0 = reg_17104.read();
}

void linear_forward_no_mu::thread_mul_ln728_367_fu_39693_p1() {
    mul_ln728_367_fu_39693_p1 = select_ln173_735_reg_123256.read();
}

void linear_forward_no_mu::thread_mul_ln728_367_fu_39693_p2() {
    mul_ln728_367_fu_39693_p2 = (!mul_ln728_367_fu_39693_p0.read().is_01() || !mul_ln728_367_fu_39693_p1.read().is_01())? sc_lv<9>(): sc_bigint<8>(mul_ln728_367_fu_39693_p0.read()) * sc_bigint<2>(mul_ln728_367_fu_39693_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_368_fu_39975_p0() {
    mul_ln728_368_fu_39975_p0 = select_ln173_737_reg_123291.read();
}

void linear_forward_no_mu::thread_mul_ln728_368_fu_39975_p1() {
    mul_ln728_368_fu_39975_p1 = reg_17076.read();
}

void linear_forward_no_mu::thread_mul_ln728_368_fu_39975_p2() {
    mul_ln728_368_fu_39975_p2 = (!mul_ln728_368_fu_39975_p0.read().is_01() || !mul_ln728_368_fu_39975_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_368_fu_39975_p0.read()) * sc_bigint<8>(mul_ln728_368_fu_39975_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_369_fu_40000_p0() {
    mul_ln728_369_fu_40000_p0 = select_ln173_739_reg_123296.read();
}

void linear_forward_no_mu::thread_mul_ln728_369_fu_40000_p1() {
    mul_ln728_369_fu_40000_p1 = reg_17080.read();
}

void linear_forward_no_mu::thread_mul_ln728_369_fu_40000_p2() {
    mul_ln728_369_fu_40000_p2 = (!mul_ln728_369_fu_40000_p0.read().is_01() || !mul_ln728_369_fu_40000_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_369_fu_40000_p0.read()) * sc_bigint<8>(mul_ln728_369_fu_40000_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_36_fu_19396_p0() {
    mul_ln728_36_fu_19396_p0 = select_ln173_73_reg_120078.read();
}

void linear_forward_no_mu::thread_mul_ln728_36_fu_19396_p1() {
    mul_ln728_36_fu_19396_p1 = reg_17092.read();
}

void linear_forward_no_mu::thread_mul_ln728_36_fu_19396_p2() {
    mul_ln728_36_fu_19396_p2 = (!mul_ln728_36_fu_19396_p0.read().is_01() || !mul_ln728_36_fu_19396_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_36_fu_19396_p0.read()) * sc_bigint<8>(mul_ln728_36_fu_19396_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_370_fu_40025_p0() {
    mul_ln728_370_fu_40025_p0 = select_ln173_741_reg_123301.read();
}

void linear_forward_no_mu::thread_mul_ln728_370_fu_40025_p1() {
    mul_ln728_370_fu_40025_p1 = reg_17084.read();
}

void linear_forward_no_mu::thread_mul_ln728_370_fu_40025_p2() {
    mul_ln728_370_fu_40025_p2 = (!mul_ln728_370_fu_40025_p0.read().is_01() || !mul_ln728_370_fu_40025_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_370_fu_40025_p0.read()) * sc_bigint<8>(mul_ln728_370_fu_40025_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_371_fu_40050_p0() {
    mul_ln728_371_fu_40050_p0 = reg_17088.read();
}

void linear_forward_no_mu::thread_mul_ln728_371_fu_40050_p1() {
    mul_ln728_371_fu_40050_p1 = select_ln173_743_reg_123306.read();
}

void linear_forward_no_mu::thread_mul_ln728_371_fu_40050_p2() {
    mul_ln728_371_fu_40050_p2 = (!mul_ln728_371_fu_40050_p0.read().is_01() || !mul_ln728_371_fu_40050_p1.read().is_01())? sc_lv<9>(): sc_bigint<8>(mul_ln728_371_fu_40050_p0.read()) * sc_bigint<2>(mul_ln728_371_fu_40050_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_372_fu_40075_p0() {
    mul_ln728_372_fu_40075_p0 = select_ln173_745_reg_123311.read();
}

void linear_forward_no_mu::thread_mul_ln728_372_fu_40075_p1() {
    mul_ln728_372_fu_40075_p1 = reg_17092.read();
}

void linear_forward_no_mu::thread_mul_ln728_372_fu_40075_p2() {
    mul_ln728_372_fu_40075_p2 = (!mul_ln728_372_fu_40075_p0.read().is_01() || !mul_ln728_372_fu_40075_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_372_fu_40075_p0.read()) * sc_bigint<8>(mul_ln728_372_fu_40075_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_373_fu_40123_p0() {
    mul_ln728_373_fu_40123_p0 = select_ln173_747_fu_40107_p3.read();
}

void linear_forward_no_mu::thread_mul_ln728_373_fu_40123_p1() {
    mul_ln728_373_fu_40123_p1 = reg_17096.read();
}

void linear_forward_no_mu::thread_mul_ln728_373_fu_40123_p2() {
    mul_ln728_373_fu_40123_p2 = (!mul_ln728_373_fu_40123_p0.read().is_01() || !mul_ln728_373_fu_40123_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_373_fu_40123_p0.read()) * sc_bigint<8>(mul_ln728_373_fu_40123_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_374_fu_40159_p0() {
    mul_ln728_374_fu_40159_p0 = select_ln173_749_fu_40143_p3.read();
}

void linear_forward_no_mu::thread_mul_ln728_374_fu_40159_p1() {
    mul_ln728_374_fu_40159_p1 = reg_17100.read();
}

void linear_forward_no_mu::thread_mul_ln728_374_fu_40159_p2() {
    mul_ln728_374_fu_40159_p2 = (!mul_ln728_374_fu_40159_p0.read().is_01() || !mul_ln728_374_fu_40159_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_374_fu_40159_p0.read()) * sc_bigint<8>(mul_ln728_374_fu_40159_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_375_fu_40172_p0() {
    mul_ln728_375_fu_40172_p0 = reg_17104.read();
}

void linear_forward_no_mu::thread_mul_ln728_375_fu_40172_p1() {
    mul_ln728_375_fu_40172_p1 = select_ln173_751_reg_123316.read();
}

void linear_forward_no_mu::thread_mul_ln728_375_fu_40172_p2() {
    mul_ln728_375_fu_40172_p2 = (!mul_ln728_375_fu_40172_p0.read().is_01() || !mul_ln728_375_fu_40172_p1.read().is_01())? sc_lv<9>(): sc_bigint<8>(mul_ln728_375_fu_40172_p0.read()) * sc_bigint<2>(mul_ln728_375_fu_40172_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_376_fu_40487_p0() {
    mul_ln728_376_fu_40487_p0 = select_ln173_753_reg_123361.read();
}

void linear_forward_no_mu::thread_mul_ln728_376_fu_40487_p1() {
    mul_ln728_376_fu_40487_p1 = reg_17076.read();
}

void linear_forward_no_mu::thread_mul_ln728_376_fu_40487_p2() {
    mul_ln728_376_fu_40487_p2 = (!mul_ln728_376_fu_40487_p0.read().is_01() || !mul_ln728_376_fu_40487_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_376_fu_40487_p0.read()) * sc_bigint<8>(mul_ln728_376_fu_40487_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_377_fu_40512_p0() {
    mul_ln728_377_fu_40512_p0 = select_ln173_755_reg_123366.read();
}

void linear_forward_no_mu::thread_mul_ln728_377_fu_40512_p1() {
    mul_ln728_377_fu_40512_p1 = reg_17080.read();
}

void linear_forward_no_mu::thread_mul_ln728_377_fu_40512_p2() {
    mul_ln728_377_fu_40512_p2 = (!mul_ln728_377_fu_40512_p0.read().is_01() || !mul_ln728_377_fu_40512_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_377_fu_40512_p0.read()) * sc_bigint<8>(mul_ln728_377_fu_40512_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_378_fu_40537_p0() {
    mul_ln728_378_fu_40537_p0 = select_ln173_757_reg_123371.read();
}

void linear_forward_no_mu::thread_mul_ln728_378_fu_40537_p1() {
    mul_ln728_378_fu_40537_p1 = reg_17084.read();
}

void linear_forward_no_mu::thread_mul_ln728_378_fu_40537_p2() {
    mul_ln728_378_fu_40537_p2 = (!mul_ln728_378_fu_40537_p0.read().is_01() || !mul_ln728_378_fu_40537_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_378_fu_40537_p0.read()) * sc_bigint<8>(mul_ln728_378_fu_40537_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_379_fu_40562_p0() {
    mul_ln728_379_fu_40562_p0 = reg_17088.read();
}

void linear_forward_no_mu::thread_mul_ln728_379_fu_40562_p1() {
    mul_ln728_379_fu_40562_p1 = select_ln173_759_reg_123376.read();
}

void linear_forward_no_mu::thread_mul_ln728_379_fu_40562_p2() {
    mul_ln728_379_fu_40562_p2 = (!mul_ln728_379_fu_40562_p0.read().is_01() || !mul_ln728_379_fu_40562_p1.read().is_01())? sc_lv<9>(): sc_bigint<8>(mul_ln728_379_fu_40562_p0.read()) * sc_bigint<2>(mul_ln728_379_fu_40562_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_37_fu_19444_p0() {
    mul_ln728_37_fu_19444_p0 = select_ln173_75_fu_19428_p3.read();
}

void linear_forward_no_mu::thread_mul_ln728_37_fu_19444_p1() {
    mul_ln728_37_fu_19444_p1 = reg_17096.read();
}

void linear_forward_no_mu::thread_mul_ln728_37_fu_19444_p2() {
    mul_ln728_37_fu_19444_p2 = (!mul_ln728_37_fu_19444_p0.read().is_01() || !mul_ln728_37_fu_19444_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_37_fu_19444_p0.read()) * sc_bigint<8>(mul_ln728_37_fu_19444_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_380_fu_40587_p0() {
    mul_ln728_380_fu_40587_p0 = select_ln173_761_reg_123381.read();
}

void linear_forward_no_mu::thread_mul_ln728_380_fu_40587_p1() {
    mul_ln728_380_fu_40587_p1 = reg_17092.read();
}

void linear_forward_no_mu::thread_mul_ln728_380_fu_40587_p2() {
    mul_ln728_380_fu_40587_p2 = (!mul_ln728_380_fu_40587_p0.read().is_01() || !mul_ln728_380_fu_40587_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_380_fu_40587_p0.read()) * sc_bigint<8>(mul_ln728_380_fu_40587_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_381_fu_40612_p0() {
    mul_ln728_381_fu_40612_p0 = select_ln173_763_reg_123386.read();
}

void linear_forward_no_mu::thread_mul_ln728_381_fu_40612_p1() {
    mul_ln728_381_fu_40612_p1 = reg_17096.read();
}

void linear_forward_no_mu::thread_mul_ln728_381_fu_40612_p2() {
    mul_ln728_381_fu_40612_p2 = (!mul_ln728_381_fu_40612_p0.read().is_01() || !mul_ln728_381_fu_40612_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_381_fu_40612_p0.read()) * sc_bigint<8>(mul_ln728_381_fu_40612_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_382_fu_40660_p0() {
    mul_ln728_382_fu_40660_p0 = select_ln173_765_fu_40644_p3.read();
}

void linear_forward_no_mu::thread_mul_ln728_382_fu_40660_p1() {
    mul_ln728_382_fu_40660_p1 = reg_17100.read();
}

void linear_forward_no_mu::thread_mul_ln728_382_fu_40660_p2() {
    mul_ln728_382_fu_40660_p2 = (!mul_ln728_382_fu_40660_p0.read().is_01() || !mul_ln728_382_fu_40660_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_382_fu_40660_p0.read()) * sc_bigint<8>(mul_ln728_382_fu_40660_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_383_fu_40673_p0() {
    mul_ln728_383_fu_40673_p0 = reg_17104.read();
}

void linear_forward_no_mu::thread_mul_ln728_383_fu_40673_p1() {
    mul_ln728_383_fu_40673_p1 = select_ln173_767_reg_123391.read();
}

void linear_forward_no_mu::thread_mul_ln728_383_fu_40673_p2() {
    mul_ln728_383_fu_40673_p2 = (!mul_ln728_383_fu_40673_p0.read().is_01() || !mul_ln728_383_fu_40673_p1.read().is_01())? sc_lv<9>(): sc_bigint<8>(mul_ln728_383_fu_40673_p0.read()) * sc_bigint<2>(mul_ln728_383_fu_40673_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_384_fu_40984_p0() {
    mul_ln728_384_fu_40984_p0 = select_ln173_769_reg_123426.read();
}

void linear_forward_no_mu::thread_mul_ln728_384_fu_40984_p1() {
    mul_ln728_384_fu_40984_p1 = reg_17076.read();
}

void linear_forward_no_mu::thread_mul_ln728_384_fu_40984_p2() {
    mul_ln728_384_fu_40984_p2 = (!mul_ln728_384_fu_40984_p0.read().is_01() || !mul_ln728_384_fu_40984_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_384_fu_40984_p0.read()) * sc_bigint<8>(mul_ln728_384_fu_40984_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_385_fu_41009_p0() {
    mul_ln728_385_fu_41009_p0 = select_ln173_771_reg_123431.read();
}

void linear_forward_no_mu::thread_mul_ln728_385_fu_41009_p1() {
    mul_ln728_385_fu_41009_p1 = reg_17080.read();
}

void linear_forward_no_mu::thread_mul_ln728_385_fu_41009_p2() {
    mul_ln728_385_fu_41009_p2 = (!mul_ln728_385_fu_41009_p0.read().is_01() || !mul_ln728_385_fu_41009_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_385_fu_41009_p0.read()) * sc_bigint<8>(mul_ln728_385_fu_41009_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_386_fu_41034_p0() {
    mul_ln728_386_fu_41034_p0 = select_ln173_773_reg_123436.read();
}

void linear_forward_no_mu::thread_mul_ln728_386_fu_41034_p1() {
    mul_ln728_386_fu_41034_p1 = reg_17084.read();
}

void linear_forward_no_mu::thread_mul_ln728_386_fu_41034_p2() {
    mul_ln728_386_fu_41034_p2 = (!mul_ln728_386_fu_41034_p0.read().is_01() || !mul_ln728_386_fu_41034_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_386_fu_41034_p0.read()) * sc_bigint<8>(mul_ln728_386_fu_41034_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_387_fu_41059_p0() {
    mul_ln728_387_fu_41059_p0 = reg_17088.read();
}

void linear_forward_no_mu::thread_mul_ln728_387_fu_41059_p1() {
    mul_ln728_387_fu_41059_p1 = select_ln173_775_reg_123441.read();
}

void linear_forward_no_mu::thread_mul_ln728_387_fu_41059_p2() {
    mul_ln728_387_fu_41059_p2 = (!mul_ln728_387_fu_41059_p0.read().is_01() || !mul_ln728_387_fu_41059_p1.read().is_01())? sc_lv<9>(): sc_bigint<8>(mul_ln728_387_fu_41059_p0.read()) * sc_bigint<2>(mul_ln728_387_fu_41059_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_388_fu_41084_p0() {
    mul_ln728_388_fu_41084_p0 = select_ln173_777_reg_123446.read();
}

void linear_forward_no_mu::thread_mul_ln728_388_fu_41084_p1() {
    mul_ln728_388_fu_41084_p1 = reg_17092.read();
}

void linear_forward_no_mu::thread_mul_ln728_388_fu_41084_p2() {
    mul_ln728_388_fu_41084_p2 = (!mul_ln728_388_fu_41084_p0.read().is_01() || !mul_ln728_388_fu_41084_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_388_fu_41084_p0.read()) * sc_bigint<8>(mul_ln728_388_fu_41084_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_389_fu_41109_p0() {
    mul_ln728_389_fu_41109_p0 = select_ln173_779_reg_123451.read();
}

void linear_forward_no_mu::thread_mul_ln728_389_fu_41109_p1() {
    mul_ln728_389_fu_41109_p1 = reg_17096.read();
}

void linear_forward_no_mu::thread_mul_ln728_389_fu_41109_p2() {
    mul_ln728_389_fu_41109_p2 = (!mul_ln728_389_fu_41109_p0.read().is_01() || !mul_ln728_389_fu_41109_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_389_fu_41109_p0.read()) * sc_bigint<8>(mul_ln728_389_fu_41109_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_38_fu_19480_p0() {
    mul_ln728_38_fu_19480_p0 = select_ln173_77_fu_19464_p3.read();
}

void linear_forward_no_mu::thread_mul_ln728_38_fu_19480_p1() {
    mul_ln728_38_fu_19480_p1 = reg_17100.read();
}

void linear_forward_no_mu::thread_mul_ln728_38_fu_19480_p2() {
    mul_ln728_38_fu_19480_p2 = (!mul_ln728_38_fu_19480_p0.read().is_01() || !mul_ln728_38_fu_19480_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_38_fu_19480_p0.read()) * sc_bigint<8>(mul_ln728_38_fu_19480_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_390_fu_41134_p0() {
    mul_ln728_390_fu_41134_p0 = select_ln173_781_reg_123456.read();
}

void linear_forward_no_mu::thread_mul_ln728_390_fu_41134_p1() {
    mul_ln728_390_fu_41134_p1 = reg_17100.read();
}

void linear_forward_no_mu::thread_mul_ln728_390_fu_41134_p2() {
    mul_ln728_390_fu_41134_p2 = (!mul_ln728_390_fu_41134_p0.read().is_01() || !mul_ln728_390_fu_41134_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_390_fu_41134_p0.read()) * sc_bigint<8>(mul_ln728_390_fu_41134_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_391_fu_41159_p0() {
    mul_ln728_391_fu_41159_p0 = reg_17104.read();
}

void linear_forward_no_mu::thread_mul_ln728_391_fu_41159_p1() {
    mul_ln728_391_fu_41159_p1 = select_ln173_783_reg_123461.read();
}

void linear_forward_no_mu::thread_mul_ln728_391_fu_41159_p2() {
    mul_ln728_391_fu_41159_p2 = (!mul_ln728_391_fu_41159_p0.read().is_01() || !mul_ln728_391_fu_41159_p1.read().is_01())? sc_lv<9>(): sc_bigint<8>(mul_ln728_391_fu_41159_p0.read()) * sc_bigint<2>(mul_ln728_391_fu_41159_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_392_fu_41442_p0() {
    mul_ln728_392_fu_41442_p0 = select_ln173_785_reg_123496.read();
}

void linear_forward_no_mu::thread_mul_ln728_392_fu_41442_p1() {
    mul_ln728_392_fu_41442_p1 = reg_17076.read();
}

void linear_forward_no_mu::thread_mul_ln728_392_fu_41442_p2() {
    mul_ln728_392_fu_41442_p2 = (!mul_ln728_392_fu_41442_p0.read().is_01() || !mul_ln728_392_fu_41442_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_392_fu_41442_p0.read()) * sc_bigint<8>(mul_ln728_392_fu_41442_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_393_fu_41467_p0() {
    mul_ln728_393_fu_41467_p0 = select_ln173_787_reg_123501.read();
}

void linear_forward_no_mu::thread_mul_ln728_393_fu_41467_p1() {
    mul_ln728_393_fu_41467_p1 = reg_17080.read();
}

void linear_forward_no_mu::thread_mul_ln728_393_fu_41467_p2() {
    mul_ln728_393_fu_41467_p2 = (!mul_ln728_393_fu_41467_p0.read().is_01() || !mul_ln728_393_fu_41467_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_393_fu_41467_p0.read()) * sc_bigint<8>(mul_ln728_393_fu_41467_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_394_fu_41492_p0() {
    mul_ln728_394_fu_41492_p0 = select_ln173_789_reg_123506.read();
}

void linear_forward_no_mu::thread_mul_ln728_394_fu_41492_p1() {
    mul_ln728_394_fu_41492_p1 = reg_17084.read();
}

void linear_forward_no_mu::thread_mul_ln728_394_fu_41492_p2() {
    mul_ln728_394_fu_41492_p2 = (!mul_ln728_394_fu_41492_p0.read().is_01() || !mul_ln728_394_fu_41492_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_394_fu_41492_p0.read()) * sc_bigint<8>(mul_ln728_394_fu_41492_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_395_fu_41517_p0() {
    mul_ln728_395_fu_41517_p0 = reg_17088.read();
}

void linear_forward_no_mu::thread_mul_ln728_395_fu_41517_p1() {
    mul_ln728_395_fu_41517_p1 = select_ln173_791_reg_123511.read();
}

void linear_forward_no_mu::thread_mul_ln728_395_fu_41517_p2() {
    mul_ln728_395_fu_41517_p2 = (!mul_ln728_395_fu_41517_p0.read().is_01() || !mul_ln728_395_fu_41517_p1.read().is_01())? sc_lv<9>(): sc_bigint<8>(mul_ln728_395_fu_41517_p0.read()) * sc_bigint<2>(mul_ln728_395_fu_41517_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_396_fu_41542_p0() {
    mul_ln728_396_fu_41542_p0 = select_ln173_793_reg_123516.read();
}

void linear_forward_no_mu::thread_mul_ln728_396_fu_41542_p1() {
    mul_ln728_396_fu_41542_p1 = reg_17092.read();
}

void linear_forward_no_mu::thread_mul_ln728_396_fu_41542_p2() {
    mul_ln728_396_fu_41542_p2 = (!mul_ln728_396_fu_41542_p0.read().is_01() || !mul_ln728_396_fu_41542_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_396_fu_41542_p0.read()) * sc_bigint<8>(mul_ln728_396_fu_41542_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_397_fu_41590_p0() {
    mul_ln728_397_fu_41590_p0 = select_ln173_795_fu_41574_p3.read();
}

void linear_forward_no_mu::thread_mul_ln728_397_fu_41590_p1() {
    mul_ln728_397_fu_41590_p1 = reg_17096.read();
}

void linear_forward_no_mu::thread_mul_ln728_397_fu_41590_p2() {
    mul_ln728_397_fu_41590_p2 = (!mul_ln728_397_fu_41590_p0.read().is_01() || !mul_ln728_397_fu_41590_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_397_fu_41590_p0.read()) * sc_bigint<8>(mul_ln728_397_fu_41590_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_398_fu_41626_p0() {
    mul_ln728_398_fu_41626_p0 = select_ln173_797_fu_41610_p3.read();
}

void linear_forward_no_mu::thread_mul_ln728_398_fu_41626_p1() {
    mul_ln728_398_fu_41626_p1 = reg_17100.read();
}

void linear_forward_no_mu::thread_mul_ln728_398_fu_41626_p2() {
    mul_ln728_398_fu_41626_p2 = (!mul_ln728_398_fu_41626_p0.read().is_01() || !mul_ln728_398_fu_41626_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_398_fu_41626_p0.read()) * sc_bigint<8>(mul_ln728_398_fu_41626_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_399_fu_41639_p0() {
    mul_ln728_399_fu_41639_p0 = reg_17104.read();
}

void linear_forward_no_mu::thread_mul_ln728_399_fu_41639_p1() {
    mul_ln728_399_fu_41639_p1 = select_ln173_799_reg_123521.read();
}

void linear_forward_no_mu::thread_mul_ln728_399_fu_41639_p2() {
    mul_ln728_399_fu_41639_p2 = (!mul_ln728_399_fu_41639_p0.read().is_01() || !mul_ln728_399_fu_41639_p1.read().is_01())? sc_lv<9>(): sc_bigint<8>(mul_ln728_399_fu_41639_p0.read()) * sc_bigint<2>(mul_ln728_399_fu_41639_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_39_fu_19493_p0() {
    mul_ln728_39_fu_19493_p0 = reg_17104.read();
}

void linear_forward_no_mu::thread_mul_ln728_39_fu_19493_p1() {
    mul_ln728_39_fu_19493_p1 = select_ln173_79_reg_120083.read();
}

void linear_forward_no_mu::thread_mul_ln728_39_fu_19493_p2() {
    mul_ln728_39_fu_19493_p2 = (!mul_ln728_39_fu_19493_p0.read().is_01() || !mul_ln728_39_fu_19493_p1.read().is_01())? sc_lv<9>(): sc_bigint<8>(mul_ln728_39_fu_19493_p0.read()) * sc_bigint<2>(mul_ln728_39_fu_19493_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_3_fu_17538_p0() {
    mul_ln728_3_fu_17538_p0 = reg_17088.read();
}

void linear_forward_no_mu::thread_mul_ln728_3_fu_17538_p1() {
    mul_ln728_3_fu_17538_p1 = select_ln173_7_fu_17522_p3.read();
}

void linear_forward_no_mu::thread_mul_ln728_3_fu_17538_p2() {
    mul_ln728_3_fu_17538_p2 = (!mul_ln728_3_fu_17538_p0.read().is_01() || !mul_ln728_3_fu_17538_p1.read().is_01())? sc_lv<9>(): sc_bigint<8>(mul_ln728_3_fu_17538_p0.read()) * sc_bigint<2>(mul_ln728_3_fu_17538_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_400_fu_41991_p0() {
    mul_ln728_400_fu_41991_p0 = select_ln173_801_reg_123566.read();
}

void linear_forward_no_mu::thread_mul_ln728_400_fu_41991_p1() {
    mul_ln728_400_fu_41991_p1 = reg_17076.read();
}

void linear_forward_no_mu::thread_mul_ln728_400_fu_41991_p2() {
    mul_ln728_400_fu_41991_p2 = (!mul_ln728_400_fu_41991_p0.read().is_01() || !mul_ln728_400_fu_41991_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_400_fu_41991_p0.read()) * sc_bigint<8>(mul_ln728_400_fu_41991_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_401_fu_42016_p0() {
    mul_ln728_401_fu_42016_p0 = select_ln173_803_reg_123571.read();
}

void linear_forward_no_mu::thread_mul_ln728_401_fu_42016_p1() {
    mul_ln728_401_fu_42016_p1 = reg_17080.read();
}

void linear_forward_no_mu::thread_mul_ln728_401_fu_42016_p2() {
    mul_ln728_401_fu_42016_p2 = (!mul_ln728_401_fu_42016_p0.read().is_01() || !mul_ln728_401_fu_42016_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_401_fu_42016_p0.read()) * sc_bigint<8>(mul_ln728_401_fu_42016_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_402_fu_42041_p0() {
    mul_ln728_402_fu_42041_p0 = select_ln173_805_reg_123576.read();
}

void linear_forward_no_mu::thread_mul_ln728_402_fu_42041_p1() {
    mul_ln728_402_fu_42041_p1 = reg_17084.read();
}

void linear_forward_no_mu::thread_mul_ln728_402_fu_42041_p2() {
    mul_ln728_402_fu_42041_p2 = (!mul_ln728_402_fu_42041_p0.read().is_01() || !mul_ln728_402_fu_42041_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_402_fu_42041_p0.read()) * sc_bigint<8>(mul_ln728_402_fu_42041_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_403_fu_42066_p0() {
    mul_ln728_403_fu_42066_p0 = reg_17088.read();
}

void linear_forward_no_mu::thread_mul_ln728_403_fu_42066_p1() {
    mul_ln728_403_fu_42066_p1 = select_ln173_807_reg_123581.read();
}

void linear_forward_no_mu::thread_mul_ln728_403_fu_42066_p2() {
    mul_ln728_403_fu_42066_p2 = (!mul_ln728_403_fu_42066_p0.read().is_01() || !mul_ln728_403_fu_42066_p1.read().is_01())? sc_lv<9>(): sc_bigint<8>(mul_ln728_403_fu_42066_p0.read()) * sc_bigint<2>(mul_ln728_403_fu_42066_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_404_fu_42091_p0() {
    mul_ln728_404_fu_42091_p0 = select_ln173_809_reg_123586.read();
}

void linear_forward_no_mu::thread_mul_ln728_404_fu_42091_p1() {
    mul_ln728_404_fu_42091_p1 = reg_17092.read();
}

void linear_forward_no_mu::thread_mul_ln728_404_fu_42091_p2() {
    mul_ln728_404_fu_42091_p2 = (!mul_ln728_404_fu_42091_p0.read().is_01() || !mul_ln728_404_fu_42091_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_404_fu_42091_p0.read()) * sc_bigint<8>(mul_ln728_404_fu_42091_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_405_fu_42116_p0() {
    mul_ln728_405_fu_42116_p0 = select_ln173_811_reg_123591.read();
}

void linear_forward_no_mu::thread_mul_ln728_405_fu_42116_p1() {
    mul_ln728_405_fu_42116_p1 = reg_17096.read();
}

void linear_forward_no_mu::thread_mul_ln728_405_fu_42116_p2() {
    mul_ln728_405_fu_42116_p2 = (!mul_ln728_405_fu_42116_p0.read().is_01() || !mul_ln728_405_fu_42116_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_405_fu_42116_p0.read()) * sc_bigint<8>(mul_ln728_405_fu_42116_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_406_fu_42164_p0() {
    mul_ln728_406_fu_42164_p0 = select_ln173_813_fu_42148_p3.read();
}

void linear_forward_no_mu::thread_mul_ln728_406_fu_42164_p1() {
    mul_ln728_406_fu_42164_p1 = reg_17100.read();
}

void linear_forward_no_mu::thread_mul_ln728_406_fu_42164_p2() {
    mul_ln728_406_fu_42164_p2 = (!mul_ln728_406_fu_42164_p0.read().is_01() || !mul_ln728_406_fu_42164_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_406_fu_42164_p0.read()) * sc_bigint<8>(mul_ln728_406_fu_42164_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_407_fu_42177_p0() {
    mul_ln728_407_fu_42177_p0 = reg_17104.read();
}

void linear_forward_no_mu::thread_mul_ln728_407_fu_42177_p1() {
    mul_ln728_407_fu_42177_p1 = select_ln173_815_reg_123596.read();
}

void linear_forward_no_mu::thread_mul_ln728_407_fu_42177_p2() {
    mul_ln728_407_fu_42177_p2 = (!mul_ln728_407_fu_42177_p0.read().is_01() || !mul_ln728_407_fu_42177_p1.read().is_01())? sc_lv<9>(): sc_bigint<8>(mul_ln728_407_fu_42177_p0.read()) * sc_bigint<2>(mul_ln728_407_fu_42177_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_408_fu_42489_p0() {
    mul_ln728_408_fu_42489_p0 = select_ln173_817_reg_123636.read();
}

void linear_forward_no_mu::thread_mul_ln728_408_fu_42489_p1() {
    mul_ln728_408_fu_42489_p1 = reg_17076.read();
}

void linear_forward_no_mu::thread_mul_ln728_408_fu_42489_p2() {
    mul_ln728_408_fu_42489_p2 = (!mul_ln728_408_fu_42489_p0.read().is_01() || !mul_ln728_408_fu_42489_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_408_fu_42489_p0.read()) * sc_bigint<8>(mul_ln728_408_fu_42489_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_409_fu_42514_p0() {
    mul_ln728_409_fu_42514_p0 = select_ln173_819_reg_123641.read();
}

void linear_forward_no_mu::thread_mul_ln728_409_fu_42514_p1() {
    mul_ln728_409_fu_42514_p1 = reg_17080.read();
}

void linear_forward_no_mu::thread_mul_ln728_409_fu_42514_p2() {
    mul_ln728_409_fu_42514_p2 = (!mul_ln728_409_fu_42514_p0.read().is_01() || !mul_ln728_409_fu_42514_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_409_fu_42514_p0.read()) * sc_bigint<8>(mul_ln728_409_fu_42514_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_40_fu_19808_p0() {
    mul_ln728_40_fu_19808_p0 = select_ln173_81_reg_120134.read();
}

void linear_forward_no_mu::thread_mul_ln728_40_fu_19808_p1() {
    mul_ln728_40_fu_19808_p1 = reg_17076.read();
}

void linear_forward_no_mu::thread_mul_ln728_40_fu_19808_p2() {
    mul_ln728_40_fu_19808_p2 = (!mul_ln728_40_fu_19808_p0.read().is_01() || !mul_ln728_40_fu_19808_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_40_fu_19808_p0.read()) * sc_bigint<8>(mul_ln728_40_fu_19808_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_410_fu_42539_p0() {
    mul_ln728_410_fu_42539_p0 = select_ln173_821_reg_123646.read();
}

void linear_forward_no_mu::thread_mul_ln728_410_fu_42539_p1() {
    mul_ln728_410_fu_42539_p1 = reg_17084.read();
}

void linear_forward_no_mu::thread_mul_ln728_410_fu_42539_p2() {
    mul_ln728_410_fu_42539_p2 = (!mul_ln728_410_fu_42539_p0.read().is_01() || !mul_ln728_410_fu_42539_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_410_fu_42539_p0.read()) * sc_bigint<8>(mul_ln728_410_fu_42539_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_411_fu_42564_p0() {
    mul_ln728_411_fu_42564_p0 = reg_17088.read();
}

void linear_forward_no_mu::thread_mul_ln728_411_fu_42564_p1() {
    mul_ln728_411_fu_42564_p1 = select_ln173_823_reg_123651.read();
}

void linear_forward_no_mu::thread_mul_ln728_411_fu_42564_p2() {
    mul_ln728_411_fu_42564_p2 = (!mul_ln728_411_fu_42564_p0.read().is_01() || !mul_ln728_411_fu_42564_p1.read().is_01())? sc_lv<9>(): sc_bigint<8>(mul_ln728_411_fu_42564_p0.read()) * sc_bigint<2>(mul_ln728_411_fu_42564_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_412_fu_42589_p0() {
    mul_ln728_412_fu_42589_p0 = select_ln173_825_reg_123656.read();
}

void linear_forward_no_mu::thread_mul_ln728_412_fu_42589_p1() {
    mul_ln728_412_fu_42589_p1 = reg_17092.read();
}

void linear_forward_no_mu::thread_mul_ln728_412_fu_42589_p2() {
    mul_ln728_412_fu_42589_p2 = (!mul_ln728_412_fu_42589_p0.read().is_01() || !mul_ln728_412_fu_42589_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_412_fu_42589_p0.read()) * sc_bigint<8>(mul_ln728_412_fu_42589_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_413_fu_42614_p0() {
    mul_ln728_413_fu_42614_p0 = select_ln173_827_reg_123661.read();
}

void linear_forward_no_mu::thread_mul_ln728_413_fu_42614_p1() {
    mul_ln728_413_fu_42614_p1 = reg_17096.read();
}

void linear_forward_no_mu::thread_mul_ln728_413_fu_42614_p2() {
    mul_ln728_413_fu_42614_p2 = (!mul_ln728_413_fu_42614_p0.read().is_01() || !mul_ln728_413_fu_42614_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_413_fu_42614_p0.read()) * sc_bigint<8>(mul_ln728_413_fu_42614_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_414_fu_42639_p0() {
    mul_ln728_414_fu_42639_p0 = select_ln173_829_reg_123666.read();
}

void linear_forward_no_mu::thread_mul_ln728_414_fu_42639_p1() {
    mul_ln728_414_fu_42639_p1 = reg_17100.read();
}

void linear_forward_no_mu::thread_mul_ln728_414_fu_42639_p2() {
    mul_ln728_414_fu_42639_p2 = (!mul_ln728_414_fu_42639_p0.read().is_01() || !mul_ln728_414_fu_42639_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_414_fu_42639_p0.read()) * sc_bigint<8>(mul_ln728_414_fu_42639_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_415_fu_42664_p0() {
    mul_ln728_415_fu_42664_p0 = reg_17104.read();
}

void linear_forward_no_mu::thread_mul_ln728_415_fu_42664_p1() {
    mul_ln728_415_fu_42664_p1 = select_ln173_831_reg_123671.read();
}

void linear_forward_no_mu::thread_mul_ln728_415_fu_42664_p2() {
    mul_ln728_415_fu_42664_p2 = (!mul_ln728_415_fu_42664_p0.read().is_01() || !mul_ln728_415_fu_42664_p1.read().is_01())? sc_lv<9>(): sc_bigint<8>(mul_ln728_415_fu_42664_p0.read()) * sc_bigint<2>(mul_ln728_415_fu_42664_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_416_fu_42946_p0() {
    mul_ln728_416_fu_42946_p0 = select_ln173_833_reg_123706.read();
}

void linear_forward_no_mu::thread_mul_ln728_416_fu_42946_p1() {
    mul_ln728_416_fu_42946_p1 = reg_17076.read();
}

void linear_forward_no_mu::thread_mul_ln728_416_fu_42946_p2() {
    mul_ln728_416_fu_42946_p2 = (!mul_ln728_416_fu_42946_p0.read().is_01() || !mul_ln728_416_fu_42946_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_416_fu_42946_p0.read()) * sc_bigint<8>(mul_ln728_416_fu_42946_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_417_fu_42971_p0() {
    mul_ln728_417_fu_42971_p0 = select_ln173_835_reg_123711.read();
}

void linear_forward_no_mu::thread_mul_ln728_417_fu_42971_p1() {
    mul_ln728_417_fu_42971_p1 = reg_17080.read();
}

void linear_forward_no_mu::thread_mul_ln728_417_fu_42971_p2() {
    mul_ln728_417_fu_42971_p2 = (!mul_ln728_417_fu_42971_p0.read().is_01() || !mul_ln728_417_fu_42971_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_417_fu_42971_p0.read()) * sc_bigint<8>(mul_ln728_417_fu_42971_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_418_fu_42996_p0() {
    mul_ln728_418_fu_42996_p0 = select_ln173_837_reg_123716.read();
}

void linear_forward_no_mu::thread_mul_ln728_418_fu_42996_p1() {
    mul_ln728_418_fu_42996_p1 = reg_17084.read();
}

void linear_forward_no_mu::thread_mul_ln728_418_fu_42996_p2() {
    mul_ln728_418_fu_42996_p2 = (!mul_ln728_418_fu_42996_p0.read().is_01() || !mul_ln728_418_fu_42996_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_418_fu_42996_p0.read()) * sc_bigint<8>(mul_ln728_418_fu_42996_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_419_fu_43021_p0() {
    mul_ln728_419_fu_43021_p0 = reg_17088.read();
}

void linear_forward_no_mu::thread_mul_ln728_419_fu_43021_p1() {
    mul_ln728_419_fu_43021_p1 = select_ln173_839_reg_123721.read();
}

void linear_forward_no_mu::thread_mul_ln728_419_fu_43021_p2() {
    mul_ln728_419_fu_43021_p2 = (!mul_ln728_419_fu_43021_p0.read().is_01() || !mul_ln728_419_fu_43021_p1.read().is_01())? sc_lv<9>(): sc_bigint<8>(mul_ln728_419_fu_43021_p0.read()) * sc_bigint<2>(mul_ln728_419_fu_43021_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_41_fu_19833_p0() {
    mul_ln728_41_fu_19833_p0 = select_ln173_83_reg_120139.read();
}

void linear_forward_no_mu::thread_mul_ln728_41_fu_19833_p1() {
    mul_ln728_41_fu_19833_p1 = reg_17080.read();
}

void linear_forward_no_mu::thread_mul_ln728_41_fu_19833_p2() {
    mul_ln728_41_fu_19833_p2 = (!mul_ln728_41_fu_19833_p0.read().is_01() || !mul_ln728_41_fu_19833_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_41_fu_19833_p0.read()) * sc_bigint<8>(mul_ln728_41_fu_19833_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_420_fu_43046_p0() {
    mul_ln728_420_fu_43046_p0 = select_ln173_841_reg_123726.read();
}

void linear_forward_no_mu::thread_mul_ln728_420_fu_43046_p1() {
    mul_ln728_420_fu_43046_p1 = reg_17092.read();
}

void linear_forward_no_mu::thread_mul_ln728_420_fu_43046_p2() {
    mul_ln728_420_fu_43046_p2 = (!mul_ln728_420_fu_43046_p0.read().is_01() || !mul_ln728_420_fu_43046_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_420_fu_43046_p0.read()) * sc_bigint<8>(mul_ln728_420_fu_43046_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_421_fu_43094_p0() {
    mul_ln728_421_fu_43094_p0 = select_ln173_843_fu_43078_p3.read();
}

void linear_forward_no_mu::thread_mul_ln728_421_fu_43094_p1() {
    mul_ln728_421_fu_43094_p1 = reg_17096.read();
}

void linear_forward_no_mu::thread_mul_ln728_421_fu_43094_p2() {
    mul_ln728_421_fu_43094_p2 = (!mul_ln728_421_fu_43094_p0.read().is_01() || !mul_ln728_421_fu_43094_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_421_fu_43094_p0.read()) * sc_bigint<8>(mul_ln728_421_fu_43094_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_422_fu_43130_p0() {
    mul_ln728_422_fu_43130_p0 = select_ln173_845_fu_43114_p3.read();
}

void linear_forward_no_mu::thread_mul_ln728_422_fu_43130_p1() {
    mul_ln728_422_fu_43130_p1 = reg_17100.read();
}

void linear_forward_no_mu::thread_mul_ln728_422_fu_43130_p2() {
    mul_ln728_422_fu_43130_p2 = (!mul_ln728_422_fu_43130_p0.read().is_01() || !mul_ln728_422_fu_43130_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_422_fu_43130_p0.read()) * sc_bigint<8>(mul_ln728_422_fu_43130_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_423_fu_43143_p0() {
    mul_ln728_423_fu_43143_p0 = reg_17104.read();
}

void linear_forward_no_mu::thread_mul_ln728_423_fu_43143_p1() {
    mul_ln728_423_fu_43143_p1 = select_ln173_847_reg_123731.read();
}

void linear_forward_no_mu::thread_mul_ln728_423_fu_43143_p2() {
    mul_ln728_423_fu_43143_p2 = (!mul_ln728_423_fu_43143_p0.read().is_01() || !mul_ln728_423_fu_43143_p1.read().is_01())? sc_lv<9>(): sc_bigint<8>(mul_ln728_423_fu_43143_p0.read()) * sc_bigint<2>(mul_ln728_423_fu_43143_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_424_fu_43458_p0() {
    mul_ln728_424_fu_43458_p0 = select_ln173_849_reg_123776.read();
}

void linear_forward_no_mu::thread_mul_ln728_424_fu_43458_p1() {
    mul_ln728_424_fu_43458_p1 = reg_17076.read();
}

void linear_forward_no_mu::thread_mul_ln728_424_fu_43458_p2() {
    mul_ln728_424_fu_43458_p2 = (!mul_ln728_424_fu_43458_p0.read().is_01() || !mul_ln728_424_fu_43458_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_424_fu_43458_p0.read()) * sc_bigint<8>(mul_ln728_424_fu_43458_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_425_fu_43483_p0() {
    mul_ln728_425_fu_43483_p0 = select_ln173_851_reg_123781.read();
}

void linear_forward_no_mu::thread_mul_ln728_425_fu_43483_p1() {
    mul_ln728_425_fu_43483_p1 = reg_17080.read();
}

void linear_forward_no_mu::thread_mul_ln728_425_fu_43483_p2() {
    mul_ln728_425_fu_43483_p2 = (!mul_ln728_425_fu_43483_p0.read().is_01() || !mul_ln728_425_fu_43483_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_425_fu_43483_p0.read()) * sc_bigint<8>(mul_ln728_425_fu_43483_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_426_fu_43508_p0() {
    mul_ln728_426_fu_43508_p0 = select_ln173_853_reg_123786.read();
}

void linear_forward_no_mu::thread_mul_ln728_426_fu_43508_p1() {
    mul_ln728_426_fu_43508_p1 = reg_17084.read();
}

void linear_forward_no_mu::thread_mul_ln728_426_fu_43508_p2() {
    mul_ln728_426_fu_43508_p2 = (!mul_ln728_426_fu_43508_p0.read().is_01() || !mul_ln728_426_fu_43508_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_426_fu_43508_p0.read()) * sc_bigint<8>(mul_ln728_426_fu_43508_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_427_fu_43533_p0() {
    mul_ln728_427_fu_43533_p0 = reg_17088.read();
}

void linear_forward_no_mu::thread_mul_ln728_427_fu_43533_p1() {
    mul_ln728_427_fu_43533_p1 = select_ln173_855_reg_123791.read();
}

void linear_forward_no_mu::thread_mul_ln728_427_fu_43533_p2() {
    mul_ln728_427_fu_43533_p2 = (!mul_ln728_427_fu_43533_p0.read().is_01() || !mul_ln728_427_fu_43533_p1.read().is_01())? sc_lv<9>(): sc_bigint<8>(mul_ln728_427_fu_43533_p0.read()) * sc_bigint<2>(mul_ln728_427_fu_43533_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_428_fu_43558_p0() {
    mul_ln728_428_fu_43558_p0 = select_ln173_857_reg_123796.read();
}

void linear_forward_no_mu::thread_mul_ln728_428_fu_43558_p1() {
    mul_ln728_428_fu_43558_p1 = reg_17092.read();
}

void linear_forward_no_mu::thread_mul_ln728_428_fu_43558_p2() {
    mul_ln728_428_fu_43558_p2 = (!mul_ln728_428_fu_43558_p0.read().is_01() || !mul_ln728_428_fu_43558_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_428_fu_43558_p0.read()) * sc_bigint<8>(mul_ln728_428_fu_43558_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_429_fu_43583_p0() {
    mul_ln728_429_fu_43583_p0 = select_ln173_859_reg_123801.read();
}

void linear_forward_no_mu::thread_mul_ln728_429_fu_43583_p1() {
    mul_ln728_429_fu_43583_p1 = reg_17096.read();
}

void linear_forward_no_mu::thread_mul_ln728_429_fu_43583_p2() {
    mul_ln728_429_fu_43583_p2 = (!mul_ln728_429_fu_43583_p0.read().is_01() || !mul_ln728_429_fu_43583_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_429_fu_43583_p0.read()) * sc_bigint<8>(mul_ln728_429_fu_43583_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_42_fu_19858_p0() {
    mul_ln728_42_fu_19858_p0 = select_ln173_85_reg_120144.read();
}

void linear_forward_no_mu::thread_mul_ln728_42_fu_19858_p1() {
    mul_ln728_42_fu_19858_p1 = reg_17084.read();
}

void linear_forward_no_mu::thread_mul_ln728_42_fu_19858_p2() {
    mul_ln728_42_fu_19858_p2 = (!mul_ln728_42_fu_19858_p0.read().is_01() || !mul_ln728_42_fu_19858_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_42_fu_19858_p0.read()) * sc_bigint<8>(mul_ln728_42_fu_19858_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_430_fu_43631_p0() {
    mul_ln728_430_fu_43631_p0 = select_ln173_861_fu_43615_p3.read();
}

void linear_forward_no_mu::thread_mul_ln728_430_fu_43631_p1() {
    mul_ln728_430_fu_43631_p1 = reg_17100.read();
}

void linear_forward_no_mu::thread_mul_ln728_430_fu_43631_p2() {
    mul_ln728_430_fu_43631_p2 = (!mul_ln728_430_fu_43631_p0.read().is_01() || !mul_ln728_430_fu_43631_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_430_fu_43631_p0.read()) * sc_bigint<8>(mul_ln728_430_fu_43631_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_431_fu_43644_p0() {
    mul_ln728_431_fu_43644_p0 = reg_17104.read();
}

void linear_forward_no_mu::thread_mul_ln728_431_fu_43644_p1() {
    mul_ln728_431_fu_43644_p1 = select_ln173_863_reg_123806.read();
}

void linear_forward_no_mu::thread_mul_ln728_431_fu_43644_p2() {
    mul_ln728_431_fu_43644_p2 = (!mul_ln728_431_fu_43644_p0.read().is_01() || !mul_ln728_431_fu_43644_p1.read().is_01())? sc_lv<9>(): sc_bigint<8>(mul_ln728_431_fu_43644_p0.read()) * sc_bigint<2>(mul_ln728_431_fu_43644_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_432_fu_43955_p0() {
    mul_ln728_432_fu_43955_p0 = select_ln173_865_reg_123841.read();
}

void linear_forward_no_mu::thread_mul_ln728_432_fu_43955_p1() {
    mul_ln728_432_fu_43955_p1 = reg_17076.read();
}

void linear_forward_no_mu::thread_mul_ln728_432_fu_43955_p2() {
    mul_ln728_432_fu_43955_p2 = (!mul_ln728_432_fu_43955_p0.read().is_01() || !mul_ln728_432_fu_43955_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_432_fu_43955_p0.read()) * sc_bigint<8>(mul_ln728_432_fu_43955_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_433_fu_43980_p0() {
    mul_ln728_433_fu_43980_p0 = select_ln173_867_reg_123846.read();
}

void linear_forward_no_mu::thread_mul_ln728_433_fu_43980_p1() {
    mul_ln728_433_fu_43980_p1 = reg_17080.read();
}

void linear_forward_no_mu::thread_mul_ln728_433_fu_43980_p2() {
    mul_ln728_433_fu_43980_p2 = (!mul_ln728_433_fu_43980_p0.read().is_01() || !mul_ln728_433_fu_43980_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_433_fu_43980_p0.read()) * sc_bigint<8>(mul_ln728_433_fu_43980_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_434_fu_44005_p0() {
    mul_ln728_434_fu_44005_p0 = select_ln173_869_reg_123851.read();
}

void linear_forward_no_mu::thread_mul_ln728_434_fu_44005_p1() {
    mul_ln728_434_fu_44005_p1 = reg_17084.read();
}

void linear_forward_no_mu::thread_mul_ln728_434_fu_44005_p2() {
    mul_ln728_434_fu_44005_p2 = (!mul_ln728_434_fu_44005_p0.read().is_01() || !mul_ln728_434_fu_44005_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_434_fu_44005_p0.read()) * sc_bigint<8>(mul_ln728_434_fu_44005_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_435_fu_44030_p0() {
    mul_ln728_435_fu_44030_p0 = reg_17088.read();
}

void linear_forward_no_mu::thread_mul_ln728_435_fu_44030_p1() {
    mul_ln728_435_fu_44030_p1 = select_ln173_871_reg_123856.read();
}

void linear_forward_no_mu::thread_mul_ln728_435_fu_44030_p2() {
    mul_ln728_435_fu_44030_p2 = (!mul_ln728_435_fu_44030_p0.read().is_01() || !mul_ln728_435_fu_44030_p1.read().is_01())? sc_lv<9>(): sc_bigint<8>(mul_ln728_435_fu_44030_p0.read()) * sc_bigint<2>(mul_ln728_435_fu_44030_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_436_fu_44055_p0() {
    mul_ln728_436_fu_44055_p0 = select_ln173_873_reg_123861.read();
}

void linear_forward_no_mu::thread_mul_ln728_436_fu_44055_p1() {
    mul_ln728_436_fu_44055_p1 = reg_17092.read();
}

void linear_forward_no_mu::thread_mul_ln728_436_fu_44055_p2() {
    mul_ln728_436_fu_44055_p2 = (!mul_ln728_436_fu_44055_p0.read().is_01() || !mul_ln728_436_fu_44055_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_436_fu_44055_p0.read()) * sc_bigint<8>(mul_ln728_436_fu_44055_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_437_fu_44080_p0() {
    mul_ln728_437_fu_44080_p0 = select_ln173_875_reg_123866.read();
}

void linear_forward_no_mu::thread_mul_ln728_437_fu_44080_p1() {
    mul_ln728_437_fu_44080_p1 = reg_17096.read();
}

void linear_forward_no_mu::thread_mul_ln728_437_fu_44080_p2() {
    mul_ln728_437_fu_44080_p2 = (!mul_ln728_437_fu_44080_p0.read().is_01() || !mul_ln728_437_fu_44080_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_437_fu_44080_p0.read()) * sc_bigint<8>(mul_ln728_437_fu_44080_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_438_fu_44105_p0() {
    mul_ln728_438_fu_44105_p0 = select_ln173_877_reg_123871.read();
}

void linear_forward_no_mu::thread_mul_ln728_438_fu_44105_p1() {
    mul_ln728_438_fu_44105_p1 = reg_17100.read();
}

void linear_forward_no_mu::thread_mul_ln728_438_fu_44105_p2() {
    mul_ln728_438_fu_44105_p2 = (!mul_ln728_438_fu_44105_p0.read().is_01() || !mul_ln728_438_fu_44105_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_438_fu_44105_p0.read()) * sc_bigint<8>(mul_ln728_438_fu_44105_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_439_fu_44130_p0() {
    mul_ln728_439_fu_44130_p0 = reg_17104.read();
}

void linear_forward_no_mu::thread_mul_ln728_439_fu_44130_p1() {
    mul_ln728_439_fu_44130_p1 = select_ln173_879_reg_123876.read();
}

void linear_forward_no_mu::thread_mul_ln728_439_fu_44130_p2() {
    mul_ln728_439_fu_44130_p2 = (!mul_ln728_439_fu_44130_p0.read().is_01() || !mul_ln728_439_fu_44130_p1.read().is_01())? sc_lv<9>(): sc_bigint<8>(mul_ln728_439_fu_44130_p0.read()) * sc_bigint<2>(mul_ln728_439_fu_44130_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_43_fu_19883_p0() {
    mul_ln728_43_fu_19883_p0 = reg_17088.read();
}

void linear_forward_no_mu::thread_mul_ln728_43_fu_19883_p1() {
    mul_ln728_43_fu_19883_p1 = select_ln173_87_reg_120149.read();
}

void linear_forward_no_mu::thread_mul_ln728_43_fu_19883_p2() {
    mul_ln728_43_fu_19883_p2 = (!mul_ln728_43_fu_19883_p0.read().is_01() || !mul_ln728_43_fu_19883_p1.read().is_01())? sc_lv<9>(): sc_bigint<8>(mul_ln728_43_fu_19883_p0.read()) * sc_bigint<2>(mul_ln728_43_fu_19883_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_440_fu_44413_p0() {
    mul_ln728_440_fu_44413_p0 = select_ln173_881_reg_123911.read();
}

void linear_forward_no_mu::thread_mul_ln728_440_fu_44413_p1() {
    mul_ln728_440_fu_44413_p1 = reg_17076.read();
}

void linear_forward_no_mu::thread_mul_ln728_440_fu_44413_p2() {
    mul_ln728_440_fu_44413_p2 = (!mul_ln728_440_fu_44413_p0.read().is_01() || !mul_ln728_440_fu_44413_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_440_fu_44413_p0.read()) * sc_bigint<8>(mul_ln728_440_fu_44413_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_441_fu_44438_p0() {
    mul_ln728_441_fu_44438_p0 = select_ln173_883_reg_123916.read();
}

void linear_forward_no_mu::thread_mul_ln728_441_fu_44438_p1() {
    mul_ln728_441_fu_44438_p1 = reg_17080.read();
}

void linear_forward_no_mu::thread_mul_ln728_441_fu_44438_p2() {
    mul_ln728_441_fu_44438_p2 = (!mul_ln728_441_fu_44438_p0.read().is_01() || !mul_ln728_441_fu_44438_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_441_fu_44438_p0.read()) * sc_bigint<8>(mul_ln728_441_fu_44438_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_442_fu_44463_p0() {
    mul_ln728_442_fu_44463_p0 = select_ln173_885_reg_123921.read();
}

void linear_forward_no_mu::thread_mul_ln728_442_fu_44463_p1() {
    mul_ln728_442_fu_44463_p1 = reg_17084.read();
}

void linear_forward_no_mu::thread_mul_ln728_442_fu_44463_p2() {
    mul_ln728_442_fu_44463_p2 = (!mul_ln728_442_fu_44463_p0.read().is_01() || !mul_ln728_442_fu_44463_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_442_fu_44463_p0.read()) * sc_bigint<8>(mul_ln728_442_fu_44463_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_443_fu_44488_p0() {
    mul_ln728_443_fu_44488_p0 = reg_17088.read();
}

void linear_forward_no_mu::thread_mul_ln728_443_fu_44488_p1() {
    mul_ln728_443_fu_44488_p1 = select_ln173_887_reg_123926.read();
}

void linear_forward_no_mu::thread_mul_ln728_443_fu_44488_p2() {
    mul_ln728_443_fu_44488_p2 = (!mul_ln728_443_fu_44488_p0.read().is_01() || !mul_ln728_443_fu_44488_p1.read().is_01())? sc_lv<9>(): sc_bigint<8>(mul_ln728_443_fu_44488_p0.read()) * sc_bigint<2>(mul_ln728_443_fu_44488_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_444_fu_44513_p0() {
    mul_ln728_444_fu_44513_p0 = select_ln173_889_reg_123931.read();
}

void linear_forward_no_mu::thread_mul_ln728_444_fu_44513_p1() {
    mul_ln728_444_fu_44513_p1 = reg_17092.read();
}

void linear_forward_no_mu::thread_mul_ln728_444_fu_44513_p2() {
    mul_ln728_444_fu_44513_p2 = (!mul_ln728_444_fu_44513_p0.read().is_01() || !mul_ln728_444_fu_44513_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_444_fu_44513_p0.read()) * sc_bigint<8>(mul_ln728_444_fu_44513_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_445_fu_44561_p0() {
    mul_ln728_445_fu_44561_p0 = select_ln173_891_fu_44545_p3.read();
}

void linear_forward_no_mu::thread_mul_ln728_445_fu_44561_p1() {
    mul_ln728_445_fu_44561_p1 = reg_17096.read();
}

void linear_forward_no_mu::thread_mul_ln728_445_fu_44561_p2() {
    mul_ln728_445_fu_44561_p2 = (!mul_ln728_445_fu_44561_p0.read().is_01() || !mul_ln728_445_fu_44561_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_445_fu_44561_p0.read()) * sc_bigint<8>(mul_ln728_445_fu_44561_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_446_fu_44597_p0() {
    mul_ln728_446_fu_44597_p0 = select_ln173_893_fu_44581_p3.read();
}

void linear_forward_no_mu::thread_mul_ln728_446_fu_44597_p1() {
    mul_ln728_446_fu_44597_p1 = reg_17100.read();
}

void linear_forward_no_mu::thread_mul_ln728_446_fu_44597_p2() {
    mul_ln728_446_fu_44597_p2 = (!mul_ln728_446_fu_44597_p0.read().is_01() || !mul_ln728_446_fu_44597_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_446_fu_44597_p0.read()) * sc_bigint<8>(mul_ln728_446_fu_44597_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_447_fu_44610_p0() {
    mul_ln728_447_fu_44610_p0 = reg_17104.read();
}

void linear_forward_no_mu::thread_mul_ln728_447_fu_44610_p1() {
    mul_ln728_447_fu_44610_p1 = select_ln173_895_reg_123936.read();
}

void linear_forward_no_mu::thread_mul_ln728_447_fu_44610_p2() {
    mul_ln728_447_fu_44610_p2 = (!mul_ln728_447_fu_44610_p0.read().is_01() || !mul_ln728_447_fu_44610_p1.read().is_01())? sc_lv<9>(): sc_bigint<8>(mul_ln728_447_fu_44610_p0.read()) * sc_bigint<2>(mul_ln728_447_fu_44610_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_448_fu_44936_p0() {
    mul_ln728_448_fu_44936_p0 = select_ln173_897_reg_123981.read();
}

void linear_forward_no_mu::thread_mul_ln728_448_fu_44936_p1() {
    mul_ln728_448_fu_44936_p1 = reg_17076.read();
}

void linear_forward_no_mu::thread_mul_ln728_448_fu_44936_p2() {
    mul_ln728_448_fu_44936_p2 = (!mul_ln728_448_fu_44936_p0.read().is_01() || !mul_ln728_448_fu_44936_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_448_fu_44936_p0.read()) * sc_bigint<8>(mul_ln728_448_fu_44936_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_449_fu_44961_p0() {
    mul_ln728_449_fu_44961_p0 = select_ln173_899_reg_123986.read();
}

void linear_forward_no_mu::thread_mul_ln728_449_fu_44961_p1() {
    mul_ln728_449_fu_44961_p1 = reg_17080.read();
}

void linear_forward_no_mu::thread_mul_ln728_449_fu_44961_p2() {
    mul_ln728_449_fu_44961_p2 = (!mul_ln728_449_fu_44961_p0.read().is_01() || !mul_ln728_449_fu_44961_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_449_fu_44961_p0.read()) * sc_bigint<8>(mul_ln728_449_fu_44961_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_44_fu_19908_p0() {
    mul_ln728_44_fu_19908_p0 = select_ln173_89_reg_120154.read();
}

void linear_forward_no_mu::thread_mul_ln728_44_fu_19908_p1() {
    mul_ln728_44_fu_19908_p1 = reg_17092.read();
}

void linear_forward_no_mu::thread_mul_ln728_44_fu_19908_p2() {
    mul_ln728_44_fu_19908_p2 = (!mul_ln728_44_fu_19908_p0.read().is_01() || !mul_ln728_44_fu_19908_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_44_fu_19908_p0.read()) * sc_bigint<8>(mul_ln728_44_fu_19908_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_450_fu_44986_p0() {
    mul_ln728_450_fu_44986_p0 = select_ln173_901_reg_123991.read();
}

void linear_forward_no_mu::thread_mul_ln728_450_fu_44986_p1() {
    mul_ln728_450_fu_44986_p1 = reg_17084.read();
}

void linear_forward_no_mu::thread_mul_ln728_450_fu_44986_p2() {
    mul_ln728_450_fu_44986_p2 = (!mul_ln728_450_fu_44986_p0.read().is_01() || !mul_ln728_450_fu_44986_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_450_fu_44986_p0.read()) * sc_bigint<8>(mul_ln728_450_fu_44986_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_451_fu_45011_p0() {
    mul_ln728_451_fu_45011_p0 = reg_17088.read();
}

void linear_forward_no_mu::thread_mul_ln728_451_fu_45011_p1() {
    mul_ln728_451_fu_45011_p1 = select_ln173_903_reg_123996.read();
}

void linear_forward_no_mu::thread_mul_ln728_451_fu_45011_p2() {
    mul_ln728_451_fu_45011_p2 = (!mul_ln728_451_fu_45011_p0.read().is_01() || !mul_ln728_451_fu_45011_p1.read().is_01())? sc_lv<9>(): sc_bigint<8>(mul_ln728_451_fu_45011_p0.read()) * sc_bigint<2>(mul_ln728_451_fu_45011_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_452_fu_45036_p0() {
    mul_ln728_452_fu_45036_p0 = select_ln173_905_reg_124001.read();
}

void linear_forward_no_mu::thread_mul_ln728_452_fu_45036_p1() {
    mul_ln728_452_fu_45036_p1 = reg_17092.read();
}

void linear_forward_no_mu::thread_mul_ln728_452_fu_45036_p2() {
    mul_ln728_452_fu_45036_p2 = (!mul_ln728_452_fu_45036_p0.read().is_01() || !mul_ln728_452_fu_45036_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_452_fu_45036_p0.read()) * sc_bigint<8>(mul_ln728_452_fu_45036_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_453_fu_45061_p0() {
    mul_ln728_453_fu_45061_p0 = select_ln173_907_reg_124006.read();
}

void linear_forward_no_mu::thread_mul_ln728_453_fu_45061_p1() {
    mul_ln728_453_fu_45061_p1 = reg_17096.read();
}

void linear_forward_no_mu::thread_mul_ln728_453_fu_45061_p2() {
    mul_ln728_453_fu_45061_p2 = (!mul_ln728_453_fu_45061_p0.read().is_01() || !mul_ln728_453_fu_45061_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_453_fu_45061_p0.read()) * sc_bigint<8>(mul_ln728_453_fu_45061_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_454_fu_45109_p0() {
    mul_ln728_454_fu_45109_p0 = select_ln173_909_fu_45093_p3.read();
}

void linear_forward_no_mu::thread_mul_ln728_454_fu_45109_p1() {
    mul_ln728_454_fu_45109_p1 = reg_17100.read();
}

void linear_forward_no_mu::thread_mul_ln728_454_fu_45109_p2() {
    mul_ln728_454_fu_45109_p2 = (!mul_ln728_454_fu_45109_p0.read().is_01() || !mul_ln728_454_fu_45109_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_454_fu_45109_p0.read()) * sc_bigint<8>(mul_ln728_454_fu_45109_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_455_fu_45122_p0() {
    mul_ln728_455_fu_45122_p0 = reg_17104.read();
}

void linear_forward_no_mu::thread_mul_ln728_455_fu_45122_p1() {
    mul_ln728_455_fu_45122_p1 = select_ln173_911_reg_124011.read();
}

void linear_forward_no_mu::thread_mul_ln728_455_fu_45122_p2() {
    mul_ln728_455_fu_45122_p2 = (!mul_ln728_455_fu_45122_p0.read().is_01() || !mul_ln728_455_fu_45122_p1.read().is_01())? sc_lv<9>(): sc_bigint<8>(mul_ln728_455_fu_45122_p0.read()) * sc_bigint<2>(mul_ln728_455_fu_45122_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_456_fu_45434_p0() {
    mul_ln728_456_fu_45434_p0 = select_ln173_913_reg_124051.read();
}

void linear_forward_no_mu::thread_mul_ln728_456_fu_45434_p1() {
    mul_ln728_456_fu_45434_p1 = reg_17076.read();
}

void linear_forward_no_mu::thread_mul_ln728_456_fu_45434_p2() {
    mul_ln728_456_fu_45434_p2 = (!mul_ln728_456_fu_45434_p0.read().is_01() || !mul_ln728_456_fu_45434_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_456_fu_45434_p0.read()) * sc_bigint<8>(mul_ln728_456_fu_45434_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_457_fu_45459_p0() {
    mul_ln728_457_fu_45459_p0 = select_ln173_915_reg_124056.read();
}

void linear_forward_no_mu::thread_mul_ln728_457_fu_45459_p1() {
    mul_ln728_457_fu_45459_p1 = reg_17080.read();
}

void linear_forward_no_mu::thread_mul_ln728_457_fu_45459_p2() {
    mul_ln728_457_fu_45459_p2 = (!mul_ln728_457_fu_45459_p0.read().is_01() || !mul_ln728_457_fu_45459_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_457_fu_45459_p0.read()) * sc_bigint<8>(mul_ln728_457_fu_45459_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_458_fu_45484_p0() {
    mul_ln728_458_fu_45484_p0 = select_ln173_917_reg_124061.read();
}

void linear_forward_no_mu::thread_mul_ln728_458_fu_45484_p1() {
    mul_ln728_458_fu_45484_p1 = reg_17084.read();
}

void linear_forward_no_mu::thread_mul_ln728_458_fu_45484_p2() {
    mul_ln728_458_fu_45484_p2 = (!mul_ln728_458_fu_45484_p0.read().is_01() || !mul_ln728_458_fu_45484_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_458_fu_45484_p0.read()) * sc_bigint<8>(mul_ln728_458_fu_45484_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_459_fu_45509_p0() {
    mul_ln728_459_fu_45509_p0 = reg_17088.read();
}

void linear_forward_no_mu::thread_mul_ln728_459_fu_45509_p1() {
    mul_ln728_459_fu_45509_p1 = select_ln173_919_reg_124066.read();
}

void linear_forward_no_mu::thread_mul_ln728_459_fu_45509_p2() {
    mul_ln728_459_fu_45509_p2 = (!mul_ln728_459_fu_45509_p0.read().is_01() || !mul_ln728_459_fu_45509_p1.read().is_01())? sc_lv<9>(): sc_bigint<8>(mul_ln728_459_fu_45509_p0.read()) * sc_bigint<2>(mul_ln728_459_fu_45509_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_45_fu_19933_p0() {
    mul_ln728_45_fu_19933_p0 = select_ln173_91_reg_120159.read();
}

void linear_forward_no_mu::thread_mul_ln728_45_fu_19933_p1() {
    mul_ln728_45_fu_19933_p1 = reg_17096.read();
}

void linear_forward_no_mu::thread_mul_ln728_45_fu_19933_p2() {
    mul_ln728_45_fu_19933_p2 = (!mul_ln728_45_fu_19933_p0.read().is_01() || !mul_ln728_45_fu_19933_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_45_fu_19933_p0.read()) * sc_bigint<8>(mul_ln728_45_fu_19933_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_460_fu_45534_p0() {
    mul_ln728_460_fu_45534_p0 = select_ln173_921_reg_124071.read();
}

void linear_forward_no_mu::thread_mul_ln728_460_fu_45534_p1() {
    mul_ln728_460_fu_45534_p1 = reg_17092.read();
}

void linear_forward_no_mu::thread_mul_ln728_460_fu_45534_p2() {
    mul_ln728_460_fu_45534_p2 = (!mul_ln728_460_fu_45534_p0.read().is_01() || !mul_ln728_460_fu_45534_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_460_fu_45534_p0.read()) * sc_bigint<8>(mul_ln728_460_fu_45534_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_461_fu_45559_p0() {
    mul_ln728_461_fu_45559_p0 = select_ln173_923_reg_124076.read();
}

void linear_forward_no_mu::thread_mul_ln728_461_fu_45559_p1() {
    mul_ln728_461_fu_45559_p1 = reg_17096.read();
}

void linear_forward_no_mu::thread_mul_ln728_461_fu_45559_p2() {
    mul_ln728_461_fu_45559_p2 = (!mul_ln728_461_fu_45559_p0.read().is_01() || !mul_ln728_461_fu_45559_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_461_fu_45559_p0.read()) * sc_bigint<8>(mul_ln728_461_fu_45559_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_462_fu_45584_p0() {
    mul_ln728_462_fu_45584_p0 = select_ln173_925_reg_124081.read();
}

void linear_forward_no_mu::thread_mul_ln728_462_fu_45584_p1() {
    mul_ln728_462_fu_45584_p1 = reg_17100.read();
}

void linear_forward_no_mu::thread_mul_ln728_462_fu_45584_p2() {
    mul_ln728_462_fu_45584_p2 = (!mul_ln728_462_fu_45584_p0.read().is_01() || !mul_ln728_462_fu_45584_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_462_fu_45584_p0.read()) * sc_bigint<8>(mul_ln728_462_fu_45584_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_463_fu_45609_p0() {
    mul_ln728_463_fu_45609_p0 = reg_17104.read();
}

void linear_forward_no_mu::thread_mul_ln728_463_fu_45609_p1() {
    mul_ln728_463_fu_45609_p1 = select_ln173_927_reg_124086.read();
}

void linear_forward_no_mu::thread_mul_ln728_463_fu_45609_p2() {
    mul_ln728_463_fu_45609_p2 = (!mul_ln728_463_fu_45609_p0.read().is_01() || !mul_ln728_463_fu_45609_p1.read().is_01())? sc_lv<9>(): sc_bigint<8>(mul_ln728_463_fu_45609_p0.read()) * sc_bigint<2>(mul_ln728_463_fu_45609_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_464_fu_45891_p0() {
    mul_ln728_464_fu_45891_p0 = select_ln173_929_reg_124121.read();
}

void linear_forward_no_mu::thread_mul_ln728_464_fu_45891_p1() {
    mul_ln728_464_fu_45891_p1 = reg_17076.read();
}

void linear_forward_no_mu::thread_mul_ln728_464_fu_45891_p2() {
    mul_ln728_464_fu_45891_p2 = (!mul_ln728_464_fu_45891_p0.read().is_01() || !mul_ln728_464_fu_45891_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_464_fu_45891_p0.read()) * sc_bigint<8>(mul_ln728_464_fu_45891_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_465_fu_45916_p0() {
    mul_ln728_465_fu_45916_p0 = select_ln173_931_reg_124126.read();
}

void linear_forward_no_mu::thread_mul_ln728_465_fu_45916_p1() {
    mul_ln728_465_fu_45916_p1 = reg_17080.read();
}

void linear_forward_no_mu::thread_mul_ln728_465_fu_45916_p2() {
    mul_ln728_465_fu_45916_p2 = (!mul_ln728_465_fu_45916_p0.read().is_01() || !mul_ln728_465_fu_45916_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_465_fu_45916_p0.read()) * sc_bigint<8>(mul_ln728_465_fu_45916_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_466_fu_45941_p0() {
    mul_ln728_466_fu_45941_p0 = select_ln173_933_reg_124131.read();
}

void linear_forward_no_mu::thread_mul_ln728_466_fu_45941_p1() {
    mul_ln728_466_fu_45941_p1 = reg_17084.read();
}

void linear_forward_no_mu::thread_mul_ln728_466_fu_45941_p2() {
    mul_ln728_466_fu_45941_p2 = (!mul_ln728_466_fu_45941_p0.read().is_01() || !mul_ln728_466_fu_45941_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_466_fu_45941_p0.read()) * sc_bigint<8>(mul_ln728_466_fu_45941_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_467_fu_45966_p0() {
    mul_ln728_467_fu_45966_p0 = reg_17088.read();
}

void linear_forward_no_mu::thread_mul_ln728_467_fu_45966_p1() {
    mul_ln728_467_fu_45966_p1 = select_ln173_935_reg_124136.read();
}

void linear_forward_no_mu::thread_mul_ln728_467_fu_45966_p2() {
    mul_ln728_467_fu_45966_p2 = (!mul_ln728_467_fu_45966_p0.read().is_01() || !mul_ln728_467_fu_45966_p1.read().is_01())? sc_lv<9>(): sc_bigint<8>(mul_ln728_467_fu_45966_p0.read()) * sc_bigint<2>(mul_ln728_467_fu_45966_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_468_fu_45991_p0() {
    mul_ln728_468_fu_45991_p0 = select_ln173_937_reg_124141.read();
}

void linear_forward_no_mu::thread_mul_ln728_468_fu_45991_p1() {
    mul_ln728_468_fu_45991_p1 = reg_17092.read();
}

void linear_forward_no_mu::thread_mul_ln728_468_fu_45991_p2() {
    mul_ln728_468_fu_45991_p2 = (!mul_ln728_468_fu_45991_p0.read().is_01() || !mul_ln728_468_fu_45991_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_468_fu_45991_p0.read()) * sc_bigint<8>(mul_ln728_468_fu_45991_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_469_fu_46039_p0() {
    mul_ln728_469_fu_46039_p0 = select_ln173_939_fu_46023_p3.read();
}

void linear_forward_no_mu::thread_mul_ln728_469_fu_46039_p1() {
    mul_ln728_469_fu_46039_p1 = reg_17096.read();
}

void linear_forward_no_mu::thread_mul_ln728_469_fu_46039_p2() {
    mul_ln728_469_fu_46039_p2 = (!mul_ln728_469_fu_46039_p0.read().is_01() || !mul_ln728_469_fu_46039_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_469_fu_46039_p0.read()) * sc_bigint<8>(mul_ln728_469_fu_46039_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_46_fu_19981_p0() {
    mul_ln728_46_fu_19981_p0 = select_ln173_93_fu_19965_p3.read();
}

void linear_forward_no_mu::thread_mul_ln728_46_fu_19981_p1() {
    mul_ln728_46_fu_19981_p1 = reg_17100.read();
}

void linear_forward_no_mu::thread_mul_ln728_46_fu_19981_p2() {
    mul_ln728_46_fu_19981_p2 = (!mul_ln728_46_fu_19981_p0.read().is_01() || !mul_ln728_46_fu_19981_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_46_fu_19981_p0.read()) * sc_bigint<8>(mul_ln728_46_fu_19981_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_470_fu_46075_p0() {
    mul_ln728_470_fu_46075_p0 = select_ln173_941_fu_46059_p3.read();
}

void linear_forward_no_mu::thread_mul_ln728_470_fu_46075_p1() {
    mul_ln728_470_fu_46075_p1 = reg_17100.read();
}

void linear_forward_no_mu::thread_mul_ln728_470_fu_46075_p2() {
    mul_ln728_470_fu_46075_p2 = (!mul_ln728_470_fu_46075_p0.read().is_01() || !mul_ln728_470_fu_46075_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_470_fu_46075_p0.read()) * sc_bigint<8>(mul_ln728_470_fu_46075_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_471_fu_46088_p0() {
    mul_ln728_471_fu_46088_p0 = reg_17104.read();
}

void linear_forward_no_mu::thread_mul_ln728_471_fu_46088_p1() {
    mul_ln728_471_fu_46088_p1 = select_ln173_943_reg_124146.read();
}

void linear_forward_no_mu::thread_mul_ln728_471_fu_46088_p2() {
    mul_ln728_471_fu_46088_p2 = (!mul_ln728_471_fu_46088_p0.read().is_01() || !mul_ln728_471_fu_46088_p1.read().is_01())? sc_lv<9>(): sc_bigint<8>(mul_ln728_471_fu_46088_p0.read()) * sc_bigint<2>(mul_ln728_471_fu_46088_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_472_fu_46403_p0() {
    mul_ln728_472_fu_46403_p0 = select_ln173_945_reg_124191.read();
}

void linear_forward_no_mu::thread_mul_ln728_472_fu_46403_p1() {
    mul_ln728_472_fu_46403_p1 = reg_17076.read();
}

void linear_forward_no_mu::thread_mul_ln728_472_fu_46403_p2() {
    mul_ln728_472_fu_46403_p2 = (!mul_ln728_472_fu_46403_p0.read().is_01() || !mul_ln728_472_fu_46403_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_472_fu_46403_p0.read()) * sc_bigint<8>(mul_ln728_472_fu_46403_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_473_fu_46428_p0() {
    mul_ln728_473_fu_46428_p0 = select_ln173_947_reg_124196.read();
}

void linear_forward_no_mu::thread_mul_ln728_473_fu_46428_p1() {
    mul_ln728_473_fu_46428_p1 = reg_17080.read();
}

void linear_forward_no_mu::thread_mul_ln728_473_fu_46428_p2() {
    mul_ln728_473_fu_46428_p2 = (!mul_ln728_473_fu_46428_p0.read().is_01() || !mul_ln728_473_fu_46428_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_473_fu_46428_p0.read()) * sc_bigint<8>(mul_ln728_473_fu_46428_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_474_fu_46453_p0() {
    mul_ln728_474_fu_46453_p0 = select_ln173_949_reg_124201.read();
}

void linear_forward_no_mu::thread_mul_ln728_474_fu_46453_p1() {
    mul_ln728_474_fu_46453_p1 = reg_17084.read();
}

void linear_forward_no_mu::thread_mul_ln728_474_fu_46453_p2() {
    mul_ln728_474_fu_46453_p2 = (!mul_ln728_474_fu_46453_p0.read().is_01() || !mul_ln728_474_fu_46453_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_474_fu_46453_p0.read()) * sc_bigint<8>(mul_ln728_474_fu_46453_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_475_fu_46478_p0() {
    mul_ln728_475_fu_46478_p0 = reg_17088.read();
}

void linear_forward_no_mu::thread_mul_ln728_475_fu_46478_p1() {
    mul_ln728_475_fu_46478_p1 = select_ln173_951_reg_124206.read();
}

void linear_forward_no_mu::thread_mul_ln728_475_fu_46478_p2() {
    mul_ln728_475_fu_46478_p2 = (!mul_ln728_475_fu_46478_p0.read().is_01() || !mul_ln728_475_fu_46478_p1.read().is_01())? sc_lv<9>(): sc_bigint<8>(mul_ln728_475_fu_46478_p0.read()) * sc_bigint<2>(mul_ln728_475_fu_46478_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_476_fu_46503_p0() {
    mul_ln728_476_fu_46503_p0 = select_ln173_953_reg_124211.read();
}

void linear_forward_no_mu::thread_mul_ln728_476_fu_46503_p1() {
    mul_ln728_476_fu_46503_p1 = reg_17092.read();
}

void linear_forward_no_mu::thread_mul_ln728_476_fu_46503_p2() {
    mul_ln728_476_fu_46503_p2 = (!mul_ln728_476_fu_46503_p0.read().is_01() || !mul_ln728_476_fu_46503_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_476_fu_46503_p0.read()) * sc_bigint<8>(mul_ln728_476_fu_46503_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_477_fu_46528_p0() {
    mul_ln728_477_fu_46528_p0 = select_ln173_955_reg_124216.read();
}

void linear_forward_no_mu::thread_mul_ln728_477_fu_46528_p1() {
    mul_ln728_477_fu_46528_p1 = reg_17096.read();
}

void linear_forward_no_mu::thread_mul_ln728_477_fu_46528_p2() {
    mul_ln728_477_fu_46528_p2 = (!mul_ln728_477_fu_46528_p0.read().is_01() || !mul_ln728_477_fu_46528_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_477_fu_46528_p0.read()) * sc_bigint<8>(mul_ln728_477_fu_46528_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_478_fu_46576_p0() {
    mul_ln728_478_fu_46576_p0 = select_ln173_957_fu_46560_p3.read();
}

void linear_forward_no_mu::thread_mul_ln728_478_fu_46576_p1() {
    mul_ln728_478_fu_46576_p1 = reg_17100.read();
}

void linear_forward_no_mu::thread_mul_ln728_478_fu_46576_p2() {
    mul_ln728_478_fu_46576_p2 = (!mul_ln728_478_fu_46576_p0.read().is_01() || !mul_ln728_478_fu_46576_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_478_fu_46576_p0.read()) * sc_bigint<8>(mul_ln728_478_fu_46576_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_479_fu_46589_p0() {
    mul_ln728_479_fu_46589_p0 = reg_17104.read();
}

void linear_forward_no_mu::thread_mul_ln728_479_fu_46589_p1() {
    mul_ln728_479_fu_46589_p1 = select_ln173_959_reg_124221.read();
}

void linear_forward_no_mu::thread_mul_ln728_479_fu_46589_p2() {
    mul_ln728_479_fu_46589_p2 = (!mul_ln728_479_fu_46589_p0.read().is_01() || !mul_ln728_479_fu_46589_p1.read().is_01())? sc_lv<9>(): sc_bigint<8>(mul_ln728_479_fu_46589_p0.read()) * sc_bigint<2>(mul_ln728_479_fu_46589_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_47_fu_19994_p0() {
    mul_ln728_47_fu_19994_p0 = reg_17104.read();
}

void linear_forward_no_mu::thread_mul_ln728_47_fu_19994_p1() {
    mul_ln728_47_fu_19994_p1 = select_ln173_95_reg_120164.read();
}

void linear_forward_no_mu::thread_mul_ln728_47_fu_19994_p2() {
    mul_ln728_47_fu_19994_p2 = (!mul_ln728_47_fu_19994_p0.read().is_01() || !mul_ln728_47_fu_19994_p1.read().is_01())? sc_lv<9>(): sc_bigint<8>(mul_ln728_47_fu_19994_p0.read()) * sc_bigint<2>(mul_ln728_47_fu_19994_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_480_fu_46900_p0() {
    mul_ln728_480_fu_46900_p0 = select_ln173_961_reg_124256.read();
}

void linear_forward_no_mu::thread_mul_ln728_480_fu_46900_p1() {
    mul_ln728_480_fu_46900_p1 = reg_17076.read();
}

void linear_forward_no_mu::thread_mul_ln728_480_fu_46900_p2() {
    mul_ln728_480_fu_46900_p2 = (!mul_ln728_480_fu_46900_p0.read().is_01() || !mul_ln728_480_fu_46900_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_480_fu_46900_p0.read()) * sc_bigint<8>(mul_ln728_480_fu_46900_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_481_fu_46925_p0() {
    mul_ln728_481_fu_46925_p0 = select_ln173_963_reg_124261.read();
}

void linear_forward_no_mu::thread_mul_ln728_481_fu_46925_p1() {
    mul_ln728_481_fu_46925_p1 = reg_17080.read();
}

void linear_forward_no_mu::thread_mul_ln728_481_fu_46925_p2() {
    mul_ln728_481_fu_46925_p2 = (!mul_ln728_481_fu_46925_p0.read().is_01() || !mul_ln728_481_fu_46925_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_481_fu_46925_p0.read()) * sc_bigint<8>(mul_ln728_481_fu_46925_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_482_fu_46950_p0() {
    mul_ln728_482_fu_46950_p0 = select_ln173_965_reg_124266.read();
}

void linear_forward_no_mu::thread_mul_ln728_482_fu_46950_p1() {
    mul_ln728_482_fu_46950_p1 = reg_17084.read();
}

void linear_forward_no_mu::thread_mul_ln728_482_fu_46950_p2() {
    mul_ln728_482_fu_46950_p2 = (!mul_ln728_482_fu_46950_p0.read().is_01() || !mul_ln728_482_fu_46950_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_482_fu_46950_p0.read()) * sc_bigint<8>(mul_ln728_482_fu_46950_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_483_fu_46975_p0() {
    mul_ln728_483_fu_46975_p0 = reg_17088.read();
}

void linear_forward_no_mu::thread_mul_ln728_483_fu_46975_p1() {
    mul_ln728_483_fu_46975_p1 = select_ln173_967_reg_124271.read();
}

void linear_forward_no_mu::thread_mul_ln728_483_fu_46975_p2() {
    mul_ln728_483_fu_46975_p2 = (!mul_ln728_483_fu_46975_p0.read().is_01() || !mul_ln728_483_fu_46975_p1.read().is_01())? sc_lv<9>(): sc_bigint<8>(mul_ln728_483_fu_46975_p0.read()) * sc_bigint<2>(mul_ln728_483_fu_46975_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_484_fu_47000_p0() {
    mul_ln728_484_fu_47000_p0 = select_ln173_969_reg_124276.read();
}

void linear_forward_no_mu::thread_mul_ln728_484_fu_47000_p1() {
    mul_ln728_484_fu_47000_p1 = reg_17092.read();
}

void linear_forward_no_mu::thread_mul_ln728_484_fu_47000_p2() {
    mul_ln728_484_fu_47000_p2 = (!mul_ln728_484_fu_47000_p0.read().is_01() || !mul_ln728_484_fu_47000_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_484_fu_47000_p0.read()) * sc_bigint<8>(mul_ln728_484_fu_47000_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_485_fu_47025_p0() {
    mul_ln728_485_fu_47025_p0 = select_ln173_971_reg_124281.read();
}

void linear_forward_no_mu::thread_mul_ln728_485_fu_47025_p1() {
    mul_ln728_485_fu_47025_p1 = reg_17096.read();
}

void linear_forward_no_mu::thread_mul_ln728_485_fu_47025_p2() {
    mul_ln728_485_fu_47025_p2 = (!mul_ln728_485_fu_47025_p0.read().is_01() || !mul_ln728_485_fu_47025_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_485_fu_47025_p0.read()) * sc_bigint<8>(mul_ln728_485_fu_47025_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_486_fu_47050_p0() {
    mul_ln728_486_fu_47050_p0 = select_ln173_973_reg_124286.read();
}

void linear_forward_no_mu::thread_mul_ln728_486_fu_47050_p1() {
    mul_ln728_486_fu_47050_p1 = reg_17100.read();
}

void linear_forward_no_mu::thread_mul_ln728_486_fu_47050_p2() {
    mul_ln728_486_fu_47050_p2 = (!mul_ln728_486_fu_47050_p0.read().is_01() || !mul_ln728_486_fu_47050_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_486_fu_47050_p0.read()) * sc_bigint<8>(mul_ln728_486_fu_47050_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_487_fu_47075_p0() {
    mul_ln728_487_fu_47075_p0 = reg_17104.read();
}

void linear_forward_no_mu::thread_mul_ln728_487_fu_47075_p1() {
    mul_ln728_487_fu_47075_p1 = select_ln173_975_reg_124291.read();
}

void linear_forward_no_mu::thread_mul_ln728_487_fu_47075_p2() {
    mul_ln728_487_fu_47075_p2 = (!mul_ln728_487_fu_47075_p0.read().is_01() || !mul_ln728_487_fu_47075_p1.read().is_01())? sc_lv<9>(): sc_bigint<8>(mul_ln728_487_fu_47075_p0.read()) * sc_bigint<2>(mul_ln728_487_fu_47075_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_488_fu_47358_p0() {
    mul_ln728_488_fu_47358_p0 = select_ln173_977_reg_124326.read();
}

void linear_forward_no_mu::thread_mul_ln728_488_fu_47358_p1() {
    mul_ln728_488_fu_47358_p1 = reg_17076.read();
}

void linear_forward_no_mu::thread_mul_ln728_488_fu_47358_p2() {
    mul_ln728_488_fu_47358_p2 = (!mul_ln728_488_fu_47358_p0.read().is_01() || !mul_ln728_488_fu_47358_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_488_fu_47358_p0.read()) * sc_bigint<8>(mul_ln728_488_fu_47358_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_489_fu_47383_p0() {
    mul_ln728_489_fu_47383_p0 = select_ln173_979_reg_124331.read();
}

void linear_forward_no_mu::thread_mul_ln728_489_fu_47383_p1() {
    mul_ln728_489_fu_47383_p1 = reg_17080.read();
}

void linear_forward_no_mu::thread_mul_ln728_489_fu_47383_p2() {
    mul_ln728_489_fu_47383_p2 = (!mul_ln728_489_fu_47383_p0.read().is_01() || !mul_ln728_489_fu_47383_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_489_fu_47383_p0.read()) * sc_bigint<8>(mul_ln728_489_fu_47383_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_48_fu_20309_p0() {
    mul_ln728_48_fu_20309_p0 = select_ln173_97_reg_120211.read();
}

void linear_forward_no_mu::thread_mul_ln728_48_fu_20309_p1() {
    mul_ln728_48_fu_20309_p1 = reg_17076.read();
}

void linear_forward_no_mu::thread_mul_ln728_48_fu_20309_p2() {
    mul_ln728_48_fu_20309_p2 = (!mul_ln728_48_fu_20309_p0.read().is_01() || !mul_ln728_48_fu_20309_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_48_fu_20309_p0.read()) * sc_bigint<8>(mul_ln728_48_fu_20309_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_490_fu_47408_p0() {
    mul_ln728_490_fu_47408_p0 = select_ln173_981_reg_124336.read();
}

void linear_forward_no_mu::thread_mul_ln728_490_fu_47408_p1() {
    mul_ln728_490_fu_47408_p1 = reg_17084.read();
}

void linear_forward_no_mu::thread_mul_ln728_490_fu_47408_p2() {
    mul_ln728_490_fu_47408_p2 = (!mul_ln728_490_fu_47408_p0.read().is_01() || !mul_ln728_490_fu_47408_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_490_fu_47408_p0.read()) * sc_bigint<8>(mul_ln728_490_fu_47408_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_491_fu_47433_p0() {
    mul_ln728_491_fu_47433_p0 = reg_17088.read();
}

void linear_forward_no_mu::thread_mul_ln728_491_fu_47433_p1() {
    mul_ln728_491_fu_47433_p1 = select_ln173_983_reg_124341.read();
}

void linear_forward_no_mu::thread_mul_ln728_491_fu_47433_p2() {
    mul_ln728_491_fu_47433_p2 = (!mul_ln728_491_fu_47433_p0.read().is_01() || !mul_ln728_491_fu_47433_p1.read().is_01())? sc_lv<9>(): sc_bigint<8>(mul_ln728_491_fu_47433_p0.read()) * sc_bigint<2>(mul_ln728_491_fu_47433_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_492_fu_47458_p0() {
    mul_ln728_492_fu_47458_p0 = select_ln173_985_reg_124346.read();
}

void linear_forward_no_mu::thread_mul_ln728_492_fu_47458_p1() {
    mul_ln728_492_fu_47458_p1 = reg_17092.read();
}

void linear_forward_no_mu::thread_mul_ln728_492_fu_47458_p2() {
    mul_ln728_492_fu_47458_p2 = (!mul_ln728_492_fu_47458_p0.read().is_01() || !mul_ln728_492_fu_47458_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_492_fu_47458_p0.read()) * sc_bigint<8>(mul_ln728_492_fu_47458_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_493_fu_47506_p0() {
    mul_ln728_493_fu_47506_p0 = select_ln173_987_fu_47490_p3.read();
}

void linear_forward_no_mu::thread_mul_ln728_493_fu_47506_p1() {
    mul_ln728_493_fu_47506_p1 = reg_17096.read();
}

void linear_forward_no_mu::thread_mul_ln728_493_fu_47506_p2() {
    mul_ln728_493_fu_47506_p2 = (!mul_ln728_493_fu_47506_p0.read().is_01() || !mul_ln728_493_fu_47506_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_493_fu_47506_p0.read()) * sc_bigint<8>(mul_ln728_493_fu_47506_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_494_fu_47542_p0() {
    mul_ln728_494_fu_47542_p0 = select_ln173_989_fu_47526_p3.read();
}

void linear_forward_no_mu::thread_mul_ln728_494_fu_47542_p1() {
    mul_ln728_494_fu_47542_p1 = reg_17100.read();
}

void linear_forward_no_mu::thread_mul_ln728_494_fu_47542_p2() {
    mul_ln728_494_fu_47542_p2 = (!mul_ln728_494_fu_47542_p0.read().is_01() || !mul_ln728_494_fu_47542_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_494_fu_47542_p0.read()) * sc_bigint<8>(mul_ln728_494_fu_47542_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_495_fu_47555_p0() {
    mul_ln728_495_fu_47555_p0 = reg_17104.read();
}

void linear_forward_no_mu::thread_mul_ln728_495_fu_47555_p1() {
    mul_ln728_495_fu_47555_p1 = select_ln173_991_reg_124351.read();
}

void linear_forward_no_mu::thread_mul_ln728_495_fu_47555_p2() {
    mul_ln728_495_fu_47555_p2 = (!mul_ln728_495_fu_47555_p0.read().is_01() || !mul_ln728_495_fu_47555_p1.read().is_01())? sc_lv<9>(): sc_bigint<8>(mul_ln728_495_fu_47555_p0.read()) * sc_bigint<2>(mul_ln728_495_fu_47555_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_496_fu_47898_p0() {
    mul_ln728_496_fu_47898_p0 = select_ln173_993_reg_124396.read();
}

void linear_forward_no_mu::thread_mul_ln728_496_fu_47898_p1() {
    mul_ln728_496_fu_47898_p1 = reg_17076.read();
}

void linear_forward_no_mu::thread_mul_ln728_496_fu_47898_p2() {
    mul_ln728_496_fu_47898_p2 = (!mul_ln728_496_fu_47898_p0.read().is_01() || !mul_ln728_496_fu_47898_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_496_fu_47898_p0.read()) * sc_bigint<8>(mul_ln728_496_fu_47898_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_497_fu_47923_p0() {
    mul_ln728_497_fu_47923_p0 = select_ln173_995_reg_124401.read();
}

void linear_forward_no_mu::thread_mul_ln728_497_fu_47923_p1() {
    mul_ln728_497_fu_47923_p1 = reg_17080.read();
}

void linear_forward_no_mu::thread_mul_ln728_497_fu_47923_p2() {
    mul_ln728_497_fu_47923_p2 = (!mul_ln728_497_fu_47923_p0.read().is_01() || !mul_ln728_497_fu_47923_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_497_fu_47923_p0.read()) * sc_bigint<8>(mul_ln728_497_fu_47923_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_498_fu_47948_p0() {
    mul_ln728_498_fu_47948_p0 = select_ln173_997_reg_124406.read();
}

void linear_forward_no_mu::thread_mul_ln728_498_fu_47948_p1() {
    mul_ln728_498_fu_47948_p1 = reg_17084.read();
}

void linear_forward_no_mu::thread_mul_ln728_498_fu_47948_p2() {
    mul_ln728_498_fu_47948_p2 = (!mul_ln728_498_fu_47948_p0.read().is_01() || !mul_ln728_498_fu_47948_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_498_fu_47948_p0.read()) * sc_bigint<8>(mul_ln728_498_fu_47948_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_499_fu_47973_p0() {
    mul_ln728_499_fu_47973_p0 = reg_17088.read();
}

void linear_forward_no_mu::thread_mul_ln728_499_fu_47973_p1() {
    mul_ln728_499_fu_47973_p1 = select_ln173_999_reg_124411.read();
}

void linear_forward_no_mu::thread_mul_ln728_499_fu_47973_p2() {
    mul_ln728_499_fu_47973_p2 = (!mul_ln728_499_fu_47973_p0.read().is_01() || !mul_ln728_499_fu_47973_p1.read().is_01())? sc_lv<9>(): sc_bigint<8>(mul_ln728_499_fu_47973_p0.read()) * sc_bigint<2>(mul_ln728_499_fu_47973_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_49_fu_20334_p0() {
    mul_ln728_49_fu_20334_p0 = select_ln173_99_reg_120216.read();
}

void linear_forward_no_mu::thread_mul_ln728_49_fu_20334_p1() {
    mul_ln728_49_fu_20334_p1 = reg_17080.read();
}

void linear_forward_no_mu::thread_mul_ln728_49_fu_20334_p2() {
    mul_ln728_49_fu_20334_p2 = (!mul_ln728_49_fu_20334_p0.read().is_01() || !mul_ln728_49_fu_20334_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_49_fu_20334_p0.read()) * sc_bigint<8>(mul_ln728_49_fu_20334_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_4_fu_17551_p0() {
    mul_ln728_4_fu_17551_p0 = select_ln173_9_reg_119780.read();
}

void linear_forward_no_mu::thread_mul_ln728_4_fu_17551_p1() {
    mul_ln728_4_fu_17551_p1 = reg_17092.read();
}

void linear_forward_no_mu::thread_mul_ln728_4_fu_17551_p2() {
    mul_ln728_4_fu_17551_p2 = (!mul_ln728_4_fu_17551_p0.read().is_01() || !mul_ln728_4_fu_17551_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_4_fu_17551_p0.read()) * sc_bigint<8>(mul_ln728_4_fu_17551_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_500_fu_47998_p0() {
    mul_ln728_500_fu_47998_p0 = select_ln173_1001_reg_124416.read();
}

void linear_forward_no_mu::thread_mul_ln728_500_fu_47998_p1() {
    mul_ln728_500_fu_47998_p1 = reg_17092.read();
}

void linear_forward_no_mu::thread_mul_ln728_500_fu_47998_p2() {
    mul_ln728_500_fu_47998_p2 = (!mul_ln728_500_fu_47998_p0.read().is_01() || !mul_ln728_500_fu_47998_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_500_fu_47998_p0.read()) * sc_bigint<8>(mul_ln728_500_fu_47998_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_501_fu_48023_p0() {
    mul_ln728_501_fu_48023_p0 = select_ln173_1003_reg_124421.read();
}

void linear_forward_no_mu::thread_mul_ln728_501_fu_48023_p1() {
    mul_ln728_501_fu_48023_p1 = reg_17096.read();
}

void linear_forward_no_mu::thread_mul_ln728_501_fu_48023_p2() {
    mul_ln728_501_fu_48023_p2 = (!mul_ln728_501_fu_48023_p0.read().is_01() || !mul_ln728_501_fu_48023_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_501_fu_48023_p0.read()) * sc_bigint<8>(mul_ln728_501_fu_48023_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_502_fu_48071_p0() {
    mul_ln728_502_fu_48071_p0 = select_ln173_1005_fu_48055_p3.read();
}

void linear_forward_no_mu::thread_mul_ln728_502_fu_48071_p1() {
    mul_ln728_502_fu_48071_p1 = reg_17100.read();
}

void linear_forward_no_mu::thread_mul_ln728_502_fu_48071_p2() {
    mul_ln728_502_fu_48071_p2 = (!mul_ln728_502_fu_48071_p0.read().is_01() || !mul_ln728_502_fu_48071_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_502_fu_48071_p0.read()) * sc_bigint<8>(mul_ln728_502_fu_48071_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_503_fu_48084_p0() {
    mul_ln728_503_fu_48084_p0 = reg_17104.read();
}

void linear_forward_no_mu::thread_mul_ln728_503_fu_48084_p1() {
    mul_ln728_503_fu_48084_p1 = select_ln173_1007_reg_124426.read();
}

void linear_forward_no_mu::thread_mul_ln728_503_fu_48084_p2() {
    mul_ln728_503_fu_48084_p2 = (!mul_ln728_503_fu_48084_p0.read().is_01() || !mul_ln728_503_fu_48084_p1.read().is_01())? sc_lv<9>(): sc_bigint<8>(mul_ln728_503_fu_48084_p0.read()) * sc_bigint<2>(mul_ln728_503_fu_48084_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_504_fu_48404_p0() {
    mul_ln728_504_fu_48404_p0 = select_ln173_1009_reg_124466.read();
}

void linear_forward_no_mu::thread_mul_ln728_504_fu_48404_p1() {
    mul_ln728_504_fu_48404_p1 = reg_17076.read();
}

void linear_forward_no_mu::thread_mul_ln728_504_fu_48404_p2() {
    mul_ln728_504_fu_48404_p2 = (!mul_ln728_504_fu_48404_p0.read().is_01() || !mul_ln728_504_fu_48404_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_504_fu_48404_p0.read()) * sc_bigint<8>(mul_ln728_504_fu_48404_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_505_fu_48429_p0() {
    mul_ln728_505_fu_48429_p0 = select_ln173_1011_reg_124471.read();
}

void linear_forward_no_mu::thread_mul_ln728_505_fu_48429_p1() {
    mul_ln728_505_fu_48429_p1 = reg_17080.read();
}

void linear_forward_no_mu::thread_mul_ln728_505_fu_48429_p2() {
    mul_ln728_505_fu_48429_p2 = (!mul_ln728_505_fu_48429_p0.read().is_01() || !mul_ln728_505_fu_48429_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_505_fu_48429_p0.read()) * sc_bigint<8>(mul_ln728_505_fu_48429_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_506_fu_48454_p0() {
    mul_ln728_506_fu_48454_p0 = select_ln173_1013_reg_124476.read();
}

void linear_forward_no_mu::thread_mul_ln728_506_fu_48454_p1() {
    mul_ln728_506_fu_48454_p1 = reg_17084.read();
}

void linear_forward_no_mu::thread_mul_ln728_506_fu_48454_p2() {
    mul_ln728_506_fu_48454_p2 = (!mul_ln728_506_fu_48454_p0.read().is_01() || !mul_ln728_506_fu_48454_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_506_fu_48454_p0.read()) * sc_bigint<8>(mul_ln728_506_fu_48454_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_507_fu_48479_p0() {
    mul_ln728_507_fu_48479_p0 = reg_17088.read();
}

void linear_forward_no_mu::thread_mul_ln728_507_fu_48479_p1() {
    mul_ln728_507_fu_48479_p1 = select_ln173_1015_reg_124481.read();
}

void linear_forward_no_mu::thread_mul_ln728_507_fu_48479_p2() {
    mul_ln728_507_fu_48479_p2 = (!mul_ln728_507_fu_48479_p0.read().is_01() || !mul_ln728_507_fu_48479_p1.read().is_01())? sc_lv<9>(): sc_bigint<8>(mul_ln728_507_fu_48479_p0.read()) * sc_bigint<2>(mul_ln728_507_fu_48479_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_508_fu_48504_p0() {
    mul_ln728_508_fu_48504_p0 = select_ln173_1017_reg_124486.read();
}

void linear_forward_no_mu::thread_mul_ln728_508_fu_48504_p1() {
    mul_ln728_508_fu_48504_p1 = reg_17092.read();
}

void linear_forward_no_mu::thread_mul_ln728_508_fu_48504_p2() {
    mul_ln728_508_fu_48504_p2 = (!mul_ln728_508_fu_48504_p0.read().is_01() || !mul_ln728_508_fu_48504_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_508_fu_48504_p0.read()) * sc_bigint<8>(mul_ln728_508_fu_48504_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_509_fu_48529_p0() {
    mul_ln728_509_fu_48529_p0 = select_ln173_1019_reg_124491.read();
}

void linear_forward_no_mu::thread_mul_ln728_509_fu_48529_p1() {
    mul_ln728_509_fu_48529_p1 = reg_17096.read();
}

void linear_forward_no_mu::thread_mul_ln728_509_fu_48529_p2() {
    mul_ln728_509_fu_48529_p2 = (!mul_ln728_509_fu_48529_p0.read().is_01() || !mul_ln728_509_fu_48529_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_509_fu_48529_p0.read()) * sc_bigint<8>(mul_ln728_509_fu_48529_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_50_fu_20359_p0() {
    mul_ln728_50_fu_20359_p0 = select_ln173_101_reg_120221.read();
}

void linear_forward_no_mu::thread_mul_ln728_50_fu_20359_p1() {
    mul_ln728_50_fu_20359_p1 = reg_17084.read();
}

void linear_forward_no_mu::thread_mul_ln728_50_fu_20359_p2() {
    mul_ln728_50_fu_20359_p2 = (!mul_ln728_50_fu_20359_p0.read().is_01() || !mul_ln728_50_fu_20359_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_50_fu_20359_p0.read()) * sc_bigint<8>(mul_ln728_50_fu_20359_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_510_fu_48554_p0() {
    mul_ln728_510_fu_48554_p0 = select_ln173_1021_reg_124496.read();
}

void linear_forward_no_mu::thread_mul_ln728_510_fu_48554_p1() {
    mul_ln728_510_fu_48554_p1 = reg_17100.read();
}

void linear_forward_no_mu::thread_mul_ln728_510_fu_48554_p2() {
    mul_ln728_510_fu_48554_p2 = (!mul_ln728_510_fu_48554_p0.read().is_01() || !mul_ln728_510_fu_48554_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_510_fu_48554_p0.read()) * sc_bigint<8>(mul_ln728_510_fu_48554_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_511_fu_48579_p0() {
    mul_ln728_511_fu_48579_p0 = reg_17104.read();
}

void linear_forward_no_mu::thread_mul_ln728_511_fu_48579_p1() {
    mul_ln728_511_fu_48579_p1 = select_ln173_1023_reg_124501.read();
}

void linear_forward_no_mu::thread_mul_ln728_511_fu_48579_p2() {
    mul_ln728_511_fu_48579_p2 = (!mul_ln728_511_fu_48579_p0.read().is_01() || !mul_ln728_511_fu_48579_p1.read().is_01())? sc_lv<9>(): sc_bigint<8>(mul_ln728_511_fu_48579_p0.read()) * sc_bigint<2>(mul_ln728_511_fu_48579_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_512_fu_48865_p0() {
    mul_ln728_512_fu_48865_p0 = select_ln173_1025_reg_124536.read();
}

void linear_forward_no_mu::thread_mul_ln728_512_fu_48865_p1() {
    mul_ln728_512_fu_48865_p1 = reg_17076.read();
}

void linear_forward_no_mu::thread_mul_ln728_512_fu_48865_p2() {
    mul_ln728_512_fu_48865_p2 = (!mul_ln728_512_fu_48865_p0.read().is_01() || !mul_ln728_512_fu_48865_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_512_fu_48865_p0.read()) * sc_bigint<8>(mul_ln728_512_fu_48865_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_513_fu_48890_p0() {
    mul_ln728_513_fu_48890_p0 = select_ln173_1027_reg_124541.read();
}

void linear_forward_no_mu::thread_mul_ln728_513_fu_48890_p1() {
    mul_ln728_513_fu_48890_p1 = reg_17080.read();
}

void linear_forward_no_mu::thread_mul_ln728_513_fu_48890_p2() {
    mul_ln728_513_fu_48890_p2 = (!mul_ln728_513_fu_48890_p0.read().is_01() || !mul_ln728_513_fu_48890_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_513_fu_48890_p0.read()) * sc_bigint<8>(mul_ln728_513_fu_48890_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_514_fu_48915_p0() {
    mul_ln728_514_fu_48915_p0 = select_ln173_1029_reg_124546.read();
}

void linear_forward_no_mu::thread_mul_ln728_514_fu_48915_p1() {
    mul_ln728_514_fu_48915_p1 = reg_17084.read();
}

void linear_forward_no_mu::thread_mul_ln728_514_fu_48915_p2() {
    mul_ln728_514_fu_48915_p2 = (!mul_ln728_514_fu_48915_p0.read().is_01() || !mul_ln728_514_fu_48915_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_514_fu_48915_p0.read()) * sc_bigint<8>(mul_ln728_514_fu_48915_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_515_fu_48940_p0() {
    mul_ln728_515_fu_48940_p0 = reg_17088.read();
}

void linear_forward_no_mu::thread_mul_ln728_515_fu_48940_p1() {
    mul_ln728_515_fu_48940_p1 = select_ln173_1031_reg_124551.read();
}

void linear_forward_no_mu::thread_mul_ln728_515_fu_48940_p2() {
    mul_ln728_515_fu_48940_p2 = (!mul_ln728_515_fu_48940_p0.read().is_01() || !mul_ln728_515_fu_48940_p1.read().is_01())? sc_lv<9>(): sc_bigint<8>(mul_ln728_515_fu_48940_p0.read()) * sc_bigint<2>(mul_ln728_515_fu_48940_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_516_fu_48965_p0() {
    mul_ln728_516_fu_48965_p0 = select_ln173_1033_reg_124556.read();
}

void linear_forward_no_mu::thread_mul_ln728_516_fu_48965_p1() {
    mul_ln728_516_fu_48965_p1 = reg_17092.read();
}

void linear_forward_no_mu::thread_mul_ln728_516_fu_48965_p2() {
    mul_ln728_516_fu_48965_p2 = (!mul_ln728_516_fu_48965_p0.read().is_01() || !mul_ln728_516_fu_48965_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_516_fu_48965_p0.read()) * sc_bigint<8>(mul_ln728_516_fu_48965_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_517_fu_49013_p0() {
    mul_ln728_517_fu_49013_p0 = select_ln173_1035_fu_48997_p3.read();
}

void linear_forward_no_mu::thread_mul_ln728_517_fu_49013_p1() {
    mul_ln728_517_fu_49013_p1 = reg_17096.read();
}

void linear_forward_no_mu::thread_mul_ln728_517_fu_49013_p2() {
    mul_ln728_517_fu_49013_p2 = (!mul_ln728_517_fu_49013_p0.read().is_01() || !mul_ln728_517_fu_49013_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_517_fu_49013_p0.read()) * sc_bigint<8>(mul_ln728_517_fu_49013_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_518_fu_49049_p0() {
    mul_ln728_518_fu_49049_p0 = select_ln173_1037_fu_49033_p3.read();
}

void linear_forward_no_mu::thread_mul_ln728_518_fu_49049_p1() {
    mul_ln728_518_fu_49049_p1 = reg_17100.read();
}

void linear_forward_no_mu::thread_mul_ln728_518_fu_49049_p2() {
    mul_ln728_518_fu_49049_p2 = (!mul_ln728_518_fu_49049_p0.read().is_01() || !mul_ln728_518_fu_49049_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_518_fu_49049_p0.read()) * sc_bigint<8>(mul_ln728_518_fu_49049_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_519_fu_49062_p0() {
    mul_ln728_519_fu_49062_p0 = reg_17104.read();
}

void linear_forward_no_mu::thread_mul_ln728_519_fu_49062_p1() {
    mul_ln728_519_fu_49062_p1 = select_ln173_1039_reg_124561.read();
}

void linear_forward_no_mu::thread_mul_ln728_519_fu_49062_p2() {
    mul_ln728_519_fu_49062_p2 = (!mul_ln728_519_fu_49062_p0.read().is_01() || !mul_ln728_519_fu_49062_p1.read().is_01())? sc_lv<9>(): sc_bigint<8>(mul_ln728_519_fu_49062_p0.read()) * sc_bigint<2>(mul_ln728_519_fu_49062_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_51_fu_20384_p0() {
    mul_ln728_51_fu_20384_p0 = reg_17088.read();
}

void linear_forward_no_mu::thread_mul_ln728_51_fu_20384_p1() {
    mul_ln728_51_fu_20384_p1 = select_ln173_103_reg_120226.read();
}

void linear_forward_no_mu::thread_mul_ln728_51_fu_20384_p2() {
    mul_ln728_51_fu_20384_p2 = (!mul_ln728_51_fu_20384_p0.read().is_01() || !mul_ln728_51_fu_20384_p1.read().is_01())? sc_lv<9>(): sc_bigint<8>(mul_ln728_51_fu_20384_p0.read()) * sc_bigint<2>(mul_ln728_51_fu_20384_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_520_fu_49385_p0() {
    mul_ln728_520_fu_49385_p0 = select_ln173_1041_reg_124606.read();
}

void linear_forward_no_mu::thread_mul_ln728_520_fu_49385_p1() {
    mul_ln728_520_fu_49385_p1 = reg_17076.read();
}

void linear_forward_no_mu::thread_mul_ln728_520_fu_49385_p2() {
    mul_ln728_520_fu_49385_p2 = (!mul_ln728_520_fu_49385_p0.read().is_01() || !mul_ln728_520_fu_49385_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_520_fu_49385_p0.read()) * sc_bigint<8>(mul_ln728_520_fu_49385_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_521_fu_49410_p0() {
    mul_ln728_521_fu_49410_p0 = select_ln173_1043_reg_124611.read();
}

void linear_forward_no_mu::thread_mul_ln728_521_fu_49410_p1() {
    mul_ln728_521_fu_49410_p1 = reg_17080.read();
}

void linear_forward_no_mu::thread_mul_ln728_521_fu_49410_p2() {
    mul_ln728_521_fu_49410_p2 = (!mul_ln728_521_fu_49410_p0.read().is_01() || !mul_ln728_521_fu_49410_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_521_fu_49410_p0.read()) * sc_bigint<8>(mul_ln728_521_fu_49410_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_522_fu_49435_p0() {
    mul_ln728_522_fu_49435_p0 = select_ln173_1045_reg_124616.read();
}

void linear_forward_no_mu::thread_mul_ln728_522_fu_49435_p1() {
    mul_ln728_522_fu_49435_p1 = reg_17084.read();
}

void linear_forward_no_mu::thread_mul_ln728_522_fu_49435_p2() {
    mul_ln728_522_fu_49435_p2 = (!mul_ln728_522_fu_49435_p0.read().is_01() || !mul_ln728_522_fu_49435_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_522_fu_49435_p0.read()) * sc_bigint<8>(mul_ln728_522_fu_49435_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_523_fu_49460_p0() {
    mul_ln728_523_fu_49460_p0 = reg_17088.read();
}

void linear_forward_no_mu::thread_mul_ln728_523_fu_49460_p1() {
    mul_ln728_523_fu_49460_p1 = select_ln173_1047_reg_124621.read();
}

void linear_forward_no_mu::thread_mul_ln728_523_fu_49460_p2() {
    mul_ln728_523_fu_49460_p2 = (!mul_ln728_523_fu_49460_p0.read().is_01() || !mul_ln728_523_fu_49460_p1.read().is_01())? sc_lv<9>(): sc_bigint<8>(mul_ln728_523_fu_49460_p0.read()) * sc_bigint<2>(mul_ln728_523_fu_49460_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_524_fu_49485_p0() {
    mul_ln728_524_fu_49485_p0 = select_ln173_1049_reg_124626.read();
}

void linear_forward_no_mu::thread_mul_ln728_524_fu_49485_p1() {
    mul_ln728_524_fu_49485_p1 = reg_17092.read();
}

void linear_forward_no_mu::thread_mul_ln728_524_fu_49485_p2() {
    mul_ln728_524_fu_49485_p2 = (!mul_ln728_524_fu_49485_p0.read().is_01() || !mul_ln728_524_fu_49485_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_524_fu_49485_p0.read()) * sc_bigint<8>(mul_ln728_524_fu_49485_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_525_fu_49510_p0() {
    mul_ln728_525_fu_49510_p0 = select_ln173_1051_reg_124631.read();
}

void linear_forward_no_mu::thread_mul_ln728_525_fu_49510_p1() {
    mul_ln728_525_fu_49510_p1 = reg_17096.read();
}

void linear_forward_no_mu::thread_mul_ln728_525_fu_49510_p2() {
    mul_ln728_525_fu_49510_p2 = (!mul_ln728_525_fu_49510_p0.read().is_01() || !mul_ln728_525_fu_49510_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_525_fu_49510_p0.read()) * sc_bigint<8>(mul_ln728_525_fu_49510_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_526_fu_49558_p0() {
    mul_ln728_526_fu_49558_p0 = select_ln173_1053_fu_49542_p3.read();
}

void linear_forward_no_mu::thread_mul_ln728_526_fu_49558_p1() {
    mul_ln728_526_fu_49558_p1 = reg_17100.read();
}

void linear_forward_no_mu::thread_mul_ln728_526_fu_49558_p2() {
    mul_ln728_526_fu_49558_p2 = (!mul_ln728_526_fu_49558_p0.read().is_01() || !mul_ln728_526_fu_49558_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_526_fu_49558_p0.read()) * sc_bigint<8>(mul_ln728_526_fu_49558_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_527_fu_49571_p0() {
    mul_ln728_527_fu_49571_p0 = reg_17104.read();
}

void linear_forward_no_mu::thread_mul_ln728_527_fu_49571_p1() {
    mul_ln728_527_fu_49571_p1 = select_ln173_1055_reg_124636.read();
}

void linear_forward_no_mu::thread_mul_ln728_527_fu_49571_p2() {
    mul_ln728_527_fu_49571_p2 = (!mul_ln728_527_fu_49571_p0.read().is_01() || !mul_ln728_527_fu_49571_p1.read().is_01())? sc_lv<9>(): sc_bigint<8>(mul_ln728_527_fu_49571_p0.read()) * sc_bigint<2>(mul_ln728_527_fu_49571_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_528_fu_49886_p0() {
    mul_ln728_528_fu_49886_p0 = select_ln173_1057_reg_124671.read();
}

void linear_forward_no_mu::thread_mul_ln728_528_fu_49886_p1() {
    mul_ln728_528_fu_49886_p1 = reg_17076.read();
}

void linear_forward_no_mu::thread_mul_ln728_528_fu_49886_p2() {
    mul_ln728_528_fu_49886_p2 = (!mul_ln728_528_fu_49886_p0.read().is_01() || !mul_ln728_528_fu_49886_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_528_fu_49886_p0.read()) * sc_bigint<8>(mul_ln728_528_fu_49886_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_529_fu_49911_p0() {
    mul_ln728_529_fu_49911_p0 = select_ln173_1059_reg_124676.read();
}

void linear_forward_no_mu::thread_mul_ln728_529_fu_49911_p1() {
    mul_ln728_529_fu_49911_p1 = reg_17080.read();
}

void linear_forward_no_mu::thread_mul_ln728_529_fu_49911_p2() {
    mul_ln728_529_fu_49911_p2 = (!mul_ln728_529_fu_49911_p0.read().is_01() || !mul_ln728_529_fu_49911_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_529_fu_49911_p0.read()) * sc_bigint<8>(mul_ln728_529_fu_49911_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_52_fu_20409_p0() {
    mul_ln728_52_fu_20409_p0 = select_ln173_105_reg_120231.read();
}

void linear_forward_no_mu::thread_mul_ln728_52_fu_20409_p1() {
    mul_ln728_52_fu_20409_p1 = reg_17092.read();
}

void linear_forward_no_mu::thread_mul_ln728_52_fu_20409_p2() {
    mul_ln728_52_fu_20409_p2 = (!mul_ln728_52_fu_20409_p0.read().is_01() || !mul_ln728_52_fu_20409_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_52_fu_20409_p0.read()) * sc_bigint<8>(mul_ln728_52_fu_20409_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_530_fu_49936_p0() {
    mul_ln728_530_fu_49936_p0 = select_ln173_1061_reg_124681.read();
}

void linear_forward_no_mu::thread_mul_ln728_530_fu_49936_p1() {
    mul_ln728_530_fu_49936_p1 = reg_17084.read();
}

void linear_forward_no_mu::thread_mul_ln728_530_fu_49936_p2() {
    mul_ln728_530_fu_49936_p2 = (!mul_ln728_530_fu_49936_p0.read().is_01() || !mul_ln728_530_fu_49936_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_530_fu_49936_p0.read()) * sc_bigint<8>(mul_ln728_530_fu_49936_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_531_fu_49961_p0() {
    mul_ln728_531_fu_49961_p0 = reg_17088.read();
}

void linear_forward_no_mu::thread_mul_ln728_531_fu_49961_p1() {
    mul_ln728_531_fu_49961_p1 = select_ln173_1063_reg_124686.read();
}

void linear_forward_no_mu::thread_mul_ln728_531_fu_49961_p2() {
    mul_ln728_531_fu_49961_p2 = (!mul_ln728_531_fu_49961_p0.read().is_01() || !mul_ln728_531_fu_49961_p1.read().is_01())? sc_lv<9>(): sc_bigint<8>(mul_ln728_531_fu_49961_p0.read()) * sc_bigint<2>(mul_ln728_531_fu_49961_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_532_fu_49986_p0() {
    mul_ln728_532_fu_49986_p0 = select_ln173_1065_reg_124691.read();
}

void linear_forward_no_mu::thread_mul_ln728_532_fu_49986_p1() {
    mul_ln728_532_fu_49986_p1 = reg_17092.read();
}

void linear_forward_no_mu::thread_mul_ln728_532_fu_49986_p2() {
    mul_ln728_532_fu_49986_p2 = (!mul_ln728_532_fu_49986_p0.read().is_01() || !mul_ln728_532_fu_49986_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_532_fu_49986_p0.read()) * sc_bigint<8>(mul_ln728_532_fu_49986_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_533_fu_50011_p0() {
    mul_ln728_533_fu_50011_p0 = select_ln173_1067_reg_124696.read();
}

void linear_forward_no_mu::thread_mul_ln728_533_fu_50011_p1() {
    mul_ln728_533_fu_50011_p1 = reg_17096.read();
}

void linear_forward_no_mu::thread_mul_ln728_533_fu_50011_p2() {
    mul_ln728_533_fu_50011_p2 = (!mul_ln728_533_fu_50011_p0.read().is_01() || !mul_ln728_533_fu_50011_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_533_fu_50011_p0.read()) * sc_bigint<8>(mul_ln728_533_fu_50011_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_534_fu_50036_p0() {
    mul_ln728_534_fu_50036_p0 = select_ln173_1069_reg_124701.read();
}

void linear_forward_no_mu::thread_mul_ln728_534_fu_50036_p1() {
    mul_ln728_534_fu_50036_p1 = reg_17100.read();
}

void linear_forward_no_mu::thread_mul_ln728_534_fu_50036_p2() {
    mul_ln728_534_fu_50036_p2 = (!mul_ln728_534_fu_50036_p0.read().is_01() || !mul_ln728_534_fu_50036_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_534_fu_50036_p0.read()) * sc_bigint<8>(mul_ln728_534_fu_50036_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_535_fu_50061_p0() {
    mul_ln728_535_fu_50061_p0 = reg_17104.read();
}

void linear_forward_no_mu::thread_mul_ln728_535_fu_50061_p1() {
    mul_ln728_535_fu_50061_p1 = select_ln173_1071_reg_124706.read();
}

void linear_forward_no_mu::thread_mul_ln728_535_fu_50061_p2() {
    mul_ln728_535_fu_50061_p2 = (!mul_ln728_535_fu_50061_p0.read().is_01() || !mul_ln728_535_fu_50061_p1.read().is_01())? sc_lv<9>(): sc_bigint<8>(mul_ln728_535_fu_50061_p0.read()) * sc_bigint<2>(mul_ln728_535_fu_50061_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_536_fu_50352_p0() {
    mul_ln728_536_fu_50352_p0 = select_ln173_1073_reg_124741.read();
}

void linear_forward_no_mu::thread_mul_ln728_536_fu_50352_p1() {
    mul_ln728_536_fu_50352_p1 = reg_17076.read();
}

void linear_forward_no_mu::thread_mul_ln728_536_fu_50352_p2() {
    mul_ln728_536_fu_50352_p2 = (!mul_ln728_536_fu_50352_p0.read().is_01() || !mul_ln728_536_fu_50352_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_536_fu_50352_p0.read()) * sc_bigint<8>(mul_ln728_536_fu_50352_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_537_fu_50377_p0() {
    mul_ln728_537_fu_50377_p0 = select_ln173_1075_reg_124746.read();
}

void linear_forward_no_mu::thread_mul_ln728_537_fu_50377_p1() {
    mul_ln728_537_fu_50377_p1 = reg_17080.read();
}

void linear_forward_no_mu::thread_mul_ln728_537_fu_50377_p2() {
    mul_ln728_537_fu_50377_p2 = (!mul_ln728_537_fu_50377_p0.read().is_01() || !mul_ln728_537_fu_50377_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_537_fu_50377_p0.read()) * sc_bigint<8>(mul_ln728_537_fu_50377_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_538_fu_50402_p0() {
    mul_ln728_538_fu_50402_p0 = select_ln173_1077_reg_124751.read();
}

void linear_forward_no_mu::thread_mul_ln728_538_fu_50402_p1() {
    mul_ln728_538_fu_50402_p1 = reg_17084.read();
}

void linear_forward_no_mu::thread_mul_ln728_538_fu_50402_p2() {
    mul_ln728_538_fu_50402_p2 = (!mul_ln728_538_fu_50402_p0.read().is_01() || !mul_ln728_538_fu_50402_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_538_fu_50402_p0.read()) * sc_bigint<8>(mul_ln728_538_fu_50402_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_539_fu_50427_p0() {
    mul_ln728_539_fu_50427_p0 = reg_17088.read();
}

void linear_forward_no_mu::thread_mul_ln728_539_fu_50427_p1() {
    mul_ln728_539_fu_50427_p1 = select_ln173_1079_reg_124756.read();
}

void linear_forward_no_mu::thread_mul_ln728_539_fu_50427_p2() {
    mul_ln728_539_fu_50427_p2 = (!mul_ln728_539_fu_50427_p0.read().is_01() || !mul_ln728_539_fu_50427_p1.read().is_01())? sc_lv<9>(): sc_bigint<8>(mul_ln728_539_fu_50427_p0.read()) * sc_bigint<2>(mul_ln728_539_fu_50427_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_53_fu_20434_p0() {
    mul_ln728_53_fu_20434_p0 = select_ln173_107_reg_120236.read();
}

void linear_forward_no_mu::thread_mul_ln728_53_fu_20434_p1() {
    mul_ln728_53_fu_20434_p1 = reg_17096.read();
}

void linear_forward_no_mu::thread_mul_ln728_53_fu_20434_p2() {
    mul_ln728_53_fu_20434_p2 = (!mul_ln728_53_fu_20434_p0.read().is_01() || !mul_ln728_53_fu_20434_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_53_fu_20434_p0.read()) * sc_bigint<8>(mul_ln728_53_fu_20434_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_540_fu_50452_p0() {
    mul_ln728_540_fu_50452_p0 = select_ln173_1081_reg_124761.read();
}

void linear_forward_no_mu::thread_mul_ln728_540_fu_50452_p1() {
    mul_ln728_540_fu_50452_p1 = reg_17092.read();
}

void linear_forward_no_mu::thread_mul_ln728_540_fu_50452_p2() {
    mul_ln728_540_fu_50452_p2 = (!mul_ln728_540_fu_50452_p0.read().is_01() || !mul_ln728_540_fu_50452_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_540_fu_50452_p0.read()) * sc_bigint<8>(mul_ln728_540_fu_50452_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_541_fu_50500_p0() {
    mul_ln728_541_fu_50500_p0 = select_ln173_1083_fu_50484_p3.read();
}

void linear_forward_no_mu::thread_mul_ln728_541_fu_50500_p1() {
    mul_ln728_541_fu_50500_p1 = reg_17096.read();
}

void linear_forward_no_mu::thread_mul_ln728_541_fu_50500_p2() {
    mul_ln728_541_fu_50500_p2 = (!mul_ln728_541_fu_50500_p0.read().is_01() || !mul_ln728_541_fu_50500_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_541_fu_50500_p0.read()) * sc_bigint<8>(mul_ln728_541_fu_50500_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_542_fu_50536_p0() {
    mul_ln728_542_fu_50536_p0 = select_ln173_1085_fu_50520_p3.read();
}

void linear_forward_no_mu::thread_mul_ln728_542_fu_50536_p1() {
    mul_ln728_542_fu_50536_p1 = reg_17100.read();
}

void linear_forward_no_mu::thread_mul_ln728_542_fu_50536_p2() {
    mul_ln728_542_fu_50536_p2 = (!mul_ln728_542_fu_50536_p0.read().is_01() || !mul_ln728_542_fu_50536_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_542_fu_50536_p0.read()) * sc_bigint<8>(mul_ln728_542_fu_50536_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_543_fu_50549_p0() {
    mul_ln728_543_fu_50549_p0 = reg_17104.read();
}

void linear_forward_no_mu::thread_mul_ln728_543_fu_50549_p1() {
    mul_ln728_543_fu_50549_p1 = select_ln173_1087_reg_124766.read();
}

void linear_forward_no_mu::thread_mul_ln728_543_fu_50549_p2() {
    mul_ln728_543_fu_50549_p2 = (!mul_ln728_543_fu_50549_p0.read().is_01() || !mul_ln728_543_fu_50549_p1.read().is_01())? sc_lv<9>(): sc_bigint<8>(mul_ln728_543_fu_50549_p0.read()) * sc_bigint<2>(mul_ln728_543_fu_50549_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_544_fu_50879_p0() {
    mul_ln728_544_fu_50879_p0 = select_ln173_1089_reg_124811.read();
}

void linear_forward_no_mu::thread_mul_ln728_544_fu_50879_p1() {
    mul_ln728_544_fu_50879_p1 = reg_17076.read();
}

void linear_forward_no_mu::thread_mul_ln728_544_fu_50879_p2() {
    mul_ln728_544_fu_50879_p2 = (!mul_ln728_544_fu_50879_p0.read().is_01() || !mul_ln728_544_fu_50879_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_544_fu_50879_p0.read()) * sc_bigint<8>(mul_ln728_544_fu_50879_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_545_fu_50904_p0() {
    mul_ln728_545_fu_50904_p0 = select_ln173_1091_reg_124816.read();
}

void linear_forward_no_mu::thread_mul_ln728_545_fu_50904_p1() {
    mul_ln728_545_fu_50904_p1 = reg_17080.read();
}

void linear_forward_no_mu::thread_mul_ln728_545_fu_50904_p2() {
    mul_ln728_545_fu_50904_p2 = (!mul_ln728_545_fu_50904_p0.read().is_01() || !mul_ln728_545_fu_50904_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_545_fu_50904_p0.read()) * sc_bigint<8>(mul_ln728_545_fu_50904_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_546_fu_50929_p0() {
    mul_ln728_546_fu_50929_p0 = select_ln173_1093_reg_124821.read();
}

void linear_forward_no_mu::thread_mul_ln728_546_fu_50929_p1() {
    mul_ln728_546_fu_50929_p1 = reg_17084.read();
}

void linear_forward_no_mu::thread_mul_ln728_546_fu_50929_p2() {
    mul_ln728_546_fu_50929_p2 = (!mul_ln728_546_fu_50929_p0.read().is_01() || !mul_ln728_546_fu_50929_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_546_fu_50929_p0.read()) * sc_bigint<8>(mul_ln728_546_fu_50929_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_547_fu_50954_p0() {
    mul_ln728_547_fu_50954_p0 = reg_17088.read();
}

void linear_forward_no_mu::thread_mul_ln728_547_fu_50954_p1() {
    mul_ln728_547_fu_50954_p1 = select_ln173_1095_reg_124826.read();
}

void linear_forward_no_mu::thread_mul_ln728_547_fu_50954_p2() {
    mul_ln728_547_fu_50954_p2 = (!mul_ln728_547_fu_50954_p0.read().is_01() || !mul_ln728_547_fu_50954_p1.read().is_01())? sc_lv<9>(): sc_bigint<8>(mul_ln728_547_fu_50954_p0.read()) * sc_bigint<2>(mul_ln728_547_fu_50954_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_548_fu_50979_p0() {
    mul_ln728_548_fu_50979_p0 = select_ln173_1097_reg_124831.read();
}

void linear_forward_no_mu::thread_mul_ln728_548_fu_50979_p1() {
    mul_ln728_548_fu_50979_p1 = reg_17092.read();
}

void linear_forward_no_mu::thread_mul_ln728_548_fu_50979_p2() {
    mul_ln728_548_fu_50979_p2 = (!mul_ln728_548_fu_50979_p0.read().is_01() || !mul_ln728_548_fu_50979_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_548_fu_50979_p0.read()) * sc_bigint<8>(mul_ln728_548_fu_50979_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_549_fu_51004_p0() {
    mul_ln728_549_fu_51004_p0 = select_ln173_1099_reg_124836.read();
}

void linear_forward_no_mu::thread_mul_ln728_549_fu_51004_p1() {
    mul_ln728_549_fu_51004_p1 = reg_17096.read();
}

void linear_forward_no_mu::thread_mul_ln728_549_fu_51004_p2() {
    mul_ln728_549_fu_51004_p2 = (!mul_ln728_549_fu_51004_p0.read().is_01() || !mul_ln728_549_fu_51004_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_549_fu_51004_p0.read()) * sc_bigint<8>(mul_ln728_549_fu_51004_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_54_fu_20459_p0() {
    mul_ln728_54_fu_20459_p0 = select_ln173_109_reg_120241.read();
}

void linear_forward_no_mu::thread_mul_ln728_54_fu_20459_p1() {
    mul_ln728_54_fu_20459_p1 = reg_17100.read();
}

void linear_forward_no_mu::thread_mul_ln728_54_fu_20459_p2() {
    mul_ln728_54_fu_20459_p2 = (!mul_ln728_54_fu_20459_p0.read().is_01() || !mul_ln728_54_fu_20459_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_54_fu_20459_p0.read()) * sc_bigint<8>(mul_ln728_54_fu_20459_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_550_fu_51052_p0() {
    mul_ln728_550_fu_51052_p0 = select_ln173_1101_fu_51036_p3.read();
}

void linear_forward_no_mu::thread_mul_ln728_550_fu_51052_p1() {
    mul_ln728_550_fu_51052_p1 = reg_17100.read();
}

void linear_forward_no_mu::thread_mul_ln728_550_fu_51052_p2() {
    mul_ln728_550_fu_51052_p2 = (!mul_ln728_550_fu_51052_p0.read().is_01() || !mul_ln728_550_fu_51052_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_550_fu_51052_p0.read()) * sc_bigint<8>(mul_ln728_550_fu_51052_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_551_fu_51065_p0() {
    mul_ln728_551_fu_51065_p0 = reg_17104.read();
}

void linear_forward_no_mu::thread_mul_ln728_551_fu_51065_p1() {
    mul_ln728_551_fu_51065_p1 = select_ln173_1103_reg_124841.read();
}

void linear_forward_no_mu::thread_mul_ln728_551_fu_51065_p2() {
    mul_ln728_551_fu_51065_p2 = (!mul_ln728_551_fu_51065_p0.read().is_01() || !mul_ln728_551_fu_51065_p1.read().is_01())? sc_lv<9>(): sc_bigint<8>(mul_ln728_551_fu_51065_p0.read()) * sc_bigint<2>(mul_ln728_551_fu_51065_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_552_fu_51385_p0() {
    mul_ln728_552_fu_51385_p0 = select_ln173_1105_reg_124881.read();
}

void linear_forward_no_mu::thread_mul_ln728_552_fu_51385_p1() {
    mul_ln728_552_fu_51385_p1 = reg_17076.read();
}

void linear_forward_no_mu::thread_mul_ln728_552_fu_51385_p2() {
    mul_ln728_552_fu_51385_p2 = (!mul_ln728_552_fu_51385_p0.read().is_01() || !mul_ln728_552_fu_51385_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_552_fu_51385_p0.read()) * sc_bigint<8>(mul_ln728_552_fu_51385_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_553_fu_51410_p0() {
    mul_ln728_553_fu_51410_p0 = select_ln173_1107_reg_124886.read();
}

void linear_forward_no_mu::thread_mul_ln728_553_fu_51410_p1() {
    mul_ln728_553_fu_51410_p1 = reg_17080.read();
}

void linear_forward_no_mu::thread_mul_ln728_553_fu_51410_p2() {
    mul_ln728_553_fu_51410_p2 = (!mul_ln728_553_fu_51410_p0.read().is_01() || !mul_ln728_553_fu_51410_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_553_fu_51410_p0.read()) * sc_bigint<8>(mul_ln728_553_fu_51410_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_554_fu_51435_p0() {
    mul_ln728_554_fu_51435_p0 = select_ln173_1109_reg_124891.read();
}

void linear_forward_no_mu::thread_mul_ln728_554_fu_51435_p1() {
    mul_ln728_554_fu_51435_p1 = reg_17084.read();
}

void linear_forward_no_mu::thread_mul_ln728_554_fu_51435_p2() {
    mul_ln728_554_fu_51435_p2 = (!mul_ln728_554_fu_51435_p0.read().is_01() || !mul_ln728_554_fu_51435_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_554_fu_51435_p0.read()) * sc_bigint<8>(mul_ln728_554_fu_51435_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_555_fu_51460_p0() {
    mul_ln728_555_fu_51460_p0 = reg_17088.read();
}

void linear_forward_no_mu::thread_mul_ln728_555_fu_51460_p1() {
    mul_ln728_555_fu_51460_p1 = select_ln173_1111_reg_124896.read();
}

void linear_forward_no_mu::thread_mul_ln728_555_fu_51460_p2() {
    mul_ln728_555_fu_51460_p2 = (!mul_ln728_555_fu_51460_p0.read().is_01() || !mul_ln728_555_fu_51460_p1.read().is_01())? sc_lv<9>(): sc_bigint<8>(mul_ln728_555_fu_51460_p0.read()) * sc_bigint<2>(mul_ln728_555_fu_51460_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_556_fu_51485_p0() {
    mul_ln728_556_fu_51485_p0 = select_ln173_1113_reg_124901.read();
}

void linear_forward_no_mu::thread_mul_ln728_556_fu_51485_p1() {
    mul_ln728_556_fu_51485_p1 = reg_17092.read();
}

void linear_forward_no_mu::thread_mul_ln728_556_fu_51485_p2() {
    mul_ln728_556_fu_51485_p2 = (!mul_ln728_556_fu_51485_p0.read().is_01() || !mul_ln728_556_fu_51485_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_556_fu_51485_p0.read()) * sc_bigint<8>(mul_ln728_556_fu_51485_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_557_fu_51510_p0() {
    mul_ln728_557_fu_51510_p0 = select_ln173_1115_reg_124906.read();
}

void linear_forward_no_mu::thread_mul_ln728_557_fu_51510_p1() {
    mul_ln728_557_fu_51510_p1 = reg_17096.read();
}

void linear_forward_no_mu::thread_mul_ln728_557_fu_51510_p2() {
    mul_ln728_557_fu_51510_p2 = (!mul_ln728_557_fu_51510_p0.read().is_01() || !mul_ln728_557_fu_51510_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_557_fu_51510_p0.read()) * sc_bigint<8>(mul_ln728_557_fu_51510_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_558_fu_51535_p0() {
    mul_ln728_558_fu_51535_p0 = select_ln173_1117_reg_124911.read();
}

void linear_forward_no_mu::thread_mul_ln728_558_fu_51535_p1() {
    mul_ln728_558_fu_51535_p1 = reg_17100.read();
}

void linear_forward_no_mu::thread_mul_ln728_558_fu_51535_p2() {
    mul_ln728_558_fu_51535_p2 = (!mul_ln728_558_fu_51535_p0.read().is_01() || !mul_ln728_558_fu_51535_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_558_fu_51535_p0.read()) * sc_bigint<8>(mul_ln728_558_fu_51535_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_559_fu_51560_p0() {
    mul_ln728_559_fu_51560_p0 = reg_17104.read();
}

void linear_forward_no_mu::thread_mul_ln728_559_fu_51560_p1() {
    mul_ln728_559_fu_51560_p1 = select_ln173_1119_reg_124916.read();
}

void linear_forward_no_mu::thread_mul_ln728_559_fu_51560_p2() {
    mul_ln728_559_fu_51560_p2 = (!mul_ln728_559_fu_51560_p0.read().is_01() || !mul_ln728_559_fu_51560_p1.read().is_01())? sc_lv<9>(): sc_bigint<8>(mul_ln728_559_fu_51560_p0.read()) * sc_bigint<2>(mul_ln728_559_fu_51560_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_55_fu_20484_p0() {
    mul_ln728_55_fu_20484_p0 = reg_17104.read();
}

void linear_forward_no_mu::thread_mul_ln728_55_fu_20484_p1() {
    mul_ln728_55_fu_20484_p1 = select_ln173_111_reg_120246.read();
}

void linear_forward_no_mu::thread_mul_ln728_55_fu_20484_p2() {
    mul_ln728_55_fu_20484_p2 = (!mul_ln728_55_fu_20484_p0.read().is_01() || !mul_ln728_55_fu_20484_p1.read().is_01())? sc_lv<9>(): sc_bigint<8>(mul_ln728_55_fu_20484_p0.read()) * sc_bigint<2>(mul_ln728_55_fu_20484_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_560_fu_51846_p0() {
    mul_ln728_560_fu_51846_p0 = select_ln173_1121_reg_124951.read();
}

void linear_forward_no_mu::thread_mul_ln728_560_fu_51846_p1() {
    mul_ln728_560_fu_51846_p1 = reg_17076.read();
}

void linear_forward_no_mu::thread_mul_ln728_560_fu_51846_p2() {
    mul_ln728_560_fu_51846_p2 = (!mul_ln728_560_fu_51846_p0.read().is_01() || !mul_ln728_560_fu_51846_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_560_fu_51846_p0.read()) * sc_bigint<8>(mul_ln728_560_fu_51846_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_561_fu_51871_p0() {
    mul_ln728_561_fu_51871_p0 = select_ln173_1123_reg_124956.read();
}

void linear_forward_no_mu::thread_mul_ln728_561_fu_51871_p1() {
    mul_ln728_561_fu_51871_p1 = reg_17080.read();
}

void linear_forward_no_mu::thread_mul_ln728_561_fu_51871_p2() {
    mul_ln728_561_fu_51871_p2 = (!mul_ln728_561_fu_51871_p0.read().is_01() || !mul_ln728_561_fu_51871_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_561_fu_51871_p0.read()) * sc_bigint<8>(mul_ln728_561_fu_51871_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_562_fu_51896_p0() {
    mul_ln728_562_fu_51896_p0 = select_ln173_1125_reg_124961.read();
}

void linear_forward_no_mu::thread_mul_ln728_562_fu_51896_p1() {
    mul_ln728_562_fu_51896_p1 = reg_17084.read();
}

void linear_forward_no_mu::thread_mul_ln728_562_fu_51896_p2() {
    mul_ln728_562_fu_51896_p2 = (!mul_ln728_562_fu_51896_p0.read().is_01() || !mul_ln728_562_fu_51896_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_562_fu_51896_p0.read()) * sc_bigint<8>(mul_ln728_562_fu_51896_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_563_fu_51921_p0() {
    mul_ln728_563_fu_51921_p0 = reg_17088.read();
}

void linear_forward_no_mu::thread_mul_ln728_563_fu_51921_p1() {
    mul_ln728_563_fu_51921_p1 = select_ln173_1127_reg_124966.read();
}

void linear_forward_no_mu::thread_mul_ln728_563_fu_51921_p2() {
    mul_ln728_563_fu_51921_p2 = (!mul_ln728_563_fu_51921_p0.read().is_01() || !mul_ln728_563_fu_51921_p1.read().is_01())? sc_lv<9>(): sc_bigint<8>(mul_ln728_563_fu_51921_p0.read()) * sc_bigint<2>(mul_ln728_563_fu_51921_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_564_fu_51946_p0() {
    mul_ln728_564_fu_51946_p0 = select_ln173_1129_reg_124971.read();
}

void linear_forward_no_mu::thread_mul_ln728_564_fu_51946_p1() {
    mul_ln728_564_fu_51946_p1 = reg_17092.read();
}

void linear_forward_no_mu::thread_mul_ln728_564_fu_51946_p2() {
    mul_ln728_564_fu_51946_p2 = (!mul_ln728_564_fu_51946_p0.read().is_01() || !mul_ln728_564_fu_51946_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_564_fu_51946_p0.read()) * sc_bigint<8>(mul_ln728_564_fu_51946_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_565_fu_51994_p0() {
    mul_ln728_565_fu_51994_p0 = select_ln173_1131_fu_51978_p3.read();
}

void linear_forward_no_mu::thread_mul_ln728_565_fu_51994_p1() {
    mul_ln728_565_fu_51994_p1 = reg_17096.read();
}

void linear_forward_no_mu::thread_mul_ln728_565_fu_51994_p2() {
    mul_ln728_565_fu_51994_p2 = (!mul_ln728_565_fu_51994_p0.read().is_01() || !mul_ln728_565_fu_51994_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_565_fu_51994_p0.read()) * sc_bigint<8>(mul_ln728_565_fu_51994_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_566_fu_52030_p0() {
    mul_ln728_566_fu_52030_p0 = select_ln173_1133_fu_52014_p3.read();
}

void linear_forward_no_mu::thread_mul_ln728_566_fu_52030_p1() {
    mul_ln728_566_fu_52030_p1 = reg_17100.read();
}

void linear_forward_no_mu::thread_mul_ln728_566_fu_52030_p2() {
    mul_ln728_566_fu_52030_p2 = (!mul_ln728_566_fu_52030_p0.read().is_01() || !mul_ln728_566_fu_52030_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_566_fu_52030_p0.read()) * sc_bigint<8>(mul_ln728_566_fu_52030_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_567_fu_52043_p0() {
    mul_ln728_567_fu_52043_p0 = reg_17104.read();
}

void linear_forward_no_mu::thread_mul_ln728_567_fu_52043_p1() {
    mul_ln728_567_fu_52043_p1 = select_ln173_1135_reg_124976.read();
}

void linear_forward_no_mu::thread_mul_ln728_567_fu_52043_p2() {
    mul_ln728_567_fu_52043_p2 = (!mul_ln728_567_fu_52043_p0.read().is_01() || !mul_ln728_567_fu_52043_p1.read().is_01())? sc_lv<9>(): sc_bigint<8>(mul_ln728_567_fu_52043_p0.read()) * sc_bigint<2>(mul_ln728_567_fu_52043_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_568_fu_52366_p0() {
    mul_ln728_568_fu_52366_p0 = select_ln173_1137_reg_125021.read();
}

void linear_forward_no_mu::thread_mul_ln728_568_fu_52366_p1() {
    mul_ln728_568_fu_52366_p1 = reg_17076.read();
}

void linear_forward_no_mu::thread_mul_ln728_568_fu_52366_p2() {
    mul_ln728_568_fu_52366_p2 = (!mul_ln728_568_fu_52366_p0.read().is_01() || !mul_ln728_568_fu_52366_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_568_fu_52366_p0.read()) * sc_bigint<8>(mul_ln728_568_fu_52366_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_569_fu_52391_p0() {
    mul_ln728_569_fu_52391_p0 = select_ln173_1139_reg_125026.read();
}

void linear_forward_no_mu::thread_mul_ln728_569_fu_52391_p1() {
    mul_ln728_569_fu_52391_p1 = reg_17080.read();
}

void linear_forward_no_mu::thread_mul_ln728_569_fu_52391_p2() {
    mul_ln728_569_fu_52391_p2 = (!mul_ln728_569_fu_52391_p0.read().is_01() || !mul_ln728_569_fu_52391_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_569_fu_52391_p0.read()) * sc_bigint<8>(mul_ln728_569_fu_52391_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_56_fu_20769_p0() {
    mul_ln728_56_fu_20769_p0 = select_ln173_113_reg_120287.read();
}

void linear_forward_no_mu::thread_mul_ln728_56_fu_20769_p1() {
    mul_ln728_56_fu_20769_p1 = reg_17076.read();
}

void linear_forward_no_mu::thread_mul_ln728_56_fu_20769_p2() {
    mul_ln728_56_fu_20769_p2 = (!mul_ln728_56_fu_20769_p0.read().is_01() || !mul_ln728_56_fu_20769_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_56_fu_20769_p0.read()) * sc_bigint<8>(mul_ln728_56_fu_20769_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_570_fu_52416_p0() {
    mul_ln728_570_fu_52416_p0 = select_ln173_1141_reg_125031.read();
}

void linear_forward_no_mu::thread_mul_ln728_570_fu_52416_p1() {
    mul_ln728_570_fu_52416_p1 = reg_17084.read();
}

void linear_forward_no_mu::thread_mul_ln728_570_fu_52416_p2() {
    mul_ln728_570_fu_52416_p2 = (!mul_ln728_570_fu_52416_p0.read().is_01() || !mul_ln728_570_fu_52416_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_570_fu_52416_p0.read()) * sc_bigint<8>(mul_ln728_570_fu_52416_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_571_fu_52441_p0() {
    mul_ln728_571_fu_52441_p0 = reg_17088.read();
}

void linear_forward_no_mu::thread_mul_ln728_571_fu_52441_p1() {
    mul_ln728_571_fu_52441_p1 = select_ln173_1143_reg_125036.read();
}

void linear_forward_no_mu::thread_mul_ln728_571_fu_52441_p2() {
    mul_ln728_571_fu_52441_p2 = (!mul_ln728_571_fu_52441_p0.read().is_01() || !mul_ln728_571_fu_52441_p1.read().is_01())? sc_lv<9>(): sc_bigint<8>(mul_ln728_571_fu_52441_p0.read()) * sc_bigint<2>(mul_ln728_571_fu_52441_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_572_fu_52466_p0() {
    mul_ln728_572_fu_52466_p0 = select_ln173_1145_reg_125041.read();
}

void linear_forward_no_mu::thread_mul_ln728_572_fu_52466_p1() {
    mul_ln728_572_fu_52466_p1 = reg_17092.read();
}

void linear_forward_no_mu::thread_mul_ln728_572_fu_52466_p2() {
    mul_ln728_572_fu_52466_p2 = (!mul_ln728_572_fu_52466_p0.read().is_01() || !mul_ln728_572_fu_52466_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_572_fu_52466_p0.read()) * sc_bigint<8>(mul_ln728_572_fu_52466_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_573_fu_52491_p0() {
    mul_ln728_573_fu_52491_p0 = select_ln173_1147_reg_125046.read();
}

void linear_forward_no_mu::thread_mul_ln728_573_fu_52491_p1() {
    mul_ln728_573_fu_52491_p1 = reg_17096.read();
}

void linear_forward_no_mu::thread_mul_ln728_573_fu_52491_p2() {
    mul_ln728_573_fu_52491_p2 = (!mul_ln728_573_fu_52491_p0.read().is_01() || !mul_ln728_573_fu_52491_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_573_fu_52491_p0.read()) * sc_bigint<8>(mul_ln728_573_fu_52491_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_574_fu_52539_p0() {
    mul_ln728_574_fu_52539_p0 = select_ln173_1149_fu_52523_p3.read();
}

void linear_forward_no_mu::thread_mul_ln728_574_fu_52539_p1() {
    mul_ln728_574_fu_52539_p1 = reg_17100.read();
}

void linear_forward_no_mu::thread_mul_ln728_574_fu_52539_p2() {
    mul_ln728_574_fu_52539_p2 = (!mul_ln728_574_fu_52539_p0.read().is_01() || !mul_ln728_574_fu_52539_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_574_fu_52539_p0.read()) * sc_bigint<8>(mul_ln728_574_fu_52539_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_575_fu_52552_p0() {
    mul_ln728_575_fu_52552_p0 = reg_17104.read();
}

void linear_forward_no_mu::thread_mul_ln728_575_fu_52552_p1() {
    mul_ln728_575_fu_52552_p1 = select_ln173_1151_reg_125051.read();
}

void linear_forward_no_mu::thread_mul_ln728_575_fu_52552_p2() {
    mul_ln728_575_fu_52552_p2 = (!mul_ln728_575_fu_52552_p0.read().is_01() || !mul_ln728_575_fu_52552_p1.read().is_01())? sc_lv<9>(): sc_bigint<8>(mul_ln728_575_fu_52552_p0.read()) * sc_bigint<2>(mul_ln728_575_fu_52552_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_576_fu_52867_p0() {
    mul_ln728_576_fu_52867_p0 = select_ln173_1153_reg_125086.read();
}

void linear_forward_no_mu::thread_mul_ln728_576_fu_52867_p1() {
    mul_ln728_576_fu_52867_p1 = reg_17076.read();
}

void linear_forward_no_mu::thread_mul_ln728_576_fu_52867_p2() {
    mul_ln728_576_fu_52867_p2 = (!mul_ln728_576_fu_52867_p0.read().is_01() || !mul_ln728_576_fu_52867_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_576_fu_52867_p0.read()) * sc_bigint<8>(mul_ln728_576_fu_52867_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_577_fu_52892_p0() {
    mul_ln728_577_fu_52892_p0 = select_ln173_1155_reg_125091.read();
}

void linear_forward_no_mu::thread_mul_ln728_577_fu_52892_p1() {
    mul_ln728_577_fu_52892_p1 = reg_17080.read();
}

void linear_forward_no_mu::thread_mul_ln728_577_fu_52892_p2() {
    mul_ln728_577_fu_52892_p2 = (!mul_ln728_577_fu_52892_p0.read().is_01() || !mul_ln728_577_fu_52892_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_577_fu_52892_p0.read()) * sc_bigint<8>(mul_ln728_577_fu_52892_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_578_fu_52917_p0() {
    mul_ln728_578_fu_52917_p0 = select_ln173_1157_reg_125096.read();
}

void linear_forward_no_mu::thread_mul_ln728_578_fu_52917_p1() {
    mul_ln728_578_fu_52917_p1 = reg_17084.read();
}

void linear_forward_no_mu::thread_mul_ln728_578_fu_52917_p2() {
    mul_ln728_578_fu_52917_p2 = (!mul_ln728_578_fu_52917_p0.read().is_01() || !mul_ln728_578_fu_52917_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_578_fu_52917_p0.read()) * sc_bigint<8>(mul_ln728_578_fu_52917_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_579_fu_52942_p0() {
    mul_ln728_579_fu_52942_p0 = reg_17088.read();
}

void linear_forward_no_mu::thread_mul_ln728_579_fu_52942_p1() {
    mul_ln728_579_fu_52942_p1 = select_ln173_1159_reg_125101.read();
}

void linear_forward_no_mu::thread_mul_ln728_579_fu_52942_p2() {
    mul_ln728_579_fu_52942_p2 = (!mul_ln728_579_fu_52942_p0.read().is_01() || !mul_ln728_579_fu_52942_p1.read().is_01())? sc_lv<9>(): sc_bigint<8>(mul_ln728_579_fu_52942_p0.read()) * sc_bigint<2>(mul_ln728_579_fu_52942_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_57_fu_20794_p0() {
    mul_ln728_57_fu_20794_p0 = select_ln173_115_reg_120292.read();
}

void linear_forward_no_mu::thread_mul_ln728_57_fu_20794_p1() {
    mul_ln728_57_fu_20794_p1 = reg_17080.read();
}

void linear_forward_no_mu::thread_mul_ln728_57_fu_20794_p2() {
    mul_ln728_57_fu_20794_p2 = (!mul_ln728_57_fu_20794_p0.read().is_01() || !mul_ln728_57_fu_20794_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_57_fu_20794_p0.read()) * sc_bigint<8>(mul_ln728_57_fu_20794_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_580_fu_52967_p0() {
    mul_ln728_580_fu_52967_p0 = select_ln173_1161_reg_125106.read();
}

void linear_forward_no_mu::thread_mul_ln728_580_fu_52967_p1() {
    mul_ln728_580_fu_52967_p1 = reg_17092.read();
}

void linear_forward_no_mu::thread_mul_ln728_580_fu_52967_p2() {
    mul_ln728_580_fu_52967_p2 = (!mul_ln728_580_fu_52967_p0.read().is_01() || !mul_ln728_580_fu_52967_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_580_fu_52967_p0.read()) * sc_bigint<8>(mul_ln728_580_fu_52967_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_581_fu_52992_p0() {
    mul_ln728_581_fu_52992_p0 = select_ln173_1163_reg_125111.read();
}

void linear_forward_no_mu::thread_mul_ln728_581_fu_52992_p1() {
    mul_ln728_581_fu_52992_p1 = reg_17096.read();
}

void linear_forward_no_mu::thread_mul_ln728_581_fu_52992_p2() {
    mul_ln728_581_fu_52992_p2 = (!mul_ln728_581_fu_52992_p0.read().is_01() || !mul_ln728_581_fu_52992_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_581_fu_52992_p0.read()) * sc_bigint<8>(mul_ln728_581_fu_52992_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_582_fu_53017_p0() {
    mul_ln728_582_fu_53017_p0 = select_ln173_1165_reg_125116.read();
}

void linear_forward_no_mu::thread_mul_ln728_582_fu_53017_p1() {
    mul_ln728_582_fu_53017_p1 = reg_17100.read();
}

void linear_forward_no_mu::thread_mul_ln728_582_fu_53017_p2() {
    mul_ln728_582_fu_53017_p2 = (!mul_ln728_582_fu_53017_p0.read().is_01() || !mul_ln728_582_fu_53017_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_582_fu_53017_p0.read()) * sc_bigint<8>(mul_ln728_582_fu_53017_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_583_fu_53042_p0() {
    mul_ln728_583_fu_53042_p0 = reg_17104.read();
}

void linear_forward_no_mu::thread_mul_ln728_583_fu_53042_p1() {
    mul_ln728_583_fu_53042_p1 = select_ln173_1167_reg_125121.read();
}

void linear_forward_no_mu::thread_mul_ln728_583_fu_53042_p2() {
    mul_ln728_583_fu_53042_p2 = (!mul_ln728_583_fu_53042_p0.read().is_01() || !mul_ln728_583_fu_53042_p1.read().is_01())? sc_lv<9>(): sc_bigint<8>(mul_ln728_583_fu_53042_p0.read()) * sc_bigint<2>(mul_ln728_583_fu_53042_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_584_fu_53321_p0() {
    mul_ln728_584_fu_53321_p0 = select_ln173_1169_reg_125156.read();
}

void linear_forward_no_mu::thread_mul_ln728_584_fu_53321_p1() {
    mul_ln728_584_fu_53321_p1 = reg_17076.read();
}

void linear_forward_no_mu::thread_mul_ln728_584_fu_53321_p2() {
    mul_ln728_584_fu_53321_p2 = (!mul_ln728_584_fu_53321_p0.read().is_01() || !mul_ln728_584_fu_53321_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_584_fu_53321_p0.read()) * sc_bigint<8>(mul_ln728_584_fu_53321_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_585_fu_53346_p0() {
    mul_ln728_585_fu_53346_p0 = select_ln173_1171_reg_125161.read();
}

void linear_forward_no_mu::thread_mul_ln728_585_fu_53346_p1() {
    mul_ln728_585_fu_53346_p1 = reg_17080.read();
}

void linear_forward_no_mu::thread_mul_ln728_585_fu_53346_p2() {
    mul_ln728_585_fu_53346_p2 = (!mul_ln728_585_fu_53346_p0.read().is_01() || !mul_ln728_585_fu_53346_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_585_fu_53346_p0.read()) * sc_bigint<8>(mul_ln728_585_fu_53346_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_586_fu_53371_p0() {
    mul_ln728_586_fu_53371_p0 = select_ln173_1173_reg_125166.read();
}

void linear_forward_no_mu::thread_mul_ln728_586_fu_53371_p1() {
    mul_ln728_586_fu_53371_p1 = reg_17084.read();
}

void linear_forward_no_mu::thread_mul_ln728_586_fu_53371_p2() {
    mul_ln728_586_fu_53371_p2 = (!mul_ln728_586_fu_53371_p0.read().is_01() || !mul_ln728_586_fu_53371_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_586_fu_53371_p0.read()) * sc_bigint<8>(mul_ln728_586_fu_53371_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_587_fu_53396_p0() {
    mul_ln728_587_fu_53396_p0 = reg_17088.read();
}

void linear_forward_no_mu::thread_mul_ln728_587_fu_53396_p1() {
    mul_ln728_587_fu_53396_p1 = select_ln173_1175_reg_125171.read();
}

void linear_forward_no_mu::thread_mul_ln728_587_fu_53396_p2() {
    mul_ln728_587_fu_53396_p2 = (!mul_ln728_587_fu_53396_p0.read().is_01() || !mul_ln728_587_fu_53396_p1.read().is_01())? sc_lv<9>(): sc_bigint<8>(mul_ln728_587_fu_53396_p0.read()) * sc_bigint<2>(mul_ln728_587_fu_53396_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_588_fu_53421_p0() {
    mul_ln728_588_fu_53421_p0 = select_ln173_1177_reg_125176.read();
}

void linear_forward_no_mu::thread_mul_ln728_588_fu_53421_p1() {
    mul_ln728_588_fu_53421_p1 = reg_17092.read();
}

void linear_forward_no_mu::thread_mul_ln728_588_fu_53421_p2() {
    mul_ln728_588_fu_53421_p2 = (!mul_ln728_588_fu_53421_p0.read().is_01() || !mul_ln728_588_fu_53421_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_588_fu_53421_p0.read()) * sc_bigint<8>(mul_ln728_588_fu_53421_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_589_fu_53469_p0() {
    mul_ln728_589_fu_53469_p0 = select_ln173_1179_fu_53453_p3.read();
}

void linear_forward_no_mu::thread_mul_ln728_589_fu_53469_p1() {
    mul_ln728_589_fu_53469_p1 = reg_17096.read();
}

void linear_forward_no_mu::thread_mul_ln728_589_fu_53469_p2() {
    mul_ln728_589_fu_53469_p2 = (!mul_ln728_589_fu_53469_p0.read().is_01() || !mul_ln728_589_fu_53469_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_589_fu_53469_p0.read()) * sc_bigint<8>(mul_ln728_589_fu_53469_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_58_fu_20819_p0() {
    mul_ln728_58_fu_20819_p0 = select_ln173_117_reg_120297.read();
}

void linear_forward_no_mu::thread_mul_ln728_58_fu_20819_p1() {
    mul_ln728_58_fu_20819_p1 = reg_17084.read();
}

void linear_forward_no_mu::thread_mul_ln728_58_fu_20819_p2() {
    mul_ln728_58_fu_20819_p2 = (!mul_ln728_58_fu_20819_p0.read().is_01() || !mul_ln728_58_fu_20819_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_58_fu_20819_p0.read()) * sc_bigint<8>(mul_ln728_58_fu_20819_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_590_fu_53505_p0() {
    mul_ln728_590_fu_53505_p0 = select_ln173_1181_fu_53489_p3.read();
}

void linear_forward_no_mu::thread_mul_ln728_590_fu_53505_p1() {
    mul_ln728_590_fu_53505_p1 = reg_17100.read();
}

void linear_forward_no_mu::thread_mul_ln728_590_fu_53505_p2() {
    mul_ln728_590_fu_53505_p2 = (!mul_ln728_590_fu_53505_p0.read().is_01() || !mul_ln728_590_fu_53505_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_590_fu_53505_p0.read()) * sc_bigint<8>(mul_ln728_590_fu_53505_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_591_fu_53518_p0() {
    mul_ln728_591_fu_53518_p0 = reg_17104.read();
}

void linear_forward_no_mu::thread_mul_ln728_591_fu_53518_p1() {
    mul_ln728_591_fu_53518_p1 = select_ln173_1183_reg_125181.read();
}

void linear_forward_no_mu::thread_mul_ln728_591_fu_53518_p2() {
    mul_ln728_591_fu_53518_p2 = (!mul_ln728_591_fu_53518_p0.read().is_01() || !mul_ln728_591_fu_53518_p1.read().is_01())? sc_lv<9>(): sc_bigint<8>(mul_ln728_591_fu_53518_p0.read()) * sc_bigint<2>(mul_ln728_591_fu_53518_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_592_fu_53868_p0() {
    mul_ln728_592_fu_53868_p0 = select_ln173_1185_reg_125226.read();
}

void linear_forward_no_mu::thread_mul_ln728_592_fu_53868_p1() {
    mul_ln728_592_fu_53868_p1 = reg_17076.read();
}

void linear_forward_no_mu::thread_mul_ln728_592_fu_53868_p2() {
    mul_ln728_592_fu_53868_p2 = (!mul_ln728_592_fu_53868_p0.read().is_01() || !mul_ln728_592_fu_53868_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_592_fu_53868_p0.read()) * sc_bigint<8>(mul_ln728_592_fu_53868_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_593_fu_53893_p0() {
    mul_ln728_593_fu_53893_p0 = select_ln173_1187_reg_125231.read();
}

void linear_forward_no_mu::thread_mul_ln728_593_fu_53893_p1() {
    mul_ln728_593_fu_53893_p1 = reg_17080.read();
}

void linear_forward_no_mu::thread_mul_ln728_593_fu_53893_p2() {
    mul_ln728_593_fu_53893_p2 = (!mul_ln728_593_fu_53893_p0.read().is_01() || !mul_ln728_593_fu_53893_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_593_fu_53893_p0.read()) * sc_bigint<8>(mul_ln728_593_fu_53893_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_594_fu_53918_p0() {
    mul_ln728_594_fu_53918_p0 = select_ln173_1189_reg_125236.read();
}

void linear_forward_no_mu::thread_mul_ln728_594_fu_53918_p1() {
    mul_ln728_594_fu_53918_p1 = reg_17084.read();
}

void linear_forward_no_mu::thread_mul_ln728_594_fu_53918_p2() {
    mul_ln728_594_fu_53918_p2 = (!mul_ln728_594_fu_53918_p0.read().is_01() || !mul_ln728_594_fu_53918_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_594_fu_53918_p0.read()) * sc_bigint<8>(mul_ln728_594_fu_53918_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_595_fu_53943_p0() {
    mul_ln728_595_fu_53943_p0 = reg_17088.read();
}

void linear_forward_no_mu::thread_mul_ln728_595_fu_53943_p1() {
    mul_ln728_595_fu_53943_p1 = select_ln173_1191_reg_125241.read();
}

void linear_forward_no_mu::thread_mul_ln728_595_fu_53943_p2() {
    mul_ln728_595_fu_53943_p2 = (!mul_ln728_595_fu_53943_p0.read().is_01() || !mul_ln728_595_fu_53943_p1.read().is_01())? sc_lv<9>(): sc_bigint<8>(mul_ln728_595_fu_53943_p0.read()) * sc_bigint<2>(mul_ln728_595_fu_53943_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_596_fu_53968_p0() {
    mul_ln728_596_fu_53968_p0 = select_ln173_1193_reg_125246.read();
}

void linear_forward_no_mu::thread_mul_ln728_596_fu_53968_p1() {
    mul_ln728_596_fu_53968_p1 = reg_17092.read();
}

void linear_forward_no_mu::thread_mul_ln728_596_fu_53968_p2() {
    mul_ln728_596_fu_53968_p2 = (!mul_ln728_596_fu_53968_p0.read().is_01() || !mul_ln728_596_fu_53968_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_596_fu_53968_p0.read()) * sc_bigint<8>(mul_ln728_596_fu_53968_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_597_fu_53993_p0() {
    mul_ln728_597_fu_53993_p0 = select_ln173_1195_reg_125251.read();
}

void linear_forward_no_mu::thread_mul_ln728_597_fu_53993_p1() {
    mul_ln728_597_fu_53993_p1 = reg_17096.read();
}

void linear_forward_no_mu::thread_mul_ln728_597_fu_53993_p2() {
    mul_ln728_597_fu_53993_p2 = (!mul_ln728_597_fu_53993_p0.read().is_01() || !mul_ln728_597_fu_53993_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_597_fu_53993_p0.read()) * sc_bigint<8>(mul_ln728_597_fu_53993_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_598_fu_54041_p0() {
    mul_ln728_598_fu_54041_p0 = select_ln173_1197_fu_54025_p3.read();
}

void linear_forward_no_mu::thread_mul_ln728_598_fu_54041_p1() {
    mul_ln728_598_fu_54041_p1 = reg_17100.read();
}

void linear_forward_no_mu::thread_mul_ln728_598_fu_54041_p2() {
    mul_ln728_598_fu_54041_p2 = (!mul_ln728_598_fu_54041_p0.read().is_01() || !mul_ln728_598_fu_54041_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_598_fu_54041_p0.read()) * sc_bigint<8>(mul_ln728_598_fu_54041_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_599_fu_54054_p0() {
    mul_ln728_599_fu_54054_p0 = reg_17104.read();
}

void linear_forward_no_mu::thread_mul_ln728_599_fu_54054_p1() {
    mul_ln728_599_fu_54054_p1 = select_ln173_1199_reg_125256.read();
}

void linear_forward_no_mu::thread_mul_ln728_599_fu_54054_p2() {
    mul_ln728_599_fu_54054_p2 = (!mul_ln728_599_fu_54054_p0.read().is_01() || !mul_ln728_599_fu_54054_p1.read().is_01())? sc_lv<9>(): sc_bigint<8>(mul_ln728_599_fu_54054_p0.read()) * sc_bigint<2>(mul_ln728_599_fu_54054_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_59_fu_20844_p0() {
    mul_ln728_59_fu_20844_p0 = reg_17088.read();
}

void linear_forward_no_mu::thread_mul_ln728_59_fu_20844_p1() {
    mul_ln728_59_fu_20844_p1 = select_ln173_119_reg_120302.read();
}

void linear_forward_no_mu::thread_mul_ln728_59_fu_20844_p2() {
    mul_ln728_59_fu_20844_p2 = (!mul_ln728_59_fu_20844_p0.read().is_01() || !mul_ln728_59_fu_20844_p1.read().is_01())? sc_lv<9>(): sc_bigint<8>(mul_ln728_59_fu_20844_p0.read()) * sc_bigint<2>(mul_ln728_59_fu_20844_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_5_fu_17576_p0() {
    mul_ln728_5_fu_17576_p0 = select_ln173_11_reg_119785.read();
}

void linear_forward_no_mu::thread_mul_ln728_5_fu_17576_p1() {
    mul_ln728_5_fu_17576_p1 = reg_17096.read();
}

void linear_forward_no_mu::thread_mul_ln728_5_fu_17576_p2() {
    mul_ln728_5_fu_17576_p2 = (!mul_ln728_5_fu_17576_p0.read().is_01() || !mul_ln728_5_fu_17576_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_5_fu_17576_p0.read()) * sc_bigint<8>(mul_ln728_5_fu_17576_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_600_fu_54362_p0() {
    mul_ln728_600_fu_54362_p0 = select_ln173_1201_reg_125296.read();
}

void linear_forward_no_mu::thread_mul_ln728_600_fu_54362_p1() {
    mul_ln728_600_fu_54362_p1 = reg_17076.read();
}

void linear_forward_no_mu::thread_mul_ln728_600_fu_54362_p2() {
    mul_ln728_600_fu_54362_p2 = (!mul_ln728_600_fu_54362_p0.read().is_01() || !mul_ln728_600_fu_54362_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_600_fu_54362_p0.read()) * sc_bigint<8>(mul_ln728_600_fu_54362_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_601_fu_54387_p0() {
    mul_ln728_601_fu_54387_p0 = select_ln173_1203_reg_125301.read();
}

void linear_forward_no_mu::thread_mul_ln728_601_fu_54387_p1() {
    mul_ln728_601_fu_54387_p1 = reg_17080.read();
}

void linear_forward_no_mu::thread_mul_ln728_601_fu_54387_p2() {
    mul_ln728_601_fu_54387_p2 = (!mul_ln728_601_fu_54387_p0.read().is_01() || !mul_ln728_601_fu_54387_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_601_fu_54387_p0.read()) * sc_bigint<8>(mul_ln728_601_fu_54387_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_602_fu_54412_p0() {
    mul_ln728_602_fu_54412_p0 = select_ln173_1205_reg_125306.read();
}

void linear_forward_no_mu::thread_mul_ln728_602_fu_54412_p1() {
    mul_ln728_602_fu_54412_p1 = reg_17084.read();
}

void linear_forward_no_mu::thread_mul_ln728_602_fu_54412_p2() {
    mul_ln728_602_fu_54412_p2 = (!mul_ln728_602_fu_54412_p0.read().is_01() || !mul_ln728_602_fu_54412_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_602_fu_54412_p0.read()) * sc_bigint<8>(mul_ln728_602_fu_54412_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_603_fu_54437_p0() {
    mul_ln728_603_fu_54437_p0 = reg_17088.read();
}

void linear_forward_no_mu::thread_mul_ln728_603_fu_54437_p1() {
    mul_ln728_603_fu_54437_p1 = select_ln173_1207_reg_125311.read();
}

void linear_forward_no_mu::thread_mul_ln728_603_fu_54437_p2() {
    mul_ln728_603_fu_54437_p2 = (!mul_ln728_603_fu_54437_p0.read().is_01() || !mul_ln728_603_fu_54437_p1.read().is_01())? sc_lv<9>(): sc_bigint<8>(mul_ln728_603_fu_54437_p0.read()) * sc_bigint<2>(mul_ln728_603_fu_54437_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_604_fu_54462_p0() {
    mul_ln728_604_fu_54462_p0 = select_ln173_1209_reg_125316.read();
}

void linear_forward_no_mu::thread_mul_ln728_604_fu_54462_p1() {
    mul_ln728_604_fu_54462_p1 = reg_17092.read();
}

void linear_forward_no_mu::thread_mul_ln728_604_fu_54462_p2() {
    mul_ln728_604_fu_54462_p2 = (!mul_ln728_604_fu_54462_p0.read().is_01() || !mul_ln728_604_fu_54462_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_604_fu_54462_p0.read()) * sc_bigint<8>(mul_ln728_604_fu_54462_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_605_fu_54487_p0() {
    mul_ln728_605_fu_54487_p0 = select_ln173_1211_reg_125321.read();
}

void linear_forward_no_mu::thread_mul_ln728_605_fu_54487_p1() {
    mul_ln728_605_fu_54487_p1 = reg_17096.read();
}

void linear_forward_no_mu::thread_mul_ln728_605_fu_54487_p2() {
    mul_ln728_605_fu_54487_p2 = (!mul_ln728_605_fu_54487_p0.read().is_01() || !mul_ln728_605_fu_54487_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_605_fu_54487_p0.read()) * sc_bigint<8>(mul_ln728_605_fu_54487_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_606_fu_54512_p0() {
    mul_ln728_606_fu_54512_p0 = select_ln173_1213_reg_125326.read();
}

void linear_forward_no_mu::thread_mul_ln728_606_fu_54512_p1() {
    mul_ln728_606_fu_54512_p1 = reg_17100.read();
}

void linear_forward_no_mu::thread_mul_ln728_606_fu_54512_p2() {
    mul_ln728_606_fu_54512_p2 = (!mul_ln728_606_fu_54512_p0.read().is_01() || !mul_ln728_606_fu_54512_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_606_fu_54512_p0.read()) * sc_bigint<8>(mul_ln728_606_fu_54512_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_607_fu_54537_p0() {
    mul_ln728_607_fu_54537_p0 = reg_17104.read();
}

void linear_forward_no_mu::thread_mul_ln728_607_fu_54537_p1() {
    mul_ln728_607_fu_54537_p1 = select_ln173_1215_reg_125331.read();
}

void linear_forward_no_mu::thread_mul_ln728_607_fu_54537_p2() {
    mul_ln728_607_fu_54537_p2 = (!mul_ln728_607_fu_54537_p0.read().is_01() || !mul_ln728_607_fu_54537_p1.read().is_01())? sc_lv<9>(): sc_bigint<8>(mul_ln728_607_fu_54537_p0.read()) * sc_bigint<2>(mul_ln728_607_fu_54537_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_608_fu_54817_p0() {
    mul_ln728_608_fu_54817_p0 = select_ln173_1217_reg_125366.read();
}

void linear_forward_no_mu::thread_mul_ln728_608_fu_54817_p1() {
    mul_ln728_608_fu_54817_p1 = reg_17076.read();
}

void linear_forward_no_mu::thread_mul_ln728_608_fu_54817_p2() {
    mul_ln728_608_fu_54817_p2 = (!mul_ln728_608_fu_54817_p0.read().is_01() || !mul_ln728_608_fu_54817_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_608_fu_54817_p0.read()) * sc_bigint<8>(mul_ln728_608_fu_54817_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_609_fu_54842_p0() {
    mul_ln728_609_fu_54842_p0 = select_ln173_1219_reg_125371.read();
}

void linear_forward_no_mu::thread_mul_ln728_609_fu_54842_p1() {
    mul_ln728_609_fu_54842_p1 = reg_17080.read();
}

void linear_forward_no_mu::thread_mul_ln728_609_fu_54842_p2() {
    mul_ln728_609_fu_54842_p2 = (!mul_ln728_609_fu_54842_p0.read().is_01() || !mul_ln728_609_fu_54842_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_609_fu_54842_p0.read()) * sc_bigint<8>(mul_ln728_609_fu_54842_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_60_fu_20869_p0() {
    mul_ln728_60_fu_20869_p0 = select_ln173_121_reg_120307.read();
}

void linear_forward_no_mu::thread_mul_ln728_60_fu_20869_p1() {
    mul_ln728_60_fu_20869_p1 = reg_17092.read();
}

void linear_forward_no_mu::thread_mul_ln728_60_fu_20869_p2() {
    mul_ln728_60_fu_20869_p2 = (!mul_ln728_60_fu_20869_p0.read().is_01() || !mul_ln728_60_fu_20869_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_60_fu_20869_p0.read()) * sc_bigint<8>(mul_ln728_60_fu_20869_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_610_fu_54867_p0() {
    mul_ln728_610_fu_54867_p0 = select_ln173_1221_reg_125376.read();
}

void linear_forward_no_mu::thread_mul_ln728_610_fu_54867_p1() {
    mul_ln728_610_fu_54867_p1 = reg_17084.read();
}

void linear_forward_no_mu::thread_mul_ln728_610_fu_54867_p2() {
    mul_ln728_610_fu_54867_p2 = (!mul_ln728_610_fu_54867_p0.read().is_01() || !mul_ln728_610_fu_54867_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_610_fu_54867_p0.read()) * sc_bigint<8>(mul_ln728_610_fu_54867_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_611_fu_54892_p0() {
    mul_ln728_611_fu_54892_p0 = reg_17088.read();
}

void linear_forward_no_mu::thread_mul_ln728_611_fu_54892_p1() {
    mul_ln728_611_fu_54892_p1 = select_ln173_1223_reg_125381.read();
}

void linear_forward_no_mu::thread_mul_ln728_611_fu_54892_p2() {
    mul_ln728_611_fu_54892_p2 = (!mul_ln728_611_fu_54892_p0.read().is_01() || !mul_ln728_611_fu_54892_p1.read().is_01())? sc_lv<9>(): sc_bigint<8>(mul_ln728_611_fu_54892_p0.read()) * sc_bigint<2>(mul_ln728_611_fu_54892_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_612_fu_54917_p0() {
    mul_ln728_612_fu_54917_p0 = select_ln173_1225_reg_125386.read();
}

void linear_forward_no_mu::thread_mul_ln728_612_fu_54917_p1() {
    mul_ln728_612_fu_54917_p1 = reg_17092.read();
}

void linear_forward_no_mu::thread_mul_ln728_612_fu_54917_p2() {
    mul_ln728_612_fu_54917_p2 = (!mul_ln728_612_fu_54917_p0.read().is_01() || !mul_ln728_612_fu_54917_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_612_fu_54917_p0.read()) * sc_bigint<8>(mul_ln728_612_fu_54917_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_613_fu_54965_p0() {
    mul_ln728_613_fu_54965_p0 = select_ln173_1227_fu_54949_p3.read();
}

void linear_forward_no_mu::thread_mul_ln728_613_fu_54965_p1() {
    mul_ln728_613_fu_54965_p1 = reg_17096.read();
}

void linear_forward_no_mu::thread_mul_ln728_613_fu_54965_p2() {
    mul_ln728_613_fu_54965_p2 = (!mul_ln728_613_fu_54965_p0.read().is_01() || !mul_ln728_613_fu_54965_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_613_fu_54965_p0.read()) * sc_bigint<8>(mul_ln728_613_fu_54965_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_614_fu_55001_p0() {
    mul_ln728_614_fu_55001_p0 = select_ln173_1229_fu_54985_p3.read();
}

void linear_forward_no_mu::thread_mul_ln728_614_fu_55001_p1() {
    mul_ln728_614_fu_55001_p1 = reg_17100.read();
}

void linear_forward_no_mu::thread_mul_ln728_614_fu_55001_p2() {
    mul_ln728_614_fu_55001_p2 = (!mul_ln728_614_fu_55001_p0.read().is_01() || !mul_ln728_614_fu_55001_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_614_fu_55001_p0.read()) * sc_bigint<8>(mul_ln728_614_fu_55001_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_615_fu_55014_p0() {
    mul_ln728_615_fu_55014_p0 = reg_17104.read();
}

void linear_forward_no_mu::thread_mul_ln728_615_fu_55014_p1() {
    mul_ln728_615_fu_55014_p1 = select_ln173_1231_reg_125391.read();
}

void linear_forward_no_mu::thread_mul_ln728_615_fu_55014_p2() {
    mul_ln728_615_fu_55014_p2 = (!mul_ln728_615_fu_55014_p0.read().is_01() || !mul_ln728_615_fu_55014_p1.read().is_01())? sc_lv<9>(): sc_bigint<8>(mul_ln728_615_fu_55014_p0.read()) * sc_bigint<2>(mul_ln728_615_fu_55014_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_616_fu_55325_p0() {
    mul_ln728_616_fu_55325_p0 = select_ln173_1233_reg_125436.read();
}

void linear_forward_no_mu::thread_mul_ln728_616_fu_55325_p1() {
    mul_ln728_616_fu_55325_p1 = reg_17076.read();
}

void linear_forward_no_mu::thread_mul_ln728_616_fu_55325_p2() {
    mul_ln728_616_fu_55325_p2 = (!mul_ln728_616_fu_55325_p0.read().is_01() || !mul_ln728_616_fu_55325_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_616_fu_55325_p0.read()) * sc_bigint<8>(mul_ln728_616_fu_55325_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_617_fu_55350_p0() {
    mul_ln728_617_fu_55350_p0 = select_ln173_1235_reg_125441.read();
}

void linear_forward_no_mu::thread_mul_ln728_617_fu_55350_p1() {
    mul_ln728_617_fu_55350_p1 = reg_17080.read();
}

void linear_forward_no_mu::thread_mul_ln728_617_fu_55350_p2() {
    mul_ln728_617_fu_55350_p2 = (!mul_ln728_617_fu_55350_p0.read().is_01() || !mul_ln728_617_fu_55350_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_617_fu_55350_p0.read()) * sc_bigint<8>(mul_ln728_617_fu_55350_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_618_fu_55375_p0() {
    mul_ln728_618_fu_55375_p0 = select_ln173_1237_reg_125446.read();
}

void linear_forward_no_mu::thread_mul_ln728_618_fu_55375_p1() {
    mul_ln728_618_fu_55375_p1 = reg_17084.read();
}

void linear_forward_no_mu::thread_mul_ln728_618_fu_55375_p2() {
    mul_ln728_618_fu_55375_p2 = (!mul_ln728_618_fu_55375_p0.read().is_01() || !mul_ln728_618_fu_55375_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_618_fu_55375_p0.read()) * sc_bigint<8>(mul_ln728_618_fu_55375_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_619_fu_55400_p0() {
    mul_ln728_619_fu_55400_p0 = reg_17088.read();
}

void linear_forward_no_mu::thread_mul_ln728_619_fu_55400_p1() {
    mul_ln728_619_fu_55400_p1 = select_ln173_1239_reg_125451.read();
}

void linear_forward_no_mu::thread_mul_ln728_619_fu_55400_p2() {
    mul_ln728_619_fu_55400_p2 = (!mul_ln728_619_fu_55400_p0.read().is_01() || !mul_ln728_619_fu_55400_p1.read().is_01())? sc_lv<9>(): sc_bigint<8>(mul_ln728_619_fu_55400_p0.read()) * sc_bigint<2>(mul_ln728_619_fu_55400_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_61_fu_20917_p0() {
    mul_ln728_61_fu_20917_p0 = select_ln173_123_fu_20901_p3.read();
}

void linear_forward_no_mu::thread_mul_ln728_61_fu_20917_p1() {
    mul_ln728_61_fu_20917_p1 = reg_17096.read();
}

void linear_forward_no_mu::thread_mul_ln728_61_fu_20917_p2() {
    mul_ln728_61_fu_20917_p2 = (!mul_ln728_61_fu_20917_p0.read().is_01() || !mul_ln728_61_fu_20917_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_61_fu_20917_p0.read()) * sc_bigint<8>(mul_ln728_61_fu_20917_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_620_fu_55425_p0() {
    mul_ln728_620_fu_55425_p0 = select_ln173_1241_reg_125456.read();
}

void linear_forward_no_mu::thread_mul_ln728_620_fu_55425_p1() {
    mul_ln728_620_fu_55425_p1 = reg_17092.read();
}

void linear_forward_no_mu::thread_mul_ln728_620_fu_55425_p2() {
    mul_ln728_620_fu_55425_p2 = (!mul_ln728_620_fu_55425_p0.read().is_01() || !mul_ln728_620_fu_55425_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_620_fu_55425_p0.read()) * sc_bigint<8>(mul_ln728_620_fu_55425_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_621_fu_55450_p0() {
    mul_ln728_621_fu_55450_p0 = select_ln173_1243_reg_125461.read();
}

void linear_forward_no_mu::thread_mul_ln728_621_fu_55450_p1() {
    mul_ln728_621_fu_55450_p1 = reg_17096.read();
}

void linear_forward_no_mu::thread_mul_ln728_621_fu_55450_p2() {
    mul_ln728_621_fu_55450_p2 = (!mul_ln728_621_fu_55450_p0.read().is_01() || !mul_ln728_621_fu_55450_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_621_fu_55450_p0.read()) * sc_bigint<8>(mul_ln728_621_fu_55450_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_622_fu_55498_p0() {
    mul_ln728_622_fu_55498_p0 = select_ln173_1245_fu_55482_p3.read();
}

void linear_forward_no_mu::thread_mul_ln728_622_fu_55498_p1() {
    mul_ln728_622_fu_55498_p1 = reg_17100.read();
}

void linear_forward_no_mu::thread_mul_ln728_622_fu_55498_p2() {
    mul_ln728_622_fu_55498_p2 = (!mul_ln728_622_fu_55498_p0.read().is_01() || !mul_ln728_622_fu_55498_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_622_fu_55498_p0.read()) * sc_bigint<8>(mul_ln728_622_fu_55498_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_623_fu_55511_p0() {
    mul_ln728_623_fu_55511_p0 = reg_17104.read();
}

void linear_forward_no_mu::thread_mul_ln728_623_fu_55511_p1() {
    mul_ln728_623_fu_55511_p1 = select_ln173_1247_reg_125466.read();
}

void linear_forward_no_mu::thread_mul_ln728_623_fu_55511_p2() {
    mul_ln728_623_fu_55511_p2 = (!mul_ln728_623_fu_55511_p0.read().is_01() || !mul_ln728_623_fu_55511_p1.read().is_01())? sc_lv<9>(): sc_bigint<8>(mul_ln728_623_fu_55511_p0.read()) * sc_bigint<2>(mul_ln728_623_fu_55511_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_624_fu_55820_p0() {
    mul_ln728_624_fu_55820_p0 = select_ln173_1249_reg_125501.read();
}

void linear_forward_no_mu::thread_mul_ln728_624_fu_55820_p1() {
    mul_ln728_624_fu_55820_p1 = reg_17076.read();
}

void linear_forward_no_mu::thread_mul_ln728_624_fu_55820_p2() {
    mul_ln728_624_fu_55820_p2 = (!mul_ln728_624_fu_55820_p0.read().is_01() || !mul_ln728_624_fu_55820_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_624_fu_55820_p0.read()) * sc_bigint<8>(mul_ln728_624_fu_55820_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_625_fu_55845_p0() {
    mul_ln728_625_fu_55845_p0 = select_ln173_1251_reg_125506.read();
}

void linear_forward_no_mu::thread_mul_ln728_625_fu_55845_p1() {
    mul_ln728_625_fu_55845_p1 = reg_17080.read();
}

void linear_forward_no_mu::thread_mul_ln728_625_fu_55845_p2() {
    mul_ln728_625_fu_55845_p2 = (!mul_ln728_625_fu_55845_p0.read().is_01() || !mul_ln728_625_fu_55845_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_625_fu_55845_p0.read()) * sc_bigint<8>(mul_ln728_625_fu_55845_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_626_fu_55870_p0() {
    mul_ln728_626_fu_55870_p0 = select_ln173_1253_reg_125511.read();
}

void linear_forward_no_mu::thread_mul_ln728_626_fu_55870_p1() {
    mul_ln728_626_fu_55870_p1 = reg_17084.read();
}

void linear_forward_no_mu::thread_mul_ln728_626_fu_55870_p2() {
    mul_ln728_626_fu_55870_p2 = (!mul_ln728_626_fu_55870_p0.read().is_01() || !mul_ln728_626_fu_55870_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_626_fu_55870_p0.read()) * sc_bigint<8>(mul_ln728_626_fu_55870_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_627_fu_55895_p0() {
    mul_ln728_627_fu_55895_p0 = reg_17088.read();
}

void linear_forward_no_mu::thread_mul_ln728_627_fu_55895_p1() {
    mul_ln728_627_fu_55895_p1 = select_ln173_1255_reg_125516.read();
}

void linear_forward_no_mu::thread_mul_ln728_627_fu_55895_p2() {
    mul_ln728_627_fu_55895_p2 = (!mul_ln728_627_fu_55895_p0.read().is_01() || !mul_ln728_627_fu_55895_p1.read().is_01())? sc_lv<9>(): sc_bigint<8>(mul_ln728_627_fu_55895_p0.read()) * sc_bigint<2>(mul_ln728_627_fu_55895_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_628_fu_55920_p0() {
    mul_ln728_628_fu_55920_p0 = select_ln173_1257_reg_125521.read();
}

void linear_forward_no_mu::thread_mul_ln728_628_fu_55920_p1() {
    mul_ln728_628_fu_55920_p1 = reg_17092.read();
}

void linear_forward_no_mu::thread_mul_ln728_628_fu_55920_p2() {
    mul_ln728_628_fu_55920_p2 = (!mul_ln728_628_fu_55920_p0.read().is_01() || !mul_ln728_628_fu_55920_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_628_fu_55920_p0.read()) * sc_bigint<8>(mul_ln728_628_fu_55920_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_629_fu_55945_p0() {
    mul_ln728_629_fu_55945_p0 = select_ln173_1259_reg_125526.read();
}

void linear_forward_no_mu::thread_mul_ln728_629_fu_55945_p1() {
    mul_ln728_629_fu_55945_p1 = reg_17096.read();
}

void linear_forward_no_mu::thread_mul_ln728_629_fu_55945_p2() {
    mul_ln728_629_fu_55945_p2 = (!mul_ln728_629_fu_55945_p0.read().is_01() || !mul_ln728_629_fu_55945_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_629_fu_55945_p0.read()) * sc_bigint<8>(mul_ln728_629_fu_55945_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_62_fu_20953_p0() {
    mul_ln728_62_fu_20953_p0 = select_ln173_125_fu_20937_p3.read();
}

void linear_forward_no_mu::thread_mul_ln728_62_fu_20953_p1() {
    mul_ln728_62_fu_20953_p1 = reg_17100.read();
}

void linear_forward_no_mu::thread_mul_ln728_62_fu_20953_p2() {
    mul_ln728_62_fu_20953_p2 = (!mul_ln728_62_fu_20953_p0.read().is_01() || !mul_ln728_62_fu_20953_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_62_fu_20953_p0.read()) * sc_bigint<8>(mul_ln728_62_fu_20953_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_630_fu_55970_p0() {
    mul_ln728_630_fu_55970_p0 = select_ln173_1261_reg_125531.read();
}

void linear_forward_no_mu::thread_mul_ln728_630_fu_55970_p1() {
    mul_ln728_630_fu_55970_p1 = reg_17100.read();
}

void linear_forward_no_mu::thread_mul_ln728_630_fu_55970_p2() {
    mul_ln728_630_fu_55970_p2 = (!mul_ln728_630_fu_55970_p0.read().is_01() || !mul_ln728_630_fu_55970_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_630_fu_55970_p0.read()) * sc_bigint<8>(mul_ln728_630_fu_55970_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_631_fu_55995_p0() {
    mul_ln728_631_fu_55995_p0 = reg_17104.read();
}

void linear_forward_no_mu::thread_mul_ln728_631_fu_55995_p1() {
    mul_ln728_631_fu_55995_p1 = select_ln173_1263_reg_125536.read();
}

void linear_forward_no_mu::thread_mul_ln728_631_fu_55995_p2() {
    mul_ln728_631_fu_55995_p2 = (!mul_ln728_631_fu_55995_p0.read().is_01() || !mul_ln728_631_fu_55995_p1.read().is_01())? sc_lv<9>(): sc_bigint<8>(mul_ln728_631_fu_55995_p0.read()) * sc_bigint<2>(mul_ln728_631_fu_55995_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_632_fu_56274_p0() {
    mul_ln728_632_fu_56274_p0 = select_ln173_1265_reg_125571.read();
}

void linear_forward_no_mu::thread_mul_ln728_632_fu_56274_p1() {
    mul_ln728_632_fu_56274_p1 = reg_17076.read();
}

void linear_forward_no_mu::thread_mul_ln728_632_fu_56274_p2() {
    mul_ln728_632_fu_56274_p2 = (!mul_ln728_632_fu_56274_p0.read().is_01() || !mul_ln728_632_fu_56274_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_632_fu_56274_p0.read()) * sc_bigint<8>(mul_ln728_632_fu_56274_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_633_fu_56299_p0() {
    mul_ln728_633_fu_56299_p0 = select_ln173_1267_reg_125576.read();
}

void linear_forward_no_mu::thread_mul_ln728_633_fu_56299_p1() {
    mul_ln728_633_fu_56299_p1 = reg_17080.read();
}

void linear_forward_no_mu::thread_mul_ln728_633_fu_56299_p2() {
    mul_ln728_633_fu_56299_p2 = (!mul_ln728_633_fu_56299_p0.read().is_01() || !mul_ln728_633_fu_56299_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_633_fu_56299_p0.read()) * sc_bigint<8>(mul_ln728_633_fu_56299_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_634_fu_56324_p0() {
    mul_ln728_634_fu_56324_p0 = select_ln173_1269_reg_125581.read();
}

void linear_forward_no_mu::thread_mul_ln728_634_fu_56324_p1() {
    mul_ln728_634_fu_56324_p1 = reg_17084.read();
}

void linear_forward_no_mu::thread_mul_ln728_634_fu_56324_p2() {
    mul_ln728_634_fu_56324_p2 = (!mul_ln728_634_fu_56324_p0.read().is_01() || !mul_ln728_634_fu_56324_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_634_fu_56324_p0.read()) * sc_bigint<8>(mul_ln728_634_fu_56324_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_635_fu_56349_p0() {
    mul_ln728_635_fu_56349_p0 = reg_17088.read();
}

void linear_forward_no_mu::thread_mul_ln728_635_fu_56349_p1() {
    mul_ln728_635_fu_56349_p1 = select_ln173_1271_reg_125586.read();
}

void linear_forward_no_mu::thread_mul_ln728_635_fu_56349_p2() {
    mul_ln728_635_fu_56349_p2 = (!mul_ln728_635_fu_56349_p0.read().is_01() || !mul_ln728_635_fu_56349_p1.read().is_01())? sc_lv<9>(): sc_bigint<8>(mul_ln728_635_fu_56349_p0.read()) * sc_bigint<2>(mul_ln728_635_fu_56349_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_636_fu_56374_p0() {
    mul_ln728_636_fu_56374_p0 = select_ln173_1273_reg_125591.read();
}

void linear_forward_no_mu::thread_mul_ln728_636_fu_56374_p1() {
    mul_ln728_636_fu_56374_p1 = reg_17092.read();
}

void linear_forward_no_mu::thread_mul_ln728_636_fu_56374_p2() {
    mul_ln728_636_fu_56374_p2 = (!mul_ln728_636_fu_56374_p0.read().is_01() || !mul_ln728_636_fu_56374_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_636_fu_56374_p0.read()) * sc_bigint<8>(mul_ln728_636_fu_56374_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_637_fu_56422_p0() {
    mul_ln728_637_fu_56422_p0 = select_ln173_1275_fu_56406_p3.read();
}

void linear_forward_no_mu::thread_mul_ln728_637_fu_56422_p1() {
    mul_ln728_637_fu_56422_p1 = reg_17096.read();
}

void linear_forward_no_mu::thread_mul_ln728_637_fu_56422_p2() {
    mul_ln728_637_fu_56422_p2 = (!mul_ln728_637_fu_56422_p0.read().is_01() || !mul_ln728_637_fu_56422_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_637_fu_56422_p0.read()) * sc_bigint<8>(mul_ln728_637_fu_56422_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_638_fu_56458_p0() {
    mul_ln728_638_fu_56458_p0 = select_ln173_1277_fu_56442_p3.read();
}

void linear_forward_no_mu::thread_mul_ln728_638_fu_56458_p1() {
    mul_ln728_638_fu_56458_p1 = reg_17100.read();
}

void linear_forward_no_mu::thread_mul_ln728_638_fu_56458_p2() {
    mul_ln728_638_fu_56458_p2 = (!mul_ln728_638_fu_56458_p0.read().is_01() || !mul_ln728_638_fu_56458_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_638_fu_56458_p0.read()) * sc_bigint<8>(mul_ln728_638_fu_56458_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_639_fu_56471_p0() {
    mul_ln728_639_fu_56471_p0 = reg_17104.read();
}

void linear_forward_no_mu::thread_mul_ln728_639_fu_56471_p1() {
    mul_ln728_639_fu_56471_p1 = select_ln173_1279_reg_125596.read();
}

void linear_forward_no_mu::thread_mul_ln728_639_fu_56471_p2() {
    mul_ln728_639_fu_56471_p2 = (!mul_ln728_639_fu_56471_p0.read().is_01() || !mul_ln728_639_fu_56471_p1.read().is_01())? sc_lv<9>(): sc_bigint<8>(mul_ln728_639_fu_56471_p0.read()) * sc_bigint<2>(mul_ln728_639_fu_56471_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_63_fu_20966_p0() {
    mul_ln728_63_fu_20966_p0 = reg_17104.read();
}

void linear_forward_no_mu::thread_mul_ln728_63_fu_20966_p1() {
    mul_ln728_63_fu_20966_p1 = select_ln173_127_reg_120312.read();
}

void linear_forward_no_mu::thread_mul_ln728_63_fu_20966_p2() {
    mul_ln728_63_fu_20966_p2 = (!mul_ln728_63_fu_20966_p0.read().is_01() || !mul_ln728_63_fu_20966_p1.read().is_01())? sc_lv<9>(): sc_bigint<8>(mul_ln728_63_fu_20966_p0.read()) * sc_bigint<2>(mul_ln728_63_fu_20966_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_640_fu_56795_p0() {
    mul_ln728_640_fu_56795_p0 = select_ln173_1281_reg_125641.read();
}

void linear_forward_no_mu::thread_mul_ln728_640_fu_56795_p1() {
    mul_ln728_640_fu_56795_p1 = reg_17076.read();
}

void linear_forward_no_mu::thread_mul_ln728_640_fu_56795_p2() {
    mul_ln728_640_fu_56795_p2 = (!mul_ln728_640_fu_56795_p0.read().is_01() || !mul_ln728_640_fu_56795_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_640_fu_56795_p0.read()) * sc_bigint<8>(mul_ln728_640_fu_56795_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_641_fu_56820_p0() {
    mul_ln728_641_fu_56820_p0 = select_ln173_1283_reg_125646.read();
}

void linear_forward_no_mu::thread_mul_ln728_641_fu_56820_p1() {
    mul_ln728_641_fu_56820_p1 = reg_17080.read();
}

void linear_forward_no_mu::thread_mul_ln728_641_fu_56820_p2() {
    mul_ln728_641_fu_56820_p2 = (!mul_ln728_641_fu_56820_p0.read().is_01() || !mul_ln728_641_fu_56820_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_641_fu_56820_p0.read()) * sc_bigint<8>(mul_ln728_641_fu_56820_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_642_fu_56845_p0() {
    mul_ln728_642_fu_56845_p0 = select_ln173_1285_reg_125651.read();
}

void linear_forward_no_mu::thread_mul_ln728_642_fu_56845_p1() {
    mul_ln728_642_fu_56845_p1 = reg_17084.read();
}

void linear_forward_no_mu::thread_mul_ln728_642_fu_56845_p2() {
    mul_ln728_642_fu_56845_p2 = (!mul_ln728_642_fu_56845_p0.read().is_01() || !mul_ln728_642_fu_56845_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_642_fu_56845_p0.read()) * sc_bigint<8>(mul_ln728_642_fu_56845_p1.read());
}

}


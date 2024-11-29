#include "linear_forward_no_mu.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void linear_forward_no_mu::thread_mul_ln728_643_fu_56870_p0() {
    mul_ln728_643_fu_56870_p0 = reg_17088.read();
}

void linear_forward_no_mu::thread_mul_ln728_643_fu_56870_p1() {
    mul_ln728_643_fu_56870_p1 = select_ln173_1287_reg_125656.read();
}

void linear_forward_no_mu::thread_mul_ln728_643_fu_56870_p2() {
    mul_ln728_643_fu_56870_p2 = (!mul_ln728_643_fu_56870_p0.read().is_01() || !mul_ln728_643_fu_56870_p1.read().is_01())? sc_lv<9>(): sc_bigint<8>(mul_ln728_643_fu_56870_p0.read()) * sc_bigint<2>(mul_ln728_643_fu_56870_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_644_fu_56895_p0() {
    mul_ln728_644_fu_56895_p0 = select_ln173_1289_reg_125661.read();
}

void linear_forward_no_mu::thread_mul_ln728_644_fu_56895_p1() {
    mul_ln728_644_fu_56895_p1 = reg_17092.read();
}

void linear_forward_no_mu::thread_mul_ln728_644_fu_56895_p2() {
    mul_ln728_644_fu_56895_p2 = (!mul_ln728_644_fu_56895_p0.read().is_01() || !mul_ln728_644_fu_56895_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_644_fu_56895_p0.read()) * sc_bigint<8>(mul_ln728_644_fu_56895_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_645_fu_56920_p0() {
    mul_ln728_645_fu_56920_p0 = select_ln173_1291_reg_125666.read();
}

void linear_forward_no_mu::thread_mul_ln728_645_fu_56920_p1() {
    mul_ln728_645_fu_56920_p1 = reg_17096.read();
}

void linear_forward_no_mu::thread_mul_ln728_645_fu_56920_p2() {
    mul_ln728_645_fu_56920_p2 = (!mul_ln728_645_fu_56920_p0.read().is_01() || !mul_ln728_645_fu_56920_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_645_fu_56920_p0.read()) * sc_bigint<8>(mul_ln728_645_fu_56920_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_646_fu_56968_p0() {
    mul_ln728_646_fu_56968_p0 = select_ln173_1293_fu_56952_p3.read();
}

void linear_forward_no_mu::thread_mul_ln728_646_fu_56968_p1() {
    mul_ln728_646_fu_56968_p1 = reg_17100.read();
}

void linear_forward_no_mu::thread_mul_ln728_646_fu_56968_p2() {
    mul_ln728_646_fu_56968_p2 = (!mul_ln728_646_fu_56968_p0.read().is_01() || !mul_ln728_646_fu_56968_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_646_fu_56968_p0.read()) * sc_bigint<8>(mul_ln728_646_fu_56968_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_647_fu_56981_p0() {
    mul_ln728_647_fu_56981_p0 = reg_17104.read();
}

void linear_forward_no_mu::thread_mul_ln728_647_fu_56981_p1() {
    mul_ln728_647_fu_56981_p1 = select_ln173_1295_reg_125671.read();
}

void linear_forward_no_mu::thread_mul_ln728_647_fu_56981_p2() {
    mul_ln728_647_fu_56981_p2 = (!mul_ln728_647_fu_56981_p0.read().is_01() || !mul_ln728_647_fu_56981_p1.read().is_01())? sc_lv<9>(): sc_bigint<8>(mul_ln728_647_fu_56981_p0.read()) * sc_bigint<2>(mul_ln728_647_fu_56981_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_648_fu_57289_p0() {
    mul_ln728_648_fu_57289_p0 = select_ln173_1297_reg_125711.read();
}

void linear_forward_no_mu::thread_mul_ln728_648_fu_57289_p1() {
    mul_ln728_648_fu_57289_p1 = reg_17076.read();
}

void linear_forward_no_mu::thread_mul_ln728_648_fu_57289_p2() {
    mul_ln728_648_fu_57289_p2 = (!mul_ln728_648_fu_57289_p0.read().is_01() || !mul_ln728_648_fu_57289_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_648_fu_57289_p0.read()) * sc_bigint<8>(mul_ln728_648_fu_57289_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_649_fu_57314_p0() {
    mul_ln728_649_fu_57314_p0 = select_ln173_1299_reg_125716.read();
}

void linear_forward_no_mu::thread_mul_ln728_649_fu_57314_p1() {
    mul_ln728_649_fu_57314_p1 = reg_17080.read();
}

void linear_forward_no_mu::thread_mul_ln728_649_fu_57314_p2() {
    mul_ln728_649_fu_57314_p2 = (!mul_ln728_649_fu_57314_p0.read().is_01() || !mul_ln728_649_fu_57314_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_649_fu_57314_p0.read()) * sc_bigint<8>(mul_ln728_649_fu_57314_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_64_fu_21285_p0() {
    mul_ln728_64_fu_21285_p0 = select_ln173_129_reg_120363.read();
}

void linear_forward_no_mu::thread_mul_ln728_64_fu_21285_p1() {
    mul_ln728_64_fu_21285_p1 = reg_17076.read();
}

void linear_forward_no_mu::thread_mul_ln728_64_fu_21285_p2() {
    mul_ln728_64_fu_21285_p2 = (!mul_ln728_64_fu_21285_p0.read().is_01() || !mul_ln728_64_fu_21285_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_64_fu_21285_p0.read()) * sc_bigint<8>(mul_ln728_64_fu_21285_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_650_fu_57339_p0() {
    mul_ln728_650_fu_57339_p0 = select_ln173_1301_reg_125721.read();
}

void linear_forward_no_mu::thread_mul_ln728_650_fu_57339_p1() {
    mul_ln728_650_fu_57339_p1 = reg_17084.read();
}

void linear_forward_no_mu::thread_mul_ln728_650_fu_57339_p2() {
    mul_ln728_650_fu_57339_p2 = (!mul_ln728_650_fu_57339_p0.read().is_01() || !mul_ln728_650_fu_57339_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_650_fu_57339_p0.read()) * sc_bigint<8>(mul_ln728_650_fu_57339_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_651_fu_57364_p0() {
    mul_ln728_651_fu_57364_p0 = reg_17088.read();
}

void linear_forward_no_mu::thread_mul_ln728_651_fu_57364_p1() {
    mul_ln728_651_fu_57364_p1 = select_ln173_1303_reg_125726.read();
}

void linear_forward_no_mu::thread_mul_ln728_651_fu_57364_p2() {
    mul_ln728_651_fu_57364_p2 = (!mul_ln728_651_fu_57364_p0.read().is_01() || !mul_ln728_651_fu_57364_p1.read().is_01())? sc_lv<9>(): sc_bigint<8>(mul_ln728_651_fu_57364_p0.read()) * sc_bigint<2>(mul_ln728_651_fu_57364_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_652_fu_57389_p0() {
    mul_ln728_652_fu_57389_p0 = select_ln173_1305_reg_125731.read();
}

void linear_forward_no_mu::thread_mul_ln728_652_fu_57389_p1() {
    mul_ln728_652_fu_57389_p1 = reg_17092.read();
}

void linear_forward_no_mu::thread_mul_ln728_652_fu_57389_p2() {
    mul_ln728_652_fu_57389_p2 = (!mul_ln728_652_fu_57389_p0.read().is_01() || !mul_ln728_652_fu_57389_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_652_fu_57389_p0.read()) * sc_bigint<8>(mul_ln728_652_fu_57389_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_653_fu_57414_p0() {
    mul_ln728_653_fu_57414_p0 = select_ln173_1307_reg_125736.read();
}

void linear_forward_no_mu::thread_mul_ln728_653_fu_57414_p1() {
    mul_ln728_653_fu_57414_p1 = reg_17096.read();
}

void linear_forward_no_mu::thread_mul_ln728_653_fu_57414_p2() {
    mul_ln728_653_fu_57414_p2 = (!mul_ln728_653_fu_57414_p0.read().is_01() || !mul_ln728_653_fu_57414_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_653_fu_57414_p0.read()) * sc_bigint<8>(mul_ln728_653_fu_57414_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_654_fu_57439_p0() {
    mul_ln728_654_fu_57439_p0 = select_ln173_1309_reg_125741.read();
}

void linear_forward_no_mu::thread_mul_ln728_654_fu_57439_p1() {
    mul_ln728_654_fu_57439_p1 = reg_17100.read();
}

void linear_forward_no_mu::thread_mul_ln728_654_fu_57439_p2() {
    mul_ln728_654_fu_57439_p2 = (!mul_ln728_654_fu_57439_p0.read().is_01() || !mul_ln728_654_fu_57439_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_654_fu_57439_p0.read()) * sc_bigint<8>(mul_ln728_654_fu_57439_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_655_fu_57464_p0() {
    mul_ln728_655_fu_57464_p0 = reg_17104.read();
}

void linear_forward_no_mu::thread_mul_ln728_655_fu_57464_p1() {
    mul_ln728_655_fu_57464_p1 = select_ln173_1311_reg_125746.read();
}

void linear_forward_no_mu::thread_mul_ln728_655_fu_57464_p2() {
    mul_ln728_655_fu_57464_p2 = (!mul_ln728_655_fu_57464_p0.read().is_01() || !mul_ln728_655_fu_57464_p1.read().is_01())? sc_lv<9>(): sc_bigint<8>(mul_ln728_655_fu_57464_p0.read()) * sc_bigint<2>(mul_ln728_655_fu_57464_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_656_fu_57744_p0() {
    mul_ln728_656_fu_57744_p0 = select_ln173_1313_reg_125781.read();
}

void linear_forward_no_mu::thread_mul_ln728_656_fu_57744_p1() {
    mul_ln728_656_fu_57744_p1 = reg_17076.read();
}

void linear_forward_no_mu::thread_mul_ln728_656_fu_57744_p2() {
    mul_ln728_656_fu_57744_p2 = (!mul_ln728_656_fu_57744_p0.read().is_01() || !mul_ln728_656_fu_57744_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_656_fu_57744_p0.read()) * sc_bigint<8>(mul_ln728_656_fu_57744_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_657_fu_57769_p0() {
    mul_ln728_657_fu_57769_p0 = select_ln173_1315_reg_125786.read();
}

void linear_forward_no_mu::thread_mul_ln728_657_fu_57769_p1() {
    mul_ln728_657_fu_57769_p1 = reg_17080.read();
}

void linear_forward_no_mu::thread_mul_ln728_657_fu_57769_p2() {
    mul_ln728_657_fu_57769_p2 = (!mul_ln728_657_fu_57769_p0.read().is_01() || !mul_ln728_657_fu_57769_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_657_fu_57769_p0.read()) * sc_bigint<8>(mul_ln728_657_fu_57769_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_658_fu_57794_p0() {
    mul_ln728_658_fu_57794_p0 = select_ln173_1317_reg_125791.read();
}

void linear_forward_no_mu::thread_mul_ln728_658_fu_57794_p1() {
    mul_ln728_658_fu_57794_p1 = reg_17084.read();
}

void linear_forward_no_mu::thread_mul_ln728_658_fu_57794_p2() {
    mul_ln728_658_fu_57794_p2 = (!mul_ln728_658_fu_57794_p0.read().is_01() || !mul_ln728_658_fu_57794_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_658_fu_57794_p0.read()) * sc_bigint<8>(mul_ln728_658_fu_57794_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_659_fu_57819_p0() {
    mul_ln728_659_fu_57819_p0 = reg_17088.read();
}

void linear_forward_no_mu::thread_mul_ln728_659_fu_57819_p1() {
    mul_ln728_659_fu_57819_p1 = select_ln173_1319_reg_125796.read();
}

void linear_forward_no_mu::thread_mul_ln728_659_fu_57819_p2() {
    mul_ln728_659_fu_57819_p2 = (!mul_ln728_659_fu_57819_p0.read().is_01() || !mul_ln728_659_fu_57819_p1.read().is_01())? sc_lv<9>(): sc_bigint<8>(mul_ln728_659_fu_57819_p0.read()) * sc_bigint<2>(mul_ln728_659_fu_57819_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_65_fu_21310_p0() {
    mul_ln728_65_fu_21310_p0 = select_ln173_131_reg_120368.read();
}

void linear_forward_no_mu::thread_mul_ln728_65_fu_21310_p1() {
    mul_ln728_65_fu_21310_p1 = reg_17080.read();
}

void linear_forward_no_mu::thread_mul_ln728_65_fu_21310_p2() {
    mul_ln728_65_fu_21310_p2 = (!mul_ln728_65_fu_21310_p0.read().is_01() || !mul_ln728_65_fu_21310_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_65_fu_21310_p0.read()) * sc_bigint<8>(mul_ln728_65_fu_21310_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_660_fu_57844_p0() {
    mul_ln728_660_fu_57844_p0 = select_ln173_1321_reg_125801.read();
}

void linear_forward_no_mu::thread_mul_ln728_660_fu_57844_p1() {
    mul_ln728_660_fu_57844_p1 = reg_17092.read();
}

void linear_forward_no_mu::thread_mul_ln728_660_fu_57844_p2() {
    mul_ln728_660_fu_57844_p2 = (!mul_ln728_660_fu_57844_p0.read().is_01() || !mul_ln728_660_fu_57844_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_660_fu_57844_p0.read()) * sc_bigint<8>(mul_ln728_660_fu_57844_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_661_fu_57892_p0() {
    mul_ln728_661_fu_57892_p0 = select_ln173_1323_fu_57876_p3.read();
}

void linear_forward_no_mu::thread_mul_ln728_661_fu_57892_p1() {
    mul_ln728_661_fu_57892_p1 = reg_17096.read();
}

void linear_forward_no_mu::thread_mul_ln728_661_fu_57892_p2() {
    mul_ln728_661_fu_57892_p2 = (!mul_ln728_661_fu_57892_p0.read().is_01() || !mul_ln728_661_fu_57892_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_661_fu_57892_p0.read()) * sc_bigint<8>(mul_ln728_661_fu_57892_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_662_fu_57928_p0() {
    mul_ln728_662_fu_57928_p0 = select_ln173_1325_fu_57912_p3.read();
}

void linear_forward_no_mu::thread_mul_ln728_662_fu_57928_p1() {
    mul_ln728_662_fu_57928_p1 = reg_17100.read();
}

void linear_forward_no_mu::thread_mul_ln728_662_fu_57928_p2() {
    mul_ln728_662_fu_57928_p2 = (!mul_ln728_662_fu_57928_p0.read().is_01() || !mul_ln728_662_fu_57928_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_662_fu_57928_p0.read()) * sc_bigint<8>(mul_ln728_662_fu_57928_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_663_fu_57941_p0() {
    mul_ln728_663_fu_57941_p0 = reg_17104.read();
}

void linear_forward_no_mu::thread_mul_ln728_663_fu_57941_p1() {
    mul_ln728_663_fu_57941_p1 = select_ln173_1327_reg_125806.read();
}

void linear_forward_no_mu::thread_mul_ln728_663_fu_57941_p2() {
    mul_ln728_663_fu_57941_p2 = (!mul_ln728_663_fu_57941_p0.read().is_01() || !mul_ln728_663_fu_57941_p1.read().is_01())? sc_lv<9>(): sc_bigint<8>(mul_ln728_663_fu_57941_p0.read()) * sc_bigint<2>(mul_ln728_663_fu_57941_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_664_fu_58262_p0() {
    mul_ln728_664_fu_58262_p0 = select_ln173_1329_reg_125851.read();
}

void linear_forward_no_mu::thread_mul_ln728_664_fu_58262_p1() {
    mul_ln728_664_fu_58262_p1 = reg_17076.read();
}

void linear_forward_no_mu::thread_mul_ln728_664_fu_58262_p2() {
    mul_ln728_664_fu_58262_p2 = (!mul_ln728_664_fu_58262_p0.read().is_01() || !mul_ln728_664_fu_58262_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_664_fu_58262_p0.read()) * sc_bigint<8>(mul_ln728_664_fu_58262_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_665_fu_58287_p0() {
    mul_ln728_665_fu_58287_p0 = select_ln173_1331_reg_125856.read();
}

void linear_forward_no_mu::thread_mul_ln728_665_fu_58287_p1() {
    mul_ln728_665_fu_58287_p1 = reg_17080.read();
}

void linear_forward_no_mu::thread_mul_ln728_665_fu_58287_p2() {
    mul_ln728_665_fu_58287_p2 = (!mul_ln728_665_fu_58287_p0.read().is_01() || !mul_ln728_665_fu_58287_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_665_fu_58287_p0.read()) * sc_bigint<8>(mul_ln728_665_fu_58287_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_666_fu_58312_p0() {
    mul_ln728_666_fu_58312_p0 = select_ln173_1333_reg_125861.read();
}

void linear_forward_no_mu::thread_mul_ln728_666_fu_58312_p1() {
    mul_ln728_666_fu_58312_p1 = reg_17084.read();
}

void linear_forward_no_mu::thread_mul_ln728_666_fu_58312_p2() {
    mul_ln728_666_fu_58312_p2 = (!mul_ln728_666_fu_58312_p0.read().is_01() || !mul_ln728_666_fu_58312_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_666_fu_58312_p0.read()) * sc_bigint<8>(mul_ln728_666_fu_58312_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_667_fu_58337_p0() {
    mul_ln728_667_fu_58337_p0 = reg_17088.read();
}

void linear_forward_no_mu::thread_mul_ln728_667_fu_58337_p1() {
    mul_ln728_667_fu_58337_p1 = select_ln173_1335_reg_125866.read();
}

void linear_forward_no_mu::thread_mul_ln728_667_fu_58337_p2() {
    mul_ln728_667_fu_58337_p2 = (!mul_ln728_667_fu_58337_p0.read().is_01() || !mul_ln728_667_fu_58337_p1.read().is_01())? sc_lv<9>(): sc_bigint<8>(mul_ln728_667_fu_58337_p0.read()) * sc_bigint<2>(mul_ln728_667_fu_58337_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_668_fu_58362_p0() {
    mul_ln728_668_fu_58362_p0 = select_ln173_1337_reg_125871.read();
}

void linear_forward_no_mu::thread_mul_ln728_668_fu_58362_p1() {
    mul_ln728_668_fu_58362_p1 = reg_17092.read();
}

void linear_forward_no_mu::thread_mul_ln728_668_fu_58362_p2() {
    mul_ln728_668_fu_58362_p2 = (!mul_ln728_668_fu_58362_p0.read().is_01() || !mul_ln728_668_fu_58362_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_668_fu_58362_p0.read()) * sc_bigint<8>(mul_ln728_668_fu_58362_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_669_fu_58387_p0() {
    mul_ln728_669_fu_58387_p0 = select_ln173_1339_reg_125876.read();
}

void linear_forward_no_mu::thread_mul_ln728_669_fu_58387_p1() {
    mul_ln728_669_fu_58387_p1 = reg_17096.read();
}

void linear_forward_no_mu::thread_mul_ln728_669_fu_58387_p2() {
    mul_ln728_669_fu_58387_p2 = (!mul_ln728_669_fu_58387_p0.read().is_01() || !mul_ln728_669_fu_58387_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_669_fu_58387_p0.read()) * sc_bigint<8>(mul_ln728_669_fu_58387_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_66_fu_21335_p0() {
    mul_ln728_66_fu_21335_p0 = select_ln173_133_reg_120373.read();
}

void linear_forward_no_mu::thread_mul_ln728_66_fu_21335_p1() {
    mul_ln728_66_fu_21335_p1 = reg_17084.read();
}

void linear_forward_no_mu::thread_mul_ln728_66_fu_21335_p2() {
    mul_ln728_66_fu_21335_p2 = (!mul_ln728_66_fu_21335_p0.read().is_01() || !mul_ln728_66_fu_21335_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_66_fu_21335_p0.read()) * sc_bigint<8>(mul_ln728_66_fu_21335_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_670_fu_58435_p0() {
    mul_ln728_670_fu_58435_p0 = select_ln173_1341_fu_58419_p3.read();
}

void linear_forward_no_mu::thread_mul_ln728_670_fu_58435_p1() {
    mul_ln728_670_fu_58435_p1 = reg_17100.read();
}

void linear_forward_no_mu::thread_mul_ln728_670_fu_58435_p2() {
    mul_ln728_670_fu_58435_p2 = (!mul_ln728_670_fu_58435_p0.read().is_01() || !mul_ln728_670_fu_58435_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_670_fu_58435_p0.read()) * sc_bigint<8>(mul_ln728_670_fu_58435_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_671_fu_58448_p0() {
    mul_ln728_671_fu_58448_p0 = reg_17104.read();
}

void linear_forward_no_mu::thread_mul_ln728_671_fu_58448_p1() {
    mul_ln728_671_fu_58448_p1 = select_ln173_1343_reg_125881.read();
}

void linear_forward_no_mu::thread_mul_ln728_671_fu_58448_p2() {
    mul_ln728_671_fu_58448_p2 = (!mul_ln728_671_fu_58448_p0.read().is_01() || !mul_ln728_671_fu_58448_p1.read().is_01())? sc_lv<9>(): sc_bigint<8>(mul_ln728_671_fu_58448_p0.read()) * sc_bigint<2>(mul_ln728_671_fu_58448_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_672_fu_58759_p0() {
    mul_ln728_672_fu_58759_p0 = select_ln173_1345_reg_125983.read();
}

void linear_forward_no_mu::thread_mul_ln728_672_fu_58759_p1() {
    mul_ln728_672_fu_58759_p1 = reg_17076.read();
}

void linear_forward_no_mu::thread_mul_ln728_672_fu_58759_p2() {
    mul_ln728_672_fu_58759_p2 = (!mul_ln728_672_fu_58759_p0.read().is_01() || !mul_ln728_672_fu_58759_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_672_fu_58759_p0.read()) * sc_bigint<8>(mul_ln728_672_fu_58759_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_673_fu_58784_p0() {
    mul_ln728_673_fu_58784_p0 = select_ln173_1347_reg_125988.read();
}

void linear_forward_no_mu::thread_mul_ln728_673_fu_58784_p1() {
    mul_ln728_673_fu_58784_p1 = reg_17080.read();
}

void linear_forward_no_mu::thread_mul_ln728_673_fu_58784_p2() {
    mul_ln728_673_fu_58784_p2 = (!mul_ln728_673_fu_58784_p0.read().is_01() || !mul_ln728_673_fu_58784_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_673_fu_58784_p0.read()) * sc_bigint<8>(mul_ln728_673_fu_58784_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_674_fu_58809_p0() {
    mul_ln728_674_fu_58809_p0 = select_ln173_1349_reg_125993.read();
}

void linear_forward_no_mu::thread_mul_ln728_674_fu_58809_p1() {
    mul_ln728_674_fu_58809_p1 = reg_17084.read();
}

void linear_forward_no_mu::thread_mul_ln728_674_fu_58809_p2() {
    mul_ln728_674_fu_58809_p2 = (!mul_ln728_674_fu_58809_p0.read().is_01() || !mul_ln728_674_fu_58809_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_674_fu_58809_p0.read()) * sc_bigint<8>(mul_ln728_674_fu_58809_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_675_fu_58834_p0() {
    mul_ln728_675_fu_58834_p0 = reg_17088.read();
}

void linear_forward_no_mu::thread_mul_ln728_675_fu_58834_p1() {
    mul_ln728_675_fu_58834_p1 = select_ln173_1351_reg_125998.read();
}

void linear_forward_no_mu::thread_mul_ln728_675_fu_58834_p2() {
    mul_ln728_675_fu_58834_p2 = (!mul_ln728_675_fu_58834_p0.read().is_01() || !mul_ln728_675_fu_58834_p1.read().is_01())? sc_lv<9>(): sc_bigint<8>(mul_ln728_675_fu_58834_p0.read()) * sc_bigint<2>(mul_ln728_675_fu_58834_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_676_fu_58859_p0() {
    mul_ln728_676_fu_58859_p0 = select_ln173_1353_reg_126003.read();
}

void linear_forward_no_mu::thread_mul_ln728_676_fu_58859_p1() {
    mul_ln728_676_fu_58859_p1 = reg_17092.read();
}

void linear_forward_no_mu::thread_mul_ln728_676_fu_58859_p2() {
    mul_ln728_676_fu_58859_p2 = (!mul_ln728_676_fu_58859_p0.read().is_01() || !mul_ln728_676_fu_58859_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_676_fu_58859_p0.read()) * sc_bigint<8>(mul_ln728_676_fu_58859_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_677_fu_58884_p0() {
    mul_ln728_677_fu_58884_p0 = select_ln173_1355_reg_126008.read();
}

void linear_forward_no_mu::thread_mul_ln728_677_fu_58884_p1() {
    mul_ln728_677_fu_58884_p1 = reg_17096.read();
}

void linear_forward_no_mu::thread_mul_ln728_677_fu_58884_p2() {
    mul_ln728_677_fu_58884_p2 = (!mul_ln728_677_fu_58884_p0.read().is_01() || !mul_ln728_677_fu_58884_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_677_fu_58884_p0.read()) * sc_bigint<8>(mul_ln728_677_fu_58884_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_678_fu_58909_p0() {
    mul_ln728_678_fu_58909_p0 = select_ln173_1357_reg_126013.read();
}

void linear_forward_no_mu::thread_mul_ln728_678_fu_58909_p1() {
    mul_ln728_678_fu_58909_p1 = reg_17100.read();
}

void linear_forward_no_mu::thread_mul_ln728_678_fu_58909_p2() {
    mul_ln728_678_fu_58909_p2 = (!mul_ln728_678_fu_58909_p0.read().is_01() || !mul_ln728_678_fu_58909_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_678_fu_58909_p0.read()) * sc_bigint<8>(mul_ln728_678_fu_58909_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_679_fu_58934_p0() {
    mul_ln728_679_fu_58934_p0 = reg_17104.read();
}

void linear_forward_no_mu::thread_mul_ln728_679_fu_58934_p1() {
    mul_ln728_679_fu_58934_p1 = select_ln173_1359_reg_126018.read();
}

void linear_forward_no_mu::thread_mul_ln728_679_fu_58934_p2() {
    mul_ln728_679_fu_58934_p2 = (!mul_ln728_679_fu_58934_p0.read().is_01() || !mul_ln728_679_fu_58934_p1.read().is_01())? sc_lv<9>(): sc_bigint<8>(mul_ln728_679_fu_58934_p0.read()) * sc_bigint<2>(mul_ln728_679_fu_58934_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_67_fu_21360_p0() {
    mul_ln728_67_fu_21360_p0 = reg_17088.read();
}

void linear_forward_no_mu::thread_mul_ln728_67_fu_21360_p1() {
    mul_ln728_67_fu_21360_p1 = select_ln173_135_reg_120378.read();
}

void linear_forward_no_mu::thread_mul_ln728_67_fu_21360_p2() {
    mul_ln728_67_fu_21360_p2 = (!mul_ln728_67_fu_21360_p0.read().is_01() || !mul_ln728_67_fu_21360_p1.read().is_01())? sc_lv<9>(): sc_bigint<8>(mul_ln728_67_fu_21360_p0.read()) * sc_bigint<2>(mul_ln728_67_fu_21360_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_680_fu_59217_p0() {
    mul_ln728_680_fu_59217_p0 = select_ln173_1361_reg_126053.read();
}

void linear_forward_no_mu::thread_mul_ln728_680_fu_59217_p1() {
    mul_ln728_680_fu_59217_p1 = reg_17076.read();
}

void linear_forward_no_mu::thread_mul_ln728_680_fu_59217_p2() {
    mul_ln728_680_fu_59217_p2 = (!mul_ln728_680_fu_59217_p0.read().is_01() || !mul_ln728_680_fu_59217_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_680_fu_59217_p0.read()) * sc_bigint<8>(mul_ln728_680_fu_59217_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_681_fu_59242_p0() {
    mul_ln728_681_fu_59242_p0 = select_ln173_1363_reg_126058.read();
}

void linear_forward_no_mu::thread_mul_ln728_681_fu_59242_p1() {
    mul_ln728_681_fu_59242_p1 = reg_17080.read();
}

void linear_forward_no_mu::thread_mul_ln728_681_fu_59242_p2() {
    mul_ln728_681_fu_59242_p2 = (!mul_ln728_681_fu_59242_p0.read().is_01() || !mul_ln728_681_fu_59242_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_681_fu_59242_p0.read()) * sc_bigint<8>(mul_ln728_681_fu_59242_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_682_fu_59267_p0() {
    mul_ln728_682_fu_59267_p0 = select_ln173_1365_reg_126063.read();
}

void linear_forward_no_mu::thread_mul_ln728_682_fu_59267_p1() {
    mul_ln728_682_fu_59267_p1 = reg_17084.read();
}

void linear_forward_no_mu::thread_mul_ln728_682_fu_59267_p2() {
    mul_ln728_682_fu_59267_p2 = (!mul_ln728_682_fu_59267_p0.read().is_01() || !mul_ln728_682_fu_59267_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_682_fu_59267_p0.read()) * sc_bigint<8>(mul_ln728_682_fu_59267_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_683_fu_59292_p0() {
    mul_ln728_683_fu_59292_p0 = reg_17088.read();
}

void linear_forward_no_mu::thread_mul_ln728_683_fu_59292_p1() {
    mul_ln728_683_fu_59292_p1 = select_ln173_1367_reg_126068.read();
}

void linear_forward_no_mu::thread_mul_ln728_683_fu_59292_p2() {
    mul_ln728_683_fu_59292_p2 = (!mul_ln728_683_fu_59292_p0.read().is_01() || !mul_ln728_683_fu_59292_p1.read().is_01())? sc_lv<9>(): sc_bigint<8>(mul_ln728_683_fu_59292_p0.read()) * sc_bigint<2>(mul_ln728_683_fu_59292_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_684_fu_59317_p0() {
    mul_ln728_684_fu_59317_p0 = select_ln173_1369_reg_126073.read();
}

void linear_forward_no_mu::thread_mul_ln728_684_fu_59317_p1() {
    mul_ln728_684_fu_59317_p1 = reg_17092.read();
}

void linear_forward_no_mu::thread_mul_ln728_684_fu_59317_p2() {
    mul_ln728_684_fu_59317_p2 = (!mul_ln728_684_fu_59317_p0.read().is_01() || !mul_ln728_684_fu_59317_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_684_fu_59317_p0.read()) * sc_bigint<8>(mul_ln728_684_fu_59317_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_685_fu_59365_p0() {
    mul_ln728_685_fu_59365_p0 = select_ln173_1371_fu_59349_p3.read();
}

void linear_forward_no_mu::thread_mul_ln728_685_fu_59365_p1() {
    mul_ln728_685_fu_59365_p1 = reg_17096.read();
}

void linear_forward_no_mu::thread_mul_ln728_685_fu_59365_p2() {
    mul_ln728_685_fu_59365_p2 = (!mul_ln728_685_fu_59365_p0.read().is_01() || !mul_ln728_685_fu_59365_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_685_fu_59365_p0.read()) * sc_bigint<8>(mul_ln728_685_fu_59365_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_686_fu_59401_p0() {
    mul_ln728_686_fu_59401_p0 = select_ln173_1373_fu_59385_p3.read();
}

void linear_forward_no_mu::thread_mul_ln728_686_fu_59401_p1() {
    mul_ln728_686_fu_59401_p1 = reg_17100.read();
}

void linear_forward_no_mu::thread_mul_ln728_686_fu_59401_p2() {
    mul_ln728_686_fu_59401_p2 = (!mul_ln728_686_fu_59401_p0.read().is_01() || !mul_ln728_686_fu_59401_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_686_fu_59401_p0.read()) * sc_bigint<8>(mul_ln728_686_fu_59401_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_687_fu_59414_p0() {
    mul_ln728_687_fu_59414_p0 = reg_17104.read();
}

void linear_forward_no_mu::thread_mul_ln728_687_fu_59414_p1() {
    mul_ln728_687_fu_59414_p1 = select_ln173_1375_reg_126078.read();
}

void linear_forward_no_mu::thread_mul_ln728_687_fu_59414_p2() {
    mul_ln728_687_fu_59414_p2 = (!mul_ln728_687_fu_59414_p0.read().is_01() || !mul_ln728_687_fu_59414_p1.read().is_01())? sc_lv<9>(): sc_bigint<8>(mul_ln728_687_fu_59414_p0.read()) * sc_bigint<2>(mul_ln728_687_fu_59414_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_688_fu_59753_p0() {
    mul_ln728_688_fu_59753_p0 = select_ln173_1377_reg_126123.read();
}

void linear_forward_no_mu::thread_mul_ln728_688_fu_59753_p1() {
    mul_ln728_688_fu_59753_p1 = reg_17076.read();
}

void linear_forward_no_mu::thread_mul_ln728_688_fu_59753_p2() {
    mul_ln728_688_fu_59753_p2 = (!mul_ln728_688_fu_59753_p0.read().is_01() || !mul_ln728_688_fu_59753_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_688_fu_59753_p0.read()) * sc_bigint<8>(mul_ln728_688_fu_59753_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_689_fu_59778_p0() {
    mul_ln728_689_fu_59778_p0 = select_ln173_1379_reg_126128.read();
}

void linear_forward_no_mu::thread_mul_ln728_689_fu_59778_p1() {
    mul_ln728_689_fu_59778_p1 = reg_17080.read();
}

void linear_forward_no_mu::thread_mul_ln728_689_fu_59778_p2() {
    mul_ln728_689_fu_59778_p2 = (!mul_ln728_689_fu_59778_p0.read().is_01() || !mul_ln728_689_fu_59778_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_689_fu_59778_p0.read()) * sc_bigint<8>(mul_ln728_689_fu_59778_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_68_fu_21385_p0() {
    mul_ln728_68_fu_21385_p0 = select_ln173_137_reg_120383.read();
}

void linear_forward_no_mu::thread_mul_ln728_68_fu_21385_p1() {
    mul_ln728_68_fu_21385_p1 = reg_17092.read();
}

void linear_forward_no_mu::thread_mul_ln728_68_fu_21385_p2() {
    mul_ln728_68_fu_21385_p2 = (!mul_ln728_68_fu_21385_p0.read().is_01() || !mul_ln728_68_fu_21385_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_68_fu_21385_p0.read()) * sc_bigint<8>(mul_ln728_68_fu_21385_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_690_fu_59803_p0() {
    mul_ln728_690_fu_59803_p0 = select_ln173_1381_reg_126133.read();
}

void linear_forward_no_mu::thread_mul_ln728_690_fu_59803_p1() {
    mul_ln728_690_fu_59803_p1 = reg_17084.read();
}

void linear_forward_no_mu::thread_mul_ln728_690_fu_59803_p2() {
    mul_ln728_690_fu_59803_p2 = (!mul_ln728_690_fu_59803_p0.read().is_01() || !mul_ln728_690_fu_59803_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_690_fu_59803_p0.read()) * sc_bigint<8>(mul_ln728_690_fu_59803_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_691_fu_59828_p0() {
    mul_ln728_691_fu_59828_p0 = reg_17088.read();
}

void linear_forward_no_mu::thread_mul_ln728_691_fu_59828_p1() {
    mul_ln728_691_fu_59828_p1 = select_ln173_1383_reg_126138.read();
}

void linear_forward_no_mu::thread_mul_ln728_691_fu_59828_p2() {
    mul_ln728_691_fu_59828_p2 = (!mul_ln728_691_fu_59828_p0.read().is_01() || !mul_ln728_691_fu_59828_p1.read().is_01())? sc_lv<9>(): sc_bigint<8>(mul_ln728_691_fu_59828_p0.read()) * sc_bigint<2>(mul_ln728_691_fu_59828_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_692_fu_59853_p0() {
    mul_ln728_692_fu_59853_p0 = select_ln173_1385_reg_126143.read();
}

void linear_forward_no_mu::thread_mul_ln728_692_fu_59853_p1() {
    mul_ln728_692_fu_59853_p1 = reg_17092.read();
}

void linear_forward_no_mu::thread_mul_ln728_692_fu_59853_p2() {
    mul_ln728_692_fu_59853_p2 = (!mul_ln728_692_fu_59853_p0.read().is_01() || !mul_ln728_692_fu_59853_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_692_fu_59853_p0.read()) * sc_bigint<8>(mul_ln728_692_fu_59853_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_693_fu_59878_p0() {
    mul_ln728_693_fu_59878_p0 = select_ln173_1387_reg_126148.read();
}

void linear_forward_no_mu::thread_mul_ln728_693_fu_59878_p1() {
    mul_ln728_693_fu_59878_p1 = reg_17096.read();
}

void linear_forward_no_mu::thread_mul_ln728_693_fu_59878_p2() {
    mul_ln728_693_fu_59878_p2 = (!mul_ln728_693_fu_59878_p0.read().is_01() || !mul_ln728_693_fu_59878_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_693_fu_59878_p0.read()) * sc_bigint<8>(mul_ln728_693_fu_59878_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_694_fu_59926_p0() {
    mul_ln728_694_fu_59926_p0 = select_ln173_1389_fu_59910_p3.read();
}

void linear_forward_no_mu::thread_mul_ln728_694_fu_59926_p1() {
    mul_ln728_694_fu_59926_p1 = reg_17100.read();
}

void linear_forward_no_mu::thread_mul_ln728_694_fu_59926_p2() {
    mul_ln728_694_fu_59926_p2 = (!mul_ln728_694_fu_59926_p0.read().is_01() || !mul_ln728_694_fu_59926_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_694_fu_59926_p0.read()) * sc_bigint<8>(mul_ln728_694_fu_59926_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_695_fu_59939_p0() {
    mul_ln728_695_fu_59939_p0 = reg_17104.read();
}

void linear_forward_no_mu::thread_mul_ln728_695_fu_59939_p1() {
    mul_ln728_695_fu_59939_p1 = select_ln173_1391_reg_126153.read();
}

void linear_forward_no_mu::thread_mul_ln728_695_fu_59939_p2() {
    mul_ln728_695_fu_59939_p2 = (!mul_ln728_695_fu_59939_p0.read().is_01() || !mul_ln728_695_fu_59939_p1.read().is_01())? sc_lv<9>(): sc_bigint<8>(mul_ln728_695_fu_59939_p0.read()) * sc_bigint<2>(mul_ln728_695_fu_59939_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_696_fu_60251_p0() {
    mul_ln728_696_fu_60251_p0 = select_ln173_1393_reg_126193.read();
}

void linear_forward_no_mu::thread_mul_ln728_696_fu_60251_p1() {
    mul_ln728_696_fu_60251_p1 = reg_17076.read();
}

void linear_forward_no_mu::thread_mul_ln728_696_fu_60251_p2() {
    mul_ln728_696_fu_60251_p2 = (!mul_ln728_696_fu_60251_p0.read().is_01() || !mul_ln728_696_fu_60251_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_696_fu_60251_p0.read()) * sc_bigint<8>(mul_ln728_696_fu_60251_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_697_fu_60276_p0() {
    mul_ln728_697_fu_60276_p0 = select_ln173_1395_reg_126198.read();
}

void linear_forward_no_mu::thread_mul_ln728_697_fu_60276_p1() {
    mul_ln728_697_fu_60276_p1 = reg_17080.read();
}

void linear_forward_no_mu::thread_mul_ln728_697_fu_60276_p2() {
    mul_ln728_697_fu_60276_p2 = (!mul_ln728_697_fu_60276_p0.read().is_01() || !mul_ln728_697_fu_60276_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_697_fu_60276_p0.read()) * sc_bigint<8>(mul_ln728_697_fu_60276_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_698_fu_60301_p0() {
    mul_ln728_698_fu_60301_p0 = select_ln173_1397_reg_126203.read();
}

void linear_forward_no_mu::thread_mul_ln728_698_fu_60301_p1() {
    mul_ln728_698_fu_60301_p1 = reg_17084.read();
}

void linear_forward_no_mu::thread_mul_ln728_698_fu_60301_p2() {
    mul_ln728_698_fu_60301_p2 = (!mul_ln728_698_fu_60301_p0.read().is_01() || !mul_ln728_698_fu_60301_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_698_fu_60301_p0.read()) * sc_bigint<8>(mul_ln728_698_fu_60301_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_699_fu_60326_p0() {
    mul_ln728_699_fu_60326_p0 = reg_17088.read();
}

void linear_forward_no_mu::thread_mul_ln728_699_fu_60326_p1() {
    mul_ln728_699_fu_60326_p1 = select_ln173_1399_reg_126208.read();
}

void linear_forward_no_mu::thread_mul_ln728_699_fu_60326_p2() {
    mul_ln728_699_fu_60326_p2 = (!mul_ln728_699_fu_60326_p0.read().is_01() || !mul_ln728_699_fu_60326_p1.read().is_01())? sc_lv<9>(): sc_bigint<8>(mul_ln728_699_fu_60326_p0.read()) * sc_bigint<2>(mul_ln728_699_fu_60326_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_69_fu_21410_p0() {
    mul_ln728_69_fu_21410_p0 = select_ln173_139_reg_120388.read();
}

void linear_forward_no_mu::thread_mul_ln728_69_fu_21410_p1() {
    mul_ln728_69_fu_21410_p1 = reg_17096.read();
}

void linear_forward_no_mu::thread_mul_ln728_69_fu_21410_p2() {
    mul_ln728_69_fu_21410_p2 = (!mul_ln728_69_fu_21410_p0.read().is_01() || !mul_ln728_69_fu_21410_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_69_fu_21410_p0.read()) * sc_bigint<8>(mul_ln728_69_fu_21410_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_6_fu_17601_p0() {
    mul_ln728_6_fu_17601_p0 = select_ln173_13_reg_119790.read();
}

void linear_forward_no_mu::thread_mul_ln728_6_fu_17601_p1() {
    mul_ln728_6_fu_17601_p1 = reg_17100.read();
}

void linear_forward_no_mu::thread_mul_ln728_6_fu_17601_p2() {
    mul_ln728_6_fu_17601_p2 = (!mul_ln728_6_fu_17601_p0.read().is_01() || !mul_ln728_6_fu_17601_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_6_fu_17601_p0.read()) * sc_bigint<8>(mul_ln728_6_fu_17601_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_700_fu_60351_p0() {
    mul_ln728_700_fu_60351_p0 = select_ln173_1401_reg_126213.read();
}

void linear_forward_no_mu::thread_mul_ln728_700_fu_60351_p1() {
    mul_ln728_700_fu_60351_p1 = reg_17092.read();
}

void linear_forward_no_mu::thread_mul_ln728_700_fu_60351_p2() {
    mul_ln728_700_fu_60351_p2 = (!mul_ln728_700_fu_60351_p0.read().is_01() || !mul_ln728_700_fu_60351_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_700_fu_60351_p0.read()) * sc_bigint<8>(mul_ln728_700_fu_60351_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_701_fu_60376_p0() {
    mul_ln728_701_fu_60376_p0 = select_ln173_1403_reg_126218.read();
}

void linear_forward_no_mu::thread_mul_ln728_701_fu_60376_p1() {
    mul_ln728_701_fu_60376_p1 = reg_17096.read();
}

void linear_forward_no_mu::thread_mul_ln728_701_fu_60376_p2() {
    mul_ln728_701_fu_60376_p2 = (!mul_ln728_701_fu_60376_p0.read().is_01() || !mul_ln728_701_fu_60376_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_701_fu_60376_p0.read()) * sc_bigint<8>(mul_ln728_701_fu_60376_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_702_fu_60401_p0() {
    mul_ln728_702_fu_60401_p0 = select_ln173_1405_reg_126223.read();
}

void linear_forward_no_mu::thread_mul_ln728_702_fu_60401_p1() {
    mul_ln728_702_fu_60401_p1 = reg_17100.read();
}

void linear_forward_no_mu::thread_mul_ln728_702_fu_60401_p2() {
    mul_ln728_702_fu_60401_p2 = (!mul_ln728_702_fu_60401_p0.read().is_01() || !mul_ln728_702_fu_60401_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_702_fu_60401_p0.read()) * sc_bigint<8>(mul_ln728_702_fu_60401_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_703_fu_60426_p0() {
    mul_ln728_703_fu_60426_p0 = reg_17104.read();
}

void linear_forward_no_mu::thread_mul_ln728_703_fu_60426_p1() {
    mul_ln728_703_fu_60426_p1 = select_ln173_1407_reg_126228.read();
}

void linear_forward_no_mu::thread_mul_ln728_703_fu_60426_p2() {
    mul_ln728_703_fu_60426_p2 = (!mul_ln728_703_fu_60426_p0.read().is_01() || !mul_ln728_703_fu_60426_p1.read().is_01())? sc_lv<9>(): sc_bigint<8>(mul_ln728_703_fu_60426_p0.read()) * sc_bigint<2>(mul_ln728_703_fu_60426_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_704_fu_60708_p0() {
    mul_ln728_704_fu_60708_p0 = select_ln173_1409_reg_126263.read();
}

void linear_forward_no_mu::thread_mul_ln728_704_fu_60708_p1() {
    mul_ln728_704_fu_60708_p1 = reg_17076.read();
}

void linear_forward_no_mu::thread_mul_ln728_704_fu_60708_p2() {
    mul_ln728_704_fu_60708_p2 = (!mul_ln728_704_fu_60708_p0.read().is_01() || !mul_ln728_704_fu_60708_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_704_fu_60708_p0.read()) * sc_bigint<8>(mul_ln728_704_fu_60708_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_705_fu_60733_p0() {
    mul_ln728_705_fu_60733_p0 = select_ln173_1411_reg_126268.read();
}

void linear_forward_no_mu::thread_mul_ln728_705_fu_60733_p1() {
    mul_ln728_705_fu_60733_p1 = reg_17080.read();
}

void linear_forward_no_mu::thread_mul_ln728_705_fu_60733_p2() {
    mul_ln728_705_fu_60733_p2 = (!mul_ln728_705_fu_60733_p0.read().is_01() || !mul_ln728_705_fu_60733_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_705_fu_60733_p0.read()) * sc_bigint<8>(mul_ln728_705_fu_60733_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_706_fu_60758_p0() {
    mul_ln728_706_fu_60758_p0 = select_ln173_1413_reg_126273.read();
}

void linear_forward_no_mu::thread_mul_ln728_706_fu_60758_p1() {
    mul_ln728_706_fu_60758_p1 = reg_17084.read();
}

void linear_forward_no_mu::thread_mul_ln728_706_fu_60758_p2() {
    mul_ln728_706_fu_60758_p2 = (!mul_ln728_706_fu_60758_p0.read().is_01() || !mul_ln728_706_fu_60758_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_706_fu_60758_p0.read()) * sc_bigint<8>(mul_ln728_706_fu_60758_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_707_fu_60783_p0() {
    mul_ln728_707_fu_60783_p0 = reg_17088.read();
}

void linear_forward_no_mu::thread_mul_ln728_707_fu_60783_p1() {
    mul_ln728_707_fu_60783_p1 = select_ln173_1415_reg_126278.read();
}

void linear_forward_no_mu::thread_mul_ln728_707_fu_60783_p2() {
    mul_ln728_707_fu_60783_p2 = (!mul_ln728_707_fu_60783_p0.read().is_01() || !mul_ln728_707_fu_60783_p1.read().is_01())? sc_lv<9>(): sc_bigint<8>(mul_ln728_707_fu_60783_p0.read()) * sc_bigint<2>(mul_ln728_707_fu_60783_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_708_fu_60808_p0() {
    mul_ln728_708_fu_60808_p0 = select_ln173_1417_reg_126283.read();
}

void linear_forward_no_mu::thread_mul_ln728_708_fu_60808_p1() {
    mul_ln728_708_fu_60808_p1 = reg_17092.read();
}

void linear_forward_no_mu::thread_mul_ln728_708_fu_60808_p2() {
    mul_ln728_708_fu_60808_p2 = (!mul_ln728_708_fu_60808_p0.read().is_01() || !mul_ln728_708_fu_60808_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_708_fu_60808_p0.read()) * sc_bigint<8>(mul_ln728_708_fu_60808_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_709_fu_60856_p0() {
    mul_ln728_709_fu_60856_p0 = select_ln173_1419_fu_60840_p3.read();
}

void linear_forward_no_mu::thread_mul_ln728_709_fu_60856_p1() {
    mul_ln728_709_fu_60856_p1 = reg_17096.read();
}

void linear_forward_no_mu::thread_mul_ln728_709_fu_60856_p2() {
    mul_ln728_709_fu_60856_p2 = (!mul_ln728_709_fu_60856_p0.read().is_01() || !mul_ln728_709_fu_60856_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_709_fu_60856_p0.read()) * sc_bigint<8>(mul_ln728_709_fu_60856_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_70_fu_21458_p0() {
    mul_ln728_70_fu_21458_p0 = select_ln173_141_fu_21442_p3.read();
}

void linear_forward_no_mu::thread_mul_ln728_70_fu_21458_p1() {
    mul_ln728_70_fu_21458_p1 = reg_17100.read();
}

void linear_forward_no_mu::thread_mul_ln728_70_fu_21458_p2() {
    mul_ln728_70_fu_21458_p2 = (!mul_ln728_70_fu_21458_p0.read().is_01() || !mul_ln728_70_fu_21458_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_70_fu_21458_p0.read()) * sc_bigint<8>(mul_ln728_70_fu_21458_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_710_fu_60892_p0() {
    mul_ln728_710_fu_60892_p0 = select_ln173_1421_fu_60876_p3.read();
}

void linear_forward_no_mu::thread_mul_ln728_710_fu_60892_p1() {
    mul_ln728_710_fu_60892_p1 = reg_17100.read();
}

void linear_forward_no_mu::thread_mul_ln728_710_fu_60892_p2() {
    mul_ln728_710_fu_60892_p2 = (!mul_ln728_710_fu_60892_p0.read().is_01() || !mul_ln728_710_fu_60892_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_710_fu_60892_p0.read()) * sc_bigint<8>(mul_ln728_710_fu_60892_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_711_fu_60905_p0() {
    mul_ln728_711_fu_60905_p0 = reg_17104.read();
}

void linear_forward_no_mu::thread_mul_ln728_711_fu_60905_p1() {
    mul_ln728_711_fu_60905_p1 = select_ln173_1423_reg_126288.read();
}

void linear_forward_no_mu::thread_mul_ln728_711_fu_60905_p2() {
    mul_ln728_711_fu_60905_p2 = (!mul_ln728_711_fu_60905_p0.read().is_01() || !mul_ln728_711_fu_60905_p1.read().is_01())? sc_lv<9>(): sc_bigint<8>(mul_ln728_711_fu_60905_p0.read()) * sc_bigint<2>(mul_ln728_711_fu_60905_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_712_fu_61220_p0() {
    mul_ln728_712_fu_61220_p0 = select_ln173_1425_reg_126333.read();
}

void linear_forward_no_mu::thread_mul_ln728_712_fu_61220_p1() {
    mul_ln728_712_fu_61220_p1 = reg_17076.read();
}

void linear_forward_no_mu::thread_mul_ln728_712_fu_61220_p2() {
    mul_ln728_712_fu_61220_p2 = (!mul_ln728_712_fu_61220_p0.read().is_01() || !mul_ln728_712_fu_61220_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_712_fu_61220_p0.read()) * sc_bigint<8>(mul_ln728_712_fu_61220_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_713_fu_61245_p0() {
    mul_ln728_713_fu_61245_p0 = select_ln173_1427_reg_126338.read();
}

void linear_forward_no_mu::thread_mul_ln728_713_fu_61245_p1() {
    mul_ln728_713_fu_61245_p1 = reg_17080.read();
}

void linear_forward_no_mu::thread_mul_ln728_713_fu_61245_p2() {
    mul_ln728_713_fu_61245_p2 = (!mul_ln728_713_fu_61245_p0.read().is_01() || !mul_ln728_713_fu_61245_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_713_fu_61245_p0.read()) * sc_bigint<8>(mul_ln728_713_fu_61245_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_714_fu_61270_p0() {
    mul_ln728_714_fu_61270_p0 = select_ln173_1429_reg_126343.read();
}

void linear_forward_no_mu::thread_mul_ln728_714_fu_61270_p1() {
    mul_ln728_714_fu_61270_p1 = reg_17084.read();
}

void linear_forward_no_mu::thread_mul_ln728_714_fu_61270_p2() {
    mul_ln728_714_fu_61270_p2 = (!mul_ln728_714_fu_61270_p0.read().is_01() || !mul_ln728_714_fu_61270_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_714_fu_61270_p0.read()) * sc_bigint<8>(mul_ln728_714_fu_61270_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_715_fu_61295_p0() {
    mul_ln728_715_fu_61295_p0 = reg_17088.read();
}

void linear_forward_no_mu::thread_mul_ln728_715_fu_61295_p1() {
    mul_ln728_715_fu_61295_p1 = select_ln173_1431_reg_126348.read();
}

void linear_forward_no_mu::thread_mul_ln728_715_fu_61295_p2() {
    mul_ln728_715_fu_61295_p2 = (!mul_ln728_715_fu_61295_p0.read().is_01() || !mul_ln728_715_fu_61295_p1.read().is_01())? sc_lv<9>(): sc_bigint<8>(mul_ln728_715_fu_61295_p0.read()) * sc_bigint<2>(mul_ln728_715_fu_61295_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_716_fu_61320_p0() {
    mul_ln728_716_fu_61320_p0 = select_ln173_1433_reg_126353.read();
}

void linear_forward_no_mu::thread_mul_ln728_716_fu_61320_p1() {
    mul_ln728_716_fu_61320_p1 = reg_17092.read();
}

void linear_forward_no_mu::thread_mul_ln728_716_fu_61320_p2() {
    mul_ln728_716_fu_61320_p2 = (!mul_ln728_716_fu_61320_p0.read().is_01() || !mul_ln728_716_fu_61320_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_716_fu_61320_p0.read()) * sc_bigint<8>(mul_ln728_716_fu_61320_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_717_fu_61345_p0() {
    mul_ln728_717_fu_61345_p0 = select_ln173_1435_reg_126358.read();
}

void linear_forward_no_mu::thread_mul_ln728_717_fu_61345_p1() {
    mul_ln728_717_fu_61345_p1 = reg_17096.read();
}

void linear_forward_no_mu::thread_mul_ln728_717_fu_61345_p2() {
    mul_ln728_717_fu_61345_p2 = (!mul_ln728_717_fu_61345_p0.read().is_01() || !mul_ln728_717_fu_61345_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_717_fu_61345_p0.read()) * sc_bigint<8>(mul_ln728_717_fu_61345_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_718_fu_61393_p0() {
    mul_ln728_718_fu_61393_p0 = select_ln173_1437_fu_61377_p3.read();
}

void linear_forward_no_mu::thread_mul_ln728_718_fu_61393_p1() {
    mul_ln728_718_fu_61393_p1 = reg_17100.read();
}

void linear_forward_no_mu::thread_mul_ln728_718_fu_61393_p2() {
    mul_ln728_718_fu_61393_p2 = (!mul_ln728_718_fu_61393_p0.read().is_01() || !mul_ln728_718_fu_61393_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_718_fu_61393_p0.read()) * sc_bigint<8>(mul_ln728_718_fu_61393_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_719_fu_61406_p0() {
    mul_ln728_719_fu_61406_p0 = reg_17104.read();
}

void linear_forward_no_mu::thread_mul_ln728_719_fu_61406_p1() {
    mul_ln728_719_fu_61406_p1 = select_ln173_1439_reg_126363.read();
}

void linear_forward_no_mu::thread_mul_ln728_719_fu_61406_p2() {
    mul_ln728_719_fu_61406_p2 = (!mul_ln728_719_fu_61406_p0.read().is_01() || !mul_ln728_719_fu_61406_p1.read().is_01())? sc_lv<9>(): sc_bigint<8>(mul_ln728_719_fu_61406_p0.read()) * sc_bigint<2>(mul_ln728_719_fu_61406_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_71_fu_21471_p0() {
    mul_ln728_71_fu_21471_p0 = reg_17104.read();
}

void linear_forward_no_mu::thread_mul_ln728_71_fu_21471_p1() {
    mul_ln728_71_fu_21471_p1 = select_ln173_143_reg_120393.read();
}

void linear_forward_no_mu::thread_mul_ln728_71_fu_21471_p2() {
    mul_ln728_71_fu_21471_p2 = (!mul_ln728_71_fu_21471_p0.read().is_01() || !mul_ln728_71_fu_21471_p1.read().is_01())? sc_lv<9>(): sc_bigint<8>(mul_ln728_71_fu_21471_p0.read()) * sc_bigint<2>(mul_ln728_71_fu_21471_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_720_fu_61717_p0() {
    mul_ln728_720_fu_61717_p0 = select_ln173_1441_reg_126398.read();
}

void linear_forward_no_mu::thread_mul_ln728_720_fu_61717_p1() {
    mul_ln728_720_fu_61717_p1 = reg_17076.read();
}

void linear_forward_no_mu::thread_mul_ln728_720_fu_61717_p2() {
    mul_ln728_720_fu_61717_p2 = (!mul_ln728_720_fu_61717_p0.read().is_01() || !mul_ln728_720_fu_61717_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_720_fu_61717_p0.read()) * sc_bigint<8>(mul_ln728_720_fu_61717_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_721_fu_61742_p0() {
    mul_ln728_721_fu_61742_p0 = select_ln173_1443_reg_126403.read();
}

void linear_forward_no_mu::thread_mul_ln728_721_fu_61742_p1() {
    mul_ln728_721_fu_61742_p1 = reg_17080.read();
}

void linear_forward_no_mu::thread_mul_ln728_721_fu_61742_p2() {
    mul_ln728_721_fu_61742_p2 = (!mul_ln728_721_fu_61742_p0.read().is_01() || !mul_ln728_721_fu_61742_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_721_fu_61742_p0.read()) * sc_bigint<8>(mul_ln728_721_fu_61742_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_722_fu_61767_p0() {
    mul_ln728_722_fu_61767_p0 = select_ln173_1445_reg_126408.read();
}

void linear_forward_no_mu::thread_mul_ln728_722_fu_61767_p1() {
    mul_ln728_722_fu_61767_p1 = reg_17084.read();
}

void linear_forward_no_mu::thread_mul_ln728_722_fu_61767_p2() {
    mul_ln728_722_fu_61767_p2 = (!mul_ln728_722_fu_61767_p0.read().is_01() || !mul_ln728_722_fu_61767_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_722_fu_61767_p0.read()) * sc_bigint<8>(mul_ln728_722_fu_61767_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_723_fu_61792_p0() {
    mul_ln728_723_fu_61792_p0 = reg_17088.read();
}

void linear_forward_no_mu::thread_mul_ln728_723_fu_61792_p1() {
    mul_ln728_723_fu_61792_p1 = select_ln173_1447_reg_126413.read();
}

void linear_forward_no_mu::thread_mul_ln728_723_fu_61792_p2() {
    mul_ln728_723_fu_61792_p2 = (!mul_ln728_723_fu_61792_p0.read().is_01() || !mul_ln728_723_fu_61792_p1.read().is_01())? sc_lv<9>(): sc_bigint<8>(mul_ln728_723_fu_61792_p0.read()) * sc_bigint<2>(mul_ln728_723_fu_61792_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_724_fu_61817_p0() {
    mul_ln728_724_fu_61817_p0 = select_ln173_1449_reg_126418.read();
}

void linear_forward_no_mu::thread_mul_ln728_724_fu_61817_p1() {
    mul_ln728_724_fu_61817_p1 = reg_17092.read();
}

void linear_forward_no_mu::thread_mul_ln728_724_fu_61817_p2() {
    mul_ln728_724_fu_61817_p2 = (!mul_ln728_724_fu_61817_p0.read().is_01() || !mul_ln728_724_fu_61817_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_724_fu_61817_p0.read()) * sc_bigint<8>(mul_ln728_724_fu_61817_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_725_fu_61842_p0() {
    mul_ln728_725_fu_61842_p0 = select_ln173_1451_reg_126423.read();
}

void linear_forward_no_mu::thread_mul_ln728_725_fu_61842_p1() {
    mul_ln728_725_fu_61842_p1 = reg_17096.read();
}

void linear_forward_no_mu::thread_mul_ln728_725_fu_61842_p2() {
    mul_ln728_725_fu_61842_p2 = (!mul_ln728_725_fu_61842_p0.read().is_01() || !mul_ln728_725_fu_61842_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_725_fu_61842_p0.read()) * sc_bigint<8>(mul_ln728_725_fu_61842_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_726_fu_61867_p0() {
    mul_ln728_726_fu_61867_p0 = select_ln173_1453_reg_126428.read();
}

void linear_forward_no_mu::thread_mul_ln728_726_fu_61867_p1() {
    mul_ln728_726_fu_61867_p1 = reg_17100.read();
}

void linear_forward_no_mu::thread_mul_ln728_726_fu_61867_p2() {
    mul_ln728_726_fu_61867_p2 = (!mul_ln728_726_fu_61867_p0.read().is_01() || !mul_ln728_726_fu_61867_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_726_fu_61867_p0.read()) * sc_bigint<8>(mul_ln728_726_fu_61867_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_727_fu_61892_p0() {
    mul_ln728_727_fu_61892_p0 = reg_17104.read();
}

void linear_forward_no_mu::thread_mul_ln728_727_fu_61892_p1() {
    mul_ln728_727_fu_61892_p1 = select_ln173_1455_reg_126433.read();
}

void linear_forward_no_mu::thread_mul_ln728_727_fu_61892_p2() {
    mul_ln728_727_fu_61892_p2 = (!mul_ln728_727_fu_61892_p0.read().is_01() || !mul_ln728_727_fu_61892_p1.read().is_01())? sc_lv<9>(): sc_bigint<8>(mul_ln728_727_fu_61892_p0.read()) * sc_bigint<2>(mul_ln728_727_fu_61892_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_728_fu_62175_p0() {
    mul_ln728_728_fu_62175_p0 = select_ln173_1457_reg_126468.read();
}

void linear_forward_no_mu::thread_mul_ln728_728_fu_62175_p1() {
    mul_ln728_728_fu_62175_p1 = reg_17076.read();
}

void linear_forward_no_mu::thread_mul_ln728_728_fu_62175_p2() {
    mul_ln728_728_fu_62175_p2 = (!mul_ln728_728_fu_62175_p0.read().is_01() || !mul_ln728_728_fu_62175_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_728_fu_62175_p0.read()) * sc_bigint<8>(mul_ln728_728_fu_62175_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_729_fu_62200_p0() {
    mul_ln728_729_fu_62200_p0 = select_ln173_1459_reg_126473.read();
}

void linear_forward_no_mu::thread_mul_ln728_729_fu_62200_p1() {
    mul_ln728_729_fu_62200_p1 = reg_17080.read();
}

void linear_forward_no_mu::thread_mul_ln728_729_fu_62200_p2() {
    mul_ln728_729_fu_62200_p2 = (!mul_ln728_729_fu_62200_p0.read().is_01() || !mul_ln728_729_fu_62200_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_729_fu_62200_p0.read()) * sc_bigint<8>(mul_ln728_729_fu_62200_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_72_fu_21783_p0() {
    mul_ln728_72_fu_21783_p0 = select_ln173_145_reg_120448.read();
}

void linear_forward_no_mu::thread_mul_ln728_72_fu_21783_p1() {
    mul_ln728_72_fu_21783_p1 = reg_17076.read();
}

void linear_forward_no_mu::thread_mul_ln728_72_fu_21783_p2() {
    mul_ln728_72_fu_21783_p2 = (!mul_ln728_72_fu_21783_p0.read().is_01() || !mul_ln728_72_fu_21783_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_72_fu_21783_p0.read()) * sc_bigint<8>(mul_ln728_72_fu_21783_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_730_fu_62225_p0() {
    mul_ln728_730_fu_62225_p0 = select_ln173_1461_reg_126478.read();
}

void linear_forward_no_mu::thread_mul_ln728_730_fu_62225_p1() {
    mul_ln728_730_fu_62225_p1 = reg_17084.read();
}

void linear_forward_no_mu::thread_mul_ln728_730_fu_62225_p2() {
    mul_ln728_730_fu_62225_p2 = (!mul_ln728_730_fu_62225_p0.read().is_01() || !mul_ln728_730_fu_62225_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_730_fu_62225_p0.read()) * sc_bigint<8>(mul_ln728_730_fu_62225_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_731_fu_62250_p0() {
    mul_ln728_731_fu_62250_p0 = reg_17088.read();
}

void linear_forward_no_mu::thread_mul_ln728_731_fu_62250_p1() {
    mul_ln728_731_fu_62250_p1 = select_ln173_1463_reg_126483.read();
}

void linear_forward_no_mu::thread_mul_ln728_731_fu_62250_p2() {
    mul_ln728_731_fu_62250_p2 = (!mul_ln728_731_fu_62250_p0.read().is_01() || !mul_ln728_731_fu_62250_p1.read().is_01())? sc_lv<9>(): sc_bigint<8>(mul_ln728_731_fu_62250_p0.read()) * sc_bigint<2>(mul_ln728_731_fu_62250_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_732_fu_62275_p0() {
    mul_ln728_732_fu_62275_p0 = select_ln173_1465_reg_126488.read();
}

void linear_forward_no_mu::thread_mul_ln728_732_fu_62275_p1() {
    mul_ln728_732_fu_62275_p1 = reg_17092.read();
}

void linear_forward_no_mu::thread_mul_ln728_732_fu_62275_p2() {
    mul_ln728_732_fu_62275_p2 = (!mul_ln728_732_fu_62275_p0.read().is_01() || !mul_ln728_732_fu_62275_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_732_fu_62275_p0.read()) * sc_bigint<8>(mul_ln728_732_fu_62275_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_733_fu_62323_p0() {
    mul_ln728_733_fu_62323_p0 = select_ln173_1467_fu_62307_p3.read();
}

void linear_forward_no_mu::thread_mul_ln728_733_fu_62323_p1() {
    mul_ln728_733_fu_62323_p1 = reg_17096.read();
}

void linear_forward_no_mu::thread_mul_ln728_733_fu_62323_p2() {
    mul_ln728_733_fu_62323_p2 = (!mul_ln728_733_fu_62323_p0.read().is_01() || !mul_ln728_733_fu_62323_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_733_fu_62323_p0.read()) * sc_bigint<8>(mul_ln728_733_fu_62323_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_734_fu_62359_p0() {
    mul_ln728_734_fu_62359_p0 = select_ln173_1469_fu_62343_p3.read();
}

void linear_forward_no_mu::thread_mul_ln728_734_fu_62359_p1() {
    mul_ln728_734_fu_62359_p1 = reg_17100.read();
}

void linear_forward_no_mu::thread_mul_ln728_734_fu_62359_p2() {
    mul_ln728_734_fu_62359_p2 = (!mul_ln728_734_fu_62359_p0.read().is_01() || !mul_ln728_734_fu_62359_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_734_fu_62359_p0.read()) * sc_bigint<8>(mul_ln728_734_fu_62359_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_735_fu_62372_p0() {
    mul_ln728_735_fu_62372_p0 = reg_17104.read();
}

void linear_forward_no_mu::thread_mul_ln728_735_fu_62372_p1() {
    mul_ln728_735_fu_62372_p1 = select_ln173_1471_reg_126493.read();
}

void linear_forward_no_mu::thread_mul_ln728_735_fu_62372_p2() {
    mul_ln728_735_fu_62372_p2 = (!mul_ln728_735_fu_62372_p0.read().is_01() || !mul_ln728_735_fu_62372_p1.read().is_01())? sc_lv<9>(): sc_bigint<8>(mul_ln728_735_fu_62372_p0.read()) * sc_bigint<2>(mul_ln728_735_fu_62372_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_736_fu_62698_p0() {
    mul_ln728_736_fu_62698_p0 = select_ln173_1473_reg_126538.read();
}

void linear_forward_no_mu::thread_mul_ln728_736_fu_62698_p1() {
    mul_ln728_736_fu_62698_p1 = reg_17076.read();
}

void linear_forward_no_mu::thread_mul_ln728_736_fu_62698_p2() {
    mul_ln728_736_fu_62698_p2 = (!mul_ln728_736_fu_62698_p0.read().is_01() || !mul_ln728_736_fu_62698_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_736_fu_62698_p0.read()) * sc_bigint<8>(mul_ln728_736_fu_62698_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_737_fu_62723_p0() {
    mul_ln728_737_fu_62723_p0 = select_ln173_1475_reg_126543.read();
}

void linear_forward_no_mu::thread_mul_ln728_737_fu_62723_p1() {
    mul_ln728_737_fu_62723_p1 = reg_17080.read();
}

void linear_forward_no_mu::thread_mul_ln728_737_fu_62723_p2() {
    mul_ln728_737_fu_62723_p2 = (!mul_ln728_737_fu_62723_p0.read().is_01() || !mul_ln728_737_fu_62723_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_737_fu_62723_p0.read()) * sc_bigint<8>(mul_ln728_737_fu_62723_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_738_fu_62748_p0() {
    mul_ln728_738_fu_62748_p0 = select_ln173_1477_reg_126548.read();
}

void linear_forward_no_mu::thread_mul_ln728_738_fu_62748_p1() {
    mul_ln728_738_fu_62748_p1 = reg_17084.read();
}

void linear_forward_no_mu::thread_mul_ln728_738_fu_62748_p2() {
    mul_ln728_738_fu_62748_p2 = (!mul_ln728_738_fu_62748_p0.read().is_01() || !mul_ln728_738_fu_62748_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_738_fu_62748_p0.read()) * sc_bigint<8>(mul_ln728_738_fu_62748_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_739_fu_62773_p0() {
    mul_ln728_739_fu_62773_p0 = reg_17088.read();
}

void linear_forward_no_mu::thread_mul_ln728_739_fu_62773_p1() {
    mul_ln728_739_fu_62773_p1 = select_ln173_1479_reg_126553.read();
}

void linear_forward_no_mu::thread_mul_ln728_739_fu_62773_p2() {
    mul_ln728_739_fu_62773_p2 = (!mul_ln728_739_fu_62773_p0.read().is_01() || !mul_ln728_739_fu_62773_p1.read().is_01())? sc_lv<9>(): sc_bigint<8>(mul_ln728_739_fu_62773_p0.read()) * sc_bigint<2>(mul_ln728_739_fu_62773_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_73_fu_21808_p0() {
    mul_ln728_73_fu_21808_p0 = select_ln173_147_reg_120453.read();
}

void linear_forward_no_mu::thread_mul_ln728_73_fu_21808_p1() {
    mul_ln728_73_fu_21808_p1 = reg_17080.read();
}

void linear_forward_no_mu::thread_mul_ln728_73_fu_21808_p2() {
    mul_ln728_73_fu_21808_p2 = (!mul_ln728_73_fu_21808_p0.read().is_01() || !mul_ln728_73_fu_21808_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_73_fu_21808_p0.read()) * sc_bigint<8>(mul_ln728_73_fu_21808_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_740_fu_62798_p0() {
    mul_ln728_740_fu_62798_p0 = select_ln173_1481_reg_126558.read();
}

void linear_forward_no_mu::thread_mul_ln728_740_fu_62798_p1() {
    mul_ln728_740_fu_62798_p1 = reg_17092.read();
}

void linear_forward_no_mu::thread_mul_ln728_740_fu_62798_p2() {
    mul_ln728_740_fu_62798_p2 = (!mul_ln728_740_fu_62798_p0.read().is_01() || !mul_ln728_740_fu_62798_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_740_fu_62798_p0.read()) * sc_bigint<8>(mul_ln728_740_fu_62798_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_741_fu_62823_p0() {
    mul_ln728_741_fu_62823_p0 = select_ln173_1483_reg_126563.read();
}

void linear_forward_no_mu::thread_mul_ln728_741_fu_62823_p1() {
    mul_ln728_741_fu_62823_p1 = reg_17096.read();
}

void linear_forward_no_mu::thread_mul_ln728_741_fu_62823_p2() {
    mul_ln728_741_fu_62823_p2 = (!mul_ln728_741_fu_62823_p0.read().is_01() || !mul_ln728_741_fu_62823_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_741_fu_62823_p0.read()) * sc_bigint<8>(mul_ln728_741_fu_62823_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_742_fu_62871_p0() {
    mul_ln728_742_fu_62871_p0 = select_ln173_1485_fu_62855_p3.read();
}

void linear_forward_no_mu::thread_mul_ln728_742_fu_62871_p1() {
    mul_ln728_742_fu_62871_p1 = reg_17100.read();
}

void linear_forward_no_mu::thread_mul_ln728_742_fu_62871_p2() {
    mul_ln728_742_fu_62871_p2 = (!mul_ln728_742_fu_62871_p0.read().is_01() || !mul_ln728_742_fu_62871_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_742_fu_62871_p0.read()) * sc_bigint<8>(mul_ln728_742_fu_62871_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_743_fu_62884_p0() {
    mul_ln728_743_fu_62884_p0 = reg_17104.read();
}

void linear_forward_no_mu::thread_mul_ln728_743_fu_62884_p1() {
    mul_ln728_743_fu_62884_p1 = select_ln173_1487_reg_126568.read();
}

void linear_forward_no_mu::thread_mul_ln728_743_fu_62884_p2() {
    mul_ln728_743_fu_62884_p2 = (!mul_ln728_743_fu_62884_p0.read().is_01() || !mul_ln728_743_fu_62884_p1.read().is_01())? sc_lv<9>(): sc_bigint<8>(mul_ln728_743_fu_62884_p0.read()) * sc_bigint<2>(mul_ln728_743_fu_62884_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_744_fu_63196_p0() {
    mul_ln728_744_fu_63196_p0 = select_ln173_1489_reg_126608.read();
}

void linear_forward_no_mu::thread_mul_ln728_744_fu_63196_p1() {
    mul_ln728_744_fu_63196_p1 = reg_17076.read();
}

void linear_forward_no_mu::thread_mul_ln728_744_fu_63196_p2() {
    mul_ln728_744_fu_63196_p2 = (!mul_ln728_744_fu_63196_p0.read().is_01() || !mul_ln728_744_fu_63196_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_744_fu_63196_p0.read()) * sc_bigint<8>(mul_ln728_744_fu_63196_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_745_fu_63221_p0() {
    mul_ln728_745_fu_63221_p0 = select_ln173_1491_reg_126613.read();
}

void linear_forward_no_mu::thread_mul_ln728_745_fu_63221_p1() {
    mul_ln728_745_fu_63221_p1 = reg_17080.read();
}

void linear_forward_no_mu::thread_mul_ln728_745_fu_63221_p2() {
    mul_ln728_745_fu_63221_p2 = (!mul_ln728_745_fu_63221_p0.read().is_01() || !mul_ln728_745_fu_63221_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_745_fu_63221_p0.read()) * sc_bigint<8>(mul_ln728_745_fu_63221_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_746_fu_63246_p0() {
    mul_ln728_746_fu_63246_p0 = select_ln173_1493_reg_126618.read();
}

void linear_forward_no_mu::thread_mul_ln728_746_fu_63246_p1() {
    mul_ln728_746_fu_63246_p1 = reg_17084.read();
}

void linear_forward_no_mu::thread_mul_ln728_746_fu_63246_p2() {
    mul_ln728_746_fu_63246_p2 = (!mul_ln728_746_fu_63246_p0.read().is_01() || !mul_ln728_746_fu_63246_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_746_fu_63246_p0.read()) * sc_bigint<8>(mul_ln728_746_fu_63246_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_747_fu_63271_p0() {
    mul_ln728_747_fu_63271_p0 = reg_17088.read();
}

void linear_forward_no_mu::thread_mul_ln728_747_fu_63271_p1() {
    mul_ln728_747_fu_63271_p1 = select_ln173_1495_reg_126623.read();
}

void linear_forward_no_mu::thread_mul_ln728_747_fu_63271_p2() {
    mul_ln728_747_fu_63271_p2 = (!mul_ln728_747_fu_63271_p0.read().is_01() || !mul_ln728_747_fu_63271_p1.read().is_01())? sc_lv<9>(): sc_bigint<8>(mul_ln728_747_fu_63271_p0.read()) * sc_bigint<2>(mul_ln728_747_fu_63271_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_748_fu_63296_p0() {
    mul_ln728_748_fu_63296_p0 = select_ln173_1497_reg_126628.read();
}

void linear_forward_no_mu::thread_mul_ln728_748_fu_63296_p1() {
    mul_ln728_748_fu_63296_p1 = reg_17092.read();
}

void linear_forward_no_mu::thread_mul_ln728_748_fu_63296_p2() {
    mul_ln728_748_fu_63296_p2 = (!mul_ln728_748_fu_63296_p0.read().is_01() || !mul_ln728_748_fu_63296_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_748_fu_63296_p0.read()) * sc_bigint<8>(mul_ln728_748_fu_63296_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_749_fu_63321_p0() {
    mul_ln728_749_fu_63321_p0 = select_ln173_1499_reg_126633.read();
}

void linear_forward_no_mu::thread_mul_ln728_749_fu_63321_p1() {
    mul_ln728_749_fu_63321_p1 = reg_17096.read();
}

void linear_forward_no_mu::thread_mul_ln728_749_fu_63321_p2() {
    mul_ln728_749_fu_63321_p2 = (!mul_ln728_749_fu_63321_p0.read().is_01() || !mul_ln728_749_fu_63321_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_749_fu_63321_p0.read()) * sc_bigint<8>(mul_ln728_749_fu_63321_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_74_fu_21833_p0() {
    mul_ln728_74_fu_21833_p0 = select_ln173_149_reg_120458.read();
}

void linear_forward_no_mu::thread_mul_ln728_74_fu_21833_p1() {
    mul_ln728_74_fu_21833_p1 = reg_17084.read();
}

void linear_forward_no_mu::thread_mul_ln728_74_fu_21833_p2() {
    mul_ln728_74_fu_21833_p2 = (!mul_ln728_74_fu_21833_p0.read().is_01() || !mul_ln728_74_fu_21833_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_74_fu_21833_p0.read()) * sc_bigint<8>(mul_ln728_74_fu_21833_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_750_fu_63346_p0() {
    mul_ln728_750_fu_63346_p0 = select_ln173_1501_reg_126638.read();
}

void linear_forward_no_mu::thread_mul_ln728_750_fu_63346_p1() {
    mul_ln728_750_fu_63346_p1 = reg_17100.read();
}

void linear_forward_no_mu::thread_mul_ln728_750_fu_63346_p2() {
    mul_ln728_750_fu_63346_p2 = (!mul_ln728_750_fu_63346_p0.read().is_01() || !mul_ln728_750_fu_63346_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_750_fu_63346_p0.read()) * sc_bigint<8>(mul_ln728_750_fu_63346_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_751_fu_63371_p0() {
    mul_ln728_751_fu_63371_p0 = reg_17104.read();
}

void linear_forward_no_mu::thread_mul_ln728_751_fu_63371_p1() {
    mul_ln728_751_fu_63371_p1 = select_ln173_1503_reg_126643.read();
}

void linear_forward_no_mu::thread_mul_ln728_751_fu_63371_p2() {
    mul_ln728_751_fu_63371_p2 = (!mul_ln728_751_fu_63371_p0.read().is_01() || !mul_ln728_751_fu_63371_p1.read().is_01())? sc_lv<9>(): sc_bigint<8>(mul_ln728_751_fu_63371_p0.read()) * sc_bigint<2>(mul_ln728_751_fu_63371_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_752_fu_63653_p0() {
    mul_ln728_752_fu_63653_p0 = select_ln173_1505_reg_126678.read();
}

void linear_forward_no_mu::thread_mul_ln728_752_fu_63653_p1() {
    mul_ln728_752_fu_63653_p1 = reg_17076.read();
}

void linear_forward_no_mu::thread_mul_ln728_752_fu_63653_p2() {
    mul_ln728_752_fu_63653_p2 = (!mul_ln728_752_fu_63653_p0.read().is_01() || !mul_ln728_752_fu_63653_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_752_fu_63653_p0.read()) * sc_bigint<8>(mul_ln728_752_fu_63653_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_753_fu_63678_p0() {
    mul_ln728_753_fu_63678_p0 = select_ln173_1507_reg_126683.read();
}

void linear_forward_no_mu::thread_mul_ln728_753_fu_63678_p1() {
    mul_ln728_753_fu_63678_p1 = reg_17080.read();
}

void linear_forward_no_mu::thread_mul_ln728_753_fu_63678_p2() {
    mul_ln728_753_fu_63678_p2 = (!mul_ln728_753_fu_63678_p0.read().is_01() || !mul_ln728_753_fu_63678_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_753_fu_63678_p0.read()) * sc_bigint<8>(mul_ln728_753_fu_63678_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_754_fu_63703_p0() {
    mul_ln728_754_fu_63703_p0 = select_ln173_1509_reg_126688.read();
}

void linear_forward_no_mu::thread_mul_ln728_754_fu_63703_p1() {
    mul_ln728_754_fu_63703_p1 = reg_17084.read();
}

void linear_forward_no_mu::thread_mul_ln728_754_fu_63703_p2() {
    mul_ln728_754_fu_63703_p2 = (!mul_ln728_754_fu_63703_p0.read().is_01() || !mul_ln728_754_fu_63703_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_754_fu_63703_p0.read()) * sc_bigint<8>(mul_ln728_754_fu_63703_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_755_fu_63728_p0() {
    mul_ln728_755_fu_63728_p0 = reg_17088.read();
}

void linear_forward_no_mu::thread_mul_ln728_755_fu_63728_p1() {
    mul_ln728_755_fu_63728_p1 = select_ln173_1511_reg_126693.read();
}

void linear_forward_no_mu::thread_mul_ln728_755_fu_63728_p2() {
    mul_ln728_755_fu_63728_p2 = (!mul_ln728_755_fu_63728_p0.read().is_01() || !mul_ln728_755_fu_63728_p1.read().is_01())? sc_lv<9>(): sc_bigint<8>(mul_ln728_755_fu_63728_p0.read()) * sc_bigint<2>(mul_ln728_755_fu_63728_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_756_fu_63753_p0() {
    mul_ln728_756_fu_63753_p0 = select_ln173_1513_reg_126698.read();
}

void linear_forward_no_mu::thread_mul_ln728_756_fu_63753_p1() {
    mul_ln728_756_fu_63753_p1 = reg_17092.read();
}

void linear_forward_no_mu::thread_mul_ln728_756_fu_63753_p2() {
    mul_ln728_756_fu_63753_p2 = (!mul_ln728_756_fu_63753_p0.read().is_01() || !mul_ln728_756_fu_63753_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_756_fu_63753_p0.read()) * sc_bigint<8>(mul_ln728_756_fu_63753_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_757_fu_63801_p0() {
    mul_ln728_757_fu_63801_p0 = select_ln173_1515_fu_63785_p3.read();
}

void linear_forward_no_mu::thread_mul_ln728_757_fu_63801_p1() {
    mul_ln728_757_fu_63801_p1 = reg_17096.read();
}

void linear_forward_no_mu::thread_mul_ln728_757_fu_63801_p2() {
    mul_ln728_757_fu_63801_p2 = (!mul_ln728_757_fu_63801_p0.read().is_01() || !mul_ln728_757_fu_63801_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_757_fu_63801_p0.read()) * sc_bigint<8>(mul_ln728_757_fu_63801_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_758_fu_63837_p0() {
    mul_ln728_758_fu_63837_p0 = select_ln173_1517_fu_63821_p3.read();
}

void linear_forward_no_mu::thread_mul_ln728_758_fu_63837_p1() {
    mul_ln728_758_fu_63837_p1 = reg_17100.read();
}

void linear_forward_no_mu::thread_mul_ln728_758_fu_63837_p2() {
    mul_ln728_758_fu_63837_p2 = (!mul_ln728_758_fu_63837_p0.read().is_01() || !mul_ln728_758_fu_63837_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_758_fu_63837_p0.read()) * sc_bigint<8>(mul_ln728_758_fu_63837_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_759_fu_63850_p0() {
    mul_ln728_759_fu_63850_p0 = reg_17104.read();
}

void linear_forward_no_mu::thread_mul_ln728_759_fu_63850_p1() {
    mul_ln728_759_fu_63850_p1 = select_ln173_1519_reg_126703.read();
}

void linear_forward_no_mu::thread_mul_ln728_759_fu_63850_p2() {
    mul_ln728_759_fu_63850_p2 = (!mul_ln728_759_fu_63850_p0.read().is_01() || !mul_ln728_759_fu_63850_p1.read().is_01())? sc_lv<9>(): sc_bigint<8>(mul_ln728_759_fu_63850_p0.read()) * sc_bigint<2>(mul_ln728_759_fu_63850_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_75_fu_21858_p0() {
    mul_ln728_75_fu_21858_p0 = reg_17088.read();
}

void linear_forward_no_mu::thread_mul_ln728_75_fu_21858_p1() {
    mul_ln728_75_fu_21858_p1 = select_ln173_151_reg_120463.read();
}

void linear_forward_no_mu::thread_mul_ln728_75_fu_21858_p2() {
    mul_ln728_75_fu_21858_p2 = (!mul_ln728_75_fu_21858_p0.read().is_01() || !mul_ln728_75_fu_21858_p1.read().is_01())? sc_lv<9>(): sc_bigint<8>(mul_ln728_75_fu_21858_p0.read()) * sc_bigint<2>(mul_ln728_75_fu_21858_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_760_fu_64165_p0() {
    mul_ln728_760_fu_64165_p0 = select_ln173_1521_reg_126748.read();
}

void linear_forward_no_mu::thread_mul_ln728_760_fu_64165_p1() {
    mul_ln728_760_fu_64165_p1 = reg_17076.read();
}

void linear_forward_no_mu::thread_mul_ln728_760_fu_64165_p2() {
    mul_ln728_760_fu_64165_p2 = (!mul_ln728_760_fu_64165_p0.read().is_01() || !mul_ln728_760_fu_64165_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_760_fu_64165_p0.read()) * sc_bigint<8>(mul_ln728_760_fu_64165_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_761_fu_64190_p0() {
    mul_ln728_761_fu_64190_p0 = select_ln173_1523_reg_126753.read();
}

void linear_forward_no_mu::thread_mul_ln728_761_fu_64190_p1() {
    mul_ln728_761_fu_64190_p1 = reg_17080.read();
}

void linear_forward_no_mu::thread_mul_ln728_761_fu_64190_p2() {
    mul_ln728_761_fu_64190_p2 = (!mul_ln728_761_fu_64190_p0.read().is_01() || !mul_ln728_761_fu_64190_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_761_fu_64190_p0.read()) * sc_bigint<8>(mul_ln728_761_fu_64190_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_762_fu_64215_p0() {
    mul_ln728_762_fu_64215_p0 = select_ln173_1525_reg_126758.read();
}

void linear_forward_no_mu::thread_mul_ln728_762_fu_64215_p1() {
    mul_ln728_762_fu_64215_p1 = reg_17084.read();
}

void linear_forward_no_mu::thread_mul_ln728_762_fu_64215_p2() {
    mul_ln728_762_fu_64215_p2 = (!mul_ln728_762_fu_64215_p0.read().is_01() || !mul_ln728_762_fu_64215_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_762_fu_64215_p0.read()) * sc_bigint<8>(mul_ln728_762_fu_64215_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_763_fu_64240_p0() {
    mul_ln728_763_fu_64240_p0 = reg_17088.read();
}

void linear_forward_no_mu::thread_mul_ln728_763_fu_64240_p1() {
    mul_ln728_763_fu_64240_p1 = select_ln173_1527_reg_126763.read();
}

void linear_forward_no_mu::thread_mul_ln728_763_fu_64240_p2() {
    mul_ln728_763_fu_64240_p2 = (!mul_ln728_763_fu_64240_p0.read().is_01() || !mul_ln728_763_fu_64240_p1.read().is_01())? sc_lv<9>(): sc_bigint<8>(mul_ln728_763_fu_64240_p0.read()) * sc_bigint<2>(mul_ln728_763_fu_64240_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_764_fu_64265_p0() {
    mul_ln728_764_fu_64265_p0 = select_ln173_1529_reg_126768.read();
}

void linear_forward_no_mu::thread_mul_ln728_764_fu_64265_p1() {
    mul_ln728_764_fu_64265_p1 = reg_17092.read();
}

void linear_forward_no_mu::thread_mul_ln728_764_fu_64265_p2() {
    mul_ln728_764_fu_64265_p2 = (!mul_ln728_764_fu_64265_p0.read().is_01() || !mul_ln728_764_fu_64265_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_764_fu_64265_p0.read()) * sc_bigint<8>(mul_ln728_764_fu_64265_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_765_fu_64290_p0() {
    mul_ln728_765_fu_64290_p0 = select_ln173_1531_reg_126773.read();
}

void linear_forward_no_mu::thread_mul_ln728_765_fu_64290_p1() {
    mul_ln728_765_fu_64290_p1 = reg_17096.read();
}

void linear_forward_no_mu::thread_mul_ln728_765_fu_64290_p2() {
    mul_ln728_765_fu_64290_p2 = (!mul_ln728_765_fu_64290_p0.read().is_01() || !mul_ln728_765_fu_64290_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_765_fu_64290_p0.read()) * sc_bigint<8>(mul_ln728_765_fu_64290_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_766_fu_64338_p0() {
    mul_ln728_766_fu_64338_p0 = select_ln173_1533_fu_64322_p3.read();
}

void linear_forward_no_mu::thread_mul_ln728_766_fu_64338_p1() {
    mul_ln728_766_fu_64338_p1 = reg_17100.read();
}

void linear_forward_no_mu::thread_mul_ln728_766_fu_64338_p2() {
    mul_ln728_766_fu_64338_p2 = (!mul_ln728_766_fu_64338_p0.read().is_01() || !mul_ln728_766_fu_64338_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_766_fu_64338_p0.read()) * sc_bigint<8>(mul_ln728_766_fu_64338_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_767_fu_64351_p0() {
    mul_ln728_767_fu_64351_p0 = reg_17104.read();
}

void linear_forward_no_mu::thread_mul_ln728_767_fu_64351_p1() {
    mul_ln728_767_fu_64351_p1 = select_ln173_1535_reg_126778.read();
}

void linear_forward_no_mu::thread_mul_ln728_767_fu_64351_p2() {
    mul_ln728_767_fu_64351_p2 = (!mul_ln728_767_fu_64351_p0.read().is_01() || !mul_ln728_767_fu_64351_p1.read().is_01())? sc_lv<9>(): sc_bigint<8>(mul_ln728_767_fu_64351_p0.read()) * sc_bigint<2>(mul_ln728_767_fu_64351_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_768_fu_64662_p0() {
    mul_ln728_768_fu_64662_p0 = select_ln173_1537_reg_126813.read();
}

void linear_forward_no_mu::thread_mul_ln728_768_fu_64662_p1() {
    mul_ln728_768_fu_64662_p1 = reg_17076.read();
}

void linear_forward_no_mu::thread_mul_ln728_768_fu_64662_p2() {
    mul_ln728_768_fu_64662_p2 = (!mul_ln728_768_fu_64662_p0.read().is_01() || !mul_ln728_768_fu_64662_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_768_fu_64662_p0.read()) * sc_bigint<8>(mul_ln728_768_fu_64662_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_769_fu_64687_p0() {
    mul_ln728_769_fu_64687_p0 = select_ln173_1539_reg_126818.read();
}

void linear_forward_no_mu::thread_mul_ln728_769_fu_64687_p1() {
    mul_ln728_769_fu_64687_p1 = reg_17080.read();
}

void linear_forward_no_mu::thread_mul_ln728_769_fu_64687_p2() {
    mul_ln728_769_fu_64687_p2 = (!mul_ln728_769_fu_64687_p0.read().is_01() || !mul_ln728_769_fu_64687_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_769_fu_64687_p0.read()) * sc_bigint<8>(mul_ln728_769_fu_64687_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_76_fu_21883_p0() {
    mul_ln728_76_fu_21883_p0 = select_ln173_153_reg_120468.read();
}

void linear_forward_no_mu::thread_mul_ln728_76_fu_21883_p1() {
    mul_ln728_76_fu_21883_p1 = reg_17092.read();
}

void linear_forward_no_mu::thread_mul_ln728_76_fu_21883_p2() {
    mul_ln728_76_fu_21883_p2 = (!mul_ln728_76_fu_21883_p0.read().is_01() || !mul_ln728_76_fu_21883_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_76_fu_21883_p0.read()) * sc_bigint<8>(mul_ln728_76_fu_21883_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_770_fu_64712_p0() {
    mul_ln728_770_fu_64712_p0 = select_ln173_1541_reg_126823.read();
}

void linear_forward_no_mu::thread_mul_ln728_770_fu_64712_p1() {
    mul_ln728_770_fu_64712_p1 = reg_17084.read();
}

void linear_forward_no_mu::thread_mul_ln728_770_fu_64712_p2() {
    mul_ln728_770_fu_64712_p2 = (!mul_ln728_770_fu_64712_p0.read().is_01() || !mul_ln728_770_fu_64712_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_770_fu_64712_p0.read()) * sc_bigint<8>(mul_ln728_770_fu_64712_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_771_fu_64737_p0() {
    mul_ln728_771_fu_64737_p0 = reg_17088.read();
}

void linear_forward_no_mu::thread_mul_ln728_771_fu_64737_p1() {
    mul_ln728_771_fu_64737_p1 = select_ln173_1543_reg_126828.read();
}

void linear_forward_no_mu::thread_mul_ln728_771_fu_64737_p2() {
    mul_ln728_771_fu_64737_p2 = (!mul_ln728_771_fu_64737_p0.read().is_01() || !mul_ln728_771_fu_64737_p1.read().is_01())? sc_lv<9>(): sc_bigint<8>(mul_ln728_771_fu_64737_p0.read()) * sc_bigint<2>(mul_ln728_771_fu_64737_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_772_fu_64762_p0() {
    mul_ln728_772_fu_64762_p0 = select_ln173_1545_reg_126833.read();
}

void linear_forward_no_mu::thread_mul_ln728_772_fu_64762_p1() {
    mul_ln728_772_fu_64762_p1 = reg_17092.read();
}

void linear_forward_no_mu::thread_mul_ln728_772_fu_64762_p2() {
    mul_ln728_772_fu_64762_p2 = (!mul_ln728_772_fu_64762_p0.read().is_01() || !mul_ln728_772_fu_64762_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_772_fu_64762_p0.read()) * sc_bigint<8>(mul_ln728_772_fu_64762_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_773_fu_64787_p0() {
    mul_ln728_773_fu_64787_p0 = select_ln173_1547_reg_126838.read();
}

void linear_forward_no_mu::thread_mul_ln728_773_fu_64787_p1() {
    mul_ln728_773_fu_64787_p1 = reg_17096.read();
}

void linear_forward_no_mu::thread_mul_ln728_773_fu_64787_p2() {
    mul_ln728_773_fu_64787_p2 = (!mul_ln728_773_fu_64787_p0.read().is_01() || !mul_ln728_773_fu_64787_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_773_fu_64787_p0.read()) * sc_bigint<8>(mul_ln728_773_fu_64787_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_774_fu_64812_p0() {
    mul_ln728_774_fu_64812_p0 = select_ln173_1549_reg_126843.read();
}

void linear_forward_no_mu::thread_mul_ln728_774_fu_64812_p1() {
    mul_ln728_774_fu_64812_p1 = reg_17100.read();
}

void linear_forward_no_mu::thread_mul_ln728_774_fu_64812_p2() {
    mul_ln728_774_fu_64812_p2 = (!mul_ln728_774_fu_64812_p0.read().is_01() || !mul_ln728_774_fu_64812_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_774_fu_64812_p0.read()) * sc_bigint<8>(mul_ln728_774_fu_64812_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_775_fu_64837_p0() {
    mul_ln728_775_fu_64837_p0 = reg_17104.read();
}

void linear_forward_no_mu::thread_mul_ln728_775_fu_64837_p1() {
    mul_ln728_775_fu_64837_p1 = select_ln173_1551_reg_126848.read();
}

void linear_forward_no_mu::thread_mul_ln728_775_fu_64837_p2() {
    mul_ln728_775_fu_64837_p2 = (!mul_ln728_775_fu_64837_p0.read().is_01() || !mul_ln728_775_fu_64837_p1.read().is_01())? sc_lv<9>(): sc_bigint<8>(mul_ln728_775_fu_64837_p0.read()) * sc_bigint<2>(mul_ln728_775_fu_64837_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_776_fu_65120_p0() {
    mul_ln728_776_fu_65120_p0 = select_ln173_1553_reg_126883.read();
}

void linear_forward_no_mu::thread_mul_ln728_776_fu_65120_p1() {
    mul_ln728_776_fu_65120_p1 = reg_17076.read();
}

void linear_forward_no_mu::thread_mul_ln728_776_fu_65120_p2() {
    mul_ln728_776_fu_65120_p2 = (!mul_ln728_776_fu_65120_p0.read().is_01() || !mul_ln728_776_fu_65120_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_776_fu_65120_p0.read()) * sc_bigint<8>(mul_ln728_776_fu_65120_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_777_fu_65145_p0() {
    mul_ln728_777_fu_65145_p0 = select_ln173_1555_reg_126888.read();
}

void linear_forward_no_mu::thread_mul_ln728_777_fu_65145_p1() {
    mul_ln728_777_fu_65145_p1 = reg_17080.read();
}

void linear_forward_no_mu::thread_mul_ln728_777_fu_65145_p2() {
    mul_ln728_777_fu_65145_p2 = (!mul_ln728_777_fu_65145_p0.read().is_01() || !mul_ln728_777_fu_65145_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_777_fu_65145_p0.read()) * sc_bigint<8>(mul_ln728_777_fu_65145_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_778_fu_65170_p0() {
    mul_ln728_778_fu_65170_p0 = select_ln173_1557_reg_126893.read();
}

void linear_forward_no_mu::thread_mul_ln728_778_fu_65170_p1() {
    mul_ln728_778_fu_65170_p1 = reg_17084.read();
}

void linear_forward_no_mu::thread_mul_ln728_778_fu_65170_p2() {
    mul_ln728_778_fu_65170_p2 = (!mul_ln728_778_fu_65170_p0.read().is_01() || !mul_ln728_778_fu_65170_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_778_fu_65170_p0.read()) * sc_bigint<8>(mul_ln728_778_fu_65170_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_779_fu_65195_p0() {
    mul_ln728_779_fu_65195_p0 = reg_17088.read();
}

void linear_forward_no_mu::thread_mul_ln728_779_fu_65195_p1() {
    mul_ln728_779_fu_65195_p1 = select_ln173_1559_reg_126898.read();
}

void linear_forward_no_mu::thread_mul_ln728_779_fu_65195_p2() {
    mul_ln728_779_fu_65195_p2 = (!mul_ln728_779_fu_65195_p0.read().is_01() || !mul_ln728_779_fu_65195_p1.read().is_01())? sc_lv<9>(): sc_bigint<8>(mul_ln728_779_fu_65195_p0.read()) * sc_bigint<2>(mul_ln728_779_fu_65195_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_77_fu_21908_p0() {
    mul_ln728_77_fu_21908_p0 = select_ln173_155_reg_120473.read();
}

void linear_forward_no_mu::thread_mul_ln728_77_fu_21908_p1() {
    mul_ln728_77_fu_21908_p1 = reg_17096.read();
}

void linear_forward_no_mu::thread_mul_ln728_77_fu_21908_p2() {
    mul_ln728_77_fu_21908_p2 = (!mul_ln728_77_fu_21908_p0.read().is_01() || !mul_ln728_77_fu_21908_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_77_fu_21908_p0.read()) * sc_bigint<8>(mul_ln728_77_fu_21908_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_780_fu_65220_p0() {
    mul_ln728_780_fu_65220_p0 = select_ln173_1561_reg_126903.read();
}

void linear_forward_no_mu::thread_mul_ln728_780_fu_65220_p1() {
    mul_ln728_780_fu_65220_p1 = reg_17092.read();
}

void linear_forward_no_mu::thread_mul_ln728_780_fu_65220_p2() {
    mul_ln728_780_fu_65220_p2 = (!mul_ln728_780_fu_65220_p0.read().is_01() || !mul_ln728_780_fu_65220_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_780_fu_65220_p0.read()) * sc_bigint<8>(mul_ln728_780_fu_65220_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_781_fu_65268_p0() {
    mul_ln728_781_fu_65268_p0 = select_ln173_1563_fu_65252_p3.read();
}

void linear_forward_no_mu::thread_mul_ln728_781_fu_65268_p1() {
    mul_ln728_781_fu_65268_p1 = reg_17096.read();
}

void linear_forward_no_mu::thread_mul_ln728_781_fu_65268_p2() {
    mul_ln728_781_fu_65268_p2 = (!mul_ln728_781_fu_65268_p0.read().is_01() || !mul_ln728_781_fu_65268_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_781_fu_65268_p0.read()) * sc_bigint<8>(mul_ln728_781_fu_65268_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_782_fu_65304_p0() {
    mul_ln728_782_fu_65304_p0 = select_ln173_1565_fu_65288_p3.read();
}

void linear_forward_no_mu::thread_mul_ln728_782_fu_65304_p1() {
    mul_ln728_782_fu_65304_p1 = reg_17100.read();
}

void linear_forward_no_mu::thread_mul_ln728_782_fu_65304_p2() {
    mul_ln728_782_fu_65304_p2 = (!mul_ln728_782_fu_65304_p0.read().is_01() || !mul_ln728_782_fu_65304_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_782_fu_65304_p0.read()) * sc_bigint<8>(mul_ln728_782_fu_65304_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_783_fu_65317_p0() {
    mul_ln728_783_fu_65317_p0 = reg_17104.read();
}

void linear_forward_no_mu::thread_mul_ln728_783_fu_65317_p1() {
    mul_ln728_783_fu_65317_p1 = select_ln173_1567_reg_126908.read();
}

void linear_forward_no_mu::thread_mul_ln728_783_fu_65317_p2() {
    mul_ln728_783_fu_65317_p2 = (!mul_ln728_783_fu_65317_p0.read().is_01() || !mul_ln728_783_fu_65317_p1.read().is_01())? sc_lv<9>(): sc_bigint<8>(mul_ln728_783_fu_65317_p0.read()) * sc_bigint<2>(mul_ln728_783_fu_65317_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_784_fu_65669_p0() {
    mul_ln728_784_fu_65669_p0 = select_ln173_1569_reg_126953.read();
}

void linear_forward_no_mu::thread_mul_ln728_784_fu_65669_p1() {
    mul_ln728_784_fu_65669_p1 = reg_17076.read();
}

void linear_forward_no_mu::thread_mul_ln728_784_fu_65669_p2() {
    mul_ln728_784_fu_65669_p2 = (!mul_ln728_784_fu_65669_p0.read().is_01() || !mul_ln728_784_fu_65669_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_784_fu_65669_p0.read()) * sc_bigint<8>(mul_ln728_784_fu_65669_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_785_fu_65694_p0() {
    mul_ln728_785_fu_65694_p0 = select_ln173_1571_reg_126958.read();
}

void linear_forward_no_mu::thread_mul_ln728_785_fu_65694_p1() {
    mul_ln728_785_fu_65694_p1 = reg_17080.read();
}

void linear_forward_no_mu::thread_mul_ln728_785_fu_65694_p2() {
    mul_ln728_785_fu_65694_p2 = (!mul_ln728_785_fu_65694_p0.read().is_01() || !mul_ln728_785_fu_65694_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_785_fu_65694_p0.read()) * sc_bigint<8>(mul_ln728_785_fu_65694_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_786_fu_65719_p0() {
    mul_ln728_786_fu_65719_p0 = select_ln173_1573_reg_126963.read();
}

void linear_forward_no_mu::thread_mul_ln728_786_fu_65719_p1() {
    mul_ln728_786_fu_65719_p1 = reg_17084.read();
}

void linear_forward_no_mu::thread_mul_ln728_786_fu_65719_p2() {
    mul_ln728_786_fu_65719_p2 = (!mul_ln728_786_fu_65719_p0.read().is_01() || !mul_ln728_786_fu_65719_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_786_fu_65719_p0.read()) * sc_bigint<8>(mul_ln728_786_fu_65719_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_787_fu_65744_p0() {
    mul_ln728_787_fu_65744_p0 = reg_17088.read();
}

void linear_forward_no_mu::thread_mul_ln728_787_fu_65744_p1() {
    mul_ln728_787_fu_65744_p1 = select_ln173_1575_reg_126968.read();
}

void linear_forward_no_mu::thread_mul_ln728_787_fu_65744_p2() {
    mul_ln728_787_fu_65744_p2 = (!mul_ln728_787_fu_65744_p0.read().is_01() || !mul_ln728_787_fu_65744_p1.read().is_01())? sc_lv<9>(): sc_bigint<8>(mul_ln728_787_fu_65744_p0.read()) * sc_bigint<2>(mul_ln728_787_fu_65744_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_788_fu_65769_p0() {
    mul_ln728_788_fu_65769_p0 = select_ln173_1577_reg_126973.read();
}

void linear_forward_no_mu::thread_mul_ln728_788_fu_65769_p1() {
    mul_ln728_788_fu_65769_p1 = reg_17092.read();
}

void linear_forward_no_mu::thread_mul_ln728_788_fu_65769_p2() {
    mul_ln728_788_fu_65769_p2 = (!mul_ln728_788_fu_65769_p0.read().is_01() || !mul_ln728_788_fu_65769_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_788_fu_65769_p0.read()) * sc_bigint<8>(mul_ln728_788_fu_65769_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_789_fu_65794_p0() {
    mul_ln728_789_fu_65794_p0 = select_ln173_1579_reg_126978.read();
}

void linear_forward_no_mu::thread_mul_ln728_789_fu_65794_p1() {
    mul_ln728_789_fu_65794_p1 = reg_17096.read();
}

void linear_forward_no_mu::thread_mul_ln728_789_fu_65794_p2() {
    mul_ln728_789_fu_65794_p2 = (!mul_ln728_789_fu_65794_p0.read().is_01() || !mul_ln728_789_fu_65794_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_789_fu_65794_p0.read()) * sc_bigint<8>(mul_ln728_789_fu_65794_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_78_fu_21933_p0() {
    mul_ln728_78_fu_21933_p0 = select_ln173_157_reg_120478.read();
}

void linear_forward_no_mu::thread_mul_ln728_78_fu_21933_p1() {
    mul_ln728_78_fu_21933_p1 = reg_17100.read();
}

void linear_forward_no_mu::thread_mul_ln728_78_fu_21933_p2() {
    mul_ln728_78_fu_21933_p2 = (!mul_ln728_78_fu_21933_p0.read().is_01() || !mul_ln728_78_fu_21933_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_78_fu_21933_p0.read()) * sc_bigint<8>(mul_ln728_78_fu_21933_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_790_fu_65842_p0() {
    mul_ln728_790_fu_65842_p0 = select_ln173_1581_fu_65826_p3.read();
}

void linear_forward_no_mu::thread_mul_ln728_790_fu_65842_p1() {
    mul_ln728_790_fu_65842_p1 = reg_17100.read();
}

void linear_forward_no_mu::thread_mul_ln728_790_fu_65842_p2() {
    mul_ln728_790_fu_65842_p2 = (!mul_ln728_790_fu_65842_p0.read().is_01() || !mul_ln728_790_fu_65842_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_790_fu_65842_p0.read()) * sc_bigint<8>(mul_ln728_790_fu_65842_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_791_fu_65855_p0() {
    mul_ln728_791_fu_65855_p0 = reg_17104.read();
}

void linear_forward_no_mu::thread_mul_ln728_791_fu_65855_p1() {
    mul_ln728_791_fu_65855_p1 = select_ln173_1583_reg_126983.read();
}

void linear_forward_no_mu::thread_mul_ln728_791_fu_65855_p2() {
    mul_ln728_791_fu_65855_p2 = (!mul_ln728_791_fu_65855_p0.read().is_01() || !mul_ln728_791_fu_65855_p1.read().is_01())? sc_lv<9>(): sc_bigint<8>(mul_ln728_791_fu_65855_p0.read()) * sc_bigint<2>(mul_ln728_791_fu_65855_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_792_fu_66179_p0() {
    mul_ln728_792_fu_66179_p0 = select_ln173_1585_reg_127023.read();
}

void linear_forward_no_mu::thread_mul_ln728_792_fu_66179_p1() {
    mul_ln728_792_fu_66179_p1 = reg_17076.read();
}

void linear_forward_no_mu::thread_mul_ln728_792_fu_66179_p2() {
    mul_ln728_792_fu_66179_p2 = (!mul_ln728_792_fu_66179_p0.read().is_01() || !mul_ln728_792_fu_66179_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_792_fu_66179_p0.read()) * sc_bigint<8>(mul_ln728_792_fu_66179_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_793_fu_66204_p0() {
    mul_ln728_793_fu_66204_p0 = select_ln173_1587_reg_127028.read();
}

void linear_forward_no_mu::thread_mul_ln728_793_fu_66204_p1() {
    mul_ln728_793_fu_66204_p1 = reg_17080.read();
}

void linear_forward_no_mu::thread_mul_ln728_793_fu_66204_p2() {
    mul_ln728_793_fu_66204_p2 = (!mul_ln728_793_fu_66204_p0.read().is_01() || !mul_ln728_793_fu_66204_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_793_fu_66204_p0.read()) * sc_bigint<8>(mul_ln728_793_fu_66204_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_794_fu_66229_p0() {
    mul_ln728_794_fu_66229_p0 = select_ln173_1589_reg_127033.read();
}

void linear_forward_no_mu::thread_mul_ln728_794_fu_66229_p1() {
    mul_ln728_794_fu_66229_p1 = reg_17084.read();
}

void linear_forward_no_mu::thread_mul_ln728_794_fu_66229_p2() {
    mul_ln728_794_fu_66229_p2 = (!mul_ln728_794_fu_66229_p0.read().is_01() || !mul_ln728_794_fu_66229_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_794_fu_66229_p0.read()) * sc_bigint<8>(mul_ln728_794_fu_66229_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_795_fu_66254_p0() {
    mul_ln728_795_fu_66254_p0 = reg_17088.read();
}

void linear_forward_no_mu::thread_mul_ln728_795_fu_66254_p1() {
    mul_ln728_795_fu_66254_p1 = select_ln173_1591_reg_127038.read();
}

void linear_forward_no_mu::thread_mul_ln728_795_fu_66254_p2() {
    mul_ln728_795_fu_66254_p2 = (!mul_ln728_795_fu_66254_p0.read().is_01() || !mul_ln728_795_fu_66254_p1.read().is_01())? sc_lv<9>(): sc_bigint<8>(mul_ln728_795_fu_66254_p0.read()) * sc_bigint<2>(mul_ln728_795_fu_66254_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_796_fu_66279_p0() {
    mul_ln728_796_fu_66279_p0 = select_ln173_1593_reg_127043.read();
}

void linear_forward_no_mu::thread_mul_ln728_796_fu_66279_p1() {
    mul_ln728_796_fu_66279_p1 = reg_17092.read();
}

void linear_forward_no_mu::thread_mul_ln728_796_fu_66279_p2() {
    mul_ln728_796_fu_66279_p2 = (!mul_ln728_796_fu_66279_p0.read().is_01() || !mul_ln728_796_fu_66279_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_796_fu_66279_p0.read()) * sc_bigint<8>(mul_ln728_796_fu_66279_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_797_fu_66304_p0() {
    mul_ln728_797_fu_66304_p0 = select_ln173_1595_reg_127048.read();
}

void linear_forward_no_mu::thread_mul_ln728_797_fu_66304_p1() {
    mul_ln728_797_fu_66304_p1 = reg_17096.read();
}

void linear_forward_no_mu::thread_mul_ln728_797_fu_66304_p2() {
    mul_ln728_797_fu_66304_p2 = (!mul_ln728_797_fu_66304_p0.read().is_01() || !mul_ln728_797_fu_66304_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_797_fu_66304_p0.read()) * sc_bigint<8>(mul_ln728_797_fu_66304_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_798_fu_66329_p0() {
    mul_ln728_798_fu_66329_p0 = select_ln173_1597_reg_127053.read();
}

void linear_forward_no_mu::thread_mul_ln728_798_fu_66329_p1() {
    mul_ln728_798_fu_66329_p1 = reg_17100.read();
}

void linear_forward_no_mu::thread_mul_ln728_798_fu_66329_p2() {
    mul_ln728_798_fu_66329_p2 = (!mul_ln728_798_fu_66329_p0.read().is_01() || !mul_ln728_798_fu_66329_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_798_fu_66329_p0.read()) * sc_bigint<8>(mul_ln728_798_fu_66329_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_799_fu_66354_p0() {
    mul_ln728_799_fu_66354_p0 = reg_17104.read();
}

void linear_forward_no_mu::thread_mul_ln728_799_fu_66354_p1() {
    mul_ln728_799_fu_66354_p1 = select_ln173_1599_reg_127058.read();
}

void linear_forward_no_mu::thread_mul_ln728_799_fu_66354_p2() {
    mul_ln728_799_fu_66354_p2 = (!mul_ln728_799_fu_66354_p0.read().is_01() || !mul_ln728_799_fu_66354_p1.read().is_01())? sc_lv<9>(): sc_bigint<8>(mul_ln728_799_fu_66354_p0.read()) * sc_bigint<2>(mul_ln728_799_fu_66354_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_79_fu_21958_p0() {
    mul_ln728_79_fu_21958_p0 = reg_17104.read();
}

void linear_forward_no_mu::thread_mul_ln728_79_fu_21958_p1() {
    mul_ln728_79_fu_21958_p1 = select_ln173_159_reg_120483.read();
}

void linear_forward_no_mu::thread_mul_ln728_79_fu_21958_p2() {
    mul_ln728_79_fu_21958_p2 = (!mul_ln728_79_fu_21958_p0.read().is_01() || !mul_ln728_79_fu_21958_p1.read().is_01())? sc_lv<9>(): sc_bigint<8>(mul_ln728_79_fu_21958_p0.read()) * sc_bigint<2>(mul_ln728_79_fu_21958_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_7_fu_17626_p0() {
    mul_ln728_7_fu_17626_p0 = reg_17104.read();
}

void linear_forward_no_mu::thread_mul_ln728_7_fu_17626_p1() {
    mul_ln728_7_fu_17626_p1 = select_ln173_15_reg_119795.read();
}

void linear_forward_no_mu::thread_mul_ln728_7_fu_17626_p2() {
    mul_ln728_7_fu_17626_p2 = (!mul_ln728_7_fu_17626_p0.read().is_01() || !mul_ln728_7_fu_17626_p1.read().is_01())? sc_lv<9>(): sc_bigint<8>(mul_ln728_7_fu_17626_p0.read()) * sc_bigint<2>(mul_ln728_7_fu_17626_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_800_fu_66636_p0() {
    mul_ln728_800_fu_66636_p0 = select_ln173_1601_reg_127098.read();
}

void linear_forward_no_mu::thread_mul_ln728_800_fu_66636_p1() {
    mul_ln728_800_fu_66636_p1 = reg_17076.read();
}

void linear_forward_no_mu::thread_mul_ln728_800_fu_66636_p2() {
    mul_ln728_800_fu_66636_p2 = (!mul_ln728_800_fu_66636_p0.read().is_01() || !mul_ln728_800_fu_66636_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_800_fu_66636_p0.read()) * sc_bigint<8>(mul_ln728_800_fu_66636_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_801_fu_66661_p0() {
    mul_ln728_801_fu_66661_p0 = select_ln173_1603_reg_127103.read();
}

void linear_forward_no_mu::thread_mul_ln728_801_fu_66661_p1() {
    mul_ln728_801_fu_66661_p1 = reg_17080.read();
}

void linear_forward_no_mu::thread_mul_ln728_801_fu_66661_p2() {
    mul_ln728_801_fu_66661_p2 = (!mul_ln728_801_fu_66661_p0.read().is_01() || !mul_ln728_801_fu_66661_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_801_fu_66661_p0.read()) * sc_bigint<8>(mul_ln728_801_fu_66661_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_802_fu_66686_p0() {
    mul_ln728_802_fu_66686_p0 = select_ln173_1605_reg_127108.read();
}

void linear_forward_no_mu::thread_mul_ln728_802_fu_66686_p1() {
    mul_ln728_802_fu_66686_p1 = reg_17084.read();
}

void linear_forward_no_mu::thread_mul_ln728_802_fu_66686_p2() {
    mul_ln728_802_fu_66686_p2 = (!mul_ln728_802_fu_66686_p0.read().is_01() || !mul_ln728_802_fu_66686_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_802_fu_66686_p0.read()) * sc_bigint<8>(mul_ln728_802_fu_66686_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_803_fu_66711_p0() {
    mul_ln728_803_fu_66711_p0 = reg_17088.read();
}

void linear_forward_no_mu::thread_mul_ln728_803_fu_66711_p1() {
    mul_ln728_803_fu_66711_p1 = select_ln173_1607_reg_127113.read();
}

void linear_forward_no_mu::thread_mul_ln728_803_fu_66711_p2() {
    mul_ln728_803_fu_66711_p2 = (!mul_ln728_803_fu_66711_p0.read().is_01() || !mul_ln728_803_fu_66711_p1.read().is_01())? sc_lv<9>(): sc_bigint<8>(mul_ln728_803_fu_66711_p0.read()) * sc_bigint<2>(mul_ln728_803_fu_66711_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_804_fu_66736_p0() {
    mul_ln728_804_fu_66736_p0 = select_ln173_1609_reg_127118.read();
}

void linear_forward_no_mu::thread_mul_ln728_804_fu_66736_p1() {
    mul_ln728_804_fu_66736_p1 = reg_17092.read();
}

void linear_forward_no_mu::thread_mul_ln728_804_fu_66736_p2() {
    mul_ln728_804_fu_66736_p2 = (!mul_ln728_804_fu_66736_p0.read().is_01() || !mul_ln728_804_fu_66736_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_804_fu_66736_p0.read()) * sc_bigint<8>(mul_ln728_804_fu_66736_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_805_fu_66784_p0() {
    mul_ln728_805_fu_66784_p0 = select_ln173_1611_fu_66768_p3.read();
}

void linear_forward_no_mu::thread_mul_ln728_805_fu_66784_p1() {
    mul_ln728_805_fu_66784_p1 = reg_17096.read();
}

void linear_forward_no_mu::thread_mul_ln728_805_fu_66784_p2() {
    mul_ln728_805_fu_66784_p2 = (!mul_ln728_805_fu_66784_p0.read().is_01() || !mul_ln728_805_fu_66784_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_805_fu_66784_p0.read()) * sc_bigint<8>(mul_ln728_805_fu_66784_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_806_fu_66820_p0() {
    mul_ln728_806_fu_66820_p0 = select_ln173_1613_fu_66804_p3.read();
}

void linear_forward_no_mu::thread_mul_ln728_806_fu_66820_p1() {
    mul_ln728_806_fu_66820_p1 = reg_17100.read();
}

void linear_forward_no_mu::thread_mul_ln728_806_fu_66820_p2() {
    mul_ln728_806_fu_66820_p2 = (!mul_ln728_806_fu_66820_p0.read().is_01() || !mul_ln728_806_fu_66820_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_806_fu_66820_p0.read()) * sc_bigint<8>(mul_ln728_806_fu_66820_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_807_fu_66833_p0() {
    mul_ln728_807_fu_66833_p0 = reg_17104.read();
}

void linear_forward_no_mu::thread_mul_ln728_807_fu_66833_p1() {
    mul_ln728_807_fu_66833_p1 = select_ln173_1615_reg_127123.read();
}

void linear_forward_no_mu::thread_mul_ln728_807_fu_66833_p2() {
    mul_ln728_807_fu_66833_p2 = (!mul_ln728_807_fu_66833_p0.read().is_01() || !mul_ln728_807_fu_66833_p1.read().is_01())? sc_lv<9>(): sc_bigint<8>(mul_ln728_807_fu_66833_p0.read()) * sc_bigint<2>(mul_ln728_807_fu_66833_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_808_fu_67148_p0() {
    mul_ln728_808_fu_67148_p0 = select_ln173_1617_reg_127168.read();
}

void linear_forward_no_mu::thread_mul_ln728_808_fu_67148_p1() {
    mul_ln728_808_fu_67148_p1 = reg_17076.read();
}

void linear_forward_no_mu::thread_mul_ln728_808_fu_67148_p2() {
    mul_ln728_808_fu_67148_p2 = (!mul_ln728_808_fu_67148_p0.read().is_01() || !mul_ln728_808_fu_67148_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_808_fu_67148_p0.read()) * sc_bigint<8>(mul_ln728_808_fu_67148_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_809_fu_67173_p0() {
    mul_ln728_809_fu_67173_p0 = select_ln173_1619_reg_127173.read();
}

void linear_forward_no_mu::thread_mul_ln728_809_fu_67173_p1() {
    mul_ln728_809_fu_67173_p1 = reg_17080.read();
}

void linear_forward_no_mu::thread_mul_ln728_809_fu_67173_p2() {
    mul_ln728_809_fu_67173_p2 = (!mul_ln728_809_fu_67173_p0.read().is_01() || !mul_ln728_809_fu_67173_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_809_fu_67173_p0.read()) * sc_bigint<8>(mul_ln728_809_fu_67173_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_80_fu_22240_p0() {
    mul_ln728_80_fu_22240_p0 = select_ln173_161_reg_120528.read();
}

void linear_forward_no_mu::thread_mul_ln728_80_fu_22240_p1() {
    mul_ln728_80_fu_22240_p1 = reg_17076.read();
}

void linear_forward_no_mu::thread_mul_ln728_80_fu_22240_p2() {
    mul_ln728_80_fu_22240_p2 = (!mul_ln728_80_fu_22240_p0.read().is_01() || !mul_ln728_80_fu_22240_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_80_fu_22240_p0.read()) * sc_bigint<8>(mul_ln728_80_fu_22240_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_810_fu_67198_p0() {
    mul_ln728_810_fu_67198_p0 = select_ln173_1621_reg_127178.read();
}

void linear_forward_no_mu::thread_mul_ln728_810_fu_67198_p1() {
    mul_ln728_810_fu_67198_p1 = reg_17084.read();
}

void linear_forward_no_mu::thread_mul_ln728_810_fu_67198_p2() {
    mul_ln728_810_fu_67198_p2 = (!mul_ln728_810_fu_67198_p0.read().is_01() || !mul_ln728_810_fu_67198_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_810_fu_67198_p0.read()) * sc_bigint<8>(mul_ln728_810_fu_67198_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_811_fu_67223_p0() {
    mul_ln728_811_fu_67223_p0 = reg_17088.read();
}

void linear_forward_no_mu::thread_mul_ln728_811_fu_67223_p1() {
    mul_ln728_811_fu_67223_p1 = select_ln173_1623_reg_127183.read();
}

void linear_forward_no_mu::thread_mul_ln728_811_fu_67223_p2() {
    mul_ln728_811_fu_67223_p2 = (!mul_ln728_811_fu_67223_p0.read().is_01() || !mul_ln728_811_fu_67223_p1.read().is_01())? sc_lv<9>(): sc_bigint<8>(mul_ln728_811_fu_67223_p0.read()) * sc_bigint<2>(mul_ln728_811_fu_67223_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_812_fu_67248_p0() {
    mul_ln728_812_fu_67248_p0 = select_ln173_1625_reg_127188.read();
}

void linear_forward_no_mu::thread_mul_ln728_812_fu_67248_p1() {
    mul_ln728_812_fu_67248_p1 = reg_17092.read();
}

void linear_forward_no_mu::thread_mul_ln728_812_fu_67248_p2() {
    mul_ln728_812_fu_67248_p2 = (!mul_ln728_812_fu_67248_p0.read().is_01() || !mul_ln728_812_fu_67248_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_812_fu_67248_p0.read()) * sc_bigint<8>(mul_ln728_812_fu_67248_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_813_fu_67273_p0() {
    mul_ln728_813_fu_67273_p0 = select_ln173_1627_reg_127193.read();
}

void linear_forward_no_mu::thread_mul_ln728_813_fu_67273_p1() {
    mul_ln728_813_fu_67273_p1 = reg_17096.read();
}

void linear_forward_no_mu::thread_mul_ln728_813_fu_67273_p2() {
    mul_ln728_813_fu_67273_p2 = (!mul_ln728_813_fu_67273_p0.read().is_01() || !mul_ln728_813_fu_67273_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_813_fu_67273_p0.read()) * sc_bigint<8>(mul_ln728_813_fu_67273_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_814_fu_67321_p0() {
    mul_ln728_814_fu_67321_p0 = select_ln173_1629_fu_67305_p3.read();
}

void linear_forward_no_mu::thread_mul_ln728_814_fu_67321_p1() {
    mul_ln728_814_fu_67321_p1 = reg_17100.read();
}

void linear_forward_no_mu::thread_mul_ln728_814_fu_67321_p2() {
    mul_ln728_814_fu_67321_p2 = (!mul_ln728_814_fu_67321_p0.read().is_01() || !mul_ln728_814_fu_67321_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_814_fu_67321_p0.read()) * sc_bigint<8>(mul_ln728_814_fu_67321_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_815_fu_67334_p0() {
    mul_ln728_815_fu_67334_p0 = reg_17104.read();
}

void linear_forward_no_mu::thread_mul_ln728_815_fu_67334_p1() {
    mul_ln728_815_fu_67334_p1 = select_ln173_1631_reg_127198.read();
}

void linear_forward_no_mu::thread_mul_ln728_815_fu_67334_p2() {
    mul_ln728_815_fu_67334_p2 = (!mul_ln728_815_fu_67334_p0.read().is_01() || !mul_ln728_815_fu_67334_p1.read().is_01())? sc_lv<9>(): sc_bigint<8>(mul_ln728_815_fu_67334_p0.read()) * sc_bigint<2>(mul_ln728_815_fu_67334_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_816_fu_67645_p0() {
    mul_ln728_816_fu_67645_p0 = select_ln173_1633_reg_127233.read();
}

void linear_forward_no_mu::thread_mul_ln728_816_fu_67645_p1() {
    mul_ln728_816_fu_67645_p1 = reg_17076.read();
}

void linear_forward_no_mu::thread_mul_ln728_816_fu_67645_p2() {
    mul_ln728_816_fu_67645_p2 = (!mul_ln728_816_fu_67645_p0.read().is_01() || !mul_ln728_816_fu_67645_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_816_fu_67645_p0.read()) * sc_bigint<8>(mul_ln728_816_fu_67645_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_817_fu_67670_p0() {
    mul_ln728_817_fu_67670_p0 = select_ln173_1635_reg_127238.read();
}

void linear_forward_no_mu::thread_mul_ln728_817_fu_67670_p1() {
    mul_ln728_817_fu_67670_p1 = reg_17080.read();
}

void linear_forward_no_mu::thread_mul_ln728_817_fu_67670_p2() {
    mul_ln728_817_fu_67670_p2 = (!mul_ln728_817_fu_67670_p0.read().is_01() || !mul_ln728_817_fu_67670_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_817_fu_67670_p0.read()) * sc_bigint<8>(mul_ln728_817_fu_67670_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_818_fu_67695_p0() {
    mul_ln728_818_fu_67695_p0 = select_ln173_1637_reg_127243.read();
}

void linear_forward_no_mu::thread_mul_ln728_818_fu_67695_p1() {
    mul_ln728_818_fu_67695_p1 = reg_17084.read();
}

void linear_forward_no_mu::thread_mul_ln728_818_fu_67695_p2() {
    mul_ln728_818_fu_67695_p2 = (!mul_ln728_818_fu_67695_p0.read().is_01() || !mul_ln728_818_fu_67695_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_818_fu_67695_p0.read()) * sc_bigint<8>(mul_ln728_818_fu_67695_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_819_fu_67720_p0() {
    mul_ln728_819_fu_67720_p0 = reg_17088.read();
}

void linear_forward_no_mu::thread_mul_ln728_819_fu_67720_p1() {
    mul_ln728_819_fu_67720_p1 = select_ln173_1639_reg_127248.read();
}

void linear_forward_no_mu::thread_mul_ln728_819_fu_67720_p2() {
    mul_ln728_819_fu_67720_p2 = (!mul_ln728_819_fu_67720_p0.read().is_01() || !mul_ln728_819_fu_67720_p1.read().is_01())? sc_lv<9>(): sc_bigint<8>(mul_ln728_819_fu_67720_p0.read()) * sc_bigint<2>(mul_ln728_819_fu_67720_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_81_fu_22265_p0() {
    mul_ln728_81_fu_22265_p0 = select_ln173_163_reg_120533.read();
}

void linear_forward_no_mu::thread_mul_ln728_81_fu_22265_p1() {
    mul_ln728_81_fu_22265_p1 = reg_17080.read();
}

void linear_forward_no_mu::thread_mul_ln728_81_fu_22265_p2() {
    mul_ln728_81_fu_22265_p2 = (!mul_ln728_81_fu_22265_p0.read().is_01() || !mul_ln728_81_fu_22265_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_81_fu_22265_p0.read()) * sc_bigint<8>(mul_ln728_81_fu_22265_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_820_fu_67745_p0() {
    mul_ln728_820_fu_67745_p0 = select_ln173_1641_reg_127253.read();
}

void linear_forward_no_mu::thread_mul_ln728_820_fu_67745_p1() {
    mul_ln728_820_fu_67745_p1 = reg_17092.read();
}

void linear_forward_no_mu::thread_mul_ln728_820_fu_67745_p2() {
    mul_ln728_820_fu_67745_p2 = (!mul_ln728_820_fu_67745_p0.read().is_01() || !mul_ln728_820_fu_67745_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_820_fu_67745_p0.read()) * sc_bigint<8>(mul_ln728_820_fu_67745_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_821_fu_67770_p0() {
    mul_ln728_821_fu_67770_p0 = select_ln173_1643_reg_127258.read();
}

void linear_forward_no_mu::thread_mul_ln728_821_fu_67770_p1() {
    mul_ln728_821_fu_67770_p1 = reg_17096.read();
}

void linear_forward_no_mu::thread_mul_ln728_821_fu_67770_p2() {
    mul_ln728_821_fu_67770_p2 = (!mul_ln728_821_fu_67770_p0.read().is_01() || !mul_ln728_821_fu_67770_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_821_fu_67770_p0.read()) * sc_bigint<8>(mul_ln728_821_fu_67770_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_822_fu_67795_p0() {
    mul_ln728_822_fu_67795_p0 = select_ln173_1645_reg_127263.read();
}

void linear_forward_no_mu::thread_mul_ln728_822_fu_67795_p1() {
    mul_ln728_822_fu_67795_p1 = reg_17100.read();
}

void linear_forward_no_mu::thread_mul_ln728_822_fu_67795_p2() {
    mul_ln728_822_fu_67795_p2 = (!mul_ln728_822_fu_67795_p0.read().is_01() || !mul_ln728_822_fu_67795_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_822_fu_67795_p0.read()) * sc_bigint<8>(mul_ln728_822_fu_67795_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_823_fu_67820_p0() {
    mul_ln728_823_fu_67820_p0 = reg_17104.read();
}

void linear_forward_no_mu::thread_mul_ln728_823_fu_67820_p1() {
    mul_ln728_823_fu_67820_p1 = select_ln173_1647_reg_127268.read();
}

void linear_forward_no_mu::thread_mul_ln728_823_fu_67820_p2() {
    mul_ln728_823_fu_67820_p2 = (!mul_ln728_823_fu_67820_p0.read().is_01() || !mul_ln728_823_fu_67820_p1.read().is_01())? sc_lv<9>(): sc_bigint<8>(mul_ln728_823_fu_67820_p0.read()) * sc_bigint<2>(mul_ln728_823_fu_67820_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_824_fu_68103_p0() {
    mul_ln728_824_fu_68103_p0 = select_ln173_1649_reg_127303.read();
}

void linear_forward_no_mu::thread_mul_ln728_824_fu_68103_p1() {
    mul_ln728_824_fu_68103_p1 = reg_17076.read();
}

void linear_forward_no_mu::thread_mul_ln728_824_fu_68103_p2() {
    mul_ln728_824_fu_68103_p2 = (!mul_ln728_824_fu_68103_p0.read().is_01() || !mul_ln728_824_fu_68103_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_824_fu_68103_p0.read()) * sc_bigint<8>(mul_ln728_824_fu_68103_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_825_fu_68128_p0() {
    mul_ln728_825_fu_68128_p0 = select_ln173_1651_reg_127308.read();
}

void linear_forward_no_mu::thread_mul_ln728_825_fu_68128_p1() {
    mul_ln728_825_fu_68128_p1 = reg_17080.read();
}

void linear_forward_no_mu::thread_mul_ln728_825_fu_68128_p2() {
    mul_ln728_825_fu_68128_p2 = (!mul_ln728_825_fu_68128_p0.read().is_01() || !mul_ln728_825_fu_68128_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_825_fu_68128_p0.read()) * sc_bigint<8>(mul_ln728_825_fu_68128_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_826_fu_68153_p0() {
    mul_ln728_826_fu_68153_p0 = select_ln173_1653_reg_127313.read();
}

void linear_forward_no_mu::thread_mul_ln728_826_fu_68153_p1() {
    mul_ln728_826_fu_68153_p1 = reg_17084.read();
}

void linear_forward_no_mu::thread_mul_ln728_826_fu_68153_p2() {
    mul_ln728_826_fu_68153_p2 = (!mul_ln728_826_fu_68153_p0.read().is_01() || !mul_ln728_826_fu_68153_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_826_fu_68153_p0.read()) * sc_bigint<8>(mul_ln728_826_fu_68153_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_827_fu_68178_p0() {
    mul_ln728_827_fu_68178_p0 = reg_17088.read();
}

void linear_forward_no_mu::thread_mul_ln728_827_fu_68178_p1() {
    mul_ln728_827_fu_68178_p1 = select_ln173_1655_reg_127318.read();
}

void linear_forward_no_mu::thread_mul_ln728_827_fu_68178_p2() {
    mul_ln728_827_fu_68178_p2 = (!mul_ln728_827_fu_68178_p0.read().is_01() || !mul_ln728_827_fu_68178_p1.read().is_01())? sc_lv<9>(): sc_bigint<8>(mul_ln728_827_fu_68178_p0.read()) * sc_bigint<2>(mul_ln728_827_fu_68178_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_828_fu_68203_p0() {
    mul_ln728_828_fu_68203_p0 = select_ln173_1657_reg_127323.read();
}

void linear_forward_no_mu::thread_mul_ln728_828_fu_68203_p1() {
    mul_ln728_828_fu_68203_p1 = reg_17092.read();
}

void linear_forward_no_mu::thread_mul_ln728_828_fu_68203_p2() {
    mul_ln728_828_fu_68203_p2 = (!mul_ln728_828_fu_68203_p0.read().is_01() || !mul_ln728_828_fu_68203_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_828_fu_68203_p0.read()) * sc_bigint<8>(mul_ln728_828_fu_68203_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_829_fu_68251_p0() {
    mul_ln728_829_fu_68251_p0 = select_ln173_1659_fu_68235_p3.read();
}

void linear_forward_no_mu::thread_mul_ln728_829_fu_68251_p1() {
    mul_ln728_829_fu_68251_p1 = reg_17096.read();
}

void linear_forward_no_mu::thread_mul_ln728_829_fu_68251_p2() {
    mul_ln728_829_fu_68251_p2 = (!mul_ln728_829_fu_68251_p0.read().is_01() || !mul_ln728_829_fu_68251_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_829_fu_68251_p0.read()) * sc_bigint<8>(mul_ln728_829_fu_68251_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_82_fu_22290_p0() {
    mul_ln728_82_fu_22290_p0 = select_ln173_165_reg_120538.read();
}

void linear_forward_no_mu::thread_mul_ln728_82_fu_22290_p1() {
    mul_ln728_82_fu_22290_p1 = reg_17084.read();
}

void linear_forward_no_mu::thread_mul_ln728_82_fu_22290_p2() {
    mul_ln728_82_fu_22290_p2 = (!mul_ln728_82_fu_22290_p0.read().is_01() || !mul_ln728_82_fu_22290_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_82_fu_22290_p0.read()) * sc_bigint<8>(mul_ln728_82_fu_22290_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_830_fu_68287_p0() {
    mul_ln728_830_fu_68287_p0 = select_ln173_1661_fu_68271_p3.read();
}

void linear_forward_no_mu::thread_mul_ln728_830_fu_68287_p1() {
    mul_ln728_830_fu_68287_p1 = reg_17100.read();
}

void linear_forward_no_mu::thread_mul_ln728_830_fu_68287_p2() {
    mul_ln728_830_fu_68287_p2 = (!mul_ln728_830_fu_68287_p0.read().is_01() || !mul_ln728_830_fu_68287_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_830_fu_68287_p0.read()) * sc_bigint<8>(mul_ln728_830_fu_68287_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_831_fu_68300_p0() {
    mul_ln728_831_fu_68300_p0 = reg_17104.read();
}

void linear_forward_no_mu::thread_mul_ln728_831_fu_68300_p1() {
    mul_ln728_831_fu_68300_p1 = select_ln173_1663_reg_127328.read();
}

void linear_forward_no_mu::thread_mul_ln728_831_fu_68300_p2() {
    mul_ln728_831_fu_68300_p2 = (!mul_ln728_831_fu_68300_p0.read().is_01() || !mul_ln728_831_fu_68300_p1.read().is_01())? sc_lv<9>(): sc_bigint<8>(mul_ln728_831_fu_68300_p0.read()) * sc_bigint<2>(mul_ln728_831_fu_68300_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_832_fu_68626_p0() {
    mul_ln728_832_fu_68626_p0 = select_ln173_1665_reg_127373.read();
}

void linear_forward_no_mu::thread_mul_ln728_832_fu_68626_p1() {
    mul_ln728_832_fu_68626_p1 = reg_17076.read();
}

void linear_forward_no_mu::thread_mul_ln728_832_fu_68626_p2() {
    mul_ln728_832_fu_68626_p2 = (!mul_ln728_832_fu_68626_p0.read().is_01() || !mul_ln728_832_fu_68626_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_832_fu_68626_p0.read()) * sc_bigint<8>(mul_ln728_832_fu_68626_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_833_fu_68651_p0() {
    mul_ln728_833_fu_68651_p0 = select_ln173_1667_reg_127378.read();
}

void linear_forward_no_mu::thread_mul_ln728_833_fu_68651_p1() {
    mul_ln728_833_fu_68651_p1 = reg_17080.read();
}

void linear_forward_no_mu::thread_mul_ln728_833_fu_68651_p2() {
    mul_ln728_833_fu_68651_p2 = (!mul_ln728_833_fu_68651_p0.read().is_01() || !mul_ln728_833_fu_68651_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_833_fu_68651_p0.read()) * sc_bigint<8>(mul_ln728_833_fu_68651_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_834_fu_68676_p0() {
    mul_ln728_834_fu_68676_p0 = select_ln173_1669_reg_127383.read();
}

void linear_forward_no_mu::thread_mul_ln728_834_fu_68676_p1() {
    mul_ln728_834_fu_68676_p1 = reg_17084.read();
}

void linear_forward_no_mu::thread_mul_ln728_834_fu_68676_p2() {
    mul_ln728_834_fu_68676_p2 = (!mul_ln728_834_fu_68676_p0.read().is_01() || !mul_ln728_834_fu_68676_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_834_fu_68676_p0.read()) * sc_bigint<8>(mul_ln728_834_fu_68676_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_835_fu_68701_p0() {
    mul_ln728_835_fu_68701_p0 = reg_17088.read();
}

void linear_forward_no_mu::thread_mul_ln728_835_fu_68701_p1() {
    mul_ln728_835_fu_68701_p1 = select_ln173_1671_reg_127388.read();
}

void linear_forward_no_mu::thread_mul_ln728_835_fu_68701_p2() {
    mul_ln728_835_fu_68701_p2 = (!mul_ln728_835_fu_68701_p0.read().is_01() || !mul_ln728_835_fu_68701_p1.read().is_01())? sc_lv<9>(): sc_bigint<8>(mul_ln728_835_fu_68701_p0.read()) * sc_bigint<2>(mul_ln728_835_fu_68701_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_836_fu_68726_p0() {
    mul_ln728_836_fu_68726_p0 = select_ln173_1673_reg_127393.read();
}

void linear_forward_no_mu::thread_mul_ln728_836_fu_68726_p1() {
    mul_ln728_836_fu_68726_p1 = reg_17092.read();
}

void linear_forward_no_mu::thread_mul_ln728_836_fu_68726_p2() {
    mul_ln728_836_fu_68726_p2 = (!mul_ln728_836_fu_68726_p0.read().is_01() || !mul_ln728_836_fu_68726_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_836_fu_68726_p0.read()) * sc_bigint<8>(mul_ln728_836_fu_68726_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_837_fu_68751_p0() {
    mul_ln728_837_fu_68751_p0 = select_ln173_1675_reg_127398.read();
}

void linear_forward_no_mu::thread_mul_ln728_837_fu_68751_p1() {
    mul_ln728_837_fu_68751_p1 = reg_17096.read();
}

void linear_forward_no_mu::thread_mul_ln728_837_fu_68751_p2() {
    mul_ln728_837_fu_68751_p2 = (!mul_ln728_837_fu_68751_p0.read().is_01() || !mul_ln728_837_fu_68751_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_837_fu_68751_p0.read()) * sc_bigint<8>(mul_ln728_837_fu_68751_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_838_fu_68799_p0() {
    mul_ln728_838_fu_68799_p0 = select_ln173_1677_fu_68783_p3.read();
}

void linear_forward_no_mu::thread_mul_ln728_838_fu_68799_p1() {
    mul_ln728_838_fu_68799_p1 = reg_17100.read();
}

void linear_forward_no_mu::thread_mul_ln728_838_fu_68799_p2() {
    mul_ln728_838_fu_68799_p2 = (!mul_ln728_838_fu_68799_p0.read().is_01() || !mul_ln728_838_fu_68799_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_838_fu_68799_p0.read()) * sc_bigint<8>(mul_ln728_838_fu_68799_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_839_fu_68812_p0() {
    mul_ln728_839_fu_68812_p0 = reg_17104.read();
}

void linear_forward_no_mu::thread_mul_ln728_839_fu_68812_p1() {
    mul_ln728_839_fu_68812_p1 = select_ln173_1679_reg_127403.read();
}

void linear_forward_no_mu::thread_mul_ln728_839_fu_68812_p2() {
    mul_ln728_839_fu_68812_p2 = (!mul_ln728_839_fu_68812_p0.read().is_01() || !mul_ln728_839_fu_68812_p1.read().is_01())? sc_lv<9>(): sc_bigint<8>(mul_ln728_839_fu_68812_p0.read()) * sc_bigint<2>(mul_ln728_839_fu_68812_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_83_fu_22315_p0() {
    mul_ln728_83_fu_22315_p0 = reg_17088.read();
}

void linear_forward_no_mu::thread_mul_ln728_83_fu_22315_p1() {
    mul_ln728_83_fu_22315_p1 = select_ln173_167_reg_120543.read();
}

void linear_forward_no_mu::thread_mul_ln728_83_fu_22315_p2() {
    mul_ln728_83_fu_22315_p2 = (!mul_ln728_83_fu_22315_p0.read().is_01() || !mul_ln728_83_fu_22315_p1.read().is_01())? sc_lv<9>(): sc_bigint<8>(mul_ln728_83_fu_22315_p0.read()) * sc_bigint<2>(mul_ln728_83_fu_22315_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_840_fu_69124_p0() {
    mul_ln728_840_fu_69124_p0 = select_ln173_1681_reg_127443.read();
}

void linear_forward_no_mu::thread_mul_ln728_840_fu_69124_p1() {
    mul_ln728_840_fu_69124_p1 = reg_17076.read();
}

void linear_forward_no_mu::thread_mul_ln728_840_fu_69124_p2() {
    mul_ln728_840_fu_69124_p2 = (!mul_ln728_840_fu_69124_p0.read().is_01() || !mul_ln728_840_fu_69124_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_840_fu_69124_p0.read()) * sc_bigint<8>(mul_ln728_840_fu_69124_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_841_fu_69149_p0() {
    mul_ln728_841_fu_69149_p0 = select_ln173_1683_reg_127448.read();
}

void linear_forward_no_mu::thread_mul_ln728_841_fu_69149_p1() {
    mul_ln728_841_fu_69149_p1 = reg_17080.read();
}

void linear_forward_no_mu::thread_mul_ln728_841_fu_69149_p2() {
    mul_ln728_841_fu_69149_p2 = (!mul_ln728_841_fu_69149_p0.read().is_01() || !mul_ln728_841_fu_69149_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_841_fu_69149_p0.read()) * sc_bigint<8>(mul_ln728_841_fu_69149_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_842_fu_69174_p0() {
    mul_ln728_842_fu_69174_p0 = select_ln173_1685_reg_127453.read();
}

void linear_forward_no_mu::thread_mul_ln728_842_fu_69174_p1() {
    mul_ln728_842_fu_69174_p1 = reg_17084.read();
}

void linear_forward_no_mu::thread_mul_ln728_842_fu_69174_p2() {
    mul_ln728_842_fu_69174_p2 = (!mul_ln728_842_fu_69174_p0.read().is_01() || !mul_ln728_842_fu_69174_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_842_fu_69174_p0.read()) * sc_bigint<8>(mul_ln728_842_fu_69174_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_843_fu_69199_p0() {
    mul_ln728_843_fu_69199_p0 = reg_17088.read();
}

void linear_forward_no_mu::thread_mul_ln728_843_fu_69199_p1() {
    mul_ln728_843_fu_69199_p1 = select_ln173_1687_reg_127458.read();
}

void linear_forward_no_mu::thread_mul_ln728_843_fu_69199_p2() {
    mul_ln728_843_fu_69199_p2 = (!mul_ln728_843_fu_69199_p0.read().is_01() || !mul_ln728_843_fu_69199_p1.read().is_01())? sc_lv<9>(): sc_bigint<8>(mul_ln728_843_fu_69199_p0.read()) * sc_bigint<2>(mul_ln728_843_fu_69199_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_844_fu_69224_p0() {
    mul_ln728_844_fu_69224_p0 = select_ln173_1689_reg_127463.read();
}

void linear_forward_no_mu::thread_mul_ln728_844_fu_69224_p1() {
    mul_ln728_844_fu_69224_p1 = reg_17092.read();
}

void linear_forward_no_mu::thread_mul_ln728_844_fu_69224_p2() {
    mul_ln728_844_fu_69224_p2 = (!mul_ln728_844_fu_69224_p0.read().is_01() || !mul_ln728_844_fu_69224_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_844_fu_69224_p0.read()) * sc_bigint<8>(mul_ln728_844_fu_69224_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_845_fu_69249_p0() {
    mul_ln728_845_fu_69249_p0 = select_ln173_1691_reg_127468.read();
}

void linear_forward_no_mu::thread_mul_ln728_845_fu_69249_p1() {
    mul_ln728_845_fu_69249_p1 = reg_17096.read();
}

void linear_forward_no_mu::thread_mul_ln728_845_fu_69249_p2() {
    mul_ln728_845_fu_69249_p2 = (!mul_ln728_845_fu_69249_p0.read().is_01() || !mul_ln728_845_fu_69249_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_845_fu_69249_p0.read()) * sc_bigint<8>(mul_ln728_845_fu_69249_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_846_fu_69274_p0() {
    mul_ln728_846_fu_69274_p0 = select_ln173_1693_reg_127473.read();
}

void linear_forward_no_mu::thread_mul_ln728_846_fu_69274_p1() {
    mul_ln728_846_fu_69274_p1 = reg_17100.read();
}

void linear_forward_no_mu::thread_mul_ln728_846_fu_69274_p2() {
    mul_ln728_846_fu_69274_p2 = (!mul_ln728_846_fu_69274_p0.read().is_01() || !mul_ln728_846_fu_69274_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_846_fu_69274_p0.read()) * sc_bigint<8>(mul_ln728_846_fu_69274_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_847_fu_69299_p0() {
    mul_ln728_847_fu_69299_p0 = reg_17104.read();
}

void linear_forward_no_mu::thread_mul_ln728_847_fu_69299_p1() {
    mul_ln728_847_fu_69299_p1 = select_ln173_1695_reg_127478.read();
}

void linear_forward_no_mu::thread_mul_ln728_847_fu_69299_p2() {
    mul_ln728_847_fu_69299_p2 = (!mul_ln728_847_fu_69299_p0.read().is_01() || !mul_ln728_847_fu_69299_p1.read().is_01())? sc_lv<9>(): sc_bigint<8>(mul_ln728_847_fu_69299_p0.read()) * sc_bigint<2>(mul_ln728_847_fu_69299_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_848_fu_69581_p0() {
    mul_ln728_848_fu_69581_p0 = select_ln173_1697_reg_127513.read();
}

void linear_forward_no_mu::thread_mul_ln728_848_fu_69581_p1() {
    mul_ln728_848_fu_69581_p1 = reg_17076.read();
}

void linear_forward_no_mu::thread_mul_ln728_848_fu_69581_p2() {
    mul_ln728_848_fu_69581_p2 = (!mul_ln728_848_fu_69581_p0.read().is_01() || !mul_ln728_848_fu_69581_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_848_fu_69581_p0.read()) * sc_bigint<8>(mul_ln728_848_fu_69581_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_849_fu_69606_p0() {
    mul_ln728_849_fu_69606_p0 = select_ln173_1699_reg_127518.read();
}

void linear_forward_no_mu::thread_mul_ln728_849_fu_69606_p1() {
    mul_ln728_849_fu_69606_p1 = reg_17080.read();
}

void linear_forward_no_mu::thread_mul_ln728_849_fu_69606_p2() {
    mul_ln728_849_fu_69606_p2 = (!mul_ln728_849_fu_69606_p0.read().is_01() || !mul_ln728_849_fu_69606_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_849_fu_69606_p0.read()) * sc_bigint<8>(mul_ln728_849_fu_69606_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_84_fu_22340_p0() {
    mul_ln728_84_fu_22340_p0 = select_ln173_169_reg_120548.read();
}

void linear_forward_no_mu::thread_mul_ln728_84_fu_22340_p1() {
    mul_ln728_84_fu_22340_p1 = reg_17092.read();
}

void linear_forward_no_mu::thread_mul_ln728_84_fu_22340_p2() {
    mul_ln728_84_fu_22340_p2 = (!mul_ln728_84_fu_22340_p0.read().is_01() || !mul_ln728_84_fu_22340_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_84_fu_22340_p0.read()) * sc_bigint<8>(mul_ln728_84_fu_22340_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_850_fu_69631_p0() {
    mul_ln728_850_fu_69631_p0 = select_ln173_1701_reg_127523.read();
}

void linear_forward_no_mu::thread_mul_ln728_850_fu_69631_p1() {
    mul_ln728_850_fu_69631_p1 = reg_17084.read();
}

void linear_forward_no_mu::thread_mul_ln728_850_fu_69631_p2() {
    mul_ln728_850_fu_69631_p2 = (!mul_ln728_850_fu_69631_p0.read().is_01() || !mul_ln728_850_fu_69631_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_850_fu_69631_p0.read()) * sc_bigint<8>(mul_ln728_850_fu_69631_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_851_fu_69656_p0() {
    mul_ln728_851_fu_69656_p0 = reg_17088.read();
}

void linear_forward_no_mu::thread_mul_ln728_851_fu_69656_p1() {
    mul_ln728_851_fu_69656_p1 = select_ln173_1703_reg_127528.read();
}

void linear_forward_no_mu::thread_mul_ln728_851_fu_69656_p2() {
    mul_ln728_851_fu_69656_p2 = (!mul_ln728_851_fu_69656_p0.read().is_01() || !mul_ln728_851_fu_69656_p1.read().is_01())? sc_lv<9>(): sc_bigint<8>(mul_ln728_851_fu_69656_p0.read()) * sc_bigint<2>(mul_ln728_851_fu_69656_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_852_fu_69681_p0() {
    mul_ln728_852_fu_69681_p0 = select_ln173_1705_reg_127533.read();
}

void linear_forward_no_mu::thread_mul_ln728_852_fu_69681_p1() {
    mul_ln728_852_fu_69681_p1 = reg_17092.read();
}

void linear_forward_no_mu::thread_mul_ln728_852_fu_69681_p2() {
    mul_ln728_852_fu_69681_p2 = (!mul_ln728_852_fu_69681_p0.read().is_01() || !mul_ln728_852_fu_69681_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_852_fu_69681_p0.read()) * sc_bigint<8>(mul_ln728_852_fu_69681_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_853_fu_69729_p0() {
    mul_ln728_853_fu_69729_p0 = select_ln173_1707_fu_69713_p3.read();
}

void linear_forward_no_mu::thread_mul_ln728_853_fu_69729_p1() {
    mul_ln728_853_fu_69729_p1 = reg_17096.read();
}

void linear_forward_no_mu::thread_mul_ln728_853_fu_69729_p2() {
    mul_ln728_853_fu_69729_p2 = (!mul_ln728_853_fu_69729_p0.read().is_01() || !mul_ln728_853_fu_69729_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_853_fu_69729_p0.read()) * sc_bigint<8>(mul_ln728_853_fu_69729_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_854_fu_69765_p0() {
    mul_ln728_854_fu_69765_p0 = select_ln173_1709_fu_69749_p3.read();
}

void linear_forward_no_mu::thread_mul_ln728_854_fu_69765_p1() {
    mul_ln728_854_fu_69765_p1 = reg_17100.read();
}

void linear_forward_no_mu::thread_mul_ln728_854_fu_69765_p2() {
    mul_ln728_854_fu_69765_p2 = (!mul_ln728_854_fu_69765_p0.read().is_01() || !mul_ln728_854_fu_69765_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_854_fu_69765_p0.read()) * sc_bigint<8>(mul_ln728_854_fu_69765_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_855_fu_69778_p0() {
    mul_ln728_855_fu_69778_p0 = reg_17104.read();
}

void linear_forward_no_mu::thread_mul_ln728_855_fu_69778_p1() {
    mul_ln728_855_fu_69778_p1 = select_ln173_1711_reg_127538.read();
}

void linear_forward_no_mu::thread_mul_ln728_855_fu_69778_p2() {
    mul_ln728_855_fu_69778_p2 = (!mul_ln728_855_fu_69778_p0.read().is_01() || !mul_ln728_855_fu_69778_p1.read().is_01())? sc_lv<9>(): sc_bigint<8>(mul_ln728_855_fu_69778_p0.read()) * sc_bigint<2>(mul_ln728_855_fu_69778_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_856_fu_70093_p0() {
    mul_ln728_856_fu_70093_p0 = select_ln173_1713_reg_127583.read();
}

void linear_forward_no_mu::thread_mul_ln728_856_fu_70093_p1() {
    mul_ln728_856_fu_70093_p1 = reg_17076.read();
}

void linear_forward_no_mu::thread_mul_ln728_856_fu_70093_p2() {
    mul_ln728_856_fu_70093_p2 = (!mul_ln728_856_fu_70093_p0.read().is_01() || !mul_ln728_856_fu_70093_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_856_fu_70093_p0.read()) * sc_bigint<8>(mul_ln728_856_fu_70093_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_857_fu_70118_p0() {
    mul_ln728_857_fu_70118_p0 = select_ln173_1715_reg_127588.read();
}

void linear_forward_no_mu::thread_mul_ln728_857_fu_70118_p1() {
    mul_ln728_857_fu_70118_p1 = reg_17080.read();
}

void linear_forward_no_mu::thread_mul_ln728_857_fu_70118_p2() {
    mul_ln728_857_fu_70118_p2 = (!mul_ln728_857_fu_70118_p0.read().is_01() || !mul_ln728_857_fu_70118_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_857_fu_70118_p0.read()) * sc_bigint<8>(mul_ln728_857_fu_70118_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_858_fu_70143_p0() {
    mul_ln728_858_fu_70143_p0 = select_ln173_1717_reg_127593.read();
}

void linear_forward_no_mu::thread_mul_ln728_858_fu_70143_p1() {
    mul_ln728_858_fu_70143_p1 = reg_17084.read();
}

void linear_forward_no_mu::thread_mul_ln728_858_fu_70143_p2() {
    mul_ln728_858_fu_70143_p2 = (!mul_ln728_858_fu_70143_p0.read().is_01() || !mul_ln728_858_fu_70143_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_858_fu_70143_p0.read()) * sc_bigint<8>(mul_ln728_858_fu_70143_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_859_fu_70168_p0() {
    mul_ln728_859_fu_70168_p0 = reg_17088.read();
}

void linear_forward_no_mu::thread_mul_ln728_859_fu_70168_p1() {
    mul_ln728_859_fu_70168_p1 = select_ln173_1719_reg_127598.read();
}

void linear_forward_no_mu::thread_mul_ln728_859_fu_70168_p2() {
    mul_ln728_859_fu_70168_p2 = (!mul_ln728_859_fu_70168_p0.read().is_01() || !mul_ln728_859_fu_70168_p1.read().is_01())? sc_lv<9>(): sc_bigint<8>(mul_ln728_859_fu_70168_p0.read()) * sc_bigint<2>(mul_ln728_859_fu_70168_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_85_fu_22388_p0() {
    mul_ln728_85_fu_22388_p0 = select_ln173_171_fu_22372_p3.read();
}

void linear_forward_no_mu::thread_mul_ln728_85_fu_22388_p1() {
    mul_ln728_85_fu_22388_p1 = reg_17096.read();
}

void linear_forward_no_mu::thread_mul_ln728_85_fu_22388_p2() {
    mul_ln728_85_fu_22388_p2 = (!mul_ln728_85_fu_22388_p0.read().is_01() || !mul_ln728_85_fu_22388_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_85_fu_22388_p0.read()) * sc_bigint<8>(mul_ln728_85_fu_22388_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_860_fu_70193_p0() {
    mul_ln728_860_fu_70193_p0 = select_ln173_1721_reg_127603.read();
}

void linear_forward_no_mu::thread_mul_ln728_860_fu_70193_p1() {
    mul_ln728_860_fu_70193_p1 = reg_17092.read();
}

void linear_forward_no_mu::thread_mul_ln728_860_fu_70193_p2() {
    mul_ln728_860_fu_70193_p2 = (!mul_ln728_860_fu_70193_p0.read().is_01() || !mul_ln728_860_fu_70193_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_860_fu_70193_p0.read()) * sc_bigint<8>(mul_ln728_860_fu_70193_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_861_fu_70218_p0() {
    mul_ln728_861_fu_70218_p0 = select_ln173_1723_reg_127608.read();
}

void linear_forward_no_mu::thread_mul_ln728_861_fu_70218_p1() {
    mul_ln728_861_fu_70218_p1 = reg_17096.read();
}

void linear_forward_no_mu::thread_mul_ln728_861_fu_70218_p2() {
    mul_ln728_861_fu_70218_p2 = (!mul_ln728_861_fu_70218_p0.read().is_01() || !mul_ln728_861_fu_70218_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_861_fu_70218_p0.read()) * sc_bigint<8>(mul_ln728_861_fu_70218_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_862_fu_70266_p0() {
    mul_ln728_862_fu_70266_p0 = select_ln173_1725_fu_70250_p3.read();
}

void linear_forward_no_mu::thread_mul_ln728_862_fu_70266_p1() {
    mul_ln728_862_fu_70266_p1 = reg_17100.read();
}

void linear_forward_no_mu::thread_mul_ln728_862_fu_70266_p2() {
    mul_ln728_862_fu_70266_p2 = (!mul_ln728_862_fu_70266_p0.read().is_01() || !mul_ln728_862_fu_70266_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_862_fu_70266_p0.read()) * sc_bigint<8>(mul_ln728_862_fu_70266_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_863_fu_70279_p0() {
    mul_ln728_863_fu_70279_p0 = reg_17104.read();
}

void linear_forward_no_mu::thread_mul_ln728_863_fu_70279_p1() {
    mul_ln728_863_fu_70279_p1 = select_ln173_1727_reg_127613.read();
}

void linear_forward_no_mu::thread_mul_ln728_863_fu_70279_p2() {
    mul_ln728_863_fu_70279_p2 = (!mul_ln728_863_fu_70279_p0.read().is_01() || !mul_ln728_863_fu_70279_p1.read().is_01())? sc_lv<9>(): sc_bigint<8>(mul_ln728_863_fu_70279_p0.read()) * sc_bigint<2>(mul_ln728_863_fu_70279_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_864_fu_70590_p0() {
    mul_ln728_864_fu_70590_p0 = select_ln173_1729_reg_127648.read();
}

void linear_forward_no_mu::thread_mul_ln728_864_fu_70590_p1() {
    mul_ln728_864_fu_70590_p1 = reg_17076.read();
}

void linear_forward_no_mu::thread_mul_ln728_864_fu_70590_p2() {
    mul_ln728_864_fu_70590_p2 = (!mul_ln728_864_fu_70590_p0.read().is_01() || !mul_ln728_864_fu_70590_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_864_fu_70590_p0.read()) * sc_bigint<8>(mul_ln728_864_fu_70590_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_865_fu_70615_p0() {
    mul_ln728_865_fu_70615_p0 = select_ln173_1731_reg_127653.read();
}

void linear_forward_no_mu::thread_mul_ln728_865_fu_70615_p1() {
    mul_ln728_865_fu_70615_p1 = reg_17080.read();
}

void linear_forward_no_mu::thread_mul_ln728_865_fu_70615_p2() {
    mul_ln728_865_fu_70615_p2 = (!mul_ln728_865_fu_70615_p0.read().is_01() || !mul_ln728_865_fu_70615_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_865_fu_70615_p0.read()) * sc_bigint<8>(mul_ln728_865_fu_70615_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_866_fu_70640_p0() {
    mul_ln728_866_fu_70640_p0 = select_ln173_1733_reg_127658.read();
}

void linear_forward_no_mu::thread_mul_ln728_866_fu_70640_p1() {
    mul_ln728_866_fu_70640_p1 = reg_17084.read();
}

void linear_forward_no_mu::thread_mul_ln728_866_fu_70640_p2() {
    mul_ln728_866_fu_70640_p2 = (!mul_ln728_866_fu_70640_p0.read().is_01() || !mul_ln728_866_fu_70640_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_866_fu_70640_p0.read()) * sc_bigint<8>(mul_ln728_866_fu_70640_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_867_fu_70665_p0() {
    mul_ln728_867_fu_70665_p0 = reg_17088.read();
}

void linear_forward_no_mu::thread_mul_ln728_867_fu_70665_p1() {
    mul_ln728_867_fu_70665_p1 = select_ln173_1735_reg_127663.read();
}

void linear_forward_no_mu::thread_mul_ln728_867_fu_70665_p2() {
    mul_ln728_867_fu_70665_p2 = (!mul_ln728_867_fu_70665_p0.read().is_01() || !mul_ln728_867_fu_70665_p1.read().is_01())? sc_lv<9>(): sc_bigint<8>(mul_ln728_867_fu_70665_p0.read()) * sc_bigint<2>(mul_ln728_867_fu_70665_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_868_fu_70690_p0() {
    mul_ln728_868_fu_70690_p0 = select_ln173_1737_reg_127668.read();
}

void linear_forward_no_mu::thread_mul_ln728_868_fu_70690_p1() {
    mul_ln728_868_fu_70690_p1 = reg_17092.read();
}

void linear_forward_no_mu::thread_mul_ln728_868_fu_70690_p2() {
    mul_ln728_868_fu_70690_p2 = (!mul_ln728_868_fu_70690_p0.read().is_01() || !mul_ln728_868_fu_70690_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_868_fu_70690_p0.read()) * sc_bigint<8>(mul_ln728_868_fu_70690_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_869_fu_70715_p0() {
    mul_ln728_869_fu_70715_p0 = select_ln173_1739_reg_127673.read();
}

void linear_forward_no_mu::thread_mul_ln728_869_fu_70715_p1() {
    mul_ln728_869_fu_70715_p1 = reg_17096.read();
}

void linear_forward_no_mu::thread_mul_ln728_869_fu_70715_p2() {
    mul_ln728_869_fu_70715_p2 = (!mul_ln728_869_fu_70715_p0.read().is_01() || !mul_ln728_869_fu_70715_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_869_fu_70715_p0.read()) * sc_bigint<8>(mul_ln728_869_fu_70715_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_86_fu_22424_p0() {
    mul_ln728_86_fu_22424_p0 = select_ln173_173_fu_22408_p3.read();
}

void linear_forward_no_mu::thread_mul_ln728_86_fu_22424_p1() {
    mul_ln728_86_fu_22424_p1 = reg_17100.read();
}

void linear_forward_no_mu::thread_mul_ln728_86_fu_22424_p2() {
    mul_ln728_86_fu_22424_p2 = (!mul_ln728_86_fu_22424_p0.read().is_01() || !mul_ln728_86_fu_22424_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_86_fu_22424_p0.read()) * sc_bigint<8>(mul_ln728_86_fu_22424_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_870_fu_70740_p0() {
    mul_ln728_870_fu_70740_p0 = select_ln173_1741_reg_127678.read();
}

void linear_forward_no_mu::thread_mul_ln728_870_fu_70740_p1() {
    mul_ln728_870_fu_70740_p1 = reg_17100.read();
}

void linear_forward_no_mu::thread_mul_ln728_870_fu_70740_p2() {
    mul_ln728_870_fu_70740_p2 = (!mul_ln728_870_fu_70740_p0.read().is_01() || !mul_ln728_870_fu_70740_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_870_fu_70740_p0.read()) * sc_bigint<8>(mul_ln728_870_fu_70740_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_871_fu_70765_p0() {
    mul_ln728_871_fu_70765_p0 = reg_17104.read();
}

void linear_forward_no_mu::thread_mul_ln728_871_fu_70765_p1() {
    mul_ln728_871_fu_70765_p1 = select_ln173_1743_reg_127683.read();
}

void linear_forward_no_mu::thread_mul_ln728_871_fu_70765_p2() {
    mul_ln728_871_fu_70765_p2 = (!mul_ln728_871_fu_70765_p0.read().is_01() || !mul_ln728_871_fu_70765_p1.read().is_01())? sc_lv<9>(): sc_bigint<8>(mul_ln728_871_fu_70765_p0.read()) * sc_bigint<2>(mul_ln728_871_fu_70765_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_872_fu_71048_p0() {
    mul_ln728_872_fu_71048_p0 = select_ln173_1745_reg_127718.read();
}

void linear_forward_no_mu::thread_mul_ln728_872_fu_71048_p1() {
    mul_ln728_872_fu_71048_p1 = reg_17076.read();
}

void linear_forward_no_mu::thread_mul_ln728_872_fu_71048_p2() {
    mul_ln728_872_fu_71048_p2 = (!mul_ln728_872_fu_71048_p0.read().is_01() || !mul_ln728_872_fu_71048_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_872_fu_71048_p0.read()) * sc_bigint<8>(mul_ln728_872_fu_71048_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_873_fu_71073_p0() {
    mul_ln728_873_fu_71073_p0 = select_ln173_1747_reg_127723.read();
}

void linear_forward_no_mu::thread_mul_ln728_873_fu_71073_p1() {
    mul_ln728_873_fu_71073_p1 = reg_17080.read();
}

void linear_forward_no_mu::thread_mul_ln728_873_fu_71073_p2() {
    mul_ln728_873_fu_71073_p2 = (!mul_ln728_873_fu_71073_p0.read().is_01() || !mul_ln728_873_fu_71073_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_873_fu_71073_p0.read()) * sc_bigint<8>(mul_ln728_873_fu_71073_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_874_fu_71098_p0() {
    mul_ln728_874_fu_71098_p0 = select_ln173_1749_reg_127728.read();
}

void linear_forward_no_mu::thread_mul_ln728_874_fu_71098_p1() {
    mul_ln728_874_fu_71098_p1 = reg_17084.read();
}

void linear_forward_no_mu::thread_mul_ln728_874_fu_71098_p2() {
    mul_ln728_874_fu_71098_p2 = (!mul_ln728_874_fu_71098_p0.read().is_01() || !mul_ln728_874_fu_71098_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_874_fu_71098_p0.read()) * sc_bigint<8>(mul_ln728_874_fu_71098_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_875_fu_71123_p0() {
    mul_ln728_875_fu_71123_p0 = reg_17088.read();
}

void linear_forward_no_mu::thread_mul_ln728_875_fu_71123_p1() {
    mul_ln728_875_fu_71123_p1 = select_ln173_1751_reg_127733.read();
}

void linear_forward_no_mu::thread_mul_ln728_875_fu_71123_p2() {
    mul_ln728_875_fu_71123_p2 = (!mul_ln728_875_fu_71123_p0.read().is_01() || !mul_ln728_875_fu_71123_p1.read().is_01())? sc_lv<9>(): sc_bigint<8>(mul_ln728_875_fu_71123_p0.read()) * sc_bigint<2>(mul_ln728_875_fu_71123_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_876_fu_71148_p0() {
    mul_ln728_876_fu_71148_p0 = select_ln173_1753_reg_127738.read();
}

void linear_forward_no_mu::thread_mul_ln728_876_fu_71148_p1() {
    mul_ln728_876_fu_71148_p1 = reg_17092.read();
}

void linear_forward_no_mu::thread_mul_ln728_876_fu_71148_p2() {
    mul_ln728_876_fu_71148_p2 = (!mul_ln728_876_fu_71148_p0.read().is_01() || !mul_ln728_876_fu_71148_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_876_fu_71148_p0.read()) * sc_bigint<8>(mul_ln728_876_fu_71148_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_877_fu_71196_p0() {
    mul_ln728_877_fu_71196_p0 = select_ln173_1755_fu_71180_p3.read();
}

void linear_forward_no_mu::thread_mul_ln728_877_fu_71196_p1() {
    mul_ln728_877_fu_71196_p1 = reg_17096.read();
}

void linear_forward_no_mu::thread_mul_ln728_877_fu_71196_p2() {
    mul_ln728_877_fu_71196_p2 = (!mul_ln728_877_fu_71196_p0.read().is_01() || !mul_ln728_877_fu_71196_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_877_fu_71196_p0.read()) * sc_bigint<8>(mul_ln728_877_fu_71196_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_878_fu_71232_p0() {
    mul_ln728_878_fu_71232_p0 = select_ln173_1757_fu_71216_p3.read();
}

void linear_forward_no_mu::thread_mul_ln728_878_fu_71232_p1() {
    mul_ln728_878_fu_71232_p1 = reg_17100.read();
}

void linear_forward_no_mu::thread_mul_ln728_878_fu_71232_p2() {
    mul_ln728_878_fu_71232_p2 = (!mul_ln728_878_fu_71232_p0.read().is_01() || !mul_ln728_878_fu_71232_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_878_fu_71232_p0.read()) * sc_bigint<8>(mul_ln728_878_fu_71232_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_879_fu_71245_p0() {
    mul_ln728_879_fu_71245_p0 = reg_17104.read();
}

void linear_forward_no_mu::thread_mul_ln728_879_fu_71245_p1() {
    mul_ln728_879_fu_71245_p1 = select_ln173_1759_reg_127743.read();
}

void linear_forward_no_mu::thread_mul_ln728_879_fu_71245_p2() {
    mul_ln728_879_fu_71245_p2 = (!mul_ln728_879_fu_71245_p0.read().is_01() || !mul_ln728_879_fu_71245_p1.read().is_01())? sc_lv<9>(): sc_bigint<8>(mul_ln728_879_fu_71245_p0.read()) * sc_bigint<2>(mul_ln728_879_fu_71245_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_87_fu_22437_p0() {
    mul_ln728_87_fu_22437_p0 = reg_17104.read();
}

void linear_forward_no_mu::thread_mul_ln728_87_fu_22437_p1() {
    mul_ln728_87_fu_22437_p1 = select_ln173_175_reg_120553.read();
}

void linear_forward_no_mu::thread_mul_ln728_87_fu_22437_p2() {
    mul_ln728_87_fu_22437_p2 = (!mul_ln728_87_fu_22437_p0.read().is_01() || !mul_ln728_87_fu_22437_p1.read().is_01())? sc_lv<9>(): sc_bigint<8>(mul_ln728_87_fu_22437_p0.read()) * sc_bigint<2>(mul_ln728_87_fu_22437_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_880_fu_71584_p0() {
    mul_ln728_880_fu_71584_p0 = select_ln173_1761_reg_127788.read();
}

void linear_forward_no_mu::thread_mul_ln728_880_fu_71584_p1() {
    mul_ln728_880_fu_71584_p1 = reg_17076.read();
}

void linear_forward_no_mu::thread_mul_ln728_880_fu_71584_p2() {
    mul_ln728_880_fu_71584_p2 = (!mul_ln728_880_fu_71584_p0.read().is_01() || !mul_ln728_880_fu_71584_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_880_fu_71584_p0.read()) * sc_bigint<8>(mul_ln728_880_fu_71584_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_881_fu_71609_p0() {
    mul_ln728_881_fu_71609_p0 = select_ln173_1763_reg_127793.read();
}

void linear_forward_no_mu::thread_mul_ln728_881_fu_71609_p1() {
    mul_ln728_881_fu_71609_p1 = reg_17080.read();
}

void linear_forward_no_mu::thread_mul_ln728_881_fu_71609_p2() {
    mul_ln728_881_fu_71609_p2 = (!mul_ln728_881_fu_71609_p0.read().is_01() || !mul_ln728_881_fu_71609_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_881_fu_71609_p0.read()) * sc_bigint<8>(mul_ln728_881_fu_71609_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_882_fu_71634_p0() {
    mul_ln728_882_fu_71634_p0 = select_ln173_1765_reg_127798.read();
}

void linear_forward_no_mu::thread_mul_ln728_882_fu_71634_p1() {
    mul_ln728_882_fu_71634_p1 = reg_17084.read();
}

void linear_forward_no_mu::thread_mul_ln728_882_fu_71634_p2() {
    mul_ln728_882_fu_71634_p2 = (!mul_ln728_882_fu_71634_p0.read().is_01() || !mul_ln728_882_fu_71634_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_882_fu_71634_p0.read()) * sc_bigint<8>(mul_ln728_882_fu_71634_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_883_fu_71659_p0() {
    mul_ln728_883_fu_71659_p0 = reg_17088.read();
}

void linear_forward_no_mu::thread_mul_ln728_883_fu_71659_p1() {
    mul_ln728_883_fu_71659_p1 = select_ln173_1767_reg_127803.read();
}

void linear_forward_no_mu::thread_mul_ln728_883_fu_71659_p2() {
    mul_ln728_883_fu_71659_p2 = (!mul_ln728_883_fu_71659_p0.read().is_01() || !mul_ln728_883_fu_71659_p1.read().is_01())? sc_lv<9>(): sc_bigint<8>(mul_ln728_883_fu_71659_p0.read()) * sc_bigint<2>(mul_ln728_883_fu_71659_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_884_fu_71684_p0() {
    mul_ln728_884_fu_71684_p0 = select_ln173_1769_reg_127808.read();
}

void linear_forward_no_mu::thread_mul_ln728_884_fu_71684_p1() {
    mul_ln728_884_fu_71684_p1 = reg_17092.read();
}

void linear_forward_no_mu::thread_mul_ln728_884_fu_71684_p2() {
    mul_ln728_884_fu_71684_p2 = (!mul_ln728_884_fu_71684_p0.read().is_01() || !mul_ln728_884_fu_71684_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_884_fu_71684_p0.read()) * sc_bigint<8>(mul_ln728_884_fu_71684_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_885_fu_71709_p0() {
    mul_ln728_885_fu_71709_p0 = select_ln173_1771_reg_127813.read();
}

void linear_forward_no_mu::thread_mul_ln728_885_fu_71709_p1() {
    mul_ln728_885_fu_71709_p1 = reg_17096.read();
}

void linear_forward_no_mu::thread_mul_ln728_885_fu_71709_p2() {
    mul_ln728_885_fu_71709_p2 = (!mul_ln728_885_fu_71709_p0.read().is_01() || !mul_ln728_885_fu_71709_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_885_fu_71709_p0.read()) * sc_bigint<8>(mul_ln728_885_fu_71709_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_886_fu_71757_p0() {
    mul_ln728_886_fu_71757_p0 = select_ln173_1773_fu_71741_p3.read();
}

void linear_forward_no_mu::thread_mul_ln728_886_fu_71757_p1() {
    mul_ln728_886_fu_71757_p1 = reg_17100.read();
}

void linear_forward_no_mu::thread_mul_ln728_886_fu_71757_p2() {
    mul_ln728_886_fu_71757_p2 = (!mul_ln728_886_fu_71757_p0.read().is_01() || !mul_ln728_886_fu_71757_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_886_fu_71757_p0.read()) * sc_bigint<8>(mul_ln728_886_fu_71757_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_887_fu_71770_p0() {
    mul_ln728_887_fu_71770_p0 = reg_17104.read();
}

void linear_forward_no_mu::thread_mul_ln728_887_fu_71770_p1() {
    mul_ln728_887_fu_71770_p1 = select_ln173_1775_reg_127818.read();
}

void linear_forward_no_mu::thread_mul_ln728_887_fu_71770_p2() {
    mul_ln728_887_fu_71770_p2 = (!mul_ln728_887_fu_71770_p0.read().is_01() || !mul_ln728_887_fu_71770_p1.read().is_01())? sc_lv<9>(): sc_bigint<8>(mul_ln728_887_fu_71770_p0.read()) * sc_bigint<2>(mul_ln728_887_fu_71770_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_888_fu_72082_p0() {
    mul_ln728_888_fu_72082_p0 = select_ln173_1777_reg_127858.read();
}

void linear_forward_no_mu::thread_mul_ln728_888_fu_72082_p1() {
    mul_ln728_888_fu_72082_p1 = reg_17076.read();
}

void linear_forward_no_mu::thread_mul_ln728_888_fu_72082_p2() {
    mul_ln728_888_fu_72082_p2 = (!mul_ln728_888_fu_72082_p0.read().is_01() || !mul_ln728_888_fu_72082_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_888_fu_72082_p0.read()) * sc_bigint<8>(mul_ln728_888_fu_72082_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_889_fu_72107_p0() {
    mul_ln728_889_fu_72107_p0 = select_ln173_1779_reg_127863.read();
}

void linear_forward_no_mu::thread_mul_ln728_889_fu_72107_p1() {
    mul_ln728_889_fu_72107_p1 = reg_17080.read();
}

void linear_forward_no_mu::thread_mul_ln728_889_fu_72107_p2() {
    mul_ln728_889_fu_72107_p2 = (!mul_ln728_889_fu_72107_p0.read().is_01() || !mul_ln728_889_fu_72107_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_889_fu_72107_p0.read()) * sc_bigint<8>(mul_ln728_889_fu_72107_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_88_fu_22752_p0() {
    mul_ln728_88_fu_22752_p0 = select_ln173_177_reg_120603.read();
}

void linear_forward_no_mu::thread_mul_ln728_88_fu_22752_p1() {
    mul_ln728_88_fu_22752_p1 = reg_17076.read();
}

void linear_forward_no_mu::thread_mul_ln728_88_fu_22752_p2() {
    mul_ln728_88_fu_22752_p2 = (!mul_ln728_88_fu_22752_p0.read().is_01() || !mul_ln728_88_fu_22752_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_88_fu_22752_p0.read()) * sc_bigint<8>(mul_ln728_88_fu_22752_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_890_fu_72132_p0() {
    mul_ln728_890_fu_72132_p0 = select_ln173_1781_reg_127868.read();
}

void linear_forward_no_mu::thread_mul_ln728_890_fu_72132_p1() {
    mul_ln728_890_fu_72132_p1 = reg_17084.read();
}

void linear_forward_no_mu::thread_mul_ln728_890_fu_72132_p2() {
    mul_ln728_890_fu_72132_p2 = (!mul_ln728_890_fu_72132_p0.read().is_01() || !mul_ln728_890_fu_72132_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_890_fu_72132_p0.read()) * sc_bigint<8>(mul_ln728_890_fu_72132_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_891_fu_72157_p0() {
    mul_ln728_891_fu_72157_p0 = reg_17088.read();
}

void linear_forward_no_mu::thread_mul_ln728_891_fu_72157_p1() {
    mul_ln728_891_fu_72157_p1 = select_ln173_1783_reg_127873.read();
}

void linear_forward_no_mu::thread_mul_ln728_891_fu_72157_p2() {
    mul_ln728_891_fu_72157_p2 = (!mul_ln728_891_fu_72157_p0.read().is_01() || !mul_ln728_891_fu_72157_p1.read().is_01())? sc_lv<9>(): sc_bigint<8>(mul_ln728_891_fu_72157_p0.read()) * sc_bigint<2>(mul_ln728_891_fu_72157_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_892_fu_72182_p0() {
    mul_ln728_892_fu_72182_p0 = select_ln173_1785_reg_127878.read();
}

void linear_forward_no_mu::thread_mul_ln728_892_fu_72182_p1() {
    mul_ln728_892_fu_72182_p1 = reg_17092.read();
}

void linear_forward_no_mu::thread_mul_ln728_892_fu_72182_p2() {
    mul_ln728_892_fu_72182_p2 = (!mul_ln728_892_fu_72182_p0.read().is_01() || !mul_ln728_892_fu_72182_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_892_fu_72182_p0.read()) * sc_bigint<8>(mul_ln728_892_fu_72182_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_893_fu_72207_p0() {
    mul_ln728_893_fu_72207_p0 = select_ln173_1787_reg_127883.read();
}

void linear_forward_no_mu::thread_mul_ln728_893_fu_72207_p1() {
    mul_ln728_893_fu_72207_p1 = reg_17096.read();
}

void linear_forward_no_mu::thread_mul_ln728_893_fu_72207_p2() {
    mul_ln728_893_fu_72207_p2 = (!mul_ln728_893_fu_72207_p0.read().is_01() || !mul_ln728_893_fu_72207_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_893_fu_72207_p0.read()) * sc_bigint<8>(mul_ln728_893_fu_72207_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_894_fu_72232_p0() {
    mul_ln728_894_fu_72232_p0 = select_ln173_1789_reg_127888.read();
}

void linear_forward_no_mu::thread_mul_ln728_894_fu_72232_p1() {
    mul_ln728_894_fu_72232_p1 = reg_17100.read();
}

void linear_forward_no_mu::thread_mul_ln728_894_fu_72232_p2() {
    mul_ln728_894_fu_72232_p2 = (!mul_ln728_894_fu_72232_p0.read().is_01() || !mul_ln728_894_fu_72232_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_894_fu_72232_p0.read()) * sc_bigint<8>(mul_ln728_894_fu_72232_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_895_fu_72257_p0() {
    mul_ln728_895_fu_72257_p0 = reg_17104.read();
}

void linear_forward_no_mu::thread_mul_ln728_895_fu_72257_p1() {
    mul_ln728_895_fu_72257_p1 = select_ln173_1791_reg_127893.read();
}

void linear_forward_no_mu::thread_mul_ln728_895_fu_72257_p2() {
    mul_ln728_895_fu_72257_p2 = (!mul_ln728_895_fu_72257_p0.read().is_01() || !mul_ln728_895_fu_72257_p1.read().is_01())? sc_lv<9>(): sc_bigint<8>(mul_ln728_895_fu_72257_p0.read()) * sc_bigint<2>(mul_ln728_895_fu_72257_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_896_fu_72539_p0() {
    mul_ln728_896_fu_72539_p0 = select_ln173_1793_reg_127928.read();
}

void linear_forward_no_mu::thread_mul_ln728_896_fu_72539_p1() {
    mul_ln728_896_fu_72539_p1 = reg_17076.read();
}

void linear_forward_no_mu::thread_mul_ln728_896_fu_72539_p2() {
    mul_ln728_896_fu_72539_p2 = (!mul_ln728_896_fu_72539_p0.read().is_01() || !mul_ln728_896_fu_72539_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_896_fu_72539_p0.read()) * sc_bigint<8>(mul_ln728_896_fu_72539_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_897_fu_72564_p0() {
    mul_ln728_897_fu_72564_p0 = select_ln173_1795_reg_127933.read();
}

void linear_forward_no_mu::thread_mul_ln728_897_fu_72564_p1() {
    mul_ln728_897_fu_72564_p1 = reg_17080.read();
}

void linear_forward_no_mu::thread_mul_ln728_897_fu_72564_p2() {
    mul_ln728_897_fu_72564_p2 = (!mul_ln728_897_fu_72564_p0.read().is_01() || !mul_ln728_897_fu_72564_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_897_fu_72564_p0.read()) * sc_bigint<8>(mul_ln728_897_fu_72564_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_898_fu_72589_p0() {
    mul_ln728_898_fu_72589_p0 = select_ln173_1797_reg_127938.read();
}

void linear_forward_no_mu::thread_mul_ln728_898_fu_72589_p1() {
    mul_ln728_898_fu_72589_p1 = reg_17084.read();
}

void linear_forward_no_mu::thread_mul_ln728_898_fu_72589_p2() {
    mul_ln728_898_fu_72589_p2 = (!mul_ln728_898_fu_72589_p0.read().is_01() || !mul_ln728_898_fu_72589_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_898_fu_72589_p0.read()) * sc_bigint<8>(mul_ln728_898_fu_72589_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_899_fu_72614_p0() {
    mul_ln728_899_fu_72614_p0 = reg_17088.read();
}

void linear_forward_no_mu::thread_mul_ln728_899_fu_72614_p1() {
    mul_ln728_899_fu_72614_p1 = select_ln173_1799_reg_127943.read();
}

void linear_forward_no_mu::thread_mul_ln728_899_fu_72614_p2() {
    mul_ln728_899_fu_72614_p2 = (!mul_ln728_899_fu_72614_p0.read().is_01() || !mul_ln728_899_fu_72614_p1.read().is_01())? sc_lv<9>(): sc_bigint<8>(mul_ln728_899_fu_72614_p0.read()) * sc_bigint<2>(mul_ln728_899_fu_72614_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_89_fu_22777_p0() {
    mul_ln728_89_fu_22777_p0 = select_ln173_179_reg_120608.read();
}

void linear_forward_no_mu::thread_mul_ln728_89_fu_22777_p1() {
    mul_ln728_89_fu_22777_p1 = reg_17080.read();
}

void linear_forward_no_mu::thread_mul_ln728_89_fu_22777_p2() {
    mul_ln728_89_fu_22777_p2 = (!mul_ln728_89_fu_22777_p0.read().is_01() || !mul_ln728_89_fu_22777_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_89_fu_22777_p0.read()) * sc_bigint<8>(mul_ln728_89_fu_22777_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_8_fu_17859_p0() {
    mul_ln728_8_fu_17859_p0 = select_ln173_17_reg_119828.read();
}

void linear_forward_no_mu::thread_mul_ln728_8_fu_17859_p1() {
    mul_ln728_8_fu_17859_p1 = reg_17076.read();
}

void linear_forward_no_mu::thread_mul_ln728_8_fu_17859_p2() {
    mul_ln728_8_fu_17859_p2 = (!mul_ln728_8_fu_17859_p0.read().is_01() || !mul_ln728_8_fu_17859_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_8_fu_17859_p0.read()) * sc_bigint<8>(mul_ln728_8_fu_17859_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_900_fu_72639_p0() {
    mul_ln728_900_fu_72639_p0 = select_ln173_1801_reg_127948.read();
}

void linear_forward_no_mu::thread_mul_ln728_900_fu_72639_p1() {
    mul_ln728_900_fu_72639_p1 = reg_17092.read();
}

void linear_forward_no_mu::thread_mul_ln728_900_fu_72639_p2() {
    mul_ln728_900_fu_72639_p2 = (!mul_ln728_900_fu_72639_p0.read().is_01() || !mul_ln728_900_fu_72639_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_900_fu_72639_p0.read()) * sc_bigint<8>(mul_ln728_900_fu_72639_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_901_fu_72687_p0() {
    mul_ln728_901_fu_72687_p0 = select_ln173_1803_fu_72671_p3.read();
}

void linear_forward_no_mu::thread_mul_ln728_901_fu_72687_p1() {
    mul_ln728_901_fu_72687_p1 = reg_17096.read();
}

void linear_forward_no_mu::thread_mul_ln728_901_fu_72687_p2() {
    mul_ln728_901_fu_72687_p2 = (!mul_ln728_901_fu_72687_p0.read().is_01() || !mul_ln728_901_fu_72687_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_901_fu_72687_p0.read()) * sc_bigint<8>(mul_ln728_901_fu_72687_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_902_fu_72723_p0() {
    mul_ln728_902_fu_72723_p0 = select_ln173_1805_fu_72707_p3.read();
}

void linear_forward_no_mu::thread_mul_ln728_902_fu_72723_p1() {
    mul_ln728_902_fu_72723_p1 = reg_17100.read();
}

void linear_forward_no_mu::thread_mul_ln728_902_fu_72723_p2() {
    mul_ln728_902_fu_72723_p2 = (!mul_ln728_902_fu_72723_p0.read().is_01() || !mul_ln728_902_fu_72723_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_902_fu_72723_p0.read()) * sc_bigint<8>(mul_ln728_902_fu_72723_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_903_fu_72736_p0() {
    mul_ln728_903_fu_72736_p0 = reg_17104.read();
}

void linear_forward_no_mu::thread_mul_ln728_903_fu_72736_p1() {
    mul_ln728_903_fu_72736_p1 = select_ln173_1807_reg_127953.read();
}

void linear_forward_no_mu::thread_mul_ln728_903_fu_72736_p2() {
    mul_ln728_903_fu_72736_p2 = (!mul_ln728_903_fu_72736_p0.read().is_01() || !mul_ln728_903_fu_72736_p1.read().is_01())? sc_lv<9>(): sc_bigint<8>(mul_ln728_903_fu_72736_p0.read()) * sc_bigint<2>(mul_ln728_903_fu_72736_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_904_fu_73051_p0() {
    mul_ln728_904_fu_73051_p0 = select_ln173_1809_reg_127998.read();
}

void linear_forward_no_mu::thread_mul_ln728_904_fu_73051_p1() {
    mul_ln728_904_fu_73051_p1 = reg_17076.read();
}

void linear_forward_no_mu::thread_mul_ln728_904_fu_73051_p2() {
    mul_ln728_904_fu_73051_p2 = (!mul_ln728_904_fu_73051_p0.read().is_01() || !mul_ln728_904_fu_73051_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_904_fu_73051_p0.read()) * sc_bigint<8>(mul_ln728_904_fu_73051_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_905_fu_73076_p0() {
    mul_ln728_905_fu_73076_p0 = select_ln173_1811_reg_128003.read();
}

void linear_forward_no_mu::thread_mul_ln728_905_fu_73076_p1() {
    mul_ln728_905_fu_73076_p1 = reg_17080.read();
}

void linear_forward_no_mu::thread_mul_ln728_905_fu_73076_p2() {
    mul_ln728_905_fu_73076_p2 = (!mul_ln728_905_fu_73076_p0.read().is_01() || !mul_ln728_905_fu_73076_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_905_fu_73076_p0.read()) * sc_bigint<8>(mul_ln728_905_fu_73076_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_906_fu_73101_p0() {
    mul_ln728_906_fu_73101_p0 = select_ln173_1813_reg_128008.read();
}

void linear_forward_no_mu::thread_mul_ln728_906_fu_73101_p1() {
    mul_ln728_906_fu_73101_p1 = reg_17084.read();
}

void linear_forward_no_mu::thread_mul_ln728_906_fu_73101_p2() {
    mul_ln728_906_fu_73101_p2 = (!mul_ln728_906_fu_73101_p0.read().is_01() || !mul_ln728_906_fu_73101_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_906_fu_73101_p0.read()) * sc_bigint<8>(mul_ln728_906_fu_73101_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_907_fu_73126_p0() {
    mul_ln728_907_fu_73126_p0 = reg_17088.read();
}

void linear_forward_no_mu::thread_mul_ln728_907_fu_73126_p1() {
    mul_ln728_907_fu_73126_p1 = select_ln173_1815_reg_128013.read();
}

void linear_forward_no_mu::thread_mul_ln728_907_fu_73126_p2() {
    mul_ln728_907_fu_73126_p2 = (!mul_ln728_907_fu_73126_p0.read().is_01() || !mul_ln728_907_fu_73126_p1.read().is_01())? sc_lv<9>(): sc_bigint<8>(mul_ln728_907_fu_73126_p0.read()) * sc_bigint<2>(mul_ln728_907_fu_73126_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_908_fu_73151_p0() {
    mul_ln728_908_fu_73151_p0 = select_ln173_1817_reg_128018.read();
}

void linear_forward_no_mu::thread_mul_ln728_908_fu_73151_p1() {
    mul_ln728_908_fu_73151_p1 = reg_17092.read();
}

void linear_forward_no_mu::thread_mul_ln728_908_fu_73151_p2() {
    mul_ln728_908_fu_73151_p2 = (!mul_ln728_908_fu_73151_p0.read().is_01() || !mul_ln728_908_fu_73151_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_908_fu_73151_p0.read()) * sc_bigint<8>(mul_ln728_908_fu_73151_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_909_fu_73176_p0() {
    mul_ln728_909_fu_73176_p0 = select_ln173_1819_reg_128023.read();
}

void linear_forward_no_mu::thread_mul_ln728_909_fu_73176_p1() {
    mul_ln728_909_fu_73176_p1 = reg_17096.read();
}

void linear_forward_no_mu::thread_mul_ln728_909_fu_73176_p2() {
    mul_ln728_909_fu_73176_p2 = (!mul_ln728_909_fu_73176_p0.read().is_01() || !mul_ln728_909_fu_73176_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_909_fu_73176_p0.read()) * sc_bigint<8>(mul_ln728_909_fu_73176_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_90_fu_22802_p0() {
    mul_ln728_90_fu_22802_p0 = select_ln173_181_reg_120613.read();
}

void linear_forward_no_mu::thread_mul_ln728_90_fu_22802_p1() {
    mul_ln728_90_fu_22802_p1 = reg_17084.read();
}

void linear_forward_no_mu::thread_mul_ln728_90_fu_22802_p2() {
    mul_ln728_90_fu_22802_p2 = (!mul_ln728_90_fu_22802_p0.read().is_01() || !mul_ln728_90_fu_22802_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_90_fu_22802_p0.read()) * sc_bigint<8>(mul_ln728_90_fu_22802_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_910_fu_73224_p0() {
    mul_ln728_910_fu_73224_p0 = select_ln173_1821_fu_73208_p3.read();
}

void linear_forward_no_mu::thread_mul_ln728_910_fu_73224_p1() {
    mul_ln728_910_fu_73224_p1 = reg_17100.read();
}

void linear_forward_no_mu::thread_mul_ln728_910_fu_73224_p2() {
    mul_ln728_910_fu_73224_p2 = (!mul_ln728_910_fu_73224_p0.read().is_01() || !mul_ln728_910_fu_73224_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_910_fu_73224_p0.read()) * sc_bigint<8>(mul_ln728_910_fu_73224_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_911_fu_73237_p0() {
    mul_ln728_911_fu_73237_p0 = reg_17104.read();
}

void linear_forward_no_mu::thread_mul_ln728_911_fu_73237_p1() {
    mul_ln728_911_fu_73237_p1 = select_ln173_1823_reg_128028.read();
}

void linear_forward_no_mu::thread_mul_ln728_911_fu_73237_p2() {
    mul_ln728_911_fu_73237_p2 = (!mul_ln728_911_fu_73237_p0.read().is_01() || !mul_ln728_911_fu_73237_p1.read().is_01())? sc_lv<9>(): sc_bigint<8>(mul_ln728_911_fu_73237_p0.read()) * sc_bigint<2>(mul_ln728_911_fu_73237_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_912_fu_73548_p0() {
    mul_ln728_912_fu_73548_p0 = select_ln173_1825_reg_128063.read();
}

void linear_forward_no_mu::thread_mul_ln728_912_fu_73548_p1() {
    mul_ln728_912_fu_73548_p1 = reg_17076.read();
}

void linear_forward_no_mu::thread_mul_ln728_912_fu_73548_p2() {
    mul_ln728_912_fu_73548_p2 = (!mul_ln728_912_fu_73548_p0.read().is_01() || !mul_ln728_912_fu_73548_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_912_fu_73548_p0.read()) * sc_bigint<8>(mul_ln728_912_fu_73548_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_913_fu_73573_p0() {
    mul_ln728_913_fu_73573_p0 = select_ln173_1827_reg_128068.read();
}

void linear_forward_no_mu::thread_mul_ln728_913_fu_73573_p1() {
    mul_ln728_913_fu_73573_p1 = reg_17080.read();
}

void linear_forward_no_mu::thread_mul_ln728_913_fu_73573_p2() {
    mul_ln728_913_fu_73573_p2 = (!mul_ln728_913_fu_73573_p0.read().is_01() || !mul_ln728_913_fu_73573_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_913_fu_73573_p0.read()) * sc_bigint<8>(mul_ln728_913_fu_73573_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_914_fu_73598_p0() {
    mul_ln728_914_fu_73598_p0 = select_ln173_1829_reg_128073.read();
}

void linear_forward_no_mu::thread_mul_ln728_914_fu_73598_p1() {
    mul_ln728_914_fu_73598_p1 = reg_17084.read();
}

void linear_forward_no_mu::thread_mul_ln728_914_fu_73598_p2() {
    mul_ln728_914_fu_73598_p2 = (!mul_ln728_914_fu_73598_p0.read().is_01() || !mul_ln728_914_fu_73598_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_914_fu_73598_p0.read()) * sc_bigint<8>(mul_ln728_914_fu_73598_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_915_fu_73623_p0() {
    mul_ln728_915_fu_73623_p0 = reg_17088.read();
}

void linear_forward_no_mu::thread_mul_ln728_915_fu_73623_p1() {
    mul_ln728_915_fu_73623_p1 = select_ln173_1831_reg_128078.read();
}

void linear_forward_no_mu::thread_mul_ln728_915_fu_73623_p2() {
    mul_ln728_915_fu_73623_p2 = (!mul_ln728_915_fu_73623_p0.read().is_01() || !mul_ln728_915_fu_73623_p1.read().is_01())? sc_lv<9>(): sc_bigint<8>(mul_ln728_915_fu_73623_p0.read()) * sc_bigint<2>(mul_ln728_915_fu_73623_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_916_fu_73648_p0() {
    mul_ln728_916_fu_73648_p0 = select_ln173_1833_reg_128083.read();
}

void linear_forward_no_mu::thread_mul_ln728_916_fu_73648_p1() {
    mul_ln728_916_fu_73648_p1 = reg_17092.read();
}

void linear_forward_no_mu::thread_mul_ln728_916_fu_73648_p2() {
    mul_ln728_916_fu_73648_p2 = (!mul_ln728_916_fu_73648_p0.read().is_01() || !mul_ln728_916_fu_73648_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_916_fu_73648_p0.read()) * sc_bigint<8>(mul_ln728_916_fu_73648_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_917_fu_73673_p0() {
    mul_ln728_917_fu_73673_p0 = select_ln173_1835_reg_128088.read();
}

void linear_forward_no_mu::thread_mul_ln728_917_fu_73673_p1() {
    mul_ln728_917_fu_73673_p1 = reg_17096.read();
}

void linear_forward_no_mu::thread_mul_ln728_917_fu_73673_p2() {
    mul_ln728_917_fu_73673_p2 = (!mul_ln728_917_fu_73673_p0.read().is_01() || !mul_ln728_917_fu_73673_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_917_fu_73673_p0.read()) * sc_bigint<8>(mul_ln728_917_fu_73673_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_918_fu_73698_p0() {
    mul_ln728_918_fu_73698_p0 = select_ln173_1837_reg_128093.read();
}

void linear_forward_no_mu::thread_mul_ln728_918_fu_73698_p1() {
    mul_ln728_918_fu_73698_p1 = reg_17100.read();
}

void linear_forward_no_mu::thread_mul_ln728_918_fu_73698_p2() {
    mul_ln728_918_fu_73698_p2 = (!mul_ln728_918_fu_73698_p0.read().is_01() || !mul_ln728_918_fu_73698_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_918_fu_73698_p0.read()) * sc_bigint<8>(mul_ln728_918_fu_73698_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_919_fu_73723_p0() {
    mul_ln728_919_fu_73723_p0 = reg_17104.read();
}

void linear_forward_no_mu::thread_mul_ln728_919_fu_73723_p1() {
    mul_ln728_919_fu_73723_p1 = select_ln173_1839_reg_128098.read();
}

void linear_forward_no_mu::thread_mul_ln728_919_fu_73723_p2() {
    mul_ln728_919_fu_73723_p2 = (!mul_ln728_919_fu_73723_p0.read().is_01() || !mul_ln728_919_fu_73723_p1.read().is_01())? sc_lv<9>(): sc_bigint<8>(mul_ln728_919_fu_73723_p0.read()) * sc_bigint<2>(mul_ln728_919_fu_73723_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_91_fu_22827_p0() {
    mul_ln728_91_fu_22827_p0 = reg_17088.read();
}

void linear_forward_no_mu::thread_mul_ln728_91_fu_22827_p1() {
    mul_ln728_91_fu_22827_p1 = select_ln173_183_reg_120618.read();
}

void linear_forward_no_mu::thread_mul_ln728_91_fu_22827_p2() {
    mul_ln728_91_fu_22827_p2 = (!mul_ln728_91_fu_22827_p0.read().is_01() || !mul_ln728_91_fu_22827_p1.read().is_01())? sc_lv<9>(): sc_bigint<8>(mul_ln728_91_fu_22827_p0.read()) * sc_bigint<2>(mul_ln728_91_fu_22827_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_920_fu_74006_p0() {
    mul_ln728_920_fu_74006_p0 = select_ln173_1841_reg_128133.read();
}

void linear_forward_no_mu::thread_mul_ln728_920_fu_74006_p1() {
    mul_ln728_920_fu_74006_p1 = reg_17076.read();
}

void linear_forward_no_mu::thread_mul_ln728_920_fu_74006_p2() {
    mul_ln728_920_fu_74006_p2 = (!mul_ln728_920_fu_74006_p0.read().is_01() || !mul_ln728_920_fu_74006_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_920_fu_74006_p0.read()) * sc_bigint<8>(mul_ln728_920_fu_74006_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_921_fu_74031_p0() {
    mul_ln728_921_fu_74031_p0 = select_ln173_1843_reg_128138.read();
}

void linear_forward_no_mu::thread_mul_ln728_921_fu_74031_p1() {
    mul_ln728_921_fu_74031_p1 = reg_17080.read();
}

void linear_forward_no_mu::thread_mul_ln728_921_fu_74031_p2() {
    mul_ln728_921_fu_74031_p2 = (!mul_ln728_921_fu_74031_p0.read().is_01() || !mul_ln728_921_fu_74031_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_921_fu_74031_p0.read()) * sc_bigint<8>(mul_ln728_921_fu_74031_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_922_fu_74056_p0() {
    mul_ln728_922_fu_74056_p0 = select_ln173_1845_reg_128143.read();
}

void linear_forward_no_mu::thread_mul_ln728_922_fu_74056_p1() {
    mul_ln728_922_fu_74056_p1 = reg_17084.read();
}

void linear_forward_no_mu::thread_mul_ln728_922_fu_74056_p2() {
    mul_ln728_922_fu_74056_p2 = (!mul_ln728_922_fu_74056_p0.read().is_01() || !mul_ln728_922_fu_74056_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_922_fu_74056_p0.read()) * sc_bigint<8>(mul_ln728_922_fu_74056_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_923_fu_74081_p0() {
    mul_ln728_923_fu_74081_p0 = reg_17088.read();
}

void linear_forward_no_mu::thread_mul_ln728_923_fu_74081_p1() {
    mul_ln728_923_fu_74081_p1 = select_ln173_1847_reg_128148.read();
}

void linear_forward_no_mu::thread_mul_ln728_923_fu_74081_p2() {
    mul_ln728_923_fu_74081_p2 = (!mul_ln728_923_fu_74081_p0.read().is_01() || !mul_ln728_923_fu_74081_p1.read().is_01())? sc_lv<9>(): sc_bigint<8>(mul_ln728_923_fu_74081_p0.read()) * sc_bigint<2>(mul_ln728_923_fu_74081_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_924_fu_74106_p0() {
    mul_ln728_924_fu_74106_p0 = select_ln173_1849_reg_128153.read();
}

void linear_forward_no_mu::thread_mul_ln728_924_fu_74106_p1() {
    mul_ln728_924_fu_74106_p1 = reg_17092.read();
}

void linear_forward_no_mu::thread_mul_ln728_924_fu_74106_p2() {
    mul_ln728_924_fu_74106_p2 = (!mul_ln728_924_fu_74106_p0.read().is_01() || !mul_ln728_924_fu_74106_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_924_fu_74106_p0.read()) * sc_bigint<8>(mul_ln728_924_fu_74106_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_925_fu_74154_p0() {
    mul_ln728_925_fu_74154_p0 = select_ln173_1851_fu_74138_p3.read();
}

void linear_forward_no_mu::thread_mul_ln728_925_fu_74154_p1() {
    mul_ln728_925_fu_74154_p1 = reg_17096.read();
}

void linear_forward_no_mu::thread_mul_ln728_925_fu_74154_p2() {
    mul_ln728_925_fu_74154_p2 = (!mul_ln728_925_fu_74154_p0.read().is_01() || !mul_ln728_925_fu_74154_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_925_fu_74154_p0.read()) * sc_bigint<8>(mul_ln728_925_fu_74154_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_926_fu_74190_p0() {
    mul_ln728_926_fu_74190_p0 = select_ln173_1853_fu_74174_p3.read();
}

void linear_forward_no_mu::thread_mul_ln728_926_fu_74190_p1() {
    mul_ln728_926_fu_74190_p1 = reg_17100.read();
}

void linear_forward_no_mu::thread_mul_ln728_926_fu_74190_p2() {
    mul_ln728_926_fu_74190_p2 = (!mul_ln728_926_fu_74190_p0.read().is_01() || !mul_ln728_926_fu_74190_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_926_fu_74190_p0.read()) * sc_bigint<8>(mul_ln728_926_fu_74190_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_927_fu_74203_p0() {
    mul_ln728_927_fu_74203_p0 = reg_17104.read();
}

void linear_forward_no_mu::thread_mul_ln728_927_fu_74203_p1() {
    mul_ln728_927_fu_74203_p1 = select_ln173_1855_reg_128158.read();
}

void linear_forward_no_mu::thread_mul_ln728_927_fu_74203_p2() {
    mul_ln728_927_fu_74203_p2 = (!mul_ln728_927_fu_74203_p0.read().is_01() || !mul_ln728_927_fu_74203_p1.read().is_01())? sc_lv<9>(): sc_bigint<8>(mul_ln728_927_fu_74203_p0.read()) * sc_bigint<2>(mul_ln728_927_fu_74203_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_928_fu_74529_p0() {
    mul_ln728_928_fu_74529_p0 = select_ln173_1857_reg_128203.read();
}

void linear_forward_no_mu::thread_mul_ln728_928_fu_74529_p1() {
    mul_ln728_928_fu_74529_p1 = reg_17076.read();
}

void linear_forward_no_mu::thread_mul_ln728_928_fu_74529_p2() {
    mul_ln728_928_fu_74529_p2 = (!mul_ln728_928_fu_74529_p0.read().is_01() || !mul_ln728_928_fu_74529_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_928_fu_74529_p0.read()) * sc_bigint<8>(mul_ln728_928_fu_74529_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_929_fu_74554_p0() {
    mul_ln728_929_fu_74554_p0 = select_ln173_1859_reg_128208.read();
}

void linear_forward_no_mu::thread_mul_ln728_929_fu_74554_p1() {
    mul_ln728_929_fu_74554_p1 = reg_17080.read();
}

void linear_forward_no_mu::thread_mul_ln728_929_fu_74554_p2() {
    mul_ln728_929_fu_74554_p2 = (!mul_ln728_929_fu_74554_p0.read().is_01() || !mul_ln728_929_fu_74554_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_929_fu_74554_p0.read()) * sc_bigint<8>(mul_ln728_929_fu_74554_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_92_fu_22852_p0() {
    mul_ln728_92_fu_22852_p0 = select_ln173_185_reg_120623.read();
}

void linear_forward_no_mu::thread_mul_ln728_92_fu_22852_p1() {
    mul_ln728_92_fu_22852_p1 = reg_17092.read();
}

void linear_forward_no_mu::thread_mul_ln728_92_fu_22852_p2() {
    mul_ln728_92_fu_22852_p2 = (!mul_ln728_92_fu_22852_p0.read().is_01() || !mul_ln728_92_fu_22852_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_92_fu_22852_p0.read()) * sc_bigint<8>(mul_ln728_92_fu_22852_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_930_fu_74579_p0() {
    mul_ln728_930_fu_74579_p0 = select_ln173_1861_reg_128213.read();
}

void linear_forward_no_mu::thread_mul_ln728_930_fu_74579_p1() {
    mul_ln728_930_fu_74579_p1 = reg_17084.read();
}

void linear_forward_no_mu::thread_mul_ln728_930_fu_74579_p2() {
    mul_ln728_930_fu_74579_p2 = (!mul_ln728_930_fu_74579_p0.read().is_01() || !mul_ln728_930_fu_74579_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_930_fu_74579_p0.read()) * sc_bigint<8>(mul_ln728_930_fu_74579_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_931_fu_74604_p0() {
    mul_ln728_931_fu_74604_p0 = reg_17088.read();
}

void linear_forward_no_mu::thread_mul_ln728_931_fu_74604_p1() {
    mul_ln728_931_fu_74604_p1 = select_ln173_1863_reg_128218.read();
}

void linear_forward_no_mu::thread_mul_ln728_931_fu_74604_p2() {
    mul_ln728_931_fu_74604_p2 = (!mul_ln728_931_fu_74604_p0.read().is_01() || !mul_ln728_931_fu_74604_p1.read().is_01())? sc_lv<9>(): sc_bigint<8>(mul_ln728_931_fu_74604_p0.read()) * sc_bigint<2>(mul_ln728_931_fu_74604_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_932_fu_74629_p0() {
    mul_ln728_932_fu_74629_p0 = select_ln173_1865_reg_128223.read();
}

void linear_forward_no_mu::thread_mul_ln728_932_fu_74629_p1() {
    mul_ln728_932_fu_74629_p1 = reg_17092.read();
}

void linear_forward_no_mu::thread_mul_ln728_932_fu_74629_p2() {
    mul_ln728_932_fu_74629_p2 = (!mul_ln728_932_fu_74629_p0.read().is_01() || !mul_ln728_932_fu_74629_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_932_fu_74629_p0.read()) * sc_bigint<8>(mul_ln728_932_fu_74629_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_933_fu_74654_p0() {
    mul_ln728_933_fu_74654_p0 = select_ln173_1867_reg_128228.read();
}

void linear_forward_no_mu::thread_mul_ln728_933_fu_74654_p1() {
    mul_ln728_933_fu_74654_p1 = reg_17096.read();
}

void linear_forward_no_mu::thread_mul_ln728_933_fu_74654_p2() {
    mul_ln728_933_fu_74654_p2 = (!mul_ln728_933_fu_74654_p0.read().is_01() || !mul_ln728_933_fu_74654_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_933_fu_74654_p0.read()) * sc_bigint<8>(mul_ln728_933_fu_74654_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_934_fu_74702_p0() {
    mul_ln728_934_fu_74702_p0 = select_ln173_1869_fu_74686_p3.read();
}

void linear_forward_no_mu::thread_mul_ln728_934_fu_74702_p1() {
    mul_ln728_934_fu_74702_p1 = reg_17100.read();
}

void linear_forward_no_mu::thread_mul_ln728_934_fu_74702_p2() {
    mul_ln728_934_fu_74702_p2 = (!mul_ln728_934_fu_74702_p0.read().is_01() || !mul_ln728_934_fu_74702_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_934_fu_74702_p0.read()) * sc_bigint<8>(mul_ln728_934_fu_74702_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_935_fu_74715_p0() {
    mul_ln728_935_fu_74715_p0 = reg_17104.read();
}

void linear_forward_no_mu::thread_mul_ln728_935_fu_74715_p1() {
    mul_ln728_935_fu_74715_p1 = select_ln173_1871_reg_128233.read();
}

void linear_forward_no_mu::thread_mul_ln728_935_fu_74715_p2() {
    mul_ln728_935_fu_74715_p2 = (!mul_ln728_935_fu_74715_p0.read().is_01() || !mul_ln728_935_fu_74715_p1.read().is_01())? sc_lv<9>(): sc_bigint<8>(mul_ln728_935_fu_74715_p0.read()) * sc_bigint<2>(mul_ln728_935_fu_74715_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_936_fu_75027_p0() {
    mul_ln728_936_fu_75027_p0 = select_ln173_1873_reg_128273.read();
}

void linear_forward_no_mu::thread_mul_ln728_936_fu_75027_p1() {
    mul_ln728_936_fu_75027_p1 = reg_17076.read();
}

void linear_forward_no_mu::thread_mul_ln728_936_fu_75027_p2() {
    mul_ln728_936_fu_75027_p2 = (!mul_ln728_936_fu_75027_p0.read().is_01() || !mul_ln728_936_fu_75027_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_936_fu_75027_p0.read()) * sc_bigint<8>(mul_ln728_936_fu_75027_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_937_fu_75052_p0() {
    mul_ln728_937_fu_75052_p0 = select_ln173_1875_reg_128278.read();
}

void linear_forward_no_mu::thread_mul_ln728_937_fu_75052_p1() {
    mul_ln728_937_fu_75052_p1 = reg_17080.read();
}

void linear_forward_no_mu::thread_mul_ln728_937_fu_75052_p2() {
    mul_ln728_937_fu_75052_p2 = (!mul_ln728_937_fu_75052_p0.read().is_01() || !mul_ln728_937_fu_75052_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_937_fu_75052_p0.read()) * sc_bigint<8>(mul_ln728_937_fu_75052_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_938_fu_75077_p0() {
    mul_ln728_938_fu_75077_p0 = select_ln173_1877_reg_128283.read();
}

void linear_forward_no_mu::thread_mul_ln728_938_fu_75077_p1() {
    mul_ln728_938_fu_75077_p1 = reg_17084.read();
}

void linear_forward_no_mu::thread_mul_ln728_938_fu_75077_p2() {
    mul_ln728_938_fu_75077_p2 = (!mul_ln728_938_fu_75077_p0.read().is_01() || !mul_ln728_938_fu_75077_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_938_fu_75077_p0.read()) * sc_bigint<8>(mul_ln728_938_fu_75077_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_939_fu_75102_p0() {
    mul_ln728_939_fu_75102_p0 = reg_17088.read();
}

void linear_forward_no_mu::thread_mul_ln728_939_fu_75102_p1() {
    mul_ln728_939_fu_75102_p1 = select_ln173_1879_reg_128288.read();
}

void linear_forward_no_mu::thread_mul_ln728_939_fu_75102_p2() {
    mul_ln728_939_fu_75102_p2 = (!mul_ln728_939_fu_75102_p0.read().is_01() || !mul_ln728_939_fu_75102_p1.read().is_01())? sc_lv<9>(): sc_bigint<8>(mul_ln728_939_fu_75102_p0.read()) * sc_bigint<2>(mul_ln728_939_fu_75102_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_93_fu_22877_p0() {
    mul_ln728_93_fu_22877_p0 = select_ln173_187_reg_120628.read();
}

void linear_forward_no_mu::thread_mul_ln728_93_fu_22877_p1() {
    mul_ln728_93_fu_22877_p1 = reg_17096.read();
}

void linear_forward_no_mu::thread_mul_ln728_93_fu_22877_p2() {
    mul_ln728_93_fu_22877_p2 = (!mul_ln728_93_fu_22877_p0.read().is_01() || !mul_ln728_93_fu_22877_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_93_fu_22877_p0.read()) * sc_bigint<8>(mul_ln728_93_fu_22877_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_940_fu_75127_p0() {
    mul_ln728_940_fu_75127_p0 = select_ln173_1881_reg_128293.read();
}

void linear_forward_no_mu::thread_mul_ln728_940_fu_75127_p1() {
    mul_ln728_940_fu_75127_p1 = reg_17092.read();
}

void linear_forward_no_mu::thread_mul_ln728_940_fu_75127_p2() {
    mul_ln728_940_fu_75127_p2 = (!mul_ln728_940_fu_75127_p0.read().is_01() || !mul_ln728_940_fu_75127_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_940_fu_75127_p0.read()) * sc_bigint<8>(mul_ln728_940_fu_75127_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_941_fu_75152_p0() {
    mul_ln728_941_fu_75152_p0 = select_ln173_1883_reg_128298.read();
}

void linear_forward_no_mu::thread_mul_ln728_941_fu_75152_p1() {
    mul_ln728_941_fu_75152_p1 = reg_17096.read();
}

void linear_forward_no_mu::thread_mul_ln728_941_fu_75152_p2() {
    mul_ln728_941_fu_75152_p2 = (!mul_ln728_941_fu_75152_p0.read().is_01() || !mul_ln728_941_fu_75152_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_941_fu_75152_p0.read()) * sc_bigint<8>(mul_ln728_941_fu_75152_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_942_fu_75177_p0() {
    mul_ln728_942_fu_75177_p0 = select_ln173_1885_reg_128303.read();
}

void linear_forward_no_mu::thread_mul_ln728_942_fu_75177_p1() {
    mul_ln728_942_fu_75177_p1 = reg_17100.read();
}

void linear_forward_no_mu::thread_mul_ln728_942_fu_75177_p2() {
    mul_ln728_942_fu_75177_p2 = (!mul_ln728_942_fu_75177_p0.read().is_01() || !mul_ln728_942_fu_75177_p1.read().is_01())? sc_lv<9>(): sc_bigint<2>(mul_ln728_942_fu_75177_p0.read()) * sc_bigint<8>(mul_ln728_942_fu_75177_p1.read());
}

void linear_forward_no_mu::thread_mul_ln728_943_fu_75202_p0() {
    mul_ln728_943_fu_75202_p0 = reg_17104.read();
}

}


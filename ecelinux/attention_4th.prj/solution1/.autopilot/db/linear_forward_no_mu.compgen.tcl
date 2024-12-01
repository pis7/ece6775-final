# This script segment is generated automatically by AutoPilot

set id 78
set name dut_sdiv_72ns_61sfYi
set corename simcore_sdiv
set op sdiv
set stage_num 76
set max_latency -1
set registered_input 1
set clk_width 1
set clk_signed 0
set reset_width 1
set reset_signed 0
set in0_width 72
set in0_signed 0
set in1_width 61
set in1_signed 1
set ce_width 1
set ce_signed 0
set out_width 40
if {${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_sdiv] == "ap_gen_simcore_sdiv"} {
eval "ap_gen_simcore_sdiv { \
    id ${id} \
    name ${name} \
    corename ${corename} \
    op ${op} \
    reset_level 1 \
    sync_rst true \
    stage_num ${stage_num} \
    max_latency ${max_latency} \
    registered_input ${registered_input} \
    clk_width ${clk_width} \
    clk_signed ${clk_signed} \
    reset_width ${reset_width} \
    reset_signed ${reset_signed} \
    in0_width ${in0_width} \
    in0_signed ${in0_signed} \
    in1_width ${in1_width} \
    in1_signed ${in1_signed} \
    ce_width ${ce_width} \
    ce_signed ${ce_signed} \
    out_width ${out_width} \
}"
} else {
puts "@W \[IMPL-100\] Cannot find ap_gen_simcore_sdiv, check your AutoPilot builtin lib"
}
}


if {${::AESL::PGuard_rtl_comp_handler}} {
	::AP::rtl_comp_handler ${name}
}


set op sdiv
set corename DivnS
if {${::AESL::PGuard_autocg_gen} && ${::AESL::PGuard_autocg_ipmgen}} {
if {[info proc ::AESL_LIB_VIRTEX::xil_gen_div] == "::AESL_LIB_VIRTEX::xil_gen_div"} {
eval "::AESL_LIB_VIRTEX::xil_gen_div { \
    id ${id} \
    name ${name} \
    corename ${corename} \
    op ${op} \
    reset_level 1 \
    sync_rst true \
    stage_num ${stage_num} \
    max_latency ${max_latency} \
    registered_input ${registered_input} \
    clk_width ${clk_width} \
    clk_signed ${clk_signed} \
    reset_width ${reset_width} \
    reset_signed ${reset_signed} \
    in0_width ${in0_width} \
    in0_signed ${in0_signed} \
    in1_width ${in1_width} \
    in1_signed ${in1_signed} \
    ce_width ${ce_width} \
    ce_signed ${ce_signed} \
    out_width ${out_width} \
}"
} else {
puts "@W \[IMPL-101\] Cannot find ::AESL_LIB_VIRTEX::xil_gen_div, check your platform lib"
}
}


# clear list
if {${::AESL::PGuard_autoexp_gen}} {
    cg_default_interface_gen_dc_begin
    cg_default_interface_gen_bundle_begin
    AESL_LIB_XILADAPTER::native_axis_begin
}

# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 80 \
    name input_0_0_0_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename input_0_0_0_V \
    op interface \
    ports { input_0_0_0_V_address0 { O 3 vector } input_0_0_0_V_ce0 { O 1 bit } input_0_0_0_V_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'input_0_0_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 81 \
    name input_0_1_0_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename input_0_1_0_V \
    op interface \
    ports { input_0_1_0_V_address0 { O 3 vector } input_0_1_0_V_ce0 { O 1 bit } input_0_1_0_V_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'input_0_1_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 82 \
    name input_0_2_0_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename input_0_2_0_V \
    op interface \
    ports { input_0_2_0_V_address0 { O 3 vector } input_0_2_0_V_ce0 { O 1 bit } input_0_2_0_V_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'input_0_2_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 83 \
    name input_0_3_0_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename input_0_3_0_V \
    op interface \
    ports { input_0_3_0_V_address0 { O 3 vector } input_0_3_0_V_ce0 { O 1 bit } input_0_3_0_V_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'input_0_3_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 84 \
    name input_1_0_0_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename input_1_0_0_V \
    op interface \
    ports { input_1_0_0_V_address0 { O 3 vector } input_1_0_0_V_ce0 { O 1 bit } input_1_0_0_V_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'input_1_0_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 85 \
    name input_1_1_0_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename input_1_1_0_V \
    op interface \
    ports { input_1_1_0_V_address0 { O 3 vector } input_1_1_0_V_ce0 { O 1 bit } input_1_1_0_V_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'input_1_1_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 86 \
    name input_1_2_0_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename input_1_2_0_V \
    op interface \
    ports { input_1_2_0_V_address0 { O 3 vector } input_1_2_0_V_ce0 { O 1 bit } input_1_2_0_V_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'input_1_2_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 87 \
    name input_1_3_0_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename input_1_3_0_V \
    op interface \
    ports { input_1_3_0_V_address0 { O 3 vector } input_1_3_0_V_ce0 { O 1 bit } input_1_3_0_V_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'input_1_3_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 88 \
    name input_2_0_0_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename input_2_0_0_V \
    op interface \
    ports { input_2_0_0_V_address0 { O 3 vector } input_2_0_0_V_ce0 { O 1 bit } input_2_0_0_V_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'input_2_0_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 89 \
    name input_2_1_0_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename input_2_1_0_V \
    op interface \
    ports { input_2_1_0_V_address0 { O 3 vector } input_2_1_0_V_ce0 { O 1 bit } input_2_1_0_V_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'input_2_1_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 90 \
    name input_2_2_0_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename input_2_2_0_V \
    op interface \
    ports { input_2_2_0_V_address0 { O 3 vector } input_2_2_0_V_ce0 { O 1 bit } input_2_2_0_V_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'input_2_2_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 91 \
    name input_2_3_0_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename input_2_3_0_V \
    op interface \
    ports { input_2_3_0_V_address0 { O 3 vector } input_2_3_0_V_ce0 { O 1 bit } input_2_3_0_V_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'input_2_3_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 92 \
    name input_3_0_0_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename input_3_0_0_V \
    op interface \
    ports { input_3_0_0_V_address0 { O 3 vector } input_3_0_0_V_ce0 { O 1 bit } input_3_0_0_V_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'input_3_0_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 93 \
    name input_3_1_0_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename input_3_1_0_V \
    op interface \
    ports { input_3_1_0_V_address0 { O 3 vector } input_3_1_0_V_ce0 { O 1 bit } input_3_1_0_V_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'input_3_1_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 94 \
    name input_3_2_0_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename input_3_2_0_V \
    op interface \
    ports { input_3_2_0_V_address0 { O 3 vector } input_3_2_0_V_ce0 { O 1 bit } input_3_2_0_V_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'input_3_2_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 95 \
    name input_3_3_0_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename input_3_3_0_V \
    op interface \
    ports { input_3_3_0_V_address0 { O 3 vector } input_3_3_0_V_ce0 { O 1 bit } input_3_3_0_V_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'input_3_3_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 96 \
    name input_4_0_0_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename input_4_0_0_V \
    op interface \
    ports { input_4_0_0_V_address0 { O 3 vector } input_4_0_0_V_ce0 { O 1 bit } input_4_0_0_V_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'input_4_0_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 97 \
    name input_4_1_0_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename input_4_1_0_V \
    op interface \
    ports { input_4_1_0_V_address0 { O 3 vector } input_4_1_0_V_ce0 { O 1 bit } input_4_1_0_V_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'input_4_1_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 98 \
    name input_4_2_0_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename input_4_2_0_V \
    op interface \
    ports { input_4_2_0_V_address0 { O 3 vector } input_4_2_0_V_ce0 { O 1 bit } input_4_2_0_V_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'input_4_2_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 99 \
    name input_4_3_0_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename input_4_3_0_V \
    op interface \
    ports { input_4_3_0_V_address0 { O 3 vector } input_4_3_0_V_ce0 { O 1 bit } input_4_3_0_V_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'input_4_3_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 100 \
    name input_5_0_0_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename input_5_0_0_V \
    op interface \
    ports { input_5_0_0_V_address0 { O 3 vector } input_5_0_0_V_ce0 { O 1 bit } input_5_0_0_V_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'input_5_0_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 101 \
    name input_5_1_0_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename input_5_1_0_V \
    op interface \
    ports { input_5_1_0_V_address0 { O 3 vector } input_5_1_0_V_ce0 { O 1 bit } input_5_1_0_V_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'input_5_1_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 102 \
    name input_5_2_0_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename input_5_2_0_V \
    op interface \
    ports { input_5_2_0_V_address0 { O 3 vector } input_5_2_0_V_ce0 { O 1 bit } input_5_2_0_V_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'input_5_2_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 103 \
    name input_5_3_0_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename input_5_3_0_V \
    op interface \
    ports { input_5_3_0_V_address0 { O 3 vector } input_5_3_0_V_ce0 { O 1 bit } input_5_3_0_V_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'input_5_3_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 104 \
    name input_6_0_0_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename input_6_0_0_V \
    op interface \
    ports { input_6_0_0_V_address0 { O 3 vector } input_6_0_0_V_ce0 { O 1 bit } input_6_0_0_V_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'input_6_0_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 105 \
    name input_6_1_0_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename input_6_1_0_V \
    op interface \
    ports { input_6_1_0_V_address0 { O 3 vector } input_6_1_0_V_ce0 { O 1 bit } input_6_1_0_V_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'input_6_1_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 106 \
    name input_6_2_0_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename input_6_2_0_V \
    op interface \
    ports { input_6_2_0_V_address0 { O 3 vector } input_6_2_0_V_ce0 { O 1 bit } input_6_2_0_V_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'input_6_2_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 107 \
    name input_6_3_0_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename input_6_3_0_V \
    op interface \
    ports { input_6_3_0_V_address0 { O 3 vector } input_6_3_0_V_ce0 { O 1 bit } input_6_3_0_V_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'input_6_3_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 108 \
    name input_7_0_0_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename input_7_0_0_V \
    op interface \
    ports { input_7_0_0_V_address0 { O 3 vector } input_7_0_0_V_ce0 { O 1 bit } input_7_0_0_V_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'input_7_0_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 109 \
    name input_7_1_0_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename input_7_1_0_V \
    op interface \
    ports { input_7_1_0_V_address0 { O 3 vector } input_7_1_0_V_ce0 { O 1 bit } input_7_1_0_V_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'input_7_1_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 110 \
    name input_7_2_0_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename input_7_2_0_V \
    op interface \
    ports { input_7_2_0_V_address0 { O 3 vector } input_7_2_0_V_ce0 { O 1 bit } input_7_2_0_V_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'input_7_2_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 111 \
    name input_7_3_0_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename input_7_3_0_V \
    op interface \
    ports { input_7_3_0_V_address0 { O 3 vector } input_7_3_0_V_ce0 { O 1 bit } input_7_3_0_V_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'input_7_3_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 112 \
    name input_8_0_0_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename input_8_0_0_V \
    op interface \
    ports { input_8_0_0_V_address0 { O 3 vector } input_8_0_0_V_ce0 { O 1 bit } input_8_0_0_V_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'input_8_0_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 113 \
    name input_8_1_0_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename input_8_1_0_V \
    op interface \
    ports { input_8_1_0_V_address0 { O 3 vector } input_8_1_0_V_ce0 { O 1 bit } input_8_1_0_V_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'input_8_1_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 114 \
    name input_8_2_0_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename input_8_2_0_V \
    op interface \
    ports { input_8_2_0_V_address0 { O 3 vector } input_8_2_0_V_ce0 { O 1 bit } input_8_2_0_V_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'input_8_2_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 115 \
    name input_8_3_0_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename input_8_3_0_V \
    op interface \
    ports { input_8_3_0_V_address0 { O 3 vector } input_8_3_0_V_ce0 { O 1 bit } input_8_3_0_V_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'input_8_3_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 116 \
    name input_9_0_0_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename input_9_0_0_V \
    op interface \
    ports { input_9_0_0_V_address0 { O 3 vector } input_9_0_0_V_ce0 { O 1 bit } input_9_0_0_V_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'input_9_0_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 117 \
    name input_9_1_0_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename input_9_1_0_V \
    op interface \
    ports { input_9_1_0_V_address0 { O 3 vector } input_9_1_0_V_ce0 { O 1 bit } input_9_1_0_V_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'input_9_1_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 118 \
    name input_9_2_0_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename input_9_2_0_V \
    op interface \
    ports { input_9_2_0_V_address0 { O 3 vector } input_9_2_0_V_ce0 { O 1 bit } input_9_2_0_V_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'input_9_2_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 119 \
    name input_9_3_0_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename input_9_3_0_V \
    op interface \
    ports { input_9_3_0_V_address0 { O 3 vector } input_9_3_0_V_ce0 { O 1 bit } input_9_3_0_V_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'input_9_3_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 120 \
    name input_10_0_0_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename input_10_0_0_V \
    op interface \
    ports { input_10_0_0_V_address0 { O 3 vector } input_10_0_0_V_ce0 { O 1 bit } input_10_0_0_V_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'input_10_0_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 121 \
    name input_10_1_0_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename input_10_1_0_V \
    op interface \
    ports { input_10_1_0_V_address0 { O 3 vector } input_10_1_0_V_ce0 { O 1 bit } input_10_1_0_V_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'input_10_1_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 122 \
    name input_10_2_0_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename input_10_2_0_V \
    op interface \
    ports { input_10_2_0_V_address0 { O 3 vector } input_10_2_0_V_ce0 { O 1 bit } input_10_2_0_V_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'input_10_2_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 123 \
    name input_10_3_0_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename input_10_3_0_V \
    op interface \
    ports { input_10_3_0_V_address0 { O 3 vector } input_10_3_0_V_ce0 { O 1 bit } input_10_3_0_V_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'input_10_3_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 124 \
    name input_11_0_0_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename input_11_0_0_V \
    op interface \
    ports { input_11_0_0_V_address0 { O 3 vector } input_11_0_0_V_ce0 { O 1 bit } input_11_0_0_V_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'input_11_0_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 125 \
    name input_11_1_0_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename input_11_1_0_V \
    op interface \
    ports { input_11_1_0_V_address0 { O 3 vector } input_11_1_0_V_ce0 { O 1 bit } input_11_1_0_V_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'input_11_1_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 126 \
    name input_11_2_0_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename input_11_2_0_V \
    op interface \
    ports { input_11_2_0_V_address0 { O 3 vector } input_11_2_0_V_ce0 { O 1 bit } input_11_2_0_V_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'input_11_2_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 127 \
    name input_11_3_0_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename input_11_3_0_V \
    op interface \
    ports { input_11_3_0_V_address0 { O 3 vector } input_11_3_0_V_ce0 { O 1 bit } input_11_3_0_V_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'input_11_3_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 128 \
    name input_12_0_0_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename input_12_0_0_V \
    op interface \
    ports { input_12_0_0_V_address0 { O 3 vector } input_12_0_0_V_ce0 { O 1 bit } input_12_0_0_V_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'input_12_0_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 129 \
    name input_12_1_0_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename input_12_1_0_V \
    op interface \
    ports { input_12_1_0_V_address0 { O 3 vector } input_12_1_0_V_ce0 { O 1 bit } input_12_1_0_V_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'input_12_1_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 130 \
    name input_12_2_0_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename input_12_2_0_V \
    op interface \
    ports { input_12_2_0_V_address0 { O 3 vector } input_12_2_0_V_ce0 { O 1 bit } input_12_2_0_V_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'input_12_2_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 131 \
    name input_12_3_0_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename input_12_3_0_V \
    op interface \
    ports { input_12_3_0_V_address0 { O 3 vector } input_12_3_0_V_ce0 { O 1 bit } input_12_3_0_V_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'input_12_3_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 132 \
    name input_13_0_0_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename input_13_0_0_V \
    op interface \
    ports { input_13_0_0_V_address0 { O 3 vector } input_13_0_0_V_ce0 { O 1 bit } input_13_0_0_V_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'input_13_0_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 133 \
    name input_13_1_0_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename input_13_1_0_V \
    op interface \
    ports { input_13_1_0_V_address0 { O 3 vector } input_13_1_0_V_ce0 { O 1 bit } input_13_1_0_V_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'input_13_1_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 134 \
    name input_13_2_0_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename input_13_2_0_V \
    op interface \
    ports { input_13_2_0_V_address0 { O 3 vector } input_13_2_0_V_ce0 { O 1 bit } input_13_2_0_V_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'input_13_2_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 135 \
    name input_13_3_0_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename input_13_3_0_V \
    op interface \
    ports { input_13_3_0_V_address0 { O 3 vector } input_13_3_0_V_ce0 { O 1 bit } input_13_3_0_V_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'input_13_3_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 136 \
    name input_14_0_0_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename input_14_0_0_V \
    op interface \
    ports { input_14_0_0_V_address0 { O 3 vector } input_14_0_0_V_ce0 { O 1 bit } input_14_0_0_V_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'input_14_0_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 137 \
    name input_14_1_0_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename input_14_1_0_V \
    op interface \
    ports { input_14_1_0_V_address0 { O 3 vector } input_14_1_0_V_ce0 { O 1 bit } input_14_1_0_V_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'input_14_1_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 138 \
    name input_14_2_0_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename input_14_2_0_V \
    op interface \
    ports { input_14_2_0_V_address0 { O 3 vector } input_14_2_0_V_ce0 { O 1 bit } input_14_2_0_V_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'input_14_2_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 139 \
    name input_14_3_0_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename input_14_3_0_V \
    op interface \
    ports { input_14_3_0_V_address0 { O 3 vector } input_14_3_0_V_ce0 { O 1 bit } input_14_3_0_V_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'input_14_3_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 140 \
    name input_15_0_0_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename input_15_0_0_V \
    op interface \
    ports { input_15_0_0_V_address0 { O 3 vector } input_15_0_0_V_ce0 { O 1 bit } input_15_0_0_V_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'input_15_0_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 141 \
    name input_15_1_0_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename input_15_1_0_V \
    op interface \
    ports { input_15_1_0_V_address0 { O 3 vector } input_15_1_0_V_ce0 { O 1 bit } input_15_1_0_V_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'input_15_1_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 142 \
    name input_15_2_0_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename input_15_2_0_V \
    op interface \
    ports { input_15_2_0_V_address0 { O 3 vector } input_15_2_0_V_ce0 { O 1 bit } input_15_2_0_V_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'input_15_2_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 143 \
    name input_15_3_0_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename input_15_3_0_V \
    op interface \
    ports { input_15_3_0_V_address0 { O 3 vector } input_15_3_0_V_ce0 { O 1 bit } input_15_3_0_V_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'input_15_3_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 144 \
    name output_0_V \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename output_0_V \
    op interface \
    ports { output_0_V_address0 { O 9 vector } output_0_V_ce0 { O 1 bit } output_0_V_we0 { O 1 bit } output_0_V_d0 { O 40 vector } output_0_V_q0 { I 40 vector } output_0_V_address1 { O 9 vector } output_0_V_ce1 { O 1 bit } output_0_V_we1 { O 1 bit } output_0_V_d1 { O 40 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'output_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 146 \
    name packed_weights_0 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename packed_weights_0 \
    op interface \
    ports { packed_weights_0_address0 { O 12 vector } packed_weights_0_ce0 { O 1 bit } packed_weights_0_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'packed_weights_0'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 147 \
    name packed_weights_1 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename packed_weights_1 \
    op interface \
    ports { packed_weights_1_address0 { O 12 vector } packed_weights_1_ce0 { O 1 bit } packed_weights_1_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'packed_weights_1'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 148 \
    name packed_weights_2 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename packed_weights_2 \
    op interface \
    ports { packed_weights_2_address0 { O 12 vector } packed_weights_2_ce0 { O 1 bit } packed_weights_2_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'packed_weights_2'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 149 \
    name packed_weights_3 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename packed_weights_3 \
    op interface \
    ports { packed_weights_3_address0 { O 12 vector } packed_weights_3_ce0 { O 1 bit } packed_weights_3_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'packed_weights_3'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 150 \
    name packed_weights_4 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename packed_weights_4 \
    op interface \
    ports { packed_weights_4_address0 { O 12 vector } packed_weights_4_ce0 { O 1 bit } packed_weights_4_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'packed_weights_4'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 151 \
    name packed_weights_5 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename packed_weights_5 \
    op interface \
    ports { packed_weights_5_address0 { O 12 vector } packed_weights_5_ce0 { O 1 bit } packed_weights_5_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'packed_weights_5'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 152 \
    name packed_weights_6 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename packed_weights_6 \
    op interface \
    ports { packed_weights_6_address0 { O 12 vector } packed_weights_6_ce0 { O 1 bit } packed_weights_6_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'packed_weights_6'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 153 \
    name packed_weights_7 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename packed_weights_7 \
    op interface \
    ports { packed_weights_7_address0 { O 12 vector } packed_weights_7_ce0 { O 1 bit } packed_weights_7_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'packed_weights_7'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 154 \
    name packed_weights_8 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename packed_weights_8 \
    op interface \
    ports { packed_weights_8_address0 { O 12 vector } packed_weights_8_ce0 { O 1 bit } packed_weights_8_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'packed_weights_8'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 155 \
    name packed_weights_9 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename packed_weights_9 \
    op interface \
    ports { packed_weights_9_address0 { O 12 vector } packed_weights_9_ce0 { O 1 bit } packed_weights_9_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'packed_weights_9'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 156 \
    name packed_weights_10 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename packed_weights_10 \
    op interface \
    ports { packed_weights_10_address0 { O 12 vector } packed_weights_10_ce0 { O 1 bit } packed_weights_10_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'packed_weights_10'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 157 \
    name packed_weights_11 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename packed_weights_11 \
    op interface \
    ports { packed_weights_11_address0 { O 12 vector } packed_weights_11_ce0 { O 1 bit } packed_weights_11_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'packed_weights_11'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 158 \
    name packed_weights_12 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename packed_weights_12 \
    op interface \
    ports { packed_weights_12_address0 { O 12 vector } packed_weights_12_ce0 { O 1 bit } packed_weights_12_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'packed_weights_12'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 159 \
    name packed_weights_13 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename packed_weights_13 \
    op interface \
    ports { packed_weights_13_address0 { O 12 vector } packed_weights_13_ce0 { O 1 bit } packed_weights_13_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'packed_weights_13'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 160 \
    name packed_weights_14 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename packed_weights_14 \
    op interface \
    ports { packed_weights_14_address0 { O 12 vector } packed_weights_14_ce0 { O 1 bit } packed_weights_14_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'packed_weights_14'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 161 \
    name packed_weights_15 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename packed_weights_15 \
    op interface \
    ports { packed_weights_15_address0 { O 12 vector } packed_weights_15_ce0 { O 1 bit } packed_weights_15_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'packed_weights_15'"
}
}


# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 145 \
    name scales_0_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_scales_0_V_read \
    op interface \
    ports { scales_0_V_read { I 40 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 162 \
    name w_scale_V \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_w_scale_V \
    op interface \
    ports { w_scale_V { I 22 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id -1 \
    name ap_ctrl \
    type ap_ctrl \
    reset_level 1 \
    sync_rst true \
    corename ap_ctrl \
    op interface \
    ports { ap_start { I 1 bit } ap_ready { O 1 bit } ap_done { O 1 bit } ap_idle { O 1 bit } } \
} "
}


# Adapter definition:
set PortName ap_clk
set DataWd 1 
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc cg_default_interface_gen_clock] == "cg_default_interface_gen_clock"} {
eval "cg_default_interface_gen_clock { \
    id -2 \
    name ${PortName} \
    reset_level 1 \
    sync_rst true \
    corename apif_ap_clk \
    data_wd ${DataWd} \
    op interface \
}"
} else {
puts "@W \[IMPL-113\] Cannot find bus interface model in the library. Ignored generation of bus interface for '${PortName}'"
}
}


# Adapter definition:
set PortName ap_rst
set DataWd 1 
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc cg_default_interface_gen_reset] == "cg_default_interface_gen_reset"} {
eval "cg_default_interface_gen_reset { \
    id -3 \
    name ${PortName} \
    reset_level 1 \
    sync_rst true \
    corename apif_ap_rst \
    data_wd ${DataWd} \
    op interface \
}"
} else {
puts "@W \[IMPL-114\] Cannot find bus interface model in the library. Ignored generation of bus interface for '${PortName}'"
}
}



# merge
if {${::AESL::PGuard_autoexp_gen}} {
    cg_default_interface_gen_dc_end
    cg_default_interface_gen_bundle_end
    AESL_LIB_XILADAPTER::native_axis_end
}



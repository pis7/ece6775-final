# This script segment is generated automatically by AutoPilot

set id 42
set name attention_udiv_32xdS
set corename simcore_udiv_seq
set op udiv
set stage_num 36
set max_latency -1
set registered_input 1
set clk_width 1
set clk_signed 0
set reset_width 1
set reset_signed 0
set start_width 1
set start_signed 0
set done_width 1
set in0_width 32
set in0_signed 0
set in1_width 32
set in1_signed 0
set ce_width 1
set ce_signed 0
set out_width 32
if {${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_udiv] == "ap_gen_simcore_udiv"} {
eval "ap_gen_simcore_udiv { \
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
    start_width ${start_width} \
    start_signed ${start_signed} \
    done_width ${done_width} \
    in0_width ${in0_width} \
    in0_signed ${in0_signed} \
    in1_width ${in1_width} \
    in1_signed ${in1_signed} \
    ce_width ${ce_width} \
    ce_signed ${ce_signed} \
    out_width ${out_width} \
}"
} else {
puts "@W \[IMPL-100\] Cannot find ap_gen_simcore_udiv, check your AutoPilot builtin lib"
}
}


if {${::AESL::PGuard_rtl_comp_handler}} {
	::AP::rtl_comp_handler ${name}
}


set op udiv
set corename DivnS_SEQ
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
    start_width ${start_width} \
    start_signed ${start_signed} \
    done_width ${done_width} \
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
    id 44 \
    name v22_0_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename v22_0_V \
    op interface \
    ports { v22_0_V_address0 { O 11 vector } v22_0_V_ce0 { O 1 bit } v22_0_V_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'v22_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 45 \
    name v24_0_0_0 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename v24_0_0_0 \
    op interface \
    ports { v24_0_0_0_address0 { O 4 vector } v24_0_0_0_ce0 { O 1 bit } v24_0_0_0_we0 { O 1 bit } v24_0_0_0_d0 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'v24_0_0_0'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 46 \
    name v24_0_1_0 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename v24_0_1_0 \
    op interface \
    ports { v24_0_1_0_address0 { O 4 vector } v24_0_1_0_ce0 { O 1 bit } v24_0_1_0_we0 { O 1 bit } v24_0_1_0_d0 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'v24_0_1_0'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 47 \
    name v24_0_2_0 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename v24_0_2_0 \
    op interface \
    ports { v24_0_2_0_address0 { O 4 vector } v24_0_2_0_ce0 { O 1 bit } v24_0_2_0_we0 { O 1 bit } v24_0_2_0_d0 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'v24_0_2_0'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 48 \
    name v24_0_3_0 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename v24_0_3_0 \
    op interface \
    ports { v24_0_3_0_address0 { O 4 vector } v24_0_3_0_ce0 { O 1 bit } v24_0_3_0_we0 { O 1 bit } v24_0_3_0_d0 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'v24_0_3_0'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 49 \
    name v24_1_0_0 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename v24_1_0_0 \
    op interface \
    ports { v24_1_0_0_address0 { O 4 vector } v24_1_0_0_ce0 { O 1 bit } v24_1_0_0_we0 { O 1 bit } v24_1_0_0_d0 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'v24_1_0_0'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 50 \
    name v24_1_1_0 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename v24_1_1_0 \
    op interface \
    ports { v24_1_1_0_address0 { O 4 vector } v24_1_1_0_ce0 { O 1 bit } v24_1_1_0_we0 { O 1 bit } v24_1_1_0_d0 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'v24_1_1_0'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 51 \
    name v24_1_2_0 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename v24_1_2_0 \
    op interface \
    ports { v24_1_2_0_address0 { O 4 vector } v24_1_2_0_ce0 { O 1 bit } v24_1_2_0_we0 { O 1 bit } v24_1_2_0_d0 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'v24_1_2_0'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 52 \
    name v24_1_3_0 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename v24_1_3_0 \
    op interface \
    ports { v24_1_3_0_address0 { O 4 vector } v24_1_3_0_ce0 { O 1 bit } v24_1_3_0_we0 { O 1 bit } v24_1_3_0_d0 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'v24_1_3_0'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 53 \
    name v24_2_0_0 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename v24_2_0_0 \
    op interface \
    ports { v24_2_0_0_address0 { O 4 vector } v24_2_0_0_ce0 { O 1 bit } v24_2_0_0_we0 { O 1 bit } v24_2_0_0_d0 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'v24_2_0_0'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 54 \
    name v24_2_1_0 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename v24_2_1_0 \
    op interface \
    ports { v24_2_1_0_address0 { O 4 vector } v24_2_1_0_ce0 { O 1 bit } v24_2_1_0_we0 { O 1 bit } v24_2_1_0_d0 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'v24_2_1_0'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 55 \
    name v24_2_2_0 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename v24_2_2_0 \
    op interface \
    ports { v24_2_2_0_address0 { O 4 vector } v24_2_2_0_ce0 { O 1 bit } v24_2_2_0_we0 { O 1 bit } v24_2_2_0_d0 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'v24_2_2_0'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 56 \
    name v24_2_3_0 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename v24_2_3_0 \
    op interface \
    ports { v24_2_3_0_address0 { O 4 vector } v24_2_3_0_ce0 { O 1 bit } v24_2_3_0_we0 { O 1 bit } v24_2_3_0_d0 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'v24_2_3_0'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 57 \
    name v24_3_0_0 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename v24_3_0_0 \
    op interface \
    ports { v24_3_0_0_address0 { O 4 vector } v24_3_0_0_ce0 { O 1 bit } v24_3_0_0_we0 { O 1 bit } v24_3_0_0_d0 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'v24_3_0_0'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 58 \
    name v24_3_1_0 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename v24_3_1_0 \
    op interface \
    ports { v24_3_1_0_address0 { O 4 vector } v24_3_1_0_ce0 { O 1 bit } v24_3_1_0_we0 { O 1 bit } v24_3_1_0_d0 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'v24_3_1_0'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 59 \
    name v24_3_2_0 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename v24_3_2_0 \
    op interface \
    ports { v24_3_2_0_address0 { O 4 vector } v24_3_2_0_ce0 { O 1 bit } v24_3_2_0_we0 { O 1 bit } v24_3_2_0_d0 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'v24_3_2_0'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 60 \
    name v24_3_3_0 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename v24_3_3_0 \
    op interface \
    ports { v24_3_3_0_address0 { O 4 vector } v24_3_3_0_ce0 { O 1 bit } v24_3_3_0_we0 { O 1 bit } v24_3_3_0_d0 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'v24_3_3_0'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 61 \
    name v24_4_0_0 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename v24_4_0_0 \
    op interface \
    ports { v24_4_0_0_address0 { O 4 vector } v24_4_0_0_ce0 { O 1 bit } v24_4_0_0_we0 { O 1 bit } v24_4_0_0_d0 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'v24_4_0_0'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 62 \
    name v24_4_1_0 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename v24_4_1_0 \
    op interface \
    ports { v24_4_1_0_address0 { O 4 vector } v24_4_1_0_ce0 { O 1 bit } v24_4_1_0_we0 { O 1 bit } v24_4_1_0_d0 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'v24_4_1_0'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 63 \
    name v24_4_2_0 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename v24_4_2_0 \
    op interface \
    ports { v24_4_2_0_address0 { O 4 vector } v24_4_2_0_ce0 { O 1 bit } v24_4_2_0_we0 { O 1 bit } v24_4_2_0_d0 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'v24_4_2_0'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 64 \
    name v24_4_3_0 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename v24_4_3_0 \
    op interface \
    ports { v24_4_3_0_address0 { O 4 vector } v24_4_3_0_ce0 { O 1 bit } v24_4_3_0_we0 { O 1 bit } v24_4_3_0_d0 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'v24_4_3_0'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 65 \
    name v24_5_0_0 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename v24_5_0_0 \
    op interface \
    ports { v24_5_0_0_address0 { O 4 vector } v24_5_0_0_ce0 { O 1 bit } v24_5_0_0_we0 { O 1 bit } v24_5_0_0_d0 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'v24_5_0_0'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 66 \
    name v24_5_1_0 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename v24_5_1_0 \
    op interface \
    ports { v24_5_1_0_address0 { O 4 vector } v24_5_1_0_ce0 { O 1 bit } v24_5_1_0_we0 { O 1 bit } v24_5_1_0_d0 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'v24_5_1_0'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 67 \
    name v24_5_2_0 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename v24_5_2_0 \
    op interface \
    ports { v24_5_2_0_address0 { O 4 vector } v24_5_2_0_ce0 { O 1 bit } v24_5_2_0_we0 { O 1 bit } v24_5_2_0_d0 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'v24_5_2_0'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 68 \
    name v24_5_3_0 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename v24_5_3_0 \
    op interface \
    ports { v24_5_3_0_address0 { O 4 vector } v24_5_3_0_ce0 { O 1 bit } v24_5_3_0_we0 { O 1 bit } v24_5_3_0_d0 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'v24_5_3_0'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 69 \
    name v24_6_0_0 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename v24_6_0_0 \
    op interface \
    ports { v24_6_0_0_address0 { O 4 vector } v24_6_0_0_ce0 { O 1 bit } v24_6_0_0_we0 { O 1 bit } v24_6_0_0_d0 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'v24_6_0_0'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 70 \
    name v24_6_1_0 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename v24_6_1_0 \
    op interface \
    ports { v24_6_1_0_address0 { O 4 vector } v24_6_1_0_ce0 { O 1 bit } v24_6_1_0_we0 { O 1 bit } v24_6_1_0_d0 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'v24_6_1_0'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 71 \
    name v24_6_2_0 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename v24_6_2_0 \
    op interface \
    ports { v24_6_2_0_address0 { O 4 vector } v24_6_2_0_ce0 { O 1 bit } v24_6_2_0_we0 { O 1 bit } v24_6_2_0_d0 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'v24_6_2_0'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 72 \
    name v24_6_3_0 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename v24_6_3_0 \
    op interface \
    ports { v24_6_3_0_address0 { O 4 vector } v24_6_3_0_ce0 { O 1 bit } v24_6_3_0_we0 { O 1 bit } v24_6_3_0_d0 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'v24_6_3_0'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 73 \
    name v24_7_0_0 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename v24_7_0_0 \
    op interface \
    ports { v24_7_0_0_address0 { O 4 vector } v24_7_0_0_ce0 { O 1 bit } v24_7_0_0_we0 { O 1 bit } v24_7_0_0_d0 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'v24_7_0_0'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 74 \
    name v24_7_1_0 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename v24_7_1_0 \
    op interface \
    ports { v24_7_1_0_address0 { O 4 vector } v24_7_1_0_ce0 { O 1 bit } v24_7_1_0_we0 { O 1 bit } v24_7_1_0_d0 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'v24_7_1_0'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 75 \
    name v24_7_2_0 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename v24_7_2_0 \
    op interface \
    ports { v24_7_2_0_address0 { O 4 vector } v24_7_2_0_ce0 { O 1 bit } v24_7_2_0_we0 { O 1 bit } v24_7_2_0_d0 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'v24_7_2_0'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 76 \
    name v24_7_3_0 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename v24_7_3_0 \
    op interface \
    ports { v24_7_3_0_address0 { O 4 vector } v24_7_3_0_ce0 { O 1 bit } v24_7_3_0_we0 { O 1 bit } v24_7_3_0_d0 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'v24_7_3_0'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 77 \
    name v24_8_0_0 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename v24_8_0_0 \
    op interface \
    ports { v24_8_0_0_address0 { O 4 vector } v24_8_0_0_ce0 { O 1 bit } v24_8_0_0_we0 { O 1 bit } v24_8_0_0_d0 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'v24_8_0_0'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 78 \
    name v24_8_1_0 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename v24_8_1_0 \
    op interface \
    ports { v24_8_1_0_address0 { O 4 vector } v24_8_1_0_ce0 { O 1 bit } v24_8_1_0_we0 { O 1 bit } v24_8_1_0_d0 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'v24_8_1_0'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 79 \
    name v24_8_2_0 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename v24_8_2_0 \
    op interface \
    ports { v24_8_2_0_address0 { O 4 vector } v24_8_2_0_ce0 { O 1 bit } v24_8_2_0_we0 { O 1 bit } v24_8_2_0_d0 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'v24_8_2_0'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 80 \
    name v24_8_3_0 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename v24_8_3_0 \
    op interface \
    ports { v24_8_3_0_address0 { O 4 vector } v24_8_3_0_ce0 { O 1 bit } v24_8_3_0_we0 { O 1 bit } v24_8_3_0_d0 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'v24_8_3_0'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 81 \
    name v24_9_0_0 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename v24_9_0_0 \
    op interface \
    ports { v24_9_0_0_address0 { O 4 vector } v24_9_0_0_ce0 { O 1 bit } v24_9_0_0_we0 { O 1 bit } v24_9_0_0_d0 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'v24_9_0_0'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 82 \
    name v24_9_1_0 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename v24_9_1_0 \
    op interface \
    ports { v24_9_1_0_address0 { O 4 vector } v24_9_1_0_ce0 { O 1 bit } v24_9_1_0_we0 { O 1 bit } v24_9_1_0_d0 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'v24_9_1_0'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 83 \
    name v24_9_2_0 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename v24_9_2_0 \
    op interface \
    ports { v24_9_2_0_address0 { O 4 vector } v24_9_2_0_ce0 { O 1 bit } v24_9_2_0_we0 { O 1 bit } v24_9_2_0_d0 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'v24_9_2_0'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 84 \
    name v24_9_3_0 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename v24_9_3_0 \
    op interface \
    ports { v24_9_3_0_address0 { O 4 vector } v24_9_3_0_ce0 { O 1 bit } v24_9_3_0_we0 { O 1 bit } v24_9_3_0_d0 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'v24_9_3_0'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 85 \
    name v24_10_0_0 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename v24_10_0_0 \
    op interface \
    ports { v24_10_0_0_address0 { O 4 vector } v24_10_0_0_ce0 { O 1 bit } v24_10_0_0_we0 { O 1 bit } v24_10_0_0_d0 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'v24_10_0_0'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 86 \
    name v24_10_1_0 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename v24_10_1_0 \
    op interface \
    ports { v24_10_1_0_address0 { O 4 vector } v24_10_1_0_ce0 { O 1 bit } v24_10_1_0_we0 { O 1 bit } v24_10_1_0_d0 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'v24_10_1_0'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 87 \
    name v24_10_2_0 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename v24_10_2_0 \
    op interface \
    ports { v24_10_2_0_address0 { O 4 vector } v24_10_2_0_ce0 { O 1 bit } v24_10_2_0_we0 { O 1 bit } v24_10_2_0_d0 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'v24_10_2_0'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 88 \
    name v24_10_3_0 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename v24_10_3_0 \
    op interface \
    ports { v24_10_3_0_address0 { O 4 vector } v24_10_3_0_ce0 { O 1 bit } v24_10_3_0_we0 { O 1 bit } v24_10_3_0_d0 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'v24_10_3_0'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 89 \
    name v24_11_0_0 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename v24_11_0_0 \
    op interface \
    ports { v24_11_0_0_address0 { O 4 vector } v24_11_0_0_ce0 { O 1 bit } v24_11_0_0_we0 { O 1 bit } v24_11_0_0_d0 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'v24_11_0_0'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 90 \
    name v24_11_1_0 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename v24_11_1_0 \
    op interface \
    ports { v24_11_1_0_address0 { O 4 vector } v24_11_1_0_ce0 { O 1 bit } v24_11_1_0_we0 { O 1 bit } v24_11_1_0_d0 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'v24_11_1_0'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 91 \
    name v24_11_2_0 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename v24_11_2_0 \
    op interface \
    ports { v24_11_2_0_address0 { O 4 vector } v24_11_2_0_ce0 { O 1 bit } v24_11_2_0_we0 { O 1 bit } v24_11_2_0_d0 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'v24_11_2_0'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 92 \
    name v24_11_3_0 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename v24_11_3_0 \
    op interface \
    ports { v24_11_3_0_address0 { O 4 vector } v24_11_3_0_ce0 { O 1 bit } v24_11_3_0_we0 { O 1 bit } v24_11_3_0_d0 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'v24_11_3_0'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 93 \
    name v24_12_0_0 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename v24_12_0_0 \
    op interface \
    ports { v24_12_0_0_address0 { O 4 vector } v24_12_0_0_ce0 { O 1 bit } v24_12_0_0_we0 { O 1 bit } v24_12_0_0_d0 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'v24_12_0_0'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 94 \
    name v24_12_1_0 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename v24_12_1_0 \
    op interface \
    ports { v24_12_1_0_address0 { O 4 vector } v24_12_1_0_ce0 { O 1 bit } v24_12_1_0_we0 { O 1 bit } v24_12_1_0_d0 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'v24_12_1_0'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 95 \
    name v24_12_2_0 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename v24_12_2_0 \
    op interface \
    ports { v24_12_2_0_address0 { O 4 vector } v24_12_2_0_ce0 { O 1 bit } v24_12_2_0_we0 { O 1 bit } v24_12_2_0_d0 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'v24_12_2_0'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 96 \
    name v24_12_3_0 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename v24_12_3_0 \
    op interface \
    ports { v24_12_3_0_address0 { O 4 vector } v24_12_3_0_ce0 { O 1 bit } v24_12_3_0_we0 { O 1 bit } v24_12_3_0_d0 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'v24_12_3_0'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 97 \
    name v24_13_0_0 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename v24_13_0_0 \
    op interface \
    ports { v24_13_0_0_address0 { O 4 vector } v24_13_0_0_ce0 { O 1 bit } v24_13_0_0_we0 { O 1 bit } v24_13_0_0_d0 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'v24_13_0_0'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 98 \
    name v24_13_1_0 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename v24_13_1_0 \
    op interface \
    ports { v24_13_1_0_address0 { O 4 vector } v24_13_1_0_ce0 { O 1 bit } v24_13_1_0_we0 { O 1 bit } v24_13_1_0_d0 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'v24_13_1_0'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 99 \
    name v24_13_2_0 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename v24_13_2_0 \
    op interface \
    ports { v24_13_2_0_address0 { O 4 vector } v24_13_2_0_ce0 { O 1 bit } v24_13_2_0_we0 { O 1 bit } v24_13_2_0_d0 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'v24_13_2_0'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 100 \
    name v24_13_3_0 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename v24_13_3_0 \
    op interface \
    ports { v24_13_3_0_address0 { O 4 vector } v24_13_3_0_ce0 { O 1 bit } v24_13_3_0_we0 { O 1 bit } v24_13_3_0_d0 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'v24_13_3_0'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 101 \
    name v24_14_0_0 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename v24_14_0_0 \
    op interface \
    ports { v24_14_0_0_address0 { O 4 vector } v24_14_0_0_ce0 { O 1 bit } v24_14_0_0_we0 { O 1 bit } v24_14_0_0_d0 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'v24_14_0_0'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 102 \
    name v24_14_1_0 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename v24_14_1_0 \
    op interface \
    ports { v24_14_1_0_address0 { O 4 vector } v24_14_1_0_ce0 { O 1 bit } v24_14_1_0_we0 { O 1 bit } v24_14_1_0_d0 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'v24_14_1_0'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 103 \
    name v24_14_2_0 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename v24_14_2_0 \
    op interface \
    ports { v24_14_2_0_address0 { O 4 vector } v24_14_2_0_ce0 { O 1 bit } v24_14_2_0_we0 { O 1 bit } v24_14_2_0_d0 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'v24_14_2_0'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 104 \
    name v24_14_3_0 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename v24_14_3_0 \
    op interface \
    ports { v24_14_3_0_address0 { O 4 vector } v24_14_3_0_ce0 { O 1 bit } v24_14_3_0_we0 { O 1 bit } v24_14_3_0_d0 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'v24_14_3_0'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 105 \
    name v24_15_0_0 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename v24_15_0_0 \
    op interface \
    ports { v24_15_0_0_address0 { O 4 vector } v24_15_0_0_ce0 { O 1 bit } v24_15_0_0_we0 { O 1 bit } v24_15_0_0_d0 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'v24_15_0_0'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 106 \
    name v24_15_1_0 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename v24_15_1_0 \
    op interface \
    ports { v24_15_1_0_address0 { O 4 vector } v24_15_1_0_ce0 { O 1 bit } v24_15_1_0_we0 { O 1 bit } v24_15_1_0_d0 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'v24_15_1_0'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 107 \
    name v24_15_2_0 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename v24_15_2_0 \
    op interface \
    ports { v24_15_2_0_address0 { O 4 vector } v24_15_2_0_ce0 { O 1 bit } v24_15_2_0_we0 { O 1 bit } v24_15_2_0_d0 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'v24_15_2_0'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 108 \
    name v24_15_3_0 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename v24_15_3_0 \
    op interface \
    ports { v24_15_3_0_address0 { O 4 vector } v24_15_3_0_ce0 { O 1 bit } v24_15_3_0_we0 { O 1 bit } v24_15_3_0_d0 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'v24_15_3_0'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 109 \
    name v24_16_0_0 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename v24_16_0_0 \
    op interface \
    ports { v24_16_0_0_address0 { O 4 vector } v24_16_0_0_ce0 { O 1 bit } v24_16_0_0_we0 { O 1 bit } v24_16_0_0_d0 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'v24_16_0_0'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 110 \
    name v24_16_1_0 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename v24_16_1_0 \
    op interface \
    ports { v24_16_1_0_address0 { O 4 vector } v24_16_1_0_ce0 { O 1 bit } v24_16_1_0_we0 { O 1 bit } v24_16_1_0_d0 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'v24_16_1_0'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 111 \
    name v24_16_2_0 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename v24_16_2_0 \
    op interface \
    ports { v24_16_2_0_address0 { O 4 vector } v24_16_2_0_ce0 { O 1 bit } v24_16_2_0_we0 { O 1 bit } v24_16_2_0_d0 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'v24_16_2_0'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 112 \
    name v24_16_3_0 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename v24_16_3_0 \
    op interface \
    ports { v24_16_3_0_address0 { O 4 vector } v24_16_3_0_ce0 { O 1 bit } v24_16_3_0_we0 { O 1 bit } v24_16_3_0_d0 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'v24_16_3_0'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 113 \
    name v24_17_0_0 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename v24_17_0_0 \
    op interface \
    ports { v24_17_0_0_address0 { O 4 vector } v24_17_0_0_ce0 { O 1 bit } v24_17_0_0_we0 { O 1 bit } v24_17_0_0_d0 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'v24_17_0_0'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 114 \
    name v24_17_1_0 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename v24_17_1_0 \
    op interface \
    ports { v24_17_1_0_address0 { O 4 vector } v24_17_1_0_ce0 { O 1 bit } v24_17_1_0_we0 { O 1 bit } v24_17_1_0_d0 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'v24_17_1_0'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 115 \
    name v24_17_2_0 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename v24_17_2_0 \
    op interface \
    ports { v24_17_2_0_address0 { O 4 vector } v24_17_2_0_ce0 { O 1 bit } v24_17_2_0_we0 { O 1 bit } v24_17_2_0_d0 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'v24_17_2_0'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 116 \
    name v24_17_3_0 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename v24_17_3_0 \
    op interface \
    ports { v24_17_3_0_address0 { O 4 vector } v24_17_3_0_ce0 { O 1 bit } v24_17_3_0_we0 { O 1 bit } v24_17_3_0_d0 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'v24_17_3_0'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 117 \
    name v24_18_0_0 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename v24_18_0_0 \
    op interface \
    ports { v24_18_0_0_address0 { O 4 vector } v24_18_0_0_ce0 { O 1 bit } v24_18_0_0_we0 { O 1 bit } v24_18_0_0_d0 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'v24_18_0_0'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 118 \
    name v24_18_1_0 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename v24_18_1_0 \
    op interface \
    ports { v24_18_1_0_address0 { O 4 vector } v24_18_1_0_ce0 { O 1 bit } v24_18_1_0_we0 { O 1 bit } v24_18_1_0_d0 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'v24_18_1_0'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 119 \
    name v24_18_2_0 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename v24_18_2_0 \
    op interface \
    ports { v24_18_2_0_address0 { O 4 vector } v24_18_2_0_ce0 { O 1 bit } v24_18_2_0_we0 { O 1 bit } v24_18_2_0_d0 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'v24_18_2_0'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 120 \
    name v24_18_3_0 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename v24_18_3_0 \
    op interface \
    ports { v24_18_3_0_address0 { O 4 vector } v24_18_3_0_ce0 { O 1 bit } v24_18_3_0_we0 { O 1 bit } v24_18_3_0_d0 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'v24_18_3_0'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 121 \
    name v24_19_0_0 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename v24_19_0_0 \
    op interface \
    ports { v24_19_0_0_address0 { O 4 vector } v24_19_0_0_ce0 { O 1 bit } v24_19_0_0_we0 { O 1 bit } v24_19_0_0_d0 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'v24_19_0_0'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 122 \
    name v24_19_1_0 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename v24_19_1_0 \
    op interface \
    ports { v24_19_1_0_address0 { O 4 vector } v24_19_1_0_ce0 { O 1 bit } v24_19_1_0_we0 { O 1 bit } v24_19_1_0_d0 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'v24_19_1_0'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 123 \
    name v24_19_2_0 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename v24_19_2_0 \
    op interface \
    ports { v24_19_2_0_address0 { O 4 vector } v24_19_2_0_ce0 { O 1 bit } v24_19_2_0_we0 { O 1 bit } v24_19_2_0_d0 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'v24_19_2_0'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 124 \
    name v24_19_3_0 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename v24_19_3_0 \
    op interface \
    ports { v24_19_3_0_address0 { O 4 vector } v24_19_3_0_ce0 { O 1 bit } v24_19_3_0_we0 { O 1 bit } v24_19_3_0_d0 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'v24_19_3_0'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 125 \
    name v24_20_0_0 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename v24_20_0_0 \
    op interface \
    ports { v24_20_0_0_address0 { O 4 vector } v24_20_0_0_ce0 { O 1 bit } v24_20_0_0_we0 { O 1 bit } v24_20_0_0_d0 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'v24_20_0_0'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 126 \
    name v24_20_1_0 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename v24_20_1_0 \
    op interface \
    ports { v24_20_1_0_address0 { O 4 vector } v24_20_1_0_ce0 { O 1 bit } v24_20_1_0_we0 { O 1 bit } v24_20_1_0_d0 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'v24_20_1_0'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 127 \
    name v24_20_2_0 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename v24_20_2_0 \
    op interface \
    ports { v24_20_2_0_address0 { O 4 vector } v24_20_2_0_ce0 { O 1 bit } v24_20_2_0_we0 { O 1 bit } v24_20_2_0_d0 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'v24_20_2_0'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 128 \
    name v24_20_3_0 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename v24_20_3_0 \
    op interface \
    ports { v24_20_3_0_address0 { O 4 vector } v24_20_3_0_ce0 { O 1 bit } v24_20_3_0_we0 { O 1 bit } v24_20_3_0_d0 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'v24_20_3_0'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 129 \
    name v24_21_0_0 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename v24_21_0_0 \
    op interface \
    ports { v24_21_0_0_address0 { O 4 vector } v24_21_0_0_ce0 { O 1 bit } v24_21_0_0_we0 { O 1 bit } v24_21_0_0_d0 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'v24_21_0_0'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 130 \
    name v24_21_1_0 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename v24_21_1_0 \
    op interface \
    ports { v24_21_1_0_address0 { O 4 vector } v24_21_1_0_ce0 { O 1 bit } v24_21_1_0_we0 { O 1 bit } v24_21_1_0_d0 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'v24_21_1_0'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 131 \
    name v24_21_2_0 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename v24_21_2_0 \
    op interface \
    ports { v24_21_2_0_address0 { O 4 vector } v24_21_2_0_ce0 { O 1 bit } v24_21_2_0_we0 { O 1 bit } v24_21_2_0_d0 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'v24_21_2_0'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 132 \
    name v24_21_3_0 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename v24_21_3_0 \
    op interface \
    ports { v24_21_3_0_address0 { O 4 vector } v24_21_3_0_ce0 { O 1 bit } v24_21_3_0_we0 { O 1 bit } v24_21_3_0_d0 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'v24_21_3_0'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 133 \
    name v24_22_0_0 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename v24_22_0_0 \
    op interface \
    ports { v24_22_0_0_address0 { O 4 vector } v24_22_0_0_ce0 { O 1 bit } v24_22_0_0_we0 { O 1 bit } v24_22_0_0_d0 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'v24_22_0_0'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 134 \
    name v24_22_1_0 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename v24_22_1_0 \
    op interface \
    ports { v24_22_1_0_address0 { O 4 vector } v24_22_1_0_ce0 { O 1 bit } v24_22_1_0_we0 { O 1 bit } v24_22_1_0_d0 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'v24_22_1_0'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 135 \
    name v24_22_2_0 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename v24_22_2_0 \
    op interface \
    ports { v24_22_2_0_address0 { O 4 vector } v24_22_2_0_ce0 { O 1 bit } v24_22_2_0_we0 { O 1 bit } v24_22_2_0_d0 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'v24_22_2_0'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 136 \
    name v24_22_3_0 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename v24_22_3_0 \
    op interface \
    ports { v24_22_3_0_address0 { O 4 vector } v24_22_3_0_ce0 { O 1 bit } v24_22_3_0_we0 { O 1 bit } v24_22_3_0_d0 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'v24_22_3_0'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 137 \
    name v24_23_0_0 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename v24_23_0_0 \
    op interface \
    ports { v24_23_0_0_address0 { O 4 vector } v24_23_0_0_ce0 { O 1 bit } v24_23_0_0_we0 { O 1 bit } v24_23_0_0_d0 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'v24_23_0_0'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 138 \
    name v24_23_1_0 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename v24_23_1_0 \
    op interface \
    ports { v24_23_1_0_address0 { O 4 vector } v24_23_1_0_ce0 { O 1 bit } v24_23_1_0_we0 { O 1 bit } v24_23_1_0_d0 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'v24_23_1_0'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 139 \
    name v24_23_2_0 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename v24_23_2_0 \
    op interface \
    ports { v24_23_2_0_address0 { O 4 vector } v24_23_2_0_ce0 { O 1 bit } v24_23_2_0_we0 { O 1 bit } v24_23_2_0_d0 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'v24_23_2_0'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 140 \
    name v24_23_3_0 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename v24_23_3_0 \
    op interface \
    ports { v24_23_3_0_address0 { O 4 vector } v24_23_3_0_ce0 { O 1 bit } v24_23_3_0_we0 { O 1 bit } v24_23_3_0_d0 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'v24_23_3_0'"
}
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

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id -2 \
    name ap_return \
    type ap_return \
    reset_level 1 \
    sync_rst true \
    corename ap_return \
    op interface \
    ports { ap_return { O 32 vector } } \
} "
}


# Adapter definition:
set PortName ap_clk
set DataWd 1 
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc cg_default_interface_gen_clock] == "cg_default_interface_gen_clock"} {
eval "cg_default_interface_gen_clock { \
    id -3 \
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
    id -4 \
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



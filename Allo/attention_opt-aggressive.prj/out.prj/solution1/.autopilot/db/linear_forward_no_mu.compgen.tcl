# This script segment is generated automatically by AutoPilot

set id 42
set name attention_mul_52sudo
set corename simcore_mul
set op mul
set stage_num 2
set max_latency -1
set registered_input 1
set clk_width 1
set clk_signed 0
set reset_width 1
set reset_signed 0
set in0_width 52
set in0_signed 1
set in1_width 52
set in1_signed 1
set ce_width 1
set ce_signed 0
set out_width 104
if {${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_mul] == "ap_gen_simcore_mul"} {
eval "ap_gen_simcore_mul { \
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
puts "@W \[IMPL-100\] Cannot find ap_gen_simcore_mul, check your AutoPilot builtin lib"
}
}


if {${::AESL::PGuard_rtl_comp_handler}} {
	::AP::rtl_comp_handler ${name}
}


set op mul
set corename MulnS
if {${::AESL::PGuard_autocg_gen} && ${::AESL::PGuard_autocg_ipmgen}} {
if {[info proc ::AESL_LIB_VIRTEX::xil_gen_multicycle_mul] == "::AESL_LIB_VIRTEX::xil_gen_multicycle_mul"} {
eval "::AESL_LIB_VIRTEX::xil_gen_multicycle_mul { \
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
puts "@W \[IMPL-101\] Cannot find ::AESL_LIB_VIRTEX::xil_gen_multicycle_mul, check your platform lib"
}
}


set id 43
set name attention_sdiv_97vdy
set corename simcore_sdiv
set op sdiv
set stage_num 101
set max_latency -1
set registered_input 1
set clk_width 1
set clk_signed 0
set reset_width 1
set reset_signed 0
set in0_width 97
set in0_signed 0
set in1_width 63
set in1_signed 1
set ce_width 1
set ce_signed 0
set out_width 97
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
    id 46 \
    name v79_0_0_0 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename v79_0_0_0 \
    op interface \
    ports { v79_0_0_0_address0 { O 4 vector } v79_0_0_0_ce0 { O 1 bit } v79_0_0_0_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'v79_0_0_0'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 47 \
    name v79_0_0_1 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename v79_0_0_1 \
    op interface \
    ports { v79_0_0_1_address0 { O 4 vector } v79_0_0_1_ce0 { O 1 bit } v79_0_0_1_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'v79_0_0_1'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 48 \
    name v79_0_0_2 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename v79_0_0_2 \
    op interface \
    ports { v79_0_0_2_address0 { O 4 vector } v79_0_0_2_ce0 { O 1 bit } v79_0_0_2_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'v79_0_0_2'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 49 \
    name v79_0_0_3 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename v79_0_0_3 \
    op interface \
    ports { v79_0_0_3_address0 { O 4 vector } v79_0_0_3_ce0 { O 1 bit } v79_0_0_3_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'v79_0_0_3'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 50 \
    name v79_1_0_0 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename v79_1_0_0 \
    op interface \
    ports { v79_1_0_0_address0 { O 4 vector } v79_1_0_0_ce0 { O 1 bit } v79_1_0_0_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'v79_1_0_0'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 51 \
    name v79_1_0_1 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename v79_1_0_1 \
    op interface \
    ports { v79_1_0_1_address0 { O 4 vector } v79_1_0_1_ce0 { O 1 bit } v79_1_0_1_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'v79_1_0_1'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 52 \
    name v79_1_0_2 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename v79_1_0_2 \
    op interface \
    ports { v79_1_0_2_address0 { O 4 vector } v79_1_0_2_ce0 { O 1 bit } v79_1_0_2_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'v79_1_0_2'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 53 \
    name v79_1_0_3 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename v79_1_0_3 \
    op interface \
    ports { v79_1_0_3_address0 { O 4 vector } v79_1_0_3_ce0 { O 1 bit } v79_1_0_3_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'v79_1_0_3'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 54 \
    name v79_2_0_0 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename v79_2_0_0 \
    op interface \
    ports { v79_2_0_0_address0 { O 4 vector } v79_2_0_0_ce0 { O 1 bit } v79_2_0_0_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'v79_2_0_0'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 55 \
    name v79_2_0_1 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename v79_2_0_1 \
    op interface \
    ports { v79_2_0_1_address0 { O 4 vector } v79_2_0_1_ce0 { O 1 bit } v79_2_0_1_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'v79_2_0_1'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 56 \
    name v79_2_0_2 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename v79_2_0_2 \
    op interface \
    ports { v79_2_0_2_address0 { O 4 vector } v79_2_0_2_ce0 { O 1 bit } v79_2_0_2_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'v79_2_0_2'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 57 \
    name v79_2_0_3 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename v79_2_0_3 \
    op interface \
    ports { v79_2_0_3_address0 { O 4 vector } v79_2_0_3_ce0 { O 1 bit } v79_2_0_3_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'v79_2_0_3'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 58 \
    name v79_3_0_0 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename v79_3_0_0 \
    op interface \
    ports { v79_3_0_0_address0 { O 4 vector } v79_3_0_0_ce0 { O 1 bit } v79_3_0_0_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'v79_3_0_0'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 59 \
    name v79_3_0_1 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename v79_3_0_1 \
    op interface \
    ports { v79_3_0_1_address0 { O 4 vector } v79_3_0_1_ce0 { O 1 bit } v79_3_0_1_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'v79_3_0_1'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 60 \
    name v79_3_0_2 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename v79_3_0_2 \
    op interface \
    ports { v79_3_0_2_address0 { O 4 vector } v79_3_0_2_ce0 { O 1 bit } v79_3_0_2_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'v79_3_0_2'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 61 \
    name v79_3_0_3 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename v79_3_0_3 \
    op interface \
    ports { v79_3_0_3_address0 { O 4 vector } v79_3_0_3_ce0 { O 1 bit } v79_3_0_3_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'v79_3_0_3'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 62 \
    name v79_4_0_0 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename v79_4_0_0 \
    op interface \
    ports { v79_4_0_0_address0 { O 4 vector } v79_4_0_0_ce0 { O 1 bit } v79_4_0_0_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'v79_4_0_0'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 63 \
    name v79_4_0_1 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename v79_4_0_1 \
    op interface \
    ports { v79_4_0_1_address0 { O 4 vector } v79_4_0_1_ce0 { O 1 bit } v79_4_0_1_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'v79_4_0_1'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 64 \
    name v79_4_0_2 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename v79_4_0_2 \
    op interface \
    ports { v79_4_0_2_address0 { O 4 vector } v79_4_0_2_ce0 { O 1 bit } v79_4_0_2_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'v79_4_0_2'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 65 \
    name v79_4_0_3 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename v79_4_0_3 \
    op interface \
    ports { v79_4_0_3_address0 { O 4 vector } v79_4_0_3_ce0 { O 1 bit } v79_4_0_3_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'v79_4_0_3'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 66 \
    name v79_5_0_0 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename v79_5_0_0 \
    op interface \
    ports { v79_5_0_0_address0 { O 4 vector } v79_5_0_0_ce0 { O 1 bit } v79_5_0_0_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'v79_5_0_0'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 67 \
    name v79_5_0_1 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename v79_5_0_1 \
    op interface \
    ports { v79_5_0_1_address0 { O 4 vector } v79_5_0_1_ce0 { O 1 bit } v79_5_0_1_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'v79_5_0_1'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 68 \
    name v79_5_0_2 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename v79_5_0_2 \
    op interface \
    ports { v79_5_0_2_address0 { O 4 vector } v79_5_0_2_ce0 { O 1 bit } v79_5_0_2_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'v79_5_0_2'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 69 \
    name v79_5_0_3 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename v79_5_0_3 \
    op interface \
    ports { v79_5_0_3_address0 { O 4 vector } v79_5_0_3_ce0 { O 1 bit } v79_5_0_3_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'v79_5_0_3'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 70 \
    name v79_6_0_0 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename v79_6_0_0 \
    op interface \
    ports { v79_6_0_0_address0 { O 4 vector } v79_6_0_0_ce0 { O 1 bit } v79_6_0_0_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'v79_6_0_0'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 71 \
    name v79_6_0_1 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename v79_6_0_1 \
    op interface \
    ports { v79_6_0_1_address0 { O 4 vector } v79_6_0_1_ce0 { O 1 bit } v79_6_0_1_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'v79_6_0_1'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 72 \
    name v79_6_0_2 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename v79_6_0_2 \
    op interface \
    ports { v79_6_0_2_address0 { O 4 vector } v79_6_0_2_ce0 { O 1 bit } v79_6_0_2_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'v79_6_0_2'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 73 \
    name v79_6_0_3 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename v79_6_0_3 \
    op interface \
    ports { v79_6_0_3_address0 { O 4 vector } v79_6_0_3_ce0 { O 1 bit } v79_6_0_3_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'v79_6_0_3'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 74 \
    name v79_7_0_0 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename v79_7_0_0 \
    op interface \
    ports { v79_7_0_0_address0 { O 4 vector } v79_7_0_0_ce0 { O 1 bit } v79_7_0_0_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'v79_7_0_0'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 75 \
    name v79_7_0_1 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename v79_7_0_1 \
    op interface \
    ports { v79_7_0_1_address0 { O 4 vector } v79_7_0_1_ce0 { O 1 bit } v79_7_0_1_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'v79_7_0_1'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 76 \
    name v79_7_0_2 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename v79_7_0_2 \
    op interface \
    ports { v79_7_0_2_address0 { O 4 vector } v79_7_0_2_ce0 { O 1 bit } v79_7_0_2_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'v79_7_0_2'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 77 \
    name v79_7_0_3 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename v79_7_0_3 \
    op interface \
    ports { v79_7_0_3_address0 { O 4 vector } v79_7_0_3_ce0 { O 1 bit } v79_7_0_3_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'v79_7_0_3'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 78 \
    name v79_8_0_0 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename v79_8_0_0 \
    op interface \
    ports { v79_8_0_0_address0 { O 4 vector } v79_8_0_0_ce0 { O 1 bit } v79_8_0_0_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'v79_8_0_0'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 79 \
    name v79_8_0_1 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename v79_8_0_1 \
    op interface \
    ports { v79_8_0_1_address0 { O 4 vector } v79_8_0_1_ce0 { O 1 bit } v79_8_0_1_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'v79_8_0_1'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 80 \
    name v79_8_0_2 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename v79_8_0_2 \
    op interface \
    ports { v79_8_0_2_address0 { O 4 vector } v79_8_0_2_ce0 { O 1 bit } v79_8_0_2_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'v79_8_0_2'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 81 \
    name v79_8_0_3 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename v79_8_0_3 \
    op interface \
    ports { v79_8_0_3_address0 { O 4 vector } v79_8_0_3_ce0 { O 1 bit } v79_8_0_3_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'v79_8_0_3'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 82 \
    name v79_9_0_0 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename v79_9_0_0 \
    op interface \
    ports { v79_9_0_0_address0 { O 4 vector } v79_9_0_0_ce0 { O 1 bit } v79_9_0_0_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'v79_9_0_0'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 83 \
    name v79_9_0_1 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename v79_9_0_1 \
    op interface \
    ports { v79_9_0_1_address0 { O 4 vector } v79_9_0_1_ce0 { O 1 bit } v79_9_0_1_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'v79_9_0_1'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 84 \
    name v79_9_0_2 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename v79_9_0_2 \
    op interface \
    ports { v79_9_0_2_address0 { O 4 vector } v79_9_0_2_ce0 { O 1 bit } v79_9_0_2_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'v79_9_0_2'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 85 \
    name v79_9_0_3 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename v79_9_0_3 \
    op interface \
    ports { v79_9_0_3_address0 { O 4 vector } v79_9_0_3_ce0 { O 1 bit } v79_9_0_3_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'v79_9_0_3'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 86 \
    name v79_10_0_0 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename v79_10_0_0 \
    op interface \
    ports { v79_10_0_0_address0 { O 4 vector } v79_10_0_0_ce0 { O 1 bit } v79_10_0_0_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'v79_10_0_0'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 87 \
    name v79_10_0_1 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename v79_10_0_1 \
    op interface \
    ports { v79_10_0_1_address0 { O 4 vector } v79_10_0_1_ce0 { O 1 bit } v79_10_0_1_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'v79_10_0_1'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 88 \
    name v79_10_0_2 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename v79_10_0_2 \
    op interface \
    ports { v79_10_0_2_address0 { O 4 vector } v79_10_0_2_ce0 { O 1 bit } v79_10_0_2_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'v79_10_0_2'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 89 \
    name v79_10_0_3 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename v79_10_0_3 \
    op interface \
    ports { v79_10_0_3_address0 { O 4 vector } v79_10_0_3_ce0 { O 1 bit } v79_10_0_3_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'v79_10_0_3'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 90 \
    name v79_11_0_0 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename v79_11_0_0 \
    op interface \
    ports { v79_11_0_0_address0 { O 4 vector } v79_11_0_0_ce0 { O 1 bit } v79_11_0_0_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'v79_11_0_0'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 91 \
    name v79_11_0_1 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename v79_11_0_1 \
    op interface \
    ports { v79_11_0_1_address0 { O 4 vector } v79_11_0_1_ce0 { O 1 bit } v79_11_0_1_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'v79_11_0_1'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 92 \
    name v79_11_0_2 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename v79_11_0_2 \
    op interface \
    ports { v79_11_0_2_address0 { O 4 vector } v79_11_0_2_ce0 { O 1 bit } v79_11_0_2_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'v79_11_0_2'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 93 \
    name v79_11_0_3 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename v79_11_0_3 \
    op interface \
    ports { v79_11_0_3_address0 { O 4 vector } v79_11_0_3_ce0 { O 1 bit } v79_11_0_3_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'v79_11_0_3'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 94 \
    name v79_12_0_0 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename v79_12_0_0 \
    op interface \
    ports { v79_12_0_0_address0 { O 4 vector } v79_12_0_0_ce0 { O 1 bit } v79_12_0_0_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'v79_12_0_0'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 95 \
    name v79_12_0_1 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename v79_12_0_1 \
    op interface \
    ports { v79_12_0_1_address0 { O 4 vector } v79_12_0_1_ce0 { O 1 bit } v79_12_0_1_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'v79_12_0_1'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 96 \
    name v79_12_0_2 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename v79_12_0_2 \
    op interface \
    ports { v79_12_0_2_address0 { O 4 vector } v79_12_0_2_ce0 { O 1 bit } v79_12_0_2_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'v79_12_0_2'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 97 \
    name v79_12_0_3 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename v79_12_0_3 \
    op interface \
    ports { v79_12_0_3_address0 { O 4 vector } v79_12_0_3_ce0 { O 1 bit } v79_12_0_3_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'v79_12_0_3'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 98 \
    name v79_13_0_0 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename v79_13_0_0 \
    op interface \
    ports { v79_13_0_0_address0 { O 4 vector } v79_13_0_0_ce0 { O 1 bit } v79_13_0_0_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'v79_13_0_0'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 99 \
    name v79_13_0_1 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename v79_13_0_1 \
    op interface \
    ports { v79_13_0_1_address0 { O 4 vector } v79_13_0_1_ce0 { O 1 bit } v79_13_0_1_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'v79_13_0_1'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 100 \
    name v79_13_0_2 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename v79_13_0_2 \
    op interface \
    ports { v79_13_0_2_address0 { O 4 vector } v79_13_0_2_ce0 { O 1 bit } v79_13_0_2_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'v79_13_0_2'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 101 \
    name v79_13_0_3 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename v79_13_0_3 \
    op interface \
    ports { v79_13_0_3_address0 { O 4 vector } v79_13_0_3_ce0 { O 1 bit } v79_13_0_3_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'v79_13_0_3'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 102 \
    name v79_14_0_0 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename v79_14_0_0 \
    op interface \
    ports { v79_14_0_0_address0 { O 4 vector } v79_14_0_0_ce0 { O 1 bit } v79_14_0_0_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'v79_14_0_0'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 103 \
    name v79_14_0_1 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename v79_14_0_1 \
    op interface \
    ports { v79_14_0_1_address0 { O 4 vector } v79_14_0_1_ce0 { O 1 bit } v79_14_0_1_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'v79_14_0_1'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 104 \
    name v79_14_0_2 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename v79_14_0_2 \
    op interface \
    ports { v79_14_0_2_address0 { O 4 vector } v79_14_0_2_ce0 { O 1 bit } v79_14_0_2_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'v79_14_0_2'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 105 \
    name v79_14_0_3 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename v79_14_0_3 \
    op interface \
    ports { v79_14_0_3_address0 { O 4 vector } v79_14_0_3_ce0 { O 1 bit } v79_14_0_3_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'v79_14_0_3'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 106 \
    name v79_15_0_0 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename v79_15_0_0 \
    op interface \
    ports { v79_15_0_0_address0 { O 4 vector } v79_15_0_0_ce0 { O 1 bit } v79_15_0_0_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'v79_15_0_0'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 107 \
    name v79_15_0_1 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename v79_15_0_1 \
    op interface \
    ports { v79_15_0_1_address0 { O 4 vector } v79_15_0_1_ce0 { O 1 bit } v79_15_0_1_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'v79_15_0_1'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 108 \
    name v79_15_0_2 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename v79_15_0_2 \
    op interface \
    ports { v79_15_0_2_address0 { O 4 vector } v79_15_0_2_ce0 { O 1 bit } v79_15_0_2_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'v79_15_0_2'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 109 \
    name v79_15_0_3 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename v79_15_0_3 \
    op interface \
    ports { v79_15_0_3_address0 { O 4 vector } v79_15_0_3_ce0 { O 1 bit } v79_15_0_3_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'v79_15_0_3'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 110 \
    name v79_16_0_0 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename v79_16_0_0 \
    op interface \
    ports { v79_16_0_0_address0 { O 4 vector } v79_16_0_0_ce0 { O 1 bit } v79_16_0_0_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'v79_16_0_0'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 111 \
    name v79_16_0_1 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename v79_16_0_1 \
    op interface \
    ports { v79_16_0_1_address0 { O 4 vector } v79_16_0_1_ce0 { O 1 bit } v79_16_0_1_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'v79_16_0_1'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 112 \
    name v79_16_0_2 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename v79_16_0_2 \
    op interface \
    ports { v79_16_0_2_address0 { O 4 vector } v79_16_0_2_ce0 { O 1 bit } v79_16_0_2_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'v79_16_0_2'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 113 \
    name v79_16_0_3 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename v79_16_0_3 \
    op interface \
    ports { v79_16_0_3_address0 { O 4 vector } v79_16_0_3_ce0 { O 1 bit } v79_16_0_3_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'v79_16_0_3'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 114 \
    name v79_17_0_0 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename v79_17_0_0 \
    op interface \
    ports { v79_17_0_0_address0 { O 4 vector } v79_17_0_0_ce0 { O 1 bit } v79_17_0_0_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'v79_17_0_0'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 115 \
    name v79_17_0_1 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename v79_17_0_1 \
    op interface \
    ports { v79_17_0_1_address0 { O 4 vector } v79_17_0_1_ce0 { O 1 bit } v79_17_0_1_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'v79_17_0_1'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 116 \
    name v79_17_0_2 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename v79_17_0_2 \
    op interface \
    ports { v79_17_0_2_address0 { O 4 vector } v79_17_0_2_ce0 { O 1 bit } v79_17_0_2_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'v79_17_0_2'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 117 \
    name v79_17_0_3 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename v79_17_0_3 \
    op interface \
    ports { v79_17_0_3_address0 { O 4 vector } v79_17_0_3_ce0 { O 1 bit } v79_17_0_3_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'v79_17_0_3'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 118 \
    name v79_18_0_0 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename v79_18_0_0 \
    op interface \
    ports { v79_18_0_0_address0 { O 4 vector } v79_18_0_0_ce0 { O 1 bit } v79_18_0_0_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'v79_18_0_0'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 119 \
    name v79_18_0_1 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename v79_18_0_1 \
    op interface \
    ports { v79_18_0_1_address0 { O 4 vector } v79_18_0_1_ce0 { O 1 bit } v79_18_0_1_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'v79_18_0_1'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 120 \
    name v79_18_0_2 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename v79_18_0_2 \
    op interface \
    ports { v79_18_0_2_address0 { O 4 vector } v79_18_0_2_ce0 { O 1 bit } v79_18_0_2_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'v79_18_0_2'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 121 \
    name v79_18_0_3 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename v79_18_0_3 \
    op interface \
    ports { v79_18_0_3_address0 { O 4 vector } v79_18_0_3_ce0 { O 1 bit } v79_18_0_3_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'v79_18_0_3'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 122 \
    name v79_19_0_0 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename v79_19_0_0 \
    op interface \
    ports { v79_19_0_0_address0 { O 4 vector } v79_19_0_0_ce0 { O 1 bit } v79_19_0_0_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'v79_19_0_0'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 123 \
    name v79_19_0_1 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename v79_19_0_1 \
    op interface \
    ports { v79_19_0_1_address0 { O 4 vector } v79_19_0_1_ce0 { O 1 bit } v79_19_0_1_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'v79_19_0_1'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 124 \
    name v79_19_0_2 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename v79_19_0_2 \
    op interface \
    ports { v79_19_0_2_address0 { O 4 vector } v79_19_0_2_ce0 { O 1 bit } v79_19_0_2_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'v79_19_0_2'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 125 \
    name v79_19_0_3 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename v79_19_0_3 \
    op interface \
    ports { v79_19_0_3_address0 { O 4 vector } v79_19_0_3_ce0 { O 1 bit } v79_19_0_3_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'v79_19_0_3'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 126 \
    name v79_20_0_0 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename v79_20_0_0 \
    op interface \
    ports { v79_20_0_0_address0 { O 4 vector } v79_20_0_0_ce0 { O 1 bit } v79_20_0_0_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'v79_20_0_0'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 127 \
    name v79_20_0_1 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename v79_20_0_1 \
    op interface \
    ports { v79_20_0_1_address0 { O 4 vector } v79_20_0_1_ce0 { O 1 bit } v79_20_0_1_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'v79_20_0_1'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 128 \
    name v79_20_0_2 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename v79_20_0_2 \
    op interface \
    ports { v79_20_0_2_address0 { O 4 vector } v79_20_0_2_ce0 { O 1 bit } v79_20_0_2_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'v79_20_0_2'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 129 \
    name v79_20_0_3 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename v79_20_0_3 \
    op interface \
    ports { v79_20_0_3_address0 { O 4 vector } v79_20_0_3_ce0 { O 1 bit } v79_20_0_3_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'v79_20_0_3'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 130 \
    name v79_21_0_0 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename v79_21_0_0 \
    op interface \
    ports { v79_21_0_0_address0 { O 4 vector } v79_21_0_0_ce0 { O 1 bit } v79_21_0_0_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'v79_21_0_0'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 131 \
    name v79_21_0_1 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename v79_21_0_1 \
    op interface \
    ports { v79_21_0_1_address0 { O 4 vector } v79_21_0_1_ce0 { O 1 bit } v79_21_0_1_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'v79_21_0_1'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 132 \
    name v79_21_0_2 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename v79_21_0_2 \
    op interface \
    ports { v79_21_0_2_address0 { O 4 vector } v79_21_0_2_ce0 { O 1 bit } v79_21_0_2_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'v79_21_0_2'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 133 \
    name v79_21_0_3 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename v79_21_0_3 \
    op interface \
    ports { v79_21_0_3_address0 { O 4 vector } v79_21_0_3_ce0 { O 1 bit } v79_21_0_3_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'v79_21_0_3'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 134 \
    name v79_22_0_0 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename v79_22_0_0 \
    op interface \
    ports { v79_22_0_0_address0 { O 4 vector } v79_22_0_0_ce0 { O 1 bit } v79_22_0_0_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'v79_22_0_0'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 135 \
    name v79_22_0_1 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename v79_22_0_1 \
    op interface \
    ports { v79_22_0_1_address0 { O 4 vector } v79_22_0_1_ce0 { O 1 bit } v79_22_0_1_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'v79_22_0_1'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 136 \
    name v79_22_0_2 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename v79_22_0_2 \
    op interface \
    ports { v79_22_0_2_address0 { O 4 vector } v79_22_0_2_ce0 { O 1 bit } v79_22_0_2_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'v79_22_0_2'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 137 \
    name v79_22_0_3 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename v79_22_0_3 \
    op interface \
    ports { v79_22_0_3_address0 { O 4 vector } v79_22_0_3_ce0 { O 1 bit } v79_22_0_3_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'v79_22_0_3'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 138 \
    name v79_23_0_0 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename v79_23_0_0 \
    op interface \
    ports { v79_23_0_0_address0 { O 4 vector } v79_23_0_0_ce0 { O 1 bit } v79_23_0_0_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'v79_23_0_0'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 139 \
    name v79_23_0_1 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename v79_23_0_1 \
    op interface \
    ports { v79_23_0_1_address0 { O 4 vector } v79_23_0_1_ce0 { O 1 bit } v79_23_0_1_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'v79_23_0_1'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 140 \
    name v79_23_0_2 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename v79_23_0_2 \
    op interface \
    ports { v79_23_0_2_address0 { O 4 vector } v79_23_0_2_ce0 { O 1 bit } v79_23_0_2_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'v79_23_0_2'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 141 \
    name v79_23_0_3 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename v79_23_0_3 \
    op interface \
    ports { v79_23_0_3_address0 { O 4 vector } v79_23_0_3_ce0 { O 1 bit } v79_23_0_3_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'v79_23_0_3'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 143 \
    name v81_0 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename v81_0 \
    op interface \
    ports { v81_0_address0 { O 15 vector } v81_0_ce0 { O 1 bit } v81_0_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'v81_0'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 144 \
    name v81_1 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename v81_1 \
    op interface \
    ports { v81_1_address0 { O 15 vector } v81_1_ce0 { O 1 bit } v81_1_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'v81_1'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 145 \
    name v81_2 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename v81_2 \
    op interface \
    ports { v81_2_address0 { O 15 vector } v81_2_ce0 { O 1 bit } v81_2_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'v81_2'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 146 \
    name v81_3 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename v81_3 \
    op interface \
    ports { v81_3_address0 { O 15 vector } v81_3_ce0 { O 1 bit } v81_3_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'v81_3'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 147 \
    name v81_4 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename v81_4 \
    op interface \
    ports { v81_4_address0 { O 15 vector } v81_4_ce0 { O 1 bit } v81_4_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'v81_4'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 148 \
    name v81_5 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename v81_5 \
    op interface \
    ports { v81_5_address0 { O 15 vector } v81_5_ce0 { O 1 bit } v81_5_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'v81_5'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 149 \
    name v81_6 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename v81_6 \
    op interface \
    ports { v81_6_address0 { O 15 vector } v81_6_ce0 { O 1 bit } v81_6_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'v81_6'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 150 \
    name v81_7 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename v81_7 \
    op interface \
    ports { v81_7_address0 { O 15 vector } v81_7_ce0 { O 1 bit } v81_7_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'v81_7'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 151 \
    name v81_8 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename v81_8 \
    op interface \
    ports { v81_8_address0 { O 15 vector } v81_8_ce0 { O 1 bit } v81_8_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'v81_8'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 152 \
    name v81_9 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename v81_9 \
    op interface \
    ports { v81_9_address0 { O 15 vector } v81_9_ce0 { O 1 bit } v81_9_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'v81_9'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 153 \
    name v81_10 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename v81_10 \
    op interface \
    ports { v81_10_address0 { O 15 vector } v81_10_ce0 { O 1 bit } v81_10_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'v81_10'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 154 \
    name v81_11 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename v81_11 \
    op interface \
    ports { v81_11_address0 { O 15 vector } v81_11_ce0 { O 1 bit } v81_11_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'v81_11'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 155 \
    name v81_12 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename v81_12 \
    op interface \
    ports { v81_12_address0 { O 15 vector } v81_12_ce0 { O 1 bit } v81_12_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'v81_12'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 156 \
    name v81_13 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename v81_13 \
    op interface \
    ports { v81_13_address0 { O 15 vector } v81_13_ce0 { O 1 bit } v81_13_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'v81_13'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 157 \
    name v81_14 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename v81_14 \
    op interface \
    ports { v81_14_address0 { O 15 vector } v81_14_ce0 { O 1 bit } v81_14_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'v81_14'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 158 \
    name v81_15 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename v81_15 \
    op interface \
    ports { v81_15_address0 { O 15 vector } v81_15_ce0 { O 1 bit } v81_15_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'v81_15'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 159 \
    name v81_16 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename v81_16 \
    op interface \
    ports { v81_16_address0 { O 15 vector } v81_16_ce0 { O 1 bit } v81_16_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'v81_16'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 160 \
    name v81_17 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename v81_17 \
    op interface \
    ports { v81_17_address0 { O 15 vector } v81_17_ce0 { O 1 bit } v81_17_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'v81_17'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 161 \
    name v81_18 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename v81_18 \
    op interface \
    ports { v81_18_address0 { O 15 vector } v81_18_ce0 { O 1 bit } v81_18_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'v81_18'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 162 \
    name v81_19 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename v81_19 \
    op interface \
    ports { v81_19_address0 { O 15 vector } v81_19_ce0 { O 1 bit } v81_19_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'v81_19'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 163 \
    name v81_20 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename v81_20 \
    op interface \
    ports { v81_20_address0 { O 15 vector } v81_20_ce0 { O 1 bit } v81_20_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'v81_20'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 164 \
    name v81_21 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename v81_21 \
    op interface \
    ports { v81_21_address0 { O 15 vector } v81_21_ce0 { O 1 bit } v81_21_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'v81_21'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 165 \
    name v81_22 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename v81_22 \
    op interface \
    ports { v81_22_address0 { O 15 vector } v81_22_ce0 { O 1 bit } v81_22_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'v81_22'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 166 \
    name v81_23 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename v81_23 \
    op interface \
    ports { v81_23_address0 { O 15 vector } v81_23_ce0 { O 1 bit } v81_23_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'v81_23'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 168 \
    name v83 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename v83 \
    op interface \
    ports { v83_address0 { O 11 vector } v83_ce0 { O 1 bit } v83_we0 { O 1 bit } v83_d0 { O 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'v83'"
}
}


# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 142 \
    name v80_0_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_v80_0_V_read \
    op interface \
    ports { v80_0_V_read { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 167 \
    name v82_V \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_v82_V \
    op interface \
    ports { v82_V { I 32 vector } } \
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



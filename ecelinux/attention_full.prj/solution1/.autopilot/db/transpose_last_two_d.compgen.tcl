# This script segment is generated automatically by AutoPilot

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
    id 670 \
    name input_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename input_V \
    op interface \
    ports { input_V_address0 { O 14 vector } input_V_ce0 { O 1 bit } input_V_q0 { I 40 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'input_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 671 \
    name output_0_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename output_0_V \
    op interface \
    ports { output_0_V_address0 { O 8 vector } output_0_V_ce0 { O 1 bit } output_0_V_we0 { O 1 bit } output_0_V_d0 { O 40 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'output_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 672 \
    name output_1_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename output_1_V \
    op interface \
    ports { output_1_V_address0 { O 8 vector } output_1_V_ce0 { O 1 bit } output_1_V_we0 { O 1 bit } output_1_V_d0 { O 40 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'output_1_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 673 \
    name output_2_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename output_2_V \
    op interface \
    ports { output_2_V_address0 { O 8 vector } output_2_V_ce0 { O 1 bit } output_2_V_we0 { O 1 bit } output_2_V_d0 { O 40 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'output_2_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 674 \
    name output_3_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename output_3_V \
    op interface \
    ports { output_3_V_address0 { O 8 vector } output_3_V_ce0 { O 1 bit } output_3_V_we0 { O 1 bit } output_3_V_d0 { O 40 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'output_3_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 675 \
    name output_4_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename output_4_V \
    op interface \
    ports { output_4_V_address0 { O 8 vector } output_4_V_ce0 { O 1 bit } output_4_V_we0 { O 1 bit } output_4_V_d0 { O 40 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'output_4_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 676 \
    name output_5_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename output_5_V \
    op interface \
    ports { output_5_V_address0 { O 8 vector } output_5_V_ce0 { O 1 bit } output_5_V_we0 { O 1 bit } output_5_V_d0 { O 40 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'output_5_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 677 \
    name output_6_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename output_6_V \
    op interface \
    ports { output_6_V_address0 { O 8 vector } output_6_V_ce0 { O 1 bit } output_6_V_we0 { O 1 bit } output_6_V_d0 { O 40 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'output_6_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 678 \
    name output_7_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename output_7_V \
    op interface \
    ports { output_7_V_address0 { O 8 vector } output_7_V_ce0 { O 1 bit } output_7_V_we0 { O 1 bit } output_7_V_d0 { O 40 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'output_7_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 679 \
    name output_8_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename output_8_V \
    op interface \
    ports { output_8_V_address0 { O 8 vector } output_8_V_ce0 { O 1 bit } output_8_V_we0 { O 1 bit } output_8_V_d0 { O 40 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'output_8_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 680 \
    name output_9_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename output_9_V \
    op interface \
    ports { output_9_V_address0 { O 8 vector } output_9_V_ce0 { O 1 bit } output_9_V_we0 { O 1 bit } output_9_V_d0 { O 40 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'output_9_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 681 \
    name output_10_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename output_10_V \
    op interface \
    ports { output_10_V_address0 { O 8 vector } output_10_V_ce0 { O 1 bit } output_10_V_we0 { O 1 bit } output_10_V_d0 { O 40 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'output_10_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 682 \
    name output_11_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename output_11_V \
    op interface \
    ports { output_11_V_address0 { O 8 vector } output_11_V_ce0 { O 1 bit } output_11_V_we0 { O 1 bit } output_11_V_d0 { O 40 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'output_11_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 683 \
    name output_12_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename output_12_V \
    op interface \
    ports { output_12_V_address0 { O 8 vector } output_12_V_ce0 { O 1 bit } output_12_V_we0 { O 1 bit } output_12_V_d0 { O 40 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'output_12_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 684 \
    name output_13_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename output_13_V \
    op interface \
    ports { output_13_V_address0 { O 8 vector } output_13_V_ce0 { O 1 bit } output_13_V_we0 { O 1 bit } output_13_V_d0 { O 40 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'output_13_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 685 \
    name output_14_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename output_14_V \
    op interface \
    ports { output_14_V_address0 { O 8 vector } output_14_V_ce0 { O 1 bit } output_14_V_we0 { O 1 bit } output_14_V_d0 { O 40 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'output_14_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 686 \
    name output_15_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename output_15_V \
    op interface \
    ports { output_15_V_address0 { O 8 vector } output_15_V_ce0 { O 1 bit } output_15_V_we0 { O 1 bit } output_15_V_d0 { O 40 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'output_15_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 687 \
    name output_16_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename output_16_V \
    op interface \
    ports { output_16_V_address0 { O 8 vector } output_16_V_ce0 { O 1 bit } output_16_V_we0 { O 1 bit } output_16_V_d0 { O 40 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'output_16_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 688 \
    name output_17_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename output_17_V \
    op interface \
    ports { output_17_V_address0 { O 8 vector } output_17_V_ce0 { O 1 bit } output_17_V_we0 { O 1 bit } output_17_V_d0 { O 40 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'output_17_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 689 \
    name output_18_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename output_18_V \
    op interface \
    ports { output_18_V_address0 { O 8 vector } output_18_V_ce0 { O 1 bit } output_18_V_we0 { O 1 bit } output_18_V_d0 { O 40 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'output_18_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 690 \
    name output_19_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename output_19_V \
    op interface \
    ports { output_19_V_address0 { O 8 vector } output_19_V_ce0 { O 1 bit } output_19_V_we0 { O 1 bit } output_19_V_d0 { O 40 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'output_19_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 691 \
    name output_20_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename output_20_V \
    op interface \
    ports { output_20_V_address0 { O 8 vector } output_20_V_ce0 { O 1 bit } output_20_V_we0 { O 1 bit } output_20_V_d0 { O 40 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'output_20_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 692 \
    name output_21_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename output_21_V \
    op interface \
    ports { output_21_V_address0 { O 8 vector } output_21_V_ce0 { O 1 bit } output_21_V_we0 { O 1 bit } output_21_V_d0 { O 40 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'output_21_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 693 \
    name output_22_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename output_22_V \
    op interface \
    ports { output_22_V_address0 { O 8 vector } output_22_V_ce0 { O 1 bit } output_22_V_we0 { O 1 bit } output_22_V_d0 { O 40 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'output_22_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 694 \
    name output_23_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename output_23_V \
    op interface \
    ports { output_23_V_address0 { O 8 vector } output_23_V_ce0 { O 1 bit } output_23_V_we0 { O 1 bit } output_23_V_d0 { O 40 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'output_23_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 695 \
    name output_24_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename output_24_V \
    op interface \
    ports { output_24_V_address0 { O 8 vector } output_24_V_ce0 { O 1 bit } output_24_V_we0 { O 1 bit } output_24_V_d0 { O 40 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'output_24_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 696 \
    name output_25_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename output_25_V \
    op interface \
    ports { output_25_V_address0 { O 8 vector } output_25_V_ce0 { O 1 bit } output_25_V_we0 { O 1 bit } output_25_V_d0 { O 40 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'output_25_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 697 \
    name output_26_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename output_26_V \
    op interface \
    ports { output_26_V_address0 { O 8 vector } output_26_V_ce0 { O 1 bit } output_26_V_we0 { O 1 bit } output_26_V_d0 { O 40 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'output_26_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 698 \
    name output_27_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename output_27_V \
    op interface \
    ports { output_27_V_address0 { O 8 vector } output_27_V_ce0 { O 1 bit } output_27_V_we0 { O 1 bit } output_27_V_d0 { O 40 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'output_27_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 699 \
    name output_28_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename output_28_V \
    op interface \
    ports { output_28_V_address0 { O 8 vector } output_28_V_ce0 { O 1 bit } output_28_V_we0 { O 1 bit } output_28_V_d0 { O 40 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'output_28_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 700 \
    name output_29_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename output_29_V \
    op interface \
    ports { output_29_V_address0 { O 8 vector } output_29_V_ce0 { O 1 bit } output_29_V_we0 { O 1 bit } output_29_V_d0 { O 40 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'output_29_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 701 \
    name output_30_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename output_30_V \
    op interface \
    ports { output_30_V_address0 { O 8 vector } output_30_V_ce0 { O 1 bit } output_30_V_we0 { O 1 bit } output_30_V_d0 { O 40 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'output_30_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 702 \
    name output_31_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename output_31_V \
    op interface \
    ports { output_31_V_address0 { O 8 vector } output_31_V_ce0 { O 1 bit } output_31_V_we0 { O 1 bit } output_31_V_d0 { O 40 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'output_31_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 703 \
    name output_32_0_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename output_32_0_V \
    op interface \
    ports { output_32_0_V_address0 { O 7 vector } output_32_0_V_ce0 { O 1 bit } output_32_0_V_we0 { O 1 bit } output_32_0_V_d0 { O 40 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'output_32_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 704 \
    name output_33_0_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename output_33_0_V \
    op interface \
    ports { output_33_0_V_address0 { O 7 vector } output_33_0_V_ce0 { O 1 bit } output_33_0_V_we0 { O 1 bit } output_33_0_V_d0 { O 40 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'output_33_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 705 \
    name output_34_0_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename output_34_0_V \
    op interface \
    ports { output_34_0_V_address0 { O 7 vector } output_34_0_V_ce0 { O 1 bit } output_34_0_V_we0 { O 1 bit } output_34_0_V_d0 { O 40 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'output_34_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 706 \
    name output_35_0_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename output_35_0_V \
    op interface \
    ports { output_35_0_V_address0 { O 7 vector } output_35_0_V_ce0 { O 1 bit } output_35_0_V_we0 { O 1 bit } output_35_0_V_d0 { O 40 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'output_35_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 707 \
    name output_36_0_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename output_36_0_V \
    op interface \
    ports { output_36_0_V_address0 { O 7 vector } output_36_0_V_ce0 { O 1 bit } output_36_0_V_we0 { O 1 bit } output_36_0_V_d0 { O 40 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'output_36_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 708 \
    name output_37_0_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename output_37_0_V \
    op interface \
    ports { output_37_0_V_address0 { O 7 vector } output_37_0_V_ce0 { O 1 bit } output_37_0_V_we0 { O 1 bit } output_37_0_V_d0 { O 40 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'output_37_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 709 \
    name output_38_0_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename output_38_0_V \
    op interface \
    ports { output_38_0_V_address0 { O 7 vector } output_38_0_V_ce0 { O 1 bit } output_38_0_V_we0 { O 1 bit } output_38_0_V_d0 { O 40 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'output_38_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 710 \
    name output_39_0_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename output_39_0_V \
    op interface \
    ports { output_39_0_V_address0 { O 7 vector } output_39_0_V_ce0 { O 1 bit } output_39_0_V_we0 { O 1 bit } output_39_0_V_d0 { O 40 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'output_39_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 711 \
    name output_40_0_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename output_40_0_V \
    op interface \
    ports { output_40_0_V_address0 { O 7 vector } output_40_0_V_ce0 { O 1 bit } output_40_0_V_we0 { O 1 bit } output_40_0_V_d0 { O 40 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'output_40_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 712 \
    name output_41_0_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename output_41_0_V \
    op interface \
    ports { output_41_0_V_address0 { O 7 vector } output_41_0_V_ce0 { O 1 bit } output_41_0_V_we0 { O 1 bit } output_41_0_V_d0 { O 40 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'output_41_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 713 \
    name output_42_0_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename output_42_0_V \
    op interface \
    ports { output_42_0_V_address0 { O 7 vector } output_42_0_V_ce0 { O 1 bit } output_42_0_V_we0 { O 1 bit } output_42_0_V_d0 { O 40 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'output_42_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 714 \
    name output_43_0_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename output_43_0_V \
    op interface \
    ports { output_43_0_V_address0 { O 7 vector } output_43_0_V_ce0 { O 1 bit } output_43_0_V_we0 { O 1 bit } output_43_0_V_d0 { O 40 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'output_43_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 715 \
    name output_44_0_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename output_44_0_V \
    op interface \
    ports { output_44_0_V_address0 { O 7 vector } output_44_0_V_ce0 { O 1 bit } output_44_0_V_we0 { O 1 bit } output_44_0_V_d0 { O 40 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'output_44_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 716 \
    name output_45_0_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename output_45_0_V \
    op interface \
    ports { output_45_0_V_address0 { O 7 vector } output_45_0_V_ce0 { O 1 bit } output_45_0_V_we0 { O 1 bit } output_45_0_V_d0 { O 40 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'output_45_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 717 \
    name output_46_0_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename output_46_0_V \
    op interface \
    ports { output_46_0_V_address0 { O 7 vector } output_46_0_V_ce0 { O 1 bit } output_46_0_V_we0 { O 1 bit } output_46_0_V_d0 { O 40 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'output_46_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 718 \
    name output_47_0_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename output_47_0_V \
    op interface \
    ports { output_47_0_V_address0 { O 7 vector } output_47_0_V_ce0 { O 1 bit } output_47_0_V_we0 { O 1 bit } output_47_0_V_d0 { O 40 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'output_47_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 719 \
    name output_48_0_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename output_48_0_V \
    op interface \
    ports { output_48_0_V_address0 { O 7 vector } output_48_0_V_ce0 { O 1 bit } output_48_0_V_we0 { O 1 bit } output_48_0_V_d0 { O 40 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'output_48_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 720 \
    name output_49_0_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename output_49_0_V \
    op interface \
    ports { output_49_0_V_address0 { O 7 vector } output_49_0_V_ce0 { O 1 bit } output_49_0_V_we0 { O 1 bit } output_49_0_V_d0 { O 40 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'output_49_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 721 \
    name output_50_0_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename output_50_0_V \
    op interface \
    ports { output_50_0_V_address0 { O 7 vector } output_50_0_V_ce0 { O 1 bit } output_50_0_V_we0 { O 1 bit } output_50_0_V_d0 { O 40 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'output_50_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 722 \
    name output_51_0_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename output_51_0_V \
    op interface \
    ports { output_51_0_V_address0 { O 7 vector } output_51_0_V_ce0 { O 1 bit } output_51_0_V_we0 { O 1 bit } output_51_0_V_d0 { O 40 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'output_51_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 723 \
    name output_52_0_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename output_52_0_V \
    op interface \
    ports { output_52_0_V_address0 { O 7 vector } output_52_0_V_ce0 { O 1 bit } output_52_0_V_we0 { O 1 bit } output_52_0_V_d0 { O 40 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'output_52_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 724 \
    name output_53_0_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename output_53_0_V \
    op interface \
    ports { output_53_0_V_address0 { O 7 vector } output_53_0_V_ce0 { O 1 bit } output_53_0_V_we0 { O 1 bit } output_53_0_V_d0 { O 40 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'output_53_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 725 \
    name output_54_0_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename output_54_0_V \
    op interface \
    ports { output_54_0_V_address0 { O 7 vector } output_54_0_V_ce0 { O 1 bit } output_54_0_V_we0 { O 1 bit } output_54_0_V_d0 { O 40 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'output_54_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 726 \
    name output_55_0_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename output_55_0_V \
    op interface \
    ports { output_55_0_V_address0 { O 7 vector } output_55_0_V_ce0 { O 1 bit } output_55_0_V_we0 { O 1 bit } output_55_0_V_d0 { O 40 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'output_55_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 727 \
    name output_56_0_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename output_56_0_V \
    op interface \
    ports { output_56_0_V_address0 { O 7 vector } output_56_0_V_ce0 { O 1 bit } output_56_0_V_we0 { O 1 bit } output_56_0_V_d0 { O 40 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'output_56_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 728 \
    name output_57_0_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename output_57_0_V \
    op interface \
    ports { output_57_0_V_address0 { O 7 vector } output_57_0_V_ce0 { O 1 bit } output_57_0_V_we0 { O 1 bit } output_57_0_V_d0 { O 40 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'output_57_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 729 \
    name output_58_0_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename output_58_0_V \
    op interface \
    ports { output_58_0_V_address0 { O 7 vector } output_58_0_V_ce0 { O 1 bit } output_58_0_V_we0 { O 1 bit } output_58_0_V_d0 { O 40 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'output_58_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 730 \
    name output_59_0_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename output_59_0_V \
    op interface \
    ports { output_59_0_V_address0 { O 7 vector } output_59_0_V_ce0 { O 1 bit } output_59_0_V_we0 { O 1 bit } output_59_0_V_d0 { O 40 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'output_59_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 731 \
    name output_60_0_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename output_60_0_V \
    op interface \
    ports { output_60_0_V_address0 { O 7 vector } output_60_0_V_ce0 { O 1 bit } output_60_0_V_we0 { O 1 bit } output_60_0_V_d0 { O 40 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'output_60_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 732 \
    name output_61_0_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename output_61_0_V \
    op interface \
    ports { output_61_0_V_address0 { O 7 vector } output_61_0_V_ce0 { O 1 bit } output_61_0_V_we0 { O 1 bit } output_61_0_V_d0 { O 40 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'output_61_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 733 \
    name output_62_0_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename output_62_0_V \
    op interface \
    ports { output_62_0_V_address0 { O 7 vector } output_62_0_V_ce0 { O 1 bit } output_62_0_V_we0 { O 1 bit } output_62_0_V_d0 { O 40 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'output_62_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 734 \
    name output_63_0_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename output_63_0_V \
    op interface \
    ports { output_63_0_V_address0 { O 7 vector } output_63_0_V_ce0 { O 1 bit } output_63_0_V_we0 { O 1 bit } output_63_0_V_d0 { O 40 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'output_63_0_V'"
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



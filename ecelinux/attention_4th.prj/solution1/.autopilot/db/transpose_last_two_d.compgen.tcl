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
    id 190 \
    name input_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename input_V \
    op interface \
    ports { input_V_address0 { O 12 vector } input_V_ce0 { O 1 bit } input_V_q0 { I 40 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'input_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 191 \
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
    id 192 \
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
    id 193 \
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
    id 194 \
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
    id 195 \
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
    id 196 \
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
    id 197 \
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
    id 198 \
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
    id 199 \
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
    id 200 \
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
    id 201 \
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
    id 202 \
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
    id 203 \
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
    id 204 \
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
    id 205 \
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
    id 206 \
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



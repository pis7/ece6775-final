# This script segment is generated automatically by AutoPilot

# Memory (RAM/ROM)  definition:
set ID 35
set hasByteEnable 0
set MemName cache_update_k_cajbC
set CoreName ap_simcore_mem
set PortList { 1 }
set DataWd 24
set AddrRange 120
set AddrWd 7
set TrueReset 0
set IsROM 1
set ROMData { "000000000001010000101101" "000000010100011111101001" "111111011001001101111101" "000000010001101010000001" "111111111111010111101001" "000000010000011001010100" "111110101010100011011101" "111111100001000110011100" "111111101000101010101111" "000000000010110101100111" "111111110111011111001010" "111111111010101000111101" "001010010010010101100001" "110101000111111101001101" "001010000011101110101101" "101110111010001101110111" "110010110100111101010001" "110100110110010010000111" "110001011001000011011100" "111110100011011001100000" "110001111011001111100100" "110111010001110110001100" "000100000111100100101111" "111001110001100100011010" "001111001011010011010111" "111001110100100001111000" "111100100100100101010000" "110100011111010101101010" "111000010111110011010011" "111000110011111001000011" "111000101110000111011010" "111011010001011000100101" "000001001010001111110001" "111110010110110111111000" "000011101011100010001010" "111001111110100001101000" "000110000000011010011011" "000010010100001110110111" "000100101111101010011010" "111110011011110011111100" "111011111101110001100110" "111101101001011111110001" "111111001110000100111000" "111101110101110101110101" "110100011100001001111101" "000100000011111011000111" "000100110010000001001111" "111010000101101011000011" "111010111111010100101001" "000110100000110100000000" "111100110010000100010110" "111011101010110101110111" "000000101011001001001100" "000010001100011001111001" "111010000100010001100110" "000110101001110011001010" "000011001110100001100000" "000001011100011001111110" "000110110111101100001010" "111100000110001110000010" "000000100000011110011100" "000000000101010111000010" "000000000011110010001001" "111111011100101011111100" "111110101011110100001011" "000000001110110100011010" "111111111000000111100001" "000000000100011010100000" "111111100100111000100110" "111111100000001001111010" "000000111010111101011111" "111111101001111011011101" "110101101011011100111011" "111110001010100010000000" "000111111000001010101001" "000101001001011110111110" "111101001001010100010000" "111011100100101011111100" "001101100010011001000100" "111100101110110101110100" "000100001000110011010010" "111100111111011010110011" "110111000101011011110111" "111100101001111011100000" "110110100001001011101101" "111000011100101010100100" "010001100101000101011001" "001001001111000010110000" "000010100011001000101100" "110010000010001110100010" "001010010101011111100001" "111000001000010000101010" "000100111101010000011011" "111101110001001011110000" "110011001011011111101001" "110101110001111111110110" "000001111011101110101111" "110101101101100101101110" "001011010111100110100111" "111110110000110100011101" "111101000000000100110100" "111010011101000010110001" "000011000101001010110010" "111010111110110010001001" "111110110101011010000000" "111011011010100111000001" "110111010001110011110001" "111010010111001110110111" "000101010010001001001110" "111010011000100001001000" "000000110111110101100011" "111011110011111110010111" "111100011101001110010111" "000101100111111100101110" "000001011111111001001101" "000011110110101011101010" "111100001111100101001010" "111010010011100000100011" "000000000111000010010001" "111011010111101010111100" }
set HasInitializer 1
set Initializer $ROMData
set NumOfStage 2
set MaxLatency -1
set DelayBudget 3.254
set ClkPeriod 10
set RegisteredInput 0
if {${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_mem] == "ap_gen_simcore_mem"} {
    eval "ap_gen_simcore_mem { \
    id ${ID} \
    name ${MemName} \
    corename ${CoreName}  \
    op mem \
    hasByteEnable ${hasByteEnable} \
    reset_level 1 \
    sync_rst true \
    stage_num ${NumOfStage}  \
    registered_input ${RegisteredInput} \
    port_num 1 \
    port_list \{${PortList}\} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    addr_range ${AddrRange} \
    true_reset ${TrueReset} \
    delay_budget ${DelayBudget} \
    clk_period ${ClkPeriod} \
    HasInitializer ${HasInitializer} \
    rom_data \{${ROMData}\} \
 } "
} else {
    puts "@W \[IMPL-102\] Cannot find ap_gen_simcore_mem, check your platform lib"
}
}


if {${::AESL::PGuard_rtl_comp_handler}} {
  ::AP::rtl_comp_handler $MemName
}


set CoreName ROM_nP
if {${::AESL::PGuard_autocg_gen} && ${::AESL::PGuard_autocg_ipmgen}} {
if {[info proc ::AESL_LIB_VIRTEX::xil_gen_ROM] == "::AESL_LIB_VIRTEX::xil_gen_ROM"} {
    eval "::AESL_LIB_VIRTEX::xil_gen_ROM { \
    id ${ID} \
    name ${MemName} \
    corename ${CoreName}  \
    op mem \
    hasByteEnable ${hasByteEnable} \
    reset_level 1 \
    sync_rst true \
    stage_num ${NumOfStage}  \
    registered_input ${RegisteredInput} \
    port_num 1 \
    port_list \{${PortList}\} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    addr_range ${AddrRange} \
    true_reset ${TrueReset} \
    delay_budget ${DelayBudget} \
    clk_period ${ClkPeriod} \
    HasInitializer ${HasInitializer} \
    rom_data \{${ROMData}\} \
 } "
  } else {
    puts "@W \[IMPL-104\] Cannot find ::AESL_LIB_VIRTEX::xil_gen_ROM, check your platform lib"
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
    id 36 \
    name cache_out_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename cache_out_V \
    op interface \
    ports { cache_out_V_address0 { O 8 vector } cache_out_V_ce0 { O 1 bit } cache_out_V_we0 { O 1 bit } cache_out_V_d0 { O 38 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'cache_out_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 37 \
    name update_0_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename update_0_V \
    op interface \
    ports { update_0_V_address0 { O 5 vector } update_0_V_ce0 { O 1 bit } update_0_V_q0 { I 38 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'update_0_V'"
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



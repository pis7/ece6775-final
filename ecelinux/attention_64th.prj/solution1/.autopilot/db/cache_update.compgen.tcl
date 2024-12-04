# This script segment is generated automatically by AutoPilot

# Memory (RAM/ROM)  definition:
set ID 37
set hasByteEnable 0
set MemName cache_update_k_cakbM
set CoreName ap_simcore_mem
set PortList { 1 }
set DataWd 20
set AddrRange 120
set AddrWd 7
set TrueReset 0
set IsROM 1
set ROMData { "00000000000101000010" "00000001010001111110" "11111101100100110111" "00000001000110101000" "11111111111101011110" "00000001000001100101" "11111010101010001101" "11111110000100011001" "11111110100010101010" "00000000001011010110" "11111111011101111100" "11111111101010100011" "00101001001001010110" "11010100011111110100" "00101000001110111010" "10111011101000110111" "11001011010011110101" "11010011011001001000" "11000101100100001101" "11111010001101100110" "11000111101100111110" "11011101000111011000" "00010000011110010010" "11100111000110010001" "00111100101101001101" "11100111010010000111" "11110010010010010101" "11010001111101010110" "11100001011111001101" "11100011001111100100" "11100010111000011101" "11101101000101100010" "00000100101000111111" "11111001011011011111" "00001110101110001000" "11100111111010000110" "00011000000001101001" "00001001010000111011" "00010010111110101001" "11111001101111001111" "11101111110111000110" "11110110100101111111" "11111100111000010011" "11110111010111010111" "11010001110000100111" "00010000001111101100" "00010011001000000100" "11101000010110101100" "11101011111101010010" "00011010000011010000" "11110011001000010001" "11101110101011010111" "00000010101100100100" "00001000110001100111" "11101000010001000110" "00011010100111001100" "00001100111010000110" "00000101110001100111" "00011011011110110000" "11110000011000111000" "00000010000001111001" "00000000010101011100" "00000000001111001000" "11111101110010101111" "11111010101111010000" "00000000111011010001" "11111111100000011110" "00000000010001101010" "11111110010011100010" "11111110000000100111" "00000011101011110101" "11111110100111101101" "11010110101101110011" "11111000101010001000" "00011111100000101010" "00010100100101111011" "11110100100101010001" "11101110010010101111" "00110110001001100100" "11110010111011010111" "00010000100011001101" "11110011111101101011" "11011100010101101111" "11110010100111101110" "11011010000100101110" "11100001110010101010" "01000110010100010101" "00100100111100001011" "00001010001100100010" "11001000001000111010" "00101001010101111110" "11100000100001000010" "00010011110101000001" "11110111000100101111" "11001100101101111110" "11010111000111111111" "00000111101110111010" "11010110110110010110" "00101101011110011010" "11111011000011010001" "11110100000000010011" "11101001110100001011" "00001100010100101011" "11101011111011001000" "11111011010101101000" "11101101101010011100" "11011101000111001111" "11101001011100111011" "00010101001000100100" "11101001100010000100" "00000011011111010110" "11101111001111111001" "11110001110100111001" "00010110011111110010" "00000101111111100100" "00001111011010101110" "11110000111110010100" "11101001001110000010" "00000000011100001001" "11101101011110101011" }
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
    id 38 \
    name cache_out_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename cache_out_V \
    op interface \
    ports { cache_out_V_address0 { O 8 vector } cache_out_V_ce0 { O 1 bit } cache_out_V_we0 { O 1 bit } cache_out_V_d0 { O 40 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'cache_out_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 39 \
    name update_0_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename update_0_V \
    op interface \
    ports { update_0_V_address0 { O 5 vector } update_0_V_ce0 { O 1 bit } update_0_V_q0 { I 40 vector } } \
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



# This script segment is generated automatically by AutoPilot

# Memory (RAM/ROM)  definition:
set ID 24
set hasByteEnable 0
set MemName apply_rotary_pos_g8j
set CoreName ap_simcore_mem
set PortList { 1 }
set DataWd 17
set AddrRange 96
set AddrWd 7
set TrueReset 0
set IsROM 1
set ROMData { "00100100010011110" "10111001001010101" "10000100011100001" "10000110110111100" "10101000110001011" "11010100110001011" "11111110101101111" "00100001101000011" "00111100101000110" "01010000101000101" "01011111000100100" "01101001001110010" "01110000010101101" "01110101010000100" "01111000101001011" "01111010111110001" "01111100100100010" "01111101101010010" "01111110011001110" "01111110111010010" "01111111010000100" "01111111011111101" "01111111101001111" "01111111110000111" "01111111110101110" "01111111111001000" "01111111111011001" "01111111111100110" "01111111111101110" "01111111111110011" "01111111111110111" "01111111111111010" "01111111111111100" "01111111111111101" "01111111111111110" "01111111111111110" "01111111111111111" "01111111111111111" "01111111111111111" "01111111111111111" "01111111111111111" "01111111111111111" "01111111111111111" "01111111111111111" "01111111111111111" "01111111111111111" "01111111111111111" "01111111111111111" "00100100010011110" "10111001001010101" "10000100011100001" "10000110110111100" "10101000110001011" "11010100110001011" "11111110101101111" "00100001101000011" "00111100101000110" "01010000101000101" "01011111000100100" "01101001001110010" "01110000010101101" "01110101010000100" "01111000101001011" "01111010111110001" "01111100100100010" "01111101101010010" "01111110011001110" "01111110111010010" "01111111010000100" "01111111011111101" "01111111101001111" "01111111110000111" "01111111110101110" "01111111111001000" "01111111111011001" "01111111111100110" "01111111111101110" "01111111111110011" "01111111111110111" "01111111111111010" "01111111111111100" "01111111111111101" "01111111111111110" "01111111111111110" "01111111111111111" "01111111111111111" "01111111111111111" "01111111111111111" "01111111111111111" "01111111111111111" "01111111111111111" "01111111111111111" "01111111111111111" "01111111111111111" "01111111111111111" "01111111111111111" }
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


# Memory (RAM/ROM)  definition:
set ID 25
set hasByteEnable 0
set MemName apply_rotary_pos_hbi
set CoreName ap_simcore_mem
set PortList { 1 }
set DataWd 17
set AddrRange 96
set AddrWd 7
set TrueReset 0
set IsROM 1
set ROMData { "10000101010000011" "10010101011000101" "11011110100101000" "00101001010111100" "01011101101011010" "01111000011110101" "01111111111111100" "01111011100000001" "01110000101110011" "01100011011010000" "01010101101101001" "01001000111000100" "00111101010110100" "00110011010100111" "00101010110000011" "00100011100001100" "00011101011100001" "00011000010111001" "00010100001001100" "00010000101010010" "00001101110000110" "00001011010111001" "00001001011000101" "00000111101111111" "00000110011001100" "00000101010010000" "00000100010111000" "00000011100110010" "00000010111110001" "00000010011100111" "00000010000001100" "00000001101010110" "00000001011000010" "00000001001000110" "00000000111100000" "00000000110001100" "00000000101000111" "00000000100001110" "00000000011011111" "00000000010111000" "00000000010011000" "00000000001111101" "00000000001100111" "00000000001010101" "00000000001000110" "00000000000111010" "00000000000110000" "00000000000100111" "10000101010000011" "10010101011000101" "11011110100101000" "00101001010111100" "01011101101011010" "01111000011110101" "01111111111111100" "01111011100000001" "01110000101110011" "01100011011010000" "01010101101101001" "01001000111000100" "00111101010110100" "00110011010100111" "00101010110000011" "00100011100001100" "00011101011100001" "00011000010111001" "00010100001001100" "00010000101010010" "00001101110000110" "00001011010111001" "00001001011000101" "00000111101111111" "00000110011001100" "00000101010010000" "00000100010111000" "00000011100110010" "00000010111110001" "00000010011100111" "00000010000001100" "00000001101010110" "00000001011000010" "00000001001000110" "00000000111100000" "00000000110001100" "00000000101000111" "00000000100001110" "00000000011011111" "00000000010111000" "00000000010011000" "00000000001111101" "00000000001100111" "00000000001010101" "00000000001000110" "00000000000111010" "00000000000110000" "00000000000100111" }
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


# Memory (RAM/ROM)  definition:
set ID 26
set hasByteEnable 0
set MemName apply_rotary_pos_ibs
set CoreName ap_simcore_mem
set PortList { 2 0 }
set DataWd 40
set AddrRange 24
set AddrWd 5
set impl_style block
set TrueReset 0
set HasInitializer 0
set IsROM 0
set ROMData {}
set NumOfStage 2
set MaxLatency -1
set DelayBudget 2.322
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
    port_num 2 \
    port_list \{${PortList}\} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    addr_range ${AddrRange} \
    style ${impl_style} \
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


set CoreName RAM
if {${::AESL::PGuard_autocg_gen} && ${::AESL::PGuard_autocg_ipmgen}} {
if {[info proc ::AESL_LIB_VIRTEX::xil_gen_RAM] == "::AESL_LIB_VIRTEX::xil_gen_RAM"} {
    eval "::AESL_LIB_VIRTEX::xil_gen_RAM { \
    id ${ID} \
    name ${MemName} \
    corename ${CoreName}  \
    op mem \
    hasByteEnable ${hasByteEnable} \
    reset_level 1 \
    sync_rst true \
    stage_num ${NumOfStage}  \
    registered_input ${RegisteredInput} \
    port_num 2 \
    port_list \{${PortList}\} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    addr_range ${AddrRange} \
    style ${impl_style} \
    true_reset ${TrueReset} \
    delay_budget ${DelayBudget} \
    clk_period ${ClkPeriod} \
    HasInitializer ${HasInitializer} \
    rom_data \{${ROMData}\} \
 } "
  } else {
    puts "@W \[IMPL-104\] Cannot find ::AESL_LIB_VIRTEX::xil_gen_RAM, check your platform lib"
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
    id 27 \
    name input_q_0_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename input_q_0_V \
    op interface \
    ports { input_q_0_V_address0 { O 5 vector } input_q_0_V_ce0 { O 1 bit } input_q_0_V_q0 { I 40 vector } input_q_0_V_address1 { O 5 vector } input_q_0_V_ce1 { O 1 bit } input_q_0_V_q1 { I 40 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'input_q_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 28 \
    name input_k_0_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename input_k_0_V \
    op interface \
    ports { input_k_0_V_address0 { O 5 vector } input_k_0_V_ce0 { O 1 bit } input_k_0_V_q0 { I 40 vector } input_k_0_V_address1 { O 5 vector } input_k_0_V_ce1 { O 1 bit } input_k_0_V_q1 { I 40 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'input_k_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 29 \
    name output_q_0_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename output_q_0_V \
    op interface \
    ports { output_q_0_V_address0 { O 5 vector } output_q_0_V_ce0 { O 1 bit } output_q_0_V_we0 { O 1 bit } output_q_0_V_d0 { O 40 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'output_q_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 30 \
    name output_k_0_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename output_k_0_V \
    op interface \
    ports { output_k_0_V_address0 { O 5 vector } output_k_0_V_ce0 { O 1 bit } output_k_0_V_we0 { O 1 bit } output_k_0_V_d0 { O 40 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'output_k_0_V'"
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



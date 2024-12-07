# This script segment is generated automatically by AutoPilot

# Memory (RAM/ROM)  definition:
set ID 22
set hasByteEnable 0
set MemName apply_rotary_pos_fYi
set CoreName ap_simcore_mem
set PortList { 1 }
set DataWd 21
set AddrRange 96
set AddrWd 7
set TrueReset 0
set IsROM 1
set ROMData { "001001000100111100001" "101110010010101011110" "100001000111000010111" "100001101101111001110" "101010001100010111001" "110101001100010111001" "111111101011011111011" "001000011010000110010" "001111001010001101010" "010100001010001011011" "010111110001001000011" "011010010011100101010" "011100000101011010001" "011101010100001000101" "011110001010010111100" "011110101111100011001" "011111001001000101110" "011111011010100100000" "011111100110011101101" "011111101110100100110" "011111110100001000001" "011111110111111010100" "011111111010011111001" "011111111100001111100" "011111111101011100000" "011111111110010000010" "011111111110110011111" "011111111111001100001" "011111111111011100101" "011111111111100111111" "011111111111101111100" "011111111111110100110" "011111111111111000011" "011111111111111010110" "011111111111111100011" "011111111111111101100" "011111111111111110010" "011111111111111110111" "011111111111111111001" "011111111111111111011" "011111111111111111101" "011111111111111111110" "011111111111111111110" "011111111111111111111" "011111111111111111111" "011111111111111111111" "011111111111111111111" "011111111111111111111" "001001000100111100001" "101110010010101011110" "100001000111000010111" "100001101101111001110" "101010001100010111001" "110101001100010111001" "111111101011011111011" "001000011010000110010" "001111001010001101010" "010100001010001011011" "010111110001001000011" "011010010011100101010" "011100000101011010001" "011101010100001000101" "011110001010010111100" "011110101111100011001" "011111001001000101110" "011111011010100100000" "011111100110011101101" "011111101110100100110" "011111110100001000001" "011111110111111010100" "011111111010011111001" "011111111100001111100" "011111111101011100000" "011111111110010000010" "011111111110110011111" "011111111111001100001" "011111111111011100101" "011111111111100111111" "011111111111101111100" "011111111111110100110" "011111111111111000011" "011111111111111010110" "011111111111111100011" "011111111111111101100" "011111111111111110010" "011111111111111110111" "011111111111111111001" "011111111111111111011" "011111111111111111101" "011111111111111111110" "011111111111111111110" "011111111111111111111" "011111111111111111111" "011111111111111111111" "011111111111111111111" "011111111111111111111" }
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
set ID 23
set hasByteEnable 0
set MemName apply_rotary_pos_g8j
set CoreName ap_simcore_mem
set PortList { 1 }
set DataWd 21
set AddrRange 96
set AddrWd 7
set TrueReset 0
set IsROM 1
set ROMData { "100001010100000111111" "100101010110001010000" "110111101001010000001" "001010010101111000011" "010111011010110101010" "011110000111101011011" "011111111111111001011" "011110111000000010110" "011100001011100110111" "011000110110100001000" "010101011011010011001" "010010001110001000001" "001111010101101001001" "001100110101001110100" "001010101100000110000" "001000111000011000000" "000111010111000011101" "000110000101110010110" "000101000010011001110" "000100001010100101011" "000011011100001100101" "000010110101110010101" "000010010110001011010" "000001111011111111001" "000001100110011000010" "000001010100100000011" "000001000101110000001" "000000111001100100100" "000000101111100010001" "000000100111001111000" "000000100000011000011" "000000011010101101111" "000000010110000100011" "000000010010001101100" "000000001111000001110" "000000001100011001101" "000000001010001111100" "000000001000011100111" "000000000110111110100" "000000000101110000011" "000000000100110000001" "000000000011111011000" "000000000011001111001" "000000000010101011000" "000000000010001101001" "000000000001110100100" "000000000001100000001" "000000000001001111011" "100001010100000111111" "100101010110001010000" "110111101001010000001" "001010010101111000011" "010111011010110101010" "011110000111101011011" "011111111111111001011" "011110111000000010110" "011100001011100110111" "011000110110100001000" "010101011011010011001" "010010001110001000001" "001111010101101001001" "001100110101001110100" "001010101100000110000" "001000111000011000000" "000111010111000011101" "000110000101110010110" "000101000010011001110" "000100001010100101011" "000011011100001100101" "000010110101110010101" "000010010110001011010" "000001111011111111001" "000001100110011000010" "000001010100100000011" "000001000101110000001" "000000111001100100100" "000000101111100010001" "000000100111001111000" "000000100000011000011" "000000011010101101111" "000000010110000100011" "000000010010001101100" "000000001111000001110" "000000001100011001101" "000000001010001111100" "000000001000011100111" "000000000110111110100" "000000000101110000011" "000000000100110000001" "000000000011111011000" "000000000011001111001" "000000000010101011000" "000000000010001101001" "000000000001110100100" "000000000001100000001" "000000000001001111011" }
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
set ID 24
set hasByteEnable 0
set MemName apply_rotary_pos_hbi
set CoreName ap_simcore_mem
set PortList { 2 3 }
set DataWd 38
set AddrRange 1536
set AddrWd 11
set impl_style block
set TrueReset 0
set HasInitializer 0
set IsROM 0
set ROMData {}
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
    id 25 \
    name input_q_0_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename input_q_0_V \
    op interface \
    ports { input_q_0_V_address0 { O 11 vector } input_q_0_V_ce0 { O 1 bit } input_q_0_V_q0 { I 38 vector } input_q_0_V_address1 { O 11 vector } input_q_0_V_ce1 { O 1 bit } input_q_0_V_q1 { I 38 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'input_q_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 26 \
    name input_k_0_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename input_k_0_V \
    op interface \
    ports { input_k_0_V_address0 { O 11 vector } input_k_0_V_ce0 { O 1 bit } input_k_0_V_q0 { I 38 vector } input_k_0_V_address1 { O 11 vector } input_k_0_V_ce1 { O 1 bit } input_k_0_V_q1 { I 38 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'input_k_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 27 \
    name output_q_0_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename output_q_0_V \
    op interface \
    ports { output_q_0_V_address0 { O 11 vector } output_q_0_V_ce0 { O 1 bit } output_q_0_V_we0 { O 1 bit } output_q_0_V_d0 { O 38 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'output_q_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 28 \
    name output_k_0_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename output_k_0_V \
    op interface \
    ports { output_k_0_V_address0 { O 11 vector } output_k_0_V_ce0 { O 1 bit } output_k_0_V_we0 { O 1 bit } output_k_0_V_d0 { O 38 vector } } \
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



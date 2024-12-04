# This script segment is generated automatically by AutoPilot

# Memory (RAM/ROM)  definition:
set ID 597
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
set ID 598
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
set ID 599
set hasByteEnable 0
set MemName apply_rotary_pos_ibs
set CoreName ap_simcore_mem
set PortList { 2 3 }
set DataWd 40
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
    id 600 \
    name input_q_0_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename input_q_0_V \
    op interface \
    ports { input_q_0_V_address0 { O 11 vector } input_q_0_V_ce0 { O 1 bit } input_q_0_V_q0 { I 40 vector } input_q_0_V_address1 { O 11 vector } input_q_0_V_ce1 { O 1 bit } input_q_0_V_q1 { I 40 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'input_q_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 601 \
    name input_k_0_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename input_k_0_V \
    op interface \
    ports { input_k_0_V_address0 { O 11 vector } input_k_0_V_ce0 { O 1 bit } input_k_0_V_q0 { I 40 vector } input_k_0_V_address1 { O 11 vector } input_k_0_V_ce1 { O 1 bit } input_k_0_V_q1 { I 40 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'input_k_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 602 \
    name output_q_0_0_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename output_q_0_0_V \
    op interface \
    ports { output_q_0_0_V_address0 { O 5 vector } output_q_0_0_V_ce0 { O 1 bit } output_q_0_0_V_we0 { O 1 bit } output_q_0_0_V_d0 { O 40 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'output_q_0_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 603 \
    name output_q_1_0_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename output_q_1_0_V \
    op interface \
    ports { output_q_1_0_V_address0 { O 5 vector } output_q_1_0_V_ce0 { O 1 bit } output_q_1_0_V_we0 { O 1 bit } output_q_1_0_V_d0 { O 40 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'output_q_1_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 604 \
    name output_q_2_0_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename output_q_2_0_V \
    op interface \
    ports { output_q_2_0_V_address0 { O 5 vector } output_q_2_0_V_ce0 { O 1 bit } output_q_2_0_V_we0 { O 1 bit } output_q_2_0_V_d0 { O 40 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'output_q_2_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 605 \
    name output_q_3_0_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename output_q_3_0_V \
    op interface \
    ports { output_q_3_0_V_address0 { O 5 vector } output_q_3_0_V_ce0 { O 1 bit } output_q_3_0_V_we0 { O 1 bit } output_q_3_0_V_d0 { O 40 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'output_q_3_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 606 \
    name output_q_4_0_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename output_q_4_0_V \
    op interface \
    ports { output_q_4_0_V_address0 { O 5 vector } output_q_4_0_V_ce0 { O 1 bit } output_q_4_0_V_we0 { O 1 bit } output_q_4_0_V_d0 { O 40 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'output_q_4_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 607 \
    name output_q_5_0_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename output_q_5_0_V \
    op interface \
    ports { output_q_5_0_V_address0 { O 5 vector } output_q_5_0_V_ce0 { O 1 bit } output_q_5_0_V_we0 { O 1 bit } output_q_5_0_V_d0 { O 40 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'output_q_5_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 608 \
    name output_q_6_0_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename output_q_6_0_V \
    op interface \
    ports { output_q_6_0_V_address0 { O 5 vector } output_q_6_0_V_ce0 { O 1 bit } output_q_6_0_V_we0 { O 1 bit } output_q_6_0_V_d0 { O 40 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'output_q_6_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 609 \
    name output_q_7_0_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename output_q_7_0_V \
    op interface \
    ports { output_q_7_0_V_address0 { O 5 vector } output_q_7_0_V_ce0 { O 1 bit } output_q_7_0_V_we0 { O 1 bit } output_q_7_0_V_d0 { O 40 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'output_q_7_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 610 \
    name output_q_8_0_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename output_q_8_0_V \
    op interface \
    ports { output_q_8_0_V_address0 { O 5 vector } output_q_8_0_V_ce0 { O 1 bit } output_q_8_0_V_we0 { O 1 bit } output_q_8_0_V_d0 { O 40 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'output_q_8_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 611 \
    name output_q_9_0_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename output_q_9_0_V \
    op interface \
    ports { output_q_9_0_V_address0 { O 5 vector } output_q_9_0_V_ce0 { O 1 bit } output_q_9_0_V_we0 { O 1 bit } output_q_9_0_V_d0 { O 40 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'output_q_9_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 612 \
    name output_q_10_0_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename output_q_10_0_V \
    op interface \
    ports { output_q_10_0_V_address0 { O 5 vector } output_q_10_0_V_ce0 { O 1 bit } output_q_10_0_V_we0 { O 1 bit } output_q_10_0_V_d0 { O 40 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'output_q_10_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 613 \
    name output_q_11_0_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename output_q_11_0_V \
    op interface \
    ports { output_q_11_0_V_address0 { O 5 vector } output_q_11_0_V_ce0 { O 1 bit } output_q_11_0_V_we0 { O 1 bit } output_q_11_0_V_d0 { O 40 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'output_q_11_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 614 \
    name output_q_12_0_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename output_q_12_0_V \
    op interface \
    ports { output_q_12_0_V_address0 { O 5 vector } output_q_12_0_V_ce0 { O 1 bit } output_q_12_0_V_we0 { O 1 bit } output_q_12_0_V_d0 { O 40 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'output_q_12_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 615 \
    name output_q_13_0_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename output_q_13_0_V \
    op interface \
    ports { output_q_13_0_V_address0 { O 5 vector } output_q_13_0_V_ce0 { O 1 bit } output_q_13_0_V_we0 { O 1 bit } output_q_13_0_V_d0 { O 40 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'output_q_13_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 616 \
    name output_q_14_0_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename output_q_14_0_V \
    op interface \
    ports { output_q_14_0_V_address0 { O 5 vector } output_q_14_0_V_ce0 { O 1 bit } output_q_14_0_V_we0 { O 1 bit } output_q_14_0_V_d0 { O 40 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'output_q_14_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 617 \
    name output_q_15_0_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename output_q_15_0_V \
    op interface \
    ports { output_q_15_0_V_address0 { O 5 vector } output_q_15_0_V_ce0 { O 1 bit } output_q_15_0_V_we0 { O 1 bit } output_q_15_0_V_d0 { O 40 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'output_q_15_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 618 \
    name output_q_16_0_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename output_q_16_0_V \
    op interface \
    ports { output_q_16_0_V_address0 { O 5 vector } output_q_16_0_V_ce0 { O 1 bit } output_q_16_0_V_we0 { O 1 bit } output_q_16_0_V_d0 { O 40 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'output_q_16_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 619 \
    name output_q_17_0_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename output_q_17_0_V \
    op interface \
    ports { output_q_17_0_V_address0 { O 5 vector } output_q_17_0_V_ce0 { O 1 bit } output_q_17_0_V_we0 { O 1 bit } output_q_17_0_V_d0 { O 40 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'output_q_17_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 620 \
    name output_q_18_0_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename output_q_18_0_V \
    op interface \
    ports { output_q_18_0_V_address0 { O 5 vector } output_q_18_0_V_ce0 { O 1 bit } output_q_18_0_V_we0 { O 1 bit } output_q_18_0_V_d0 { O 40 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'output_q_18_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 621 \
    name output_q_19_0_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename output_q_19_0_V \
    op interface \
    ports { output_q_19_0_V_address0 { O 5 vector } output_q_19_0_V_ce0 { O 1 bit } output_q_19_0_V_we0 { O 1 bit } output_q_19_0_V_d0 { O 40 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'output_q_19_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 622 \
    name output_q_20_0_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename output_q_20_0_V \
    op interface \
    ports { output_q_20_0_V_address0 { O 5 vector } output_q_20_0_V_ce0 { O 1 bit } output_q_20_0_V_we0 { O 1 bit } output_q_20_0_V_d0 { O 40 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'output_q_20_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 623 \
    name output_q_21_0_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename output_q_21_0_V \
    op interface \
    ports { output_q_21_0_V_address0 { O 5 vector } output_q_21_0_V_ce0 { O 1 bit } output_q_21_0_V_we0 { O 1 bit } output_q_21_0_V_d0 { O 40 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'output_q_21_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 624 \
    name output_q_22_0_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename output_q_22_0_V \
    op interface \
    ports { output_q_22_0_V_address0 { O 5 vector } output_q_22_0_V_ce0 { O 1 bit } output_q_22_0_V_we0 { O 1 bit } output_q_22_0_V_d0 { O 40 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'output_q_22_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 625 \
    name output_q_23_0_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename output_q_23_0_V \
    op interface \
    ports { output_q_23_0_V_address0 { O 5 vector } output_q_23_0_V_ce0 { O 1 bit } output_q_23_0_V_we0 { O 1 bit } output_q_23_0_V_d0 { O 40 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'output_q_23_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 626 \
    name output_q_24_0_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename output_q_24_0_V \
    op interface \
    ports { output_q_24_0_V_address0 { O 5 vector } output_q_24_0_V_ce0 { O 1 bit } output_q_24_0_V_we0 { O 1 bit } output_q_24_0_V_d0 { O 40 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'output_q_24_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 627 \
    name output_q_25_0_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename output_q_25_0_V \
    op interface \
    ports { output_q_25_0_V_address0 { O 5 vector } output_q_25_0_V_ce0 { O 1 bit } output_q_25_0_V_we0 { O 1 bit } output_q_25_0_V_d0 { O 40 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'output_q_25_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 628 \
    name output_q_26_0_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename output_q_26_0_V \
    op interface \
    ports { output_q_26_0_V_address0 { O 5 vector } output_q_26_0_V_ce0 { O 1 bit } output_q_26_0_V_we0 { O 1 bit } output_q_26_0_V_d0 { O 40 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'output_q_26_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 629 \
    name output_q_27_0_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename output_q_27_0_V \
    op interface \
    ports { output_q_27_0_V_address0 { O 5 vector } output_q_27_0_V_ce0 { O 1 bit } output_q_27_0_V_we0 { O 1 bit } output_q_27_0_V_d0 { O 40 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'output_q_27_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 630 \
    name output_q_28_0_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename output_q_28_0_V \
    op interface \
    ports { output_q_28_0_V_address0 { O 5 vector } output_q_28_0_V_ce0 { O 1 bit } output_q_28_0_V_we0 { O 1 bit } output_q_28_0_V_d0 { O 40 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'output_q_28_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 631 \
    name output_q_29_0_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename output_q_29_0_V \
    op interface \
    ports { output_q_29_0_V_address0 { O 5 vector } output_q_29_0_V_ce0 { O 1 bit } output_q_29_0_V_we0 { O 1 bit } output_q_29_0_V_d0 { O 40 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'output_q_29_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 632 \
    name output_q_30_0_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename output_q_30_0_V \
    op interface \
    ports { output_q_30_0_V_address0 { O 5 vector } output_q_30_0_V_ce0 { O 1 bit } output_q_30_0_V_we0 { O 1 bit } output_q_30_0_V_d0 { O 40 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'output_q_30_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 633 \
    name output_q_31_0_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename output_q_31_0_V \
    op interface \
    ports { output_q_31_0_V_address0 { O 5 vector } output_q_31_0_V_ce0 { O 1 bit } output_q_31_0_V_we0 { O 1 bit } output_q_31_0_V_d0 { O 40 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'output_q_31_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 634 \
    name output_q_32_0_0_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename output_q_32_0_0_V \
    op interface \
    ports { output_q_32_0_0_V_address0 { O 4 vector } output_q_32_0_0_V_ce0 { O 1 bit } output_q_32_0_0_V_we0 { O 1 bit } output_q_32_0_0_V_d0 { O 40 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'output_q_32_0_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 635 \
    name output_q_33_0_0_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename output_q_33_0_0_V \
    op interface \
    ports { output_q_33_0_0_V_address0 { O 4 vector } output_q_33_0_0_V_ce0 { O 1 bit } output_q_33_0_0_V_we0 { O 1 bit } output_q_33_0_0_V_d0 { O 40 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'output_q_33_0_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 636 \
    name output_q_34_0_0_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename output_q_34_0_0_V \
    op interface \
    ports { output_q_34_0_0_V_address0 { O 4 vector } output_q_34_0_0_V_ce0 { O 1 bit } output_q_34_0_0_V_we0 { O 1 bit } output_q_34_0_0_V_d0 { O 40 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'output_q_34_0_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 637 \
    name output_q_35_0_0_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename output_q_35_0_0_V \
    op interface \
    ports { output_q_35_0_0_V_address0 { O 4 vector } output_q_35_0_0_V_ce0 { O 1 bit } output_q_35_0_0_V_we0 { O 1 bit } output_q_35_0_0_V_d0 { O 40 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'output_q_35_0_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 638 \
    name output_q_36_0_0_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename output_q_36_0_0_V \
    op interface \
    ports { output_q_36_0_0_V_address0 { O 4 vector } output_q_36_0_0_V_ce0 { O 1 bit } output_q_36_0_0_V_we0 { O 1 bit } output_q_36_0_0_V_d0 { O 40 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'output_q_36_0_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 639 \
    name output_q_37_0_0_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename output_q_37_0_0_V \
    op interface \
    ports { output_q_37_0_0_V_address0 { O 4 vector } output_q_37_0_0_V_ce0 { O 1 bit } output_q_37_0_0_V_we0 { O 1 bit } output_q_37_0_0_V_d0 { O 40 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'output_q_37_0_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 640 \
    name output_q_38_0_0_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename output_q_38_0_0_V \
    op interface \
    ports { output_q_38_0_0_V_address0 { O 4 vector } output_q_38_0_0_V_ce0 { O 1 bit } output_q_38_0_0_V_we0 { O 1 bit } output_q_38_0_0_V_d0 { O 40 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'output_q_38_0_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 641 \
    name output_q_39_0_0_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename output_q_39_0_0_V \
    op interface \
    ports { output_q_39_0_0_V_address0 { O 4 vector } output_q_39_0_0_V_ce0 { O 1 bit } output_q_39_0_0_V_we0 { O 1 bit } output_q_39_0_0_V_d0 { O 40 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'output_q_39_0_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 642 \
    name output_q_40_0_0_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename output_q_40_0_0_V \
    op interface \
    ports { output_q_40_0_0_V_address0 { O 4 vector } output_q_40_0_0_V_ce0 { O 1 bit } output_q_40_0_0_V_we0 { O 1 bit } output_q_40_0_0_V_d0 { O 40 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'output_q_40_0_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 643 \
    name output_q_41_0_0_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename output_q_41_0_0_V \
    op interface \
    ports { output_q_41_0_0_V_address0 { O 4 vector } output_q_41_0_0_V_ce0 { O 1 bit } output_q_41_0_0_V_we0 { O 1 bit } output_q_41_0_0_V_d0 { O 40 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'output_q_41_0_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 644 \
    name output_q_42_0_0_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename output_q_42_0_0_V \
    op interface \
    ports { output_q_42_0_0_V_address0 { O 4 vector } output_q_42_0_0_V_ce0 { O 1 bit } output_q_42_0_0_V_we0 { O 1 bit } output_q_42_0_0_V_d0 { O 40 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'output_q_42_0_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 645 \
    name output_q_43_0_0_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename output_q_43_0_0_V \
    op interface \
    ports { output_q_43_0_0_V_address0 { O 4 vector } output_q_43_0_0_V_ce0 { O 1 bit } output_q_43_0_0_V_we0 { O 1 bit } output_q_43_0_0_V_d0 { O 40 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'output_q_43_0_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 646 \
    name output_q_44_0_0_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename output_q_44_0_0_V \
    op interface \
    ports { output_q_44_0_0_V_address0 { O 4 vector } output_q_44_0_0_V_ce0 { O 1 bit } output_q_44_0_0_V_we0 { O 1 bit } output_q_44_0_0_V_d0 { O 40 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'output_q_44_0_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 647 \
    name output_q_45_0_0_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename output_q_45_0_0_V \
    op interface \
    ports { output_q_45_0_0_V_address0 { O 4 vector } output_q_45_0_0_V_ce0 { O 1 bit } output_q_45_0_0_V_we0 { O 1 bit } output_q_45_0_0_V_d0 { O 40 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'output_q_45_0_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 648 \
    name output_q_46_0_0_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename output_q_46_0_0_V \
    op interface \
    ports { output_q_46_0_0_V_address0 { O 4 vector } output_q_46_0_0_V_ce0 { O 1 bit } output_q_46_0_0_V_we0 { O 1 bit } output_q_46_0_0_V_d0 { O 40 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'output_q_46_0_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 649 \
    name output_q_47_0_0_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename output_q_47_0_0_V \
    op interface \
    ports { output_q_47_0_0_V_address0 { O 4 vector } output_q_47_0_0_V_ce0 { O 1 bit } output_q_47_0_0_V_we0 { O 1 bit } output_q_47_0_0_V_d0 { O 40 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'output_q_47_0_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 650 \
    name output_q_48_0_0_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename output_q_48_0_0_V \
    op interface \
    ports { output_q_48_0_0_V_address0 { O 4 vector } output_q_48_0_0_V_ce0 { O 1 bit } output_q_48_0_0_V_we0 { O 1 bit } output_q_48_0_0_V_d0 { O 40 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'output_q_48_0_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 651 \
    name output_q_49_0_0_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename output_q_49_0_0_V \
    op interface \
    ports { output_q_49_0_0_V_address0 { O 4 vector } output_q_49_0_0_V_ce0 { O 1 bit } output_q_49_0_0_V_we0 { O 1 bit } output_q_49_0_0_V_d0 { O 40 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'output_q_49_0_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 652 \
    name output_q_50_0_0_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename output_q_50_0_0_V \
    op interface \
    ports { output_q_50_0_0_V_address0 { O 4 vector } output_q_50_0_0_V_ce0 { O 1 bit } output_q_50_0_0_V_we0 { O 1 bit } output_q_50_0_0_V_d0 { O 40 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'output_q_50_0_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 653 \
    name output_q_51_0_0_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename output_q_51_0_0_V \
    op interface \
    ports { output_q_51_0_0_V_address0 { O 4 vector } output_q_51_0_0_V_ce0 { O 1 bit } output_q_51_0_0_V_we0 { O 1 bit } output_q_51_0_0_V_d0 { O 40 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'output_q_51_0_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 654 \
    name output_q_52_0_0_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename output_q_52_0_0_V \
    op interface \
    ports { output_q_52_0_0_V_address0 { O 4 vector } output_q_52_0_0_V_ce0 { O 1 bit } output_q_52_0_0_V_we0 { O 1 bit } output_q_52_0_0_V_d0 { O 40 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'output_q_52_0_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 655 \
    name output_q_53_0_0_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename output_q_53_0_0_V \
    op interface \
    ports { output_q_53_0_0_V_address0 { O 4 vector } output_q_53_0_0_V_ce0 { O 1 bit } output_q_53_0_0_V_we0 { O 1 bit } output_q_53_0_0_V_d0 { O 40 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'output_q_53_0_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 656 \
    name output_q_54_0_0_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename output_q_54_0_0_V \
    op interface \
    ports { output_q_54_0_0_V_address0 { O 4 vector } output_q_54_0_0_V_ce0 { O 1 bit } output_q_54_0_0_V_we0 { O 1 bit } output_q_54_0_0_V_d0 { O 40 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'output_q_54_0_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 657 \
    name output_q_55_0_0_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename output_q_55_0_0_V \
    op interface \
    ports { output_q_55_0_0_V_address0 { O 4 vector } output_q_55_0_0_V_ce0 { O 1 bit } output_q_55_0_0_V_we0 { O 1 bit } output_q_55_0_0_V_d0 { O 40 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'output_q_55_0_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 658 \
    name output_q_56_0_0_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename output_q_56_0_0_V \
    op interface \
    ports { output_q_56_0_0_V_address0 { O 4 vector } output_q_56_0_0_V_ce0 { O 1 bit } output_q_56_0_0_V_we0 { O 1 bit } output_q_56_0_0_V_d0 { O 40 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'output_q_56_0_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 659 \
    name output_q_57_0_0_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename output_q_57_0_0_V \
    op interface \
    ports { output_q_57_0_0_V_address0 { O 4 vector } output_q_57_0_0_V_ce0 { O 1 bit } output_q_57_0_0_V_we0 { O 1 bit } output_q_57_0_0_V_d0 { O 40 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'output_q_57_0_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 660 \
    name output_q_58_0_0_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename output_q_58_0_0_V \
    op interface \
    ports { output_q_58_0_0_V_address0 { O 4 vector } output_q_58_0_0_V_ce0 { O 1 bit } output_q_58_0_0_V_we0 { O 1 bit } output_q_58_0_0_V_d0 { O 40 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'output_q_58_0_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 661 \
    name output_q_59_0_0_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename output_q_59_0_0_V \
    op interface \
    ports { output_q_59_0_0_V_address0 { O 4 vector } output_q_59_0_0_V_ce0 { O 1 bit } output_q_59_0_0_V_we0 { O 1 bit } output_q_59_0_0_V_d0 { O 40 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'output_q_59_0_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 662 \
    name output_q_60_0_0_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename output_q_60_0_0_V \
    op interface \
    ports { output_q_60_0_0_V_address0 { O 4 vector } output_q_60_0_0_V_ce0 { O 1 bit } output_q_60_0_0_V_we0 { O 1 bit } output_q_60_0_0_V_d0 { O 40 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'output_q_60_0_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 663 \
    name output_q_61_0_0_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename output_q_61_0_0_V \
    op interface \
    ports { output_q_61_0_0_V_address0 { O 4 vector } output_q_61_0_0_V_ce0 { O 1 bit } output_q_61_0_0_V_we0 { O 1 bit } output_q_61_0_0_V_d0 { O 40 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'output_q_61_0_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 664 \
    name output_q_62_0_0_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename output_q_62_0_0_V \
    op interface \
    ports { output_q_62_0_0_V_address0 { O 4 vector } output_q_62_0_0_V_ce0 { O 1 bit } output_q_62_0_0_V_we0 { O 1 bit } output_q_62_0_0_V_d0 { O 40 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'output_q_62_0_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 665 \
    name output_q_63_0_0_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename output_q_63_0_0_V \
    op interface \
    ports { output_q_63_0_0_V_address0 { O 4 vector } output_q_63_0_0_V_ce0 { O 1 bit } output_q_63_0_0_V_we0 { O 1 bit } output_q_63_0_0_V_d0 { O 40 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'output_q_63_0_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 666 \
    name output_k_0_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename output_k_0_V \
    op interface \
    ports { output_k_0_V_address0 { O 11 vector } output_k_0_V_ce0 { O 1 bit } output_k_0_V_we0 { O 1 bit } output_k_0_V_d0 { O 40 vector } } \
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



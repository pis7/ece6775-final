-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity log_75_21_s_log_aeOg_rom is 
    generic(
             DWIDTH     : integer := 60; 
             AWIDTH     : integer := 6; 
             MEM_SIZE    : integer := 64
    ); 
    port (
          addr0      : in std_logic_vector(AWIDTH-1 downto 0); 
          ce0       : in std_logic; 
          q0         : out std_logic_vector(DWIDTH-1 downto 0);
          clk       : in std_logic
    ); 
end entity; 


architecture rtl of log_75_21_s_log_aeOg_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "000000000000000000000000000000000000000000000000000000000000", 
    1 => "000001000000000000000000000000000001010101010101010101010101", 
    2 => "000010000000000000100000000000010010101010110100101010110000", 
    3 => "000011000000000001100000000001010100000001001110000001001110", 
    4 => "000100000000000011000000000011100101011010000001011011111001", 
    5 => "000101000000000101000000000111100110110111011111000001101111", 
    6 => "000110000000000111100000001101111000011100100110111110111100", 
    7 => "000111000000001010100000010110111010001101001001100110011101", 
    8 => "001000000000001110000000100011001100001101100111010011100001", 
    9 => "001001000000010010000000110011001110100011010000101011000111", 
    10 => "001010000000010110100001000111100001010100000110011101011111", 
    11 => "001011000000011011100001100000100100100110111001100111101110", 
    12 => "001100000000100001000001111110111000100011001011010101001001", 
    13 => "001101000000100111000010100010111101010001001101000000111000", 
    14 => "001110000000101101100011001101010010111010000000010111011010", 
    15 => "001111000000110100100011111110011001100111010111011000000000", 
    16 => "010000000000111100000100110110110001100011110100010110010000", 
    17 => "010001000001000100000101110110111010111010101001111011101000", 
    18 => "010010000001001100100110111111010101110111111011001000111100", 
    19 => "010011000001010101101000010000100010101000011011010111111001", 
    20 => "010100000001011111001001101011000001011001101110011100100011", 
    21 => "010101000001101001001011001111010010011010001000100110111010", 
    22 => "010110000001110011101100111101110101111000101110100100011000", 
    23 => "010111000001111110101110110111001100000101010101100001010101", 
    24 => "011000000010001010010000111011110101010000100011001010100101", 
    25 => "011001000010010110010011001100010001101011101101101110111011", 
    26 => "011010000010100010110101101001000001101000111100000000101100", 
    27 => "011011000010101111111000010010100101011011000101010111001101", 
    28 => "011100000010111101011011001001011101010101110001110000010110", 
    29 => "011101000011001011011110001110001001101101011001110010000100", 
    30 => "011110000011011010000001100001001010110111000110101011111100", 
    31 => "011111000011101001000101000011000001001000110010011000101010", 
    32 => "100000000011111000101000110100001100111001000111011111100001", 
    33 => "100001000100001000101100110101001110011111100001010110000100", 
    34 => "100010000100011001010001000110100110010100001100000001100001", 
    35 => "100011000100101010010101101000110100110000000100011000010100", 
    36 => "100100000100111011111010011100011010001100111000000011101101", 
    37 => "100101000101001101111111100001110111000101000101100001001100", 
    38 => "100110000101100000100100111001101011110011111100000100001001", 
    39 => "100111000101110011101010100100011000110101011011110111010010", 
    40 => "101000000110000111010000100010011110100110010101111110001111", 
    41 => "101001000110011011010110110100011101100100001100010111000100", 
    42 => "101010000110101111111101011010110110001101010001111011110011", 
    43 => "101011000111000101000100010110001001000000101010100011111110", 
    44 => "101100000111011010101011100110110110011110001011000110001010", 
    45 => "101101000111110000110011001101011111000110011001011001100011", 
    46 => "101110001000000111011011001010100011011010101100010111011011", 
    47 => "101111001000011110100011011110100011111101001011111100110000", 
    48 => "110000001000110110001100001010000001010000110001001011101101", 
    49 => "110001001001001110010101001101011011111001000110001101001101", 
    50 => "110010001001100110111110101001010100011010100110010010011110", 
    51 => "110011001010000000001000011110001011011010011101110110100100", 
    52 => "110100001010011001110010101100100001011110101010011111111010", 
    53 => "110101001010110011111101010100110111001101111011000001111010", 
    54 => "110110001011001110101000010111101101001111101111011110011001", 
    55 => "110111001011101001110011110101100100001100011001000111010001", 
    56 => "111000001100000101011111101110111100101100111010011111111110", 
    57 => "111001001100100001101100000100010111011011000111011111000110", 
    58 => "111010001100111110011000110110010101000001100101001111111011", 
    59 => "111011001101011011100110000101010110001011101010010011111101", 
    60 => "111100001101111001010011110001111011100101011110100100011101", 
    61 => "111101001110010111100001111100100101111011111011010100000100", 
    62 => "111110001110110110010000100101110101111100101011010000010100", 
    63 => "111111001111010101011111101110001100010110001010100011001001" );


begin 


memory_access_guard_0: process (addr0) 
begin
      addr0_tmp <= addr0;
--synthesis translate_off
      if (CONV_INTEGER(addr0) > mem_size-1) then
           addr0_tmp <= (others => '0');
      else 
           addr0_tmp <= addr0;
      end if;
--synthesis translate_on
end process;

p_rom_access: process (clk)  
begin 
    if (clk'event and clk = '1') then
        if (ce0 = '1') then 
            q0 <= mem(CONV_INTEGER(addr0_tmp)); 
        end if;
    end if;
end process;

end rtl;

Library IEEE;
use IEEE.std_logic_1164.all;

entity log_75_21_s_log_aeOg is
    generic (
        DataWidth : INTEGER := 60;
        AddressRange : INTEGER := 64;
        AddressWidth : INTEGER := 6);
    port (
        reset : IN STD_LOGIC;
        clk : IN STD_LOGIC;
        address0 : IN STD_LOGIC_VECTOR(AddressWidth - 1 DOWNTO 0);
        ce0 : IN STD_LOGIC;
        q0 : OUT STD_LOGIC_VECTOR(DataWidth - 1 DOWNTO 0));
end entity;

architecture arch of log_75_21_s_log_aeOg is
    component log_75_21_s_log_aeOg_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    log_75_21_s_log_aeOg_rom_U :  component log_75_21_s_log_aeOg_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


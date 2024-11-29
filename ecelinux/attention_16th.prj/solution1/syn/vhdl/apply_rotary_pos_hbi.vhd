-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity apply_rotary_pos_hbi_rom is 
    generic(
             DWIDTH     : integer := 17; 
             AWIDTH     : integer := 7; 
             MEM_SIZE    : integer := 96
    ); 
    port (
          addr0      : in std_logic_vector(AWIDTH-1 downto 0); 
          ce0       : in std_logic; 
          q0         : out std_logic_vector(DWIDTH-1 downto 0);
          clk       : in std_logic
    ); 
end entity; 


architecture rtl of apply_rotary_pos_hbi_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "10000101010000011", 1 => "10010101011000101", 
    2 => "11011110100101000", 3 => "00101001010111100", 
    4 => "01011101101011010", 5 => "01111000011110101", 
    6 => "01111111111111100", 7 => "01111011100000001", 
    8 => "01110000101110011", 9 => "01100011011010000", 
    10 => "01010101101101001", 11 => "01001000111000100", 
    12 => "00111101010110100", 13 => "00110011010100111", 
    14 => "00101010110000011", 15 => "00100011100001100", 
    16 => "00011101011100001", 17 => "00011000010111001", 
    18 => "00010100001001100", 19 => "00010000101010010", 
    20 => "00001101110000110", 21 => "00001011010111001", 
    22 => "00001001011000101", 23 => "00000111101111111", 
    24 => "00000110011001100", 25 => "00000101010010000", 
    26 => "00000100010111000", 27 => "00000011100110010", 
    28 => "00000010111110001", 29 => "00000010011100111", 
    30 => "00000010000001100", 31 => "00000001101010110", 
    32 => "00000001011000010", 33 => "00000001001000110", 
    34 => "00000000111100000", 35 => "00000000110001100", 
    36 => "00000000101000111", 37 => "00000000100001110", 
    38 => "00000000011011111", 39 => "00000000010111000", 
    40 => "00000000010011000", 41 => "00000000001111101", 
    42 => "00000000001100111", 43 => "00000000001010101", 
    44 => "00000000001000110", 45 => "00000000000111010", 
    46 => "00000000000110000", 47 => "00000000000100111", 
    48 => "10000101010000011", 49 => "10010101011000101", 
    50 => "11011110100101000", 51 => "00101001010111100", 
    52 => "01011101101011010", 53 => "01111000011110101", 
    54 => "01111111111111100", 55 => "01111011100000001", 
    56 => "01110000101110011", 57 => "01100011011010000", 
    58 => "01010101101101001", 59 => "01001000111000100", 
    60 => "00111101010110100", 61 => "00110011010100111", 
    62 => "00101010110000011", 63 => "00100011100001100", 
    64 => "00011101011100001", 65 => "00011000010111001", 
    66 => "00010100001001100", 67 => "00010000101010010", 
    68 => "00001101110000110", 69 => "00001011010111001", 
    70 => "00001001011000101", 71 => "00000111101111111", 
    72 => "00000110011001100", 73 => "00000101010010000", 
    74 => "00000100010111000", 75 => "00000011100110010", 
    76 => "00000010111110001", 77 => "00000010011100111", 
    78 => "00000010000001100", 79 => "00000001101010110", 
    80 => "00000001011000010", 81 => "00000001001000110", 
    82 => "00000000111100000", 83 => "00000000110001100", 
    84 => "00000000101000111", 85 => "00000000100001110", 
    86 => "00000000011011111", 87 => "00000000010111000", 
    88 => "00000000010011000", 89 => "00000000001111101", 
    90 => "00000000001100111", 91 => "00000000001010101", 
    92 => "00000000001000110", 93 => "00000000000111010", 
    94 => "00000000000110000", 95 => "00000000000100111" );


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

entity apply_rotary_pos_hbi is
    generic (
        DataWidth : INTEGER := 17;
        AddressRange : INTEGER := 96;
        AddressWidth : INTEGER := 7);
    port (
        reset : IN STD_LOGIC;
        clk : IN STD_LOGIC;
        address0 : IN STD_LOGIC_VECTOR(AddressWidth - 1 DOWNTO 0);
        ce0 : IN STD_LOGIC;
        q0 : OUT STD_LOGIC_VECTOR(DataWidth - 1 DOWNTO 0));
end entity;

architecture arch of apply_rotary_pos_hbi is
    component apply_rotary_pos_hbi_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    apply_rotary_pos_hbi_rom_U :  component apply_rotary_pos_hbi_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;



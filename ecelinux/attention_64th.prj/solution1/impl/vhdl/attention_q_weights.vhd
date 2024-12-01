-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity attention_q_weights_rom is 
    generic(
             DWIDTH     : integer := 8; 
             AWIDTH     : integer := 8; 
             MEM_SIZE    : integer := 144
    ); 
    port (
          addr0      : in std_logic_vector(AWIDTH-1 downto 0); 
          ce0       : in std_logic; 
          q0         : out std_logic_vector(DWIDTH-1 downto 0);
          clk       : in std_logic
    ); 
end entity; 


architecture rtl of attention_q_weights_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "10000010", 1 => "00011001", 2 => "01000101", 3 => "10101000", 
    4 => "00011001", 5 => "00001010", 6 => "10010101", 7 => "00010100", 
    8 => "00010101", 9 => "10010000", 10 => "00001001", 11 => "01100010", 
    12 => "10001010", 13 => "10010010", 14 => "01010001", 15 => "01101010", 
    16 => "01010001", 17 => "10010100", 18 => "10010001", 19 to 20=> "00000000", 
    21 => "10000001", 22 => "00000100", 23 => "00011010", 24 => "10100001", 
    25 => "01100110", 26 => "00101000", 27 => "01010000", 28 => "01101000", 
    29 => "00100000", 30 => "10100101", 31 => "10100100", 32 => "10010010", 
    33 => "00000010", 34 => "01101000", 35 => "10010001", 36 => "00101000", 
    37 => "00011010", 38 => "10000010", 39 => "01011010", 40 => "10101010", 
    41 => "01010010", 42 => "10101000", 43 => "10000000", 44 => "10101010", 
    45 => "10011000", 46 => "10000000", 47 => "10010001", 48 => "00000010", 
    49 => "00001001", 50 => "00000101", 51 => "01000101", 52 => "10001000", 
    53 => "01100010", 54 => "00001001", 55 => "10010010", 56 => "00000001", 
    57 to 58=> "01101001", 59 => "00100101", 60 => "00010100", 61 => "00001000", 
    62 => "00101010", 63 => "10011010", 64 => "00100101", 65 => "10000010", 
    66 => "10101000", 67 => "10100010", 68 => "01000101", 69 => "00001010", 
    70 => "10001010", 71 => "10011001", 72 => "00010100", 73 => "01101001", 
    74 => "00100110", 75 => "10010000", 76 => "10001000", 77 => "10010000", 
    78 => "00000100", 79 => "00010000", 80 => "10101000", 81 => "00011000", 
    82 => "00000100", 83 => "10010000", 84 => "01100110", 85 => "00011000", 
    86 => "00010000", 87 => "00010100", 88 => "01010010", 89 => "01101010", 
    90 => "01000100", 91 => "10010000", 92 => "00100100", 93 => "10011010", 
    94 => "10010000", 95 => "00000101", 96 => "10010100", 97 => "00001000", 
    98 => "10010101", 99 => "00001000", 100 => "10000010", 101 => "01010100", 
    102 => "10001010", 103 => "10010001", 104 => "10010000", 105 => "00010010", 
    106 => "10000110", 107 => "01010000", 108 => "10010001", 109 => "10010110", 
    110 => "00001000", 111 => "01001000", 112 => "10101001", 113 => "10010110", 
    114 => "10011000", 115 to 116=> "01000101", 117 => "10010101", 118 => "01100001", 
    119 => "01000110", 120 => "01101001", 121 => "10010101", 122 => "00001000", 
    123 => "10001001", 124 => "10010101", 125 => "01010001", 126 => "10000010", 
    127 => "10010000", 128 => "00010000", 129 => "00101010", 130 => "10010110", 
    131 => "01010001", 132 => "00010110", 133 => "01010110", 134 => "10000000", 
    135 => "01101001", 136 => "10010001", 137 => "01000001", 138 => "10100100", 
    139 => "01100110", 140 => "01011010", 141 => "10010110", 142 => "10001010", 
    143 => "00011001" );

attribute syn_rom_style : string;
attribute syn_rom_style of mem : signal is "block_rom";
attribute ROM_STYLE : string;
attribute ROM_STYLE of mem : signal is "block";

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

entity attention_q_weights is
    generic (
        DataWidth : INTEGER := 8;
        AddressRange : INTEGER := 144;
        AddressWidth : INTEGER := 8);
    port (
        reset : IN STD_LOGIC;
        clk : IN STD_LOGIC;
        address0 : IN STD_LOGIC_VECTOR(AddressWidth - 1 DOWNTO 0);
        ce0 : IN STD_LOGIC;
        q0 : OUT STD_LOGIC_VECTOR(DataWidth - 1 DOWNTO 0));
end entity;

architecture arch of attention_q_weights is
    component attention_q_weights_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    attention_q_weights_rom_U :  component attention_q_weights_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;



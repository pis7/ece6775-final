-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity attention_k_weights_rom is 
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


architecture rtl of attention_k_weights_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "10010010", 1 => "00100101", 2 => "10100110", 3 => "01100001", 
    4 => "10100101", 5 => "00100000", 6 => "01100001", 7 => "00000100", 
    8 => "01010001", 9 => "00010100", 10 => "10100101", 11 => "01010101", 
    12 => "10001000", 13 => "10010110", 14 => "10100000", 15 => "00011010", 
    16 => "10001000", 17 => "01000001", 18 => "00010000", 19 => "01011010", 
    20 => "10100010", 21 => "01010010", 22 => "10101000", 23 => "10101010", 
    24 => "01001001", 25 => "10100010", 26 => "01011001", 27 => "10101010", 
    28 => "10100010", 29 => "10100110", 30 => "00100100", 31 => "10100100", 
    32 => "00100110", 33 => "10100010", 34 => "01000000", 35 => "00010100", 
    36 => "00101001", 37 => "10011001", 38 => "00000010", 39 => "01100010", 
    40 => "10001001", 41 => "10000110", 42 => "01001000", 43 => "10010100", 
    44 to 45=> "10000001", 46 => "10100001", 47 => "01001010", 48 => "10000110", 
    49 => "01011010", 50 => "10000100", 51 => "01010000", 52 => "01101010", 
    53 => "01011000", 54 => "01000000", 55 => "00100001", 56 => "01101001", 
    57 => "01010110", 58 => "10100110", 59 => "01000000", 60 => "01010001", 
    61 => "01101001", 62 => "01100100", 63 => "00011001", 64 => "10100001", 
    65 => "00010110", 66 => "01100001", 67 => "10001001", 68 => "00100110", 
    69 => "10101010", 70 => "01011010", 71 => "01100100", 72 => "00000001", 
    73 => "10010100", 74 => "01101000", 75 => "00001001", 76 => "00010001", 
    77 => "00010000", 78 => "00100100", 79 => "10000000", 80 => "00000000", 
    81 => "00011010", 82 => "01010110", 83 => "00010101", 84 => "00001000", 
    85 => "00001010", 86 => "00101000", 87 => "00101010", 88 => "01010000", 
    89 => "00000101", 90 => "10011010", 91 => "01000101", 92 => "10101010", 
    93 => "01010101", 94 => "10100001", 95 => "01100000", 96 => "01100001", 
    97 => "10011001", 98 => "00100000", 99 => "10000110", 100 to 101=> "10010000", 
    102 => "10000010", 103 => "10100110", 104 => "00000110", 105 => "01010000", 
    106 => "10100100", 107 => "01010110", 108 => "10000001", 109 => "00010000", 
    110 => "00001001", 111 => "01100110", 112 => "10010110", 113 => "10000101", 
    114 => "10001000", 115 => "01010010", 116 => "00010101", 117 => "01011010", 
    118 => "10000101", 119 => "01001001", 120 => "00000000", 121 => "00010001", 
    122 => "01000110", 123 => "00000000", 124 => "01000010", 125 => "10011010", 
    126 => "01010110", 127 => "10001001", 128 => "10001000", 129 => "10001010", 
    130 => "01000100", 131 => "00000100", 132 => "01000010", 133 => "00101001", 
    134 => "10001000", 135 => "01100101", 136 => "01101001", 137 to 138=> "10001001", 
    139 => "01100000", 140 => "01001010", 141 => "00101001", 142 => "01100000", 
    143 => "10100110" );

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

entity attention_k_weights is
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

architecture arch of attention_k_weights is
    component attention_k_weights_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    attention_k_weights_rom_U :  component attention_k_weights_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;



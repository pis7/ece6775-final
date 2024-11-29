-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity attention_o_weights_rom is 
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


architecture rtl of attention_o_weights_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "10010110", 1 => "01101001", 2 => "10101000", 3 => "10100101", 
    4 => "10000110", 5 => "10100100", 6 => "10011001", 7 => "01100110", 
    8 => "10100101", 9 => "01010010", 10 => "00000010", 11 => "01010101", 
    12 => "00000010", 13 => "01010110", 14 => "01000010", 15 => "10010110", 
    16 => "10100010", 17 => "01010001", 18 => "10100010", 19 => "01010010", 
    20 => "01101010", 21 => "01100101", 22 => "01011001", 23 => "01010110", 
    24 => "00010110", 25 => "01010110", 26 => "00000101", 27 => "00011010", 
    28 => "01101000", 29 => "01010100", 30 => "00011010", 31 => "01010101", 
    32 => "10011010", 33 => "01100101", 34 => "00000101", 35 => "01010010", 
    36 => "10010001", 37 => "00010000", 38 => "01000101", 39 => "00010101", 
    40 => "01100101", 41 => "00000101", 42 => "01100010", 43 => "10010101", 
    44 => "01010000", 45 => "10000001", 46 => "00100000", 47 => "01101001", 
    48 => "00011000", 49 => "01010110", 50 => "00001001", 51 => "01000001", 
    52 => "01010110", 53 => "01001010", 54 => "01101001", 55 => "10000110", 
    56 => "10101010", 57 => "10000100", 58 => "10100110", 59 => "00011000", 
    60 => "01011001", 61 => "00100001", 62 => "10000100", 63 => "10011010", 
    64 to 65=> "10000110", 66 => "01101001", 67 => "00001001", 68 => "10000100", 
    69 => "00010110", 70 => "01010100", 71 => "10100100", 72 => "10010110", 
    73 => "10101010", 74 => "01001000", 75 => "00100001", 76 => "01010001", 
    77 => "00101000", 78 => "01101000", 79 => "01001001", 80 => "10000110", 
    81 => "01001001", 82 => "10010110", 83 => "10100101", 84 => "10011000", 
    85 => "10000110", 86 => "10100101", 87 => "01000100", 88 => "00101010", 
    89 => "10010001", 90 => "01011001", 91 => "10100110", 92 => "00011010", 
    93 => "10101001", 94 => "10010101", 95 => "01010100", 96 => "00000101", 
    97 => "00010101", 98 => "10001010", 99 => "10001000", 100 => "00011001", 
    101 => "10100100", 102 => "00001010", 103 => "10101001", 104 => "01001001", 
    105 => "01011001", 106 => "01000000", 107 => "00100110", 108 => "10010101", 
    109 => "10100101", 110 => "10100010", 111 => "01100001", 112 => "00100110", 
    113 => "10010100", 114 => "10000010", 115 => "10000100", 116 => "01101000", 
    117 => "01000100", 118 => "00101010", 119 => "10100101", 120 => "00101001", 
    121 => "10100000", 122 => "10100101", 123 => "01101001", 124 => "10011010", 
    125 => "01101000", 126 => "10010110", 127 => "10100000", 128 => "01100101", 
    129 => "00000000", 130 => "01011001", 131 => "01100110", 132 => "10100010", 
    133 => "10001001", 134 => "01011000", 135 => "01001010", 136 => "10000000", 
    137 => "10001000", 138 => "01011010", 139 => "00000000", 140 => "00010110", 
    141 => "01001010", 142 => "10000001", 143 => "10000100" );

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

entity attention_o_weights is
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

architecture arch of attention_o_weights is
    component attention_o_weights_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    attention_o_weights_rom_U :  component attention_o_weights_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;



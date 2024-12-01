-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity attention_v_weights_rom is 
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


architecture rtl of attention_v_weights_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "00001010", 1 => "00100010", 2 => "01100101", 3 => "00010010", 
    4 => "00000001", 5 => "10101001", 6 => "00100001", 7 => "01011010", 
    8 => "01010001", 9 => "01000101", 10 => "00000101", 11 => "10010101", 
    12 => "10011010", 13 => "10001000", 14 => "01011001", 15 => "10001001", 
    16 => "00000000", 17 => "10010110", 18 => "00001001", 19 => "00100010", 
    20 => "10100101", 21 => "10010110", 22 => "00100101", 23 => "10001010", 
    24 => "10011010", 25 => "10101000", 26 => "10101010", 27 => "01100100", 
    28 => "01001010", 29 => "00000101", 30 => "01010110", 31 => "01010001", 
    32 => "10100110", 33 => "00101001", 34 => "01000001", 35 => "10011001", 
    36 => "00010101", 37 => "10101001", 38 => "01010110", 39 => "10100101", 
    40 => "01000100", 41 => "00000110", 42 => "00100000", 43 => "00010000", 
    44 => "00011010", 45 => "10010001", 46 => "01000001", 47 => "00100100", 
    48 => "10101001", 49 => "10000010", 50 => "00100101", 51 => "01010010", 
    52 => "10000010", 53 => "01010110", 54 => "10010010", 55 => "01001000", 
    56 => "10010100", 57 => "10010001", 58 => "01100101", 59 => "01010000", 
    60 => "01011010", 61 => "01100001", 62 => "01101010", 63 => "10100000", 
    64 => "01011010", 65 => "01010110", 66 => "00010101", 67 => "01100101", 
    68 => "01011001", 69 => "01010110", 70 => "10010001", 71 => "01011000", 
    72 => "10010000", 73 => "01010100", 74 => "01010000", 75 => "01010101", 
    76 => "01011000", 77 => "01001001", 78 => "01011001", 79 => "00000110", 
    80 => "10000100", 81 => "10100110", 82 => "10010101", 83 => "10000110", 
    84 => "00010110", 85 => "10101000", 86 => "10100010", 87 => "01001010", 
    88 => "10010100", 89 => "00000101", 90 => "01101000", 91 => "01100010", 
    92 => "10100000", 93 => "10011001", 94 => "01010000", 95 => "00010100", 
    96 => "00011000", 97 => "00010100", 98 => "01100001", 99 => "01011001", 
    100 => "01100001", 101 => "01010110", 102 => "10101010", 103 => "10011010", 
    104 => "10010010", 105 => "00000001", 106 => "10011000", 107 => "00011010", 
    108 => "00000100", 109 => "01010001", 110 => "10010100", 111 => "00100101", 
    112 => "01010001", 113 => "10000110", 114 => "00101001", 115 => "00001000", 
    116 => "01001010", 117 => "10100100", 118 => "10010110", 119 => "10100010", 
    120 => "10000110", 121 => "00100101", 122 => "01000100", 123 => "00010000", 
    124 => "10000101", 125 => "10011000", 126 => "00000001", 127 => "00011010", 
    128 => "00100110", 129 => "10000101", 130 => "01010100", 131 => "10101010", 
    132 => "10101000", 133 => "01100110", 134 => "01100010", 135 => "01101001", 
    136 to 137=> "00010110", 138 => "10000010", 139 => "10000110", 140 => "01000000", 
    141 => "01010101", 142 => "01001000", 143 => "10011000" );

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

entity attention_v_weights is
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

architecture arch of attention_v_weights is
    component attention_v_weights_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    attention_v_weights_rom_U :  component attention_v_weights_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;



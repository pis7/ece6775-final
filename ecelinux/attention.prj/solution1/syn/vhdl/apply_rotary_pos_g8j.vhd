-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity apply_rotary_pos_g8j_rom is 
    generic(
             DWIDTH     : integer := 24; 
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


architecture rtl of apply_rotary_pos_g8j_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "111001010101110111011001", 1 => "111110101110100101001101", 
    2 => "000011010011111100111011", 3 => "000110111001100001100101", 
    4 => "001001100101101000111101", 5 => "001011100001111001111101", 
    6 => "001100111010000001000000", 7 => "001101110111101001000011", 
    8 => "001110100010011001001001", 9 => "001110111111111001010101", 
    10 => "001111010100001110010011", 11 => "001111100010000101011101", 
    12 => "001111101011100110010001", 13 => "001111110010000101011111", 
    14 => "001111110110100000110011", 15 => "001111111001100001110011", 
    16 => "001111111011100101110011", 17 => "001111111100111111110101", 
    18 => "001111111101111101000001", 19 => "001111111110100110101011", 
    20 => "001111111111000011001010", 21 => "001111111111010110100101", 
    22 => "001111111111100011110000", 23 => "001111111111101100110000", 
    24 => "001111111111110010111000", 25 => "001111111111110111000100", 
    26 => "001111111111111001111010", 27 => "001111111111111011110110", 
    28 => "001111111111111101001011", 29 => "001111111111111110000100", 
    30 => "001111111111111110101011", 31 => "001111111111111111000111", 
    32 => "001111111111111111011000", 33 => "001111111111111111100101", 
    34 => "001111111111111111101110", 35 => "001111111111111111110011", 
    36 => "001111111111111111110111", 37 => "001111111111111111111010", 
    38 => "001111111111111111111100", 39 => "001111111111111111111101", 
    40 to 41=> "001111111111111111111110", 42 to 46=> "001111111111111111111111", 
    47 => "010000000000000000000000", 48 => "111001010101110111011001", 
    49 => "111110101110100101001101", 50 => "000011010011111100111011", 
    51 => "000110111001100001100101", 52 => "001001100101101000111101", 
    53 => "001011100001111001111101", 54 => "001100111010000001000000", 
    55 => "001101110111101001000011", 56 => "001110100010011001001001", 
    57 => "001110111111111001010101", 58 => "001111010100001110010011", 
    59 => "001111100010000101011101", 60 => "001111101011100110010001", 
    61 => "001111110010000101011111", 62 => "001111110110100000110011", 
    63 => "001111111001100001110011", 64 => "001111111011100101110011", 
    65 => "001111111100111111110101", 66 => "001111111101111101000001", 
    67 => "001111111110100110101011", 68 => "001111111111000011001010", 
    69 => "001111111111010110100101", 70 => "001111111111100011110000", 
    71 => "001111111111101100110000", 72 => "001111111111110010111000", 
    73 => "001111111111110111000100", 74 => "001111111111111001111010", 
    75 => "001111111111111011110110", 76 => "001111111111111101001011", 
    77 => "001111111111111110000100", 78 => "001111111111111110101011", 
    79 => "001111111111111111000111", 80 => "001111111111111111011000", 
    81 => "001111111111111111100101", 82 => "001111111111111111101110", 
    83 => "001111111111111111110011", 84 => "001111111111111111110111", 
    85 => "001111111111111111111010", 86 => "001111111111111111111100", 
    87 => "001111111111111111111101", 88 to 89=> "001111111111111111111110", 
    90 to 94=> "001111111111111111111111", 95 => "010000000000000000000000" );


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

entity apply_rotary_pos_g8j is
    generic (
        DataWidth : INTEGER := 24;
        AddressRange : INTEGER := 96;
        AddressWidth : INTEGER := 7);
    port (
        reset : IN STD_LOGIC;
        clk : IN STD_LOGIC;
        address0 : IN STD_LOGIC_VECTOR(AddressWidth - 1 DOWNTO 0);
        ce0 : IN STD_LOGIC;
        q0 : OUT STD_LOGIC_VECTOR(DataWidth - 1 DOWNTO 0));
end entity;

architecture arch of apply_rotary_pos_g8j is
    component apply_rotary_pos_g8j_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    apply_rotary_pos_g8j_rom_U :  component apply_rotary_pos_g8j_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


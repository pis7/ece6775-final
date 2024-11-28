-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity apply_rotary_pos_g8j_rom is 
    generic(
             DWIDTH     : integer := 16; 
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
    0 => "1110100011000111", 1 => "1111111100110000", 2 => "1111101001110100", 
    3 => "1110011011111011", 4 => "1100110011110001", 5 => "1011000101111110", 
    6 => "1001011101001101", 7 => "0111111110100011", 8 => "0110101011101110", 
    9 => "0101100100100111", 10 => "0100101000001101", 11 => "0011110101101101", 
    12 => "0011001011011000", 13 => "0010101000001110", 14 => "0010001011000100", 
    15 => "0001110010111100", 16 => "0001011110111011", 17 => "0001001110010111", 
    18 => "0001000000101101", 19 => "0000110101011100", 20 => "0000101100000111", 
    21 => "0000100100011001", 22 => "0000011110000011", 23 => "0000011000110011", 
    24 => "0000010100011110", 25 => "0000010000111001", 26 => "0000001101111100", 
    27 => "0000001011100000", 28 => "0000001001100000", 29 => "0000000111110110", 
    30 => "0000000110011110", 31 => "0000000101010101", 32 => "0000000100011010", 
    33 => "0000000011101001", 34 => "0000000011000000", 35 => "0000000010011110", 
    36 => "0000000010000011", 37 => "0000000001101100", 38 => "0000000001011001", 
    39 => "0000000001001001", 40 => "0000000000111100", 41 => "0000000000110010", 
    42 => "0000000000101001", 43 => "0000000000100010", 44 => "0000000000011100", 
    45 => "0000000000010111", 46 => "0000000000010011", 47 => "0000000000001111", 
    48 => "1110100011000111", 49 => "1111111100110000", 50 => "1111101001110100", 
    51 => "1110011011111011", 52 => "1100110011110001", 53 => "1011000101111110", 
    54 => "1001011101001101", 55 => "0111111110100011", 56 => "0110101011101110", 
    57 => "0101100100100111", 58 => "0100101000001101", 59 => "0011110101101101", 
    60 => "0011001011011000", 61 => "0010101000001110", 62 => "0010001011000100", 
    63 => "0001110010111100", 64 => "0001011110111011", 65 => "0001001110010111", 
    66 => "0001000000101101", 67 => "0000110101011100", 68 => "0000101100000111", 
    69 => "0000100100011001", 70 => "0000011110000011", 71 => "0000011000110011", 
    72 => "0000010100011110", 73 => "0000010000111001", 74 => "0000001101111100", 
    75 => "0000001011100000", 76 => "0000001001100000", 77 => "0000000111110110", 
    78 => "0000000110011110", 79 => "0000000101010101", 80 => "0000000100011010", 
    81 => "0000000011101001", 82 => "0000000011000000", 83 => "0000000010011110", 
    84 => "0000000010000011", 85 => "0000000001101100", 86 => "0000000001011001", 
    87 => "0000000001001001", 88 => "0000000000111100", 89 => "0000000000110010", 
    90 => "0000000000101001", 91 => "0000000000100010", 92 => "0000000000011100", 
    93 => "0000000000010111", 94 => "0000000000010011", 95 => "0000000000001111" );


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
        DataWidth : INTEGER := 16;
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



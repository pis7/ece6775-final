-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity apply_rotary_pos_g8j_rom is 
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


architecture rtl of apply_rotary_pos_g8j_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "00100100010011110", 1 => "10111001001010101", 
    2 => "10000100011100001", 3 => "10000110110111100", 
    4 => "10101000110001011", 5 => "11010100110001011", 
    6 => "11111110101101111", 7 => "00100001101000011", 
    8 => "00111100101000110", 9 => "01010000101000101", 
    10 => "01011111000100100", 11 => "01101001001110010", 
    12 => "01110000010101101", 13 => "01110101010000100", 
    14 => "01111000101001011", 15 => "01111010111110001", 
    16 => "01111100100100010", 17 => "01111101101010010", 
    18 => "01111110011001110", 19 => "01111110111010010", 
    20 => "01111111010000100", 21 => "01111111011111101", 
    22 => "01111111101001111", 23 => "01111111110000111", 
    24 => "01111111110101110", 25 => "01111111111001000", 
    26 => "01111111111011001", 27 => "01111111111100110", 
    28 => "01111111111101110", 29 => "01111111111110011", 
    30 => "01111111111110111", 31 => "01111111111111010", 
    32 => "01111111111111100", 33 => "01111111111111101", 
    34 to 35=> "01111111111111110", 36 to 47=> "01111111111111111", 
    48 => "00100100010011110", 49 => "10111001001010101", 
    50 => "10000100011100001", 51 => "10000110110111100", 
    52 => "10101000110001011", 53 => "11010100110001011", 
    54 => "11111110101101111", 55 => "00100001101000011", 
    56 => "00111100101000110", 57 => "01010000101000101", 
    58 => "01011111000100100", 59 => "01101001001110010", 
    60 => "01110000010101101", 61 => "01110101010000100", 
    62 => "01111000101001011", 63 => "01111010111110001", 
    64 => "01111100100100010", 65 => "01111101101010010", 
    66 => "01111110011001110", 67 => "01111110111010010", 
    68 => "01111111010000100", 69 => "01111111011111101", 
    70 => "01111111101001111", 71 => "01111111110000111", 
    72 => "01111111110101110", 73 => "01111111111001000", 
    74 => "01111111111011001", 75 => "01111111111100110", 
    76 => "01111111111101110", 77 => "01111111111110011", 
    78 => "01111111111110111", 79 => "01111111111111010", 
    80 => "01111111111111100", 81 => "01111111111111101", 
    82 to 83=> "01111111111111110", 84 to 95=> "01111111111111111" );


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



-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity apply_rotary_pos_fYi_rom is 
    generic(
             DWIDTH     : integer := 18; 
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


architecture rtl of apply_rotary_pos_fYi_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "111001010101110111", 1 => "111110101110100101", 
    2 => "000011010011111100", 3 => "000110111001100001", 
    4 => "001001100101101000", 5 => "001011100001111001", 
    6 => "001100111010000001", 7 => "001101110111101001", 
    8 => "001110100010011001", 9 => "001110111111111001", 
    10 => "001111010100001110", 11 => "001111100010000101", 
    12 => "001111101011100110", 13 => "001111110010000101", 
    14 => "001111110110100000", 15 => "001111111001100001", 
    16 => "001111111011100101", 17 => "001111111100111111", 
    18 => "001111111101111101", 19 => "001111111110100110", 
    20 => "001111111111000011", 21 => "001111111111010110", 
    22 => "001111111111100011", 23 => "001111111111101100", 
    24 => "001111111111110010", 25 => "001111111111110111", 
    26 => "001111111111111001", 27 => "001111111111111011", 
    28 => "001111111111111101", 29 to 30=> "001111111111111110", 
    31 to 46=> "001111111111111111", 47 => "010000000000000000", 
    48 => "111001010101110111", 49 => "111110101110100101", 
    50 => "000011010011111100", 51 => "000110111001100001", 
    52 => "001001100101101000", 53 => "001011100001111001", 
    54 => "001100111010000001", 55 => "001101110111101001", 
    56 => "001110100010011001", 57 => "001110111111111001", 
    58 => "001111010100001110", 59 => "001111100010000101", 
    60 => "001111101011100110", 61 => "001111110010000101", 
    62 => "001111110110100000", 63 => "001111111001100001", 
    64 => "001111111011100101", 65 => "001111111100111111", 
    66 => "001111111101111101", 67 => "001111111110100110", 
    68 => "001111111111000011", 69 => "001111111111010110", 
    70 => "001111111111100011", 71 => "001111111111101100", 
    72 => "001111111111110010", 73 => "001111111111110111", 
    74 => "001111111111111001", 75 => "001111111111111011", 
    76 => "001111111111111101", 77 to 78=> "001111111111111110", 
    79 to 94=> "001111111111111111", 95 => "010000000000000000" );


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

entity apply_rotary_pos_fYi is
    generic (
        DataWidth : INTEGER := 18;
        AddressRange : INTEGER := 96;
        AddressWidth : INTEGER := 7);
    port (
        reset : IN STD_LOGIC;
        clk : IN STD_LOGIC;
        address0 : IN STD_LOGIC_VECTOR(AddressWidth - 1 DOWNTO 0);
        ce0 : IN STD_LOGIC;
        q0 : OUT STD_LOGIC_VECTOR(DataWidth - 1 DOWNTO 0));
end entity;

architecture arch of apply_rotary_pos_fYi is
    component apply_rotary_pos_fYi_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    apply_rotary_pos_fYi_rom_U :  component apply_rotary_pos_fYi_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;



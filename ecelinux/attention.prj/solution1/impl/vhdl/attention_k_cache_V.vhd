-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity attention_k_cache_V_rom is 
    generic(
             DWIDTH     : integer := 32; 
             AWIDTH     : integer := 5; 
             MEM_SIZE    : integer := 32
    ); 
    port (
          addr0      : in std_logic_vector(AWIDTH-1 downto 0); 
          ce0       : in std_logic; 
          q0         : out std_logic_vector(DWIDTH-1 downto 0);
          clk       : in std_logic
    ); 
end entity; 


architecture rtl of attention_k_cache_V_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "00000000000000000101000010110111", 
    1 => "00000000000001010001111110100100", 
    2 => "11111111111101100100110111110111", 
    3 => "00000000000001000110101000000111", 
    4 => "11111111111111111101011110100100", 
    5 => "00000000000001000001100101010000", 
    6 => "11111111111010101010001101110100", 
    7 => "11111111111110000100011001110010", 
    8 => "00000000000010000001111001110011", 
    9 => "00000000000000010101011100001011", 
    10 => "00000000000000001111001000100110", 
    11 => "11111111111101110010101111110000", 
    12 => "11111111010110101101110011101110", 
    13 => "11111111111000101010001000000011", 
    14 => "00000000011111100000101010100100", 
    15 => "00000000010100100101111011111001", 
    16 => "00000000000010110011000101101111", 
    17 => "11111111111111010101000111101000", 
    18 => "00000000000001001001001001100011", 
    19 => "11111111111111010011110110111011", 
    20 => "11111111100000010011111010010101", 
    21 => "00000000010000100001011101111001", 
    22 => "00000000010111101010111111101011", 
    23 => "00000000100000100000111010010101", 
    24 => "00000000000000001100100111001010", 
    25 => "11111111111111101111100110101011", 
    26 => "00000000000000011011101111110000", 
    27 => "11111111111100111111000010010111", 
    28 => "11111111110010000011101100100110", 
    29 => "11111111110011010101110011100111", 
    30 => "00000000011110000011010100110111", 
    31 => "00000000001000001000001000010100" );

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

entity attention_k_cache_V is
    generic (
        DataWidth : INTEGER := 32;
        AddressRange : INTEGER := 32;
        AddressWidth : INTEGER := 5);
    port (
        reset : IN STD_LOGIC;
        clk : IN STD_LOGIC;
        address0 : IN STD_LOGIC_VECTOR(AddressWidth - 1 DOWNTO 0);
        ce0 : IN STD_LOGIC;
        q0 : OUT STD_LOGIC_VECTOR(DataWidth - 1 DOWNTO 0));
end entity;

architecture arch of attention_k_cache_V is
    component attention_k_cache_V_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    attention_k_cache_V_rom_U :  component attention_k_cache_V_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;



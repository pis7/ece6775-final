-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity attention_v_cache_V_rom is 
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


architecture rtl of attention_v_cache_V_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "11111111110101111110101010101100", 
    1 => "11111111111101011111000111111000", 
    2 => "00000000000011110011011111010011", 
    3 => "11111111111100010011000010000110", 
    4 => "00000000110011110001011010111001", 
    5 => "11111111101110100010111101001001", 
    6 => "11111111101110111100000110010000", 
    7 => "00000000010111100010110000001100", 
    8 => "00000000001000000001000100001111", 
    9 => "00000000000011101100111101111001", 
    10 => "00000000000111010101100101100000", 
    11 => "00000000000100111101011001111100", 
    12 => "00000000000001100000111110100110", 
    13 => "11111111100001110001110100110001", 
    14 => "11111111111100011000010101000111", 
    15 => "11111111110111011000101010010100", 
    16 => "11111111011000011011010001110011", 
    17 => "11111110110011011011110001111111", 
    18 => "11111111111011110000001111111010", 
    19 => "11111111110101110011110011000000", 
    20 => "00000000010011000101001101001100", 
    21 => "11111111010000000001000001100111", 
    22 => "11111111111010010111000001101001", 
    23 => "11111111011110110011011101011101", 
    24 => "11111111111111100011101111001110", 
    25 => "00000000001010110111101011101110", 
    26 => "11111111111110010101011110010011", 
    27 => "00000000000000111010101100101100", 
    28 => "11111111011111111101000101111000", 
    29 => "00000000010011100111010101000000", 
    30 => "00000000111111100001111001100001", 
    31 => "11111111111000000011110000110011" );

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

entity attention_v_cache_V is
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

architecture arch of attention_v_cache_V is
    component attention_v_cache_V_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    attention_v_cache_V_rom_U :  component attention_v_cache_V_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


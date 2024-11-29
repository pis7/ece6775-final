-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity attention_ln_weigsc4_rom is 
    generic(
             DWIDTH     : integer := 40; 
             AWIDTH     : integer := 5; 
             MEM_SIZE    : integer := 24
    ); 
    port (
          addr0      : in std_logic_vector(AWIDTH-1 downto 0); 
          ce0       : in std_logic; 
          q0         : out std_logic_vector(DWIDTH-1 downto 0);
          clk       : in std_logic
    ); 
end entity; 


architecture rtl of attention_ln_weigsc4_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "0000000000000000000000000111100010100000", 
    1 => "0000000000000000000000000111010100100000", 
    2 => "0000000000000000000000001000000101000000", 
    3 => "0000000000000000000000000111000100100000", 
    4 => "0000000000000000000000000111001100100000", 
    5 => "0000000000000000000000001000000111100000", 
    6 => "0000000000000000000000000111011000110000", 
    7 => "0000000000000000000000001000001011000000", 
    8 => "0000000000000000000000000111111101000000", 
    9 => "0000000000000000000000000111000100000000", 
    10 => "0000000000000000000000000111100001010000", 
    11 => "0000000000000000000000001000011101100000", 
    12 => "0000000000000000000000000111011111100000", 
    13 => "0000000000000000000000000111100010100000", 
    14 => "0000000000000000000000001000001110100000", 
    15 => "0000000000000000000000001000010011100000", 
    16 => "0000000000000000000000001000010100000000", 
    17 => "0000000000000000000000001000000011100000", 
    18 => "0000000000000000000000001000100010000000", 
    19 => "0000000000000000000000000111010101100000", 
    20 => "0000000000000000000000001000010011100000", 
    21 => "0000000000000000000000001000000011100000", 
    22 => "0000000000000000000000000111101001110000", 
    23 => "0000000000000000000000000111011111010000" );

attribute syn_rom_style : string;
attribute syn_rom_style of mem : signal is "select_rom";
attribute ROM_STYLE : string;
attribute ROM_STYLE of mem : signal is "distributed";

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

entity attention_ln_weigsc4 is
    generic (
        DataWidth : INTEGER := 40;
        AddressRange : INTEGER := 24;
        AddressWidth : INTEGER := 5);
    port (
        reset : IN STD_LOGIC;
        clk : IN STD_LOGIC;
        address0 : IN STD_LOGIC_VECTOR(AddressWidth - 1 DOWNTO 0);
        ce0 : IN STD_LOGIC;
        q0 : OUT STD_LOGIC_VECTOR(DataWidth - 1 DOWNTO 0));
end entity;

architecture arch of attention_ln_weigsc4 is
    component attention_ln_weigsc4_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    attention_ln_weigsc4_rom_U :  component attention_ln_weigsc4_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;



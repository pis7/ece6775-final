-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity attention_ln_weigxdS_rom is 
    generic(
             DWIDTH     : integer := 38; 
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


architecture rtl of attention_ln_weigxdS_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "00000000000000000000010110110011000000", 
    1 => "00000000000000000000010010011011000000", 
    2 => "00000000000000000000010111010111000000", 
    3 => "00000000000000000000010111001100000000", 
    4 => "00000000000000000000010110101000111111", 
    5 => "00000000000000000000010111011000000000", 
    6 => "00000000000000000000010110110011000000", 
    7 => "00000000000000000000010111010001111111", 
    8 => "00000000000000000000010111100000111111", 
    9 => "00000000000000000000010110101111000000", 
    10 => "00000000000000000000010110100011000000", 
    11 => "00000000000000000000010111000000000000", 
    12 => "00000000000000000000010110110000000000", 
    13 => "00000000000000000000010110001001111111", 
    14 => "00000000000000000000010111101110000000", 
    15 => "00000000000000000000010111011100111111", 
    16 => "00000000000000000000010110101001111111", 
    17 => "00000000000000000000010110010110000000", 
    18 => "00000000000000000000010101111110000000", 
    19 => "00000000000000000000010111011011000000", 
    20 => "00000000000000000000010111010001111111", 
    21 to 22=> "00000000000000000000010110110000000000", 
    23 => "00000000000000000000010111110100111111" );

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

entity attention_ln_weigxdS is
    generic (
        DataWidth : INTEGER := 38;
        AddressRange : INTEGER := 24;
        AddressWidth : INTEGER := 5);
    port (
        reset : IN STD_LOGIC;
        clk : IN STD_LOGIC;
        address0 : IN STD_LOGIC_VECTOR(AddressWidth - 1 DOWNTO 0);
        ce0 : IN STD_LOGIC;
        q0 : OUT STD_LOGIC_VECTOR(DataWidth - 1 DOWNTO 0));
end entity;

architecture arch of attention_ln_weigxdS is
    component attention_ln_weigxdS_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    attention_ln_weigxdS_rom_U :  component attention_ln_weigxdS_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;



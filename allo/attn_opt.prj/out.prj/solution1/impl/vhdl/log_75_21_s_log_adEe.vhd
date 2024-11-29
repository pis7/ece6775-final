-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity log_75_21_s_log_adEe_rom is 
    generic(
             DWIDTH     : integer := 63; 
             AWIDTH     : integer := 4; 
             MEM_SIZE    : integer := 16
    ); 
    port (
          addr0      : in std_logic_vector(AWIDTH-1 downto 0); 
          ce0       : in std_logic; 
          q0         : out std_logic_vector(DWIDTH-1 downto 0);
          clk       : in std_logic
    ); 
end entity; 


architecture rtl of log_75_21_s_log_adEe_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "000000000000000000000000000000000000000000000000000000000000000", 
    1 => "000100000000000000000001010101010101010110001000100010001001000", 
    2 => "001000000001000000010010101111101100001100101111100011011010110", 
    3 => "001100000011000001010100100111010011101100101010000110001011101", 
    4 => "010000000110000011100111101100111111100110000010010001100101111", 
    5 => "010100001010000111101101001010100001001101111100110110001011011", 
    6 => "011000001111001110000110100011000000111011110011100100011000010", 
    7 => "011100010101010111010101110011011000000111010101001101100001100", 
    8 => "011110011000110101001100010110101011110101101111111111111101000", 
    9 => "100010100000100011101100111110011010010011100110010111010001111", 
    10 => "100110101001010110011010001001101101001110000110001011100111010", 
    11 => "101010110011001101110111010010111101100111100011100001100000001", 
    12 => "101110111110001010101000010000010001000010011110111110111010011", 
    13 => "110011001010001101010001010011110110100001011110010100110100011", 
    14 => "110111010111010110010111001100100100001101001100000110100110111", 
    15 => "111011100101100110011111000110010101100001011010100101011101010" );

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

entity log_75_21_s_log_adEe is
    generic (
        DataWidth : INTEGER := 63;
        AddressRange : INTEGER := 16;
        AddressWidth : INTEGER := 4);
    port (
        reset : IN STD_LOGIC;
        clk : IN STD_LOGIC;
        address0 : IN STD_LOGIC_VECTOR(AddressWidth - 1 DOWNTO 0);
        ce0 : IN STD_LOGIC;
        q0 : OUT STD_LOGIC_VECTOR(DataWidth - 1 DOWNTO 0));
end entity;

architecture arch of log_75_21_s_log_adEe is
    component log_75_21_s_log_adEe_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    log_75_21_s_log_adEe_rom_U :  component log_75_21_s_log_adEe_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;



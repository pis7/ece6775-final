-- SCVerify DUT wrapper used for SystemC > HDL interface bindings

LIBRARY IEEE;
USE IEEE.STD_LOGIC_1164.ALL;

ENTITY ccs_wrapper IS
  PORT(
    clk : IN STD_LOGIC;
    en : IN STD_LOGIC;
    rst : IN STD_LOGIC;
    strm_in_rsc_dat : IN STD_LOGIC_VECTOR(31 DOWNTO 0);
    strm_in_rsc_vld : IN STD_LOGIC;
    strm_in_rsc_rdy : OUT STD_LOGIC;
    strm_out_rsc_dat : OUT STD_LOGIC_VECTOR(31 DOWNTO 0);
    strm_out_rsc_vld : OUT STD_LOGIC;
    strm_out_rsc_rdy : IN STD_LOGIC
  );
END ccs_wrapper;

ARCHITECTURE wrap OF ccs_wrapper IS
  COMPONENT dut
    PORT (
      clk : IN STD_LOGIC;
      en : IN STD_LOGIC;
      rst : IN STD_LOGIC;
      strm_in_rsc_dat : IN STD_LOGIC_VECTOR(31 DOWNTO 0);
      strm_in_rsc_vld : IN STD_LOGIC;
      strm_in_rsc_rdy : OUT STD_LOGIC;
      strm_out_rsc_dat : OUT STD_LOGIC_VECTOR(31 DOWNTO 0);
      strm_out_rsc_vld : OUT STD_LOGIC;
      strm_out_rsc_rdy : IN STD_LOGIC
    );
  END COMPONENT;

BEGIN

  dut_inst : dut
    PORT MAP (
      clk => clk,
      en => en,
      rst => rst,
      strm_in_rsc_dat => strm_in_rsc_dat,
      strm_in_rsc_vld => strm_in_rsc_vld,
      strm_in_rsc_rdy => strm_in_rsc_rdy,
      strm_out_rsc_dat => strm_out_rsc_dat,
      strm_out_rsc_vld => strm_out_rsc_vld,
      strm_out_rsc_rdy => strm_out_rsc_rdy
    );

END wrap;


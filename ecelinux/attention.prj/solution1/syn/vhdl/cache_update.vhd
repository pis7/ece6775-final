-- ==============================================================
-- RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and OpenCL
-- Version: 2019.2
-- Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
-- 
-- ===========================================================

library IEEE;
use IEEE.std_logic_1164.all;
use IEEE.numeric_std.all;

entity cache_update is
port (
    ap_clk : IN STD_LOGIC;
    ap_rst : IN STD_LOGIC;
    ap_start : IN STD_LOGIC;
    ap_done : OUT STD_LOGIC;
    ap_idle : OUT STD_LOGIC;
    ap_ready : OUT STD_LOGIC;
    cache_in_0_V_address0 : OUT STD_LOGIC_VECTOR (2 downto 0);
    cache_in_0_V_ce0 : OUT STD_LOGIC;
    cache_in_0_V_q0 : IN STD_LOGIC_VECTOR (39 downto 0);
    cache_in_1_V_address0 : OUT STD_LOGIC_VECTOR (2 downto 0);
    cache_in_1_V_ce0 : OUT STD_LOGIC;
    cache_in_1_V_q0 : IN STD_LOGIC_VECTOR (39 downto 0);
    cache_in_2_V_address0 : OUT STD_LOGIC_VECTOR (2 downto 0);
    cache_in_2_V_ce0 : OUT STD_LOGIC;
    cache_in_2_V_q0 : IN STD_LOGIC_VECTOR (39 downto 0);
    cache_in_3_V_address0 : OUT STD_LOGIC_VECTOR (2 downto 0);
    cache_in_3_V_ce0 : OUT STD_LOGIC;
    cache_in_3_V_q0 : IN STD_LOGIC_VECTOR (39 downto 0);
    cache_out_0_V_address0 : OUT STD_LOGIC_VECTOR (3 downto 0);
    cache_out_0_V_ce0 : OUT STD_LOGIC;
    cache_out_0_V_we0 : OUT STD_LOGIC;
    cache_out_0_V_d0 : OUT STD_LOGIC_VECTOR (39 downto 0);
    cache_out_1_V_address0 : OUT STD_LOGIC_VECTOR (3 downto 0);
    cache_out_1_V_ce0 : OUT STD_LOGIC;
    cache_out_1_V_we0 : OUT STD_LOGIC;
    cache_out_1_V_d0 : OUT STD_LOGIC_VECTOR (39 downto 0);
    cache_out_2_V_address0 : OUT STD_LOGIC_VECTOR (3 downto 0);
    cache_out_2_V_ce0 : OUT STD_LOGIC;
    cache_out_2_V_we0 : OUT STD_LOGIC;
    cache_out_2_V_d0 : OUT STD_LOGIC_VECTOR (39 downto 0);
    cache_out_3_V_address0 : OUT STD_LOGIC_VECTOR (3 downto 0);
    cache_out_3_V_ce0 : OUT STD_LOGIC;
    cache_out_3_V_we0 : OUT STD_LOGIC;
    cache_out_3_V_d0 : OUT STD_LOGIC_VECTOR (39 downto 0);
    p_read : IN STD_LOGIC_VECTOR (39 downto 0);
    p_read1 : IN STD_LOGIC_VECTOR (39 downto 0);
    p_read2 : IN STD_LOGIC_VECTOR (39 downto 0);
    p_read3 : IN STD_LOGIC_VECTOR (39 downto 0);
    p_read4 : IN STD_LOGIC_VECTOR (39 downto 0);
    p_read5 : IN STD_LOGIC_VECTOR (39 downto 0);
    p_read6 : IN STD_LOGIC_VECTOR (39 downto 0);
    p_read7 : IN STD_LOGIC_VECTOR (39 downto 0);
    p_read8 : IN STD_LOGIC_VECTOR (39 downto 0);
    p_read9 : IN STD_LOGIC_VECTOR (39 downto 0);
    p_read10 : IN STD_LOGIC_VECTOR (39 downto 0);
    p_read11 : IN STD_LOGIC_VECTOR (39 downto 0);
    p_read12 : IN STD_LOGIC_VECTOR (39 downto 0);
    p_read13 : IN STD_LOGIC_VECTOR (39 downto 0);
    p_read14 : IN STD_LOGIC_VECTOR (39 downto 0);
    p_read15 : IN STD_LOGIC_VECTOR (39 downto 0) );
end;


architecture behav of cache_update is 
    constant ap_const_logic_1 : STD_LOGIC := '1';
    constant ap_const_logic_0 : STD_LOGIC := '0';
    constant ap_ST_fsm_state1 : STD_LOGIC_VECTOR (2 downto 0) := "001";
    constant ap_ST_fsm_pp0_stage0 : STD_LOGIC_VECTOR (2 downto 0) := "010";
    constant ap_ST_fsm_state4 : STD_LOGIC_VECTOR (2 downto 0) := "100";
    constant ap_const_boolean_1 : BOOLEAN := true;
    constant ap_const_lv32_0 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000000";
    constant ap_const_lv32_1 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000001";
    constant ap_const_boolean_0 : BOOLEAN := false;
    constant ap_const_lv1_0 : STD_LOGIC_VECTOR (0 downto 0) := "0";
    constant ap_const_lv1_1 : STD_LOGIC_VECTOR (0 downto 0) := "1";
    constant ap_const_lv4_0 : STD_LOGIC_VECTOR (3 downto 0) := "0000";
    constant ap_const_lv3_0 : STD_LOGIC_VECTOR (2 downto 0) := "000";
    constant ap_const_lv2_0 : STD_LOGIC_VECTOR (1 downto 0) := "00";
    constant ap_const_lv4_C : STD_LOGIC_VECTOR (3 downto 0) := "1100";
    constant ap_const_lv4_1 : STD_LOGIC_VECTOR (3 downto 0) := "0001";
    constant ap_const_lv3_1 : STD_LOGIC_VECTOR (2 downto 0) := "001";
    constant ap_const_lv2_3 : STD_LOGIC_VECTOR (1 downto 0) := "11";
    constant ap_const_lv2_1 : STD_LOGIC_VECTOR (1 downto 0) := "01";
    constant ap_const_lv2_2 : STD_LOGIC_VECTOR (1 downto 0) := "10";
    constant ap_const_lv32_2 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000010";

    signal ap_CS_fsm : STD_LOGIC_VECTOR (2 downto 0) := "001";
    attribute fsm_encoding : string;
    attribute fsm_encoding of ap_CS_fsm : signal is "none";
    signal ap_CS_fsm_state1 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state1 : signal is "none";
    signal indvar_flatten_reg_302 : STD_LOGIC_VECTOR (3 downto 0);
    signal i_0_reg_313 : STD_LOGIC_VECTOR (2 downto 0);
    signal j_0_reg_324 : STD_LOGIC_VECTOR (1 downto 0);
    signal icmp_ln236_fu_335_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal icmp_ln236_reg_601 : STD_LOGIC_VECTOR (0 downto 0);
    signal ap_CS_fsm_pp0_stage0 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_pp0_stage0 : signal is "none";
    signal ap_block_state2_pp0_stage0_iter0 : BOOLEAN;
    signal ap_block_state3_pp0_stage0_iter1 : BOOLEAN;
    signal ap_block_pp0_stage0_11001 : BOOLEAN;
    signal add_ln236_fu_341_p2 : STD_LOGIC_VECTOR (3 downto 0);
    signal ap_enable_reg_pp0_iter0 : STD_LOGIC := '0';
    signal select_ln239_4_fu_359_p3 : STD_LOGIC_VECTOR (1 downto 0);
    signal select_ln239_4_reg_610 : STD_LOGIC_VECTOR (1 downto 0);
    signal select_ln239_5_fu_367_p3 : STD_LOGIC_VECTOR (2 downto 0);
    signal select_ln239_5_reg_615 : STD_LOGIC_VECTOR (2 downto 0);
    signal zext_ln239_1_fu_391_p1 : STD_LOGIC_VECTOR (4 downto 0);
    signal zext_ln239_1_reg_622 : STD_LOGIC_VECTOR (4 downto 0);
    signal tmp_6_fu_409_p6 : STD_LOGIC_VECTOR (39 downto 0);
    signal tmp_6_reg_647 : STD_LOGIC_VECTOR (39 downto 0);
    signal tmp_7_fu_419_p6 : STD_LOGIC_VECTOR (39 downto 0);
    signal tmp_7_reg_652 : STD_LOGIC_VECTOR (39 downto 0);
    signal tmp_8_fu_429_p6 : STD_LOGIC_VECTOR (39 downto 0);
    signal tmp_8_reg_657 : STD_LOGIC_VECTOR (39 downto 0);
    signal tmp_9_fu_439_p6 : STD_LOGIC_VECTOR (39 downto 0);
    signal tmp_9_reg_662 : STD_LOGIC_VECTOR (39 downto 0);
    signal j_fu_449_p2 : STD_LOGIC_VECTOR (1 downto 0);
    signal ap_block_pp0_stage0_subdone : BOOLEAN;
    signal ap_condition_pp0_exit_iter0_state2 : STD_LOGIC;
    signal ap_enable_reg_pp0_iter1 : STD_LOGIC := '0';
    signal ap_phi_mux_i_0_phi_fu_317_p4 : STD_LOGIC_VECTOR (2 downto 0);
    signal ap_block_pp0_stage0 : BOOLEAN;
    signal zext_ln239_2_fu_401_p1 : STD_LOGIC_VECTOR (63 downto 0);
    signal sext_ln203_fu_476_p1 : STD_LOGIC_VECTOR (63 downto 0);
    signal icmp_ln237_fu_353_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal i_fu_347_p2 : STD_LOGIC_VECTOR (2 downto 0);
    signal tmp_fu_375_p3 : STD_LOGIC_VECTOR (3 downto 0);
    signal zext_ln203_fu_383_p1 : STD_LOGIC_VECTOR (4 downto 0);
    signal add_ln239_fu_395_p2 : STD_LOGIC_VECTOR (4 downto 0);
    signal trunc_ln239_fu_387_p1 : STD_LOGIC_VECTOR (1 downto 0);
    signal tmp_55_fu_458_p3 : STD_LOGIC_VECTOR (4 downto 0);
    signal zext_ln239_fu_455_p1 : STD_LOGIC_VECTOR (4 downto 0);
    signal sub_ln203_fu_465_p2 : STD_LOGIC_VECTOR (4 downto 0);
    signal add_ln203_fu_471_p2 : STD_LOGIC_VECTOR (4 downto 0);
    signal icmp_ln239_fu_484_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal ap_CS_fsm_state4 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state4 : signal is "none";
    signal ap_NS_fsm : STD_LOGIC_VECTOR (2 downto 0);
    signal ap_idle_pp0 : STD_LOGIC;
    signal ap_enable_pp0 : STD_LOGIC;

    component dut_mux_42_40_1_1 IS
    generic (
        ID : INTEGER;
        NUM_STAGE : INTEGER;
        din0_WIDTH : INTEGER;
        din1_WIDTH : INTEGER;
        din2_WIDTH : INTEGER;
        din3_WIDTH : INTEGER;
        din4_WIDTH : INTEGER;
        dout_WIDTH : INTEGER );
    port (
        din0 : IN STD_LOGIC_VECTOR (39 downto 0);
        din1 : IN STD_LOGIC_VECTOR (39 downto 0);
        din2 : IN STD_LOGIC_VECTOR (39 downto 0);
        din3 : IN STD_LOGIC_VECTOR (39 downto 0);
        din4 : IN STD_LOGIC_VECTOR (1 downto 0);
        dout : OUT STD_LOGIC_VECTOR (39 downto 0) );
    end component;



begin
    dut_mux_42_40_1_1_U86 : component dut_mux_42_40_1_1
    generic map (
        ID => 1,
        NUM_STAGE => 1,
        din0_WIDTH => 40,
        din1_WIDTH => 40,
        din2_WIDTH => 40,
        din3_WIDTH => 40,
        din4_WIDTH => 2,
        dout_WIDTH => 40)
    port map (
        din0 => p_read,
        din1 => p_read1,
        din2 => p_read2,
        din3 => p_read3,
        din4 => trunc_ln239_fu_387_p1,
        dout => tmp_6_fu_409_p6);

    dut_mux_42_40_1_1_U87 : component dut_mux_42_40_1_1
    generic map (
        ID => 1,
        NUM_STAGE => 1,
        din0_WIDTH => 40,
        din1_WIDTH => 40,
        din2_WIDTH => 40,
        din3_WIDTH => 40,
        din4_WIDTH => 2,
        dout_WIDTH => 40)
    port map (
        din0 => p_read4,
        din1 => p_read5,
        din2 => p_read6,
        din3 => p_read7,
        din4 => trunc_ln239_fu_387_p1,
        dout => tmp_7_fu_419_p6);

    dut_mux_42_40_1_1_U88 : component dut_mux_42_40_1_1
    generic map (
        ID => 1,
        NUM_STAGE => 1,
        din0_WIDTH => 40,
        din1_WIDTH => 40,
        din2_WIDTH => 40,
        din3_WIDTH => 40,
        din4_WIDTH => 2,
        dout_WIDTH => 40)
    port map (
        din0 => p_read8,
        din1 => p_read9,
        din2 => p_read10,
        din3 => p_read11,
        din4 => trunc_ln239_fu_387_p1,
        dout => tmp_8_fu_429_p6);

    dut_mux_42_40_1_1_U89 : component dut_mux_42_40_1_1
    generic map (
        ID => 1,
        NUM_STAGE => 1,
        din0_WIDTH => 40,
        din1_WIDTH => 40,
        din2_WIDTH => 40,
        din3_WIDTH => 40,
        din4_WIDTH => 2,
        dout_WIDTH => 40)
    port map (
        din0 => p_read12,
        din1 => p_read13,
        din2 => p_read14,
        din3 => p_read15,
        din4 => trunc_ln239_fu_387_p1,
        dout => tmp_9_fu_439_p6);





    ap_CS_fsm_assign_proc : process(ap_clk)
    begin
        if (ap_clk'event and ap_clk =  '1') then
            if (ap_rst = '1') then
                ap_CS_fsm <= ap_ST_fsm_state1;
            else
                ap_CS_fsm <= ap_NS_fsm;
            end if;
        end if;
    end process;


    ap_enable_reg_pp0_iter0_assign_proc : process(ap_clk)
    begin
        if (ap_clk'event and ap_clk =  '1') then
            if (ap_rst = '1') then
                ap_enable_reg_pp0_iter0 <= ap_const_logic_0;
            else
                if (((ap_const_logic_1 = ap_condition_pp0_exit_iter0_state2) and (ap_const_logic_1 = ap_CS_fsm_pp0_stage0) and (ap_const_boolean_0 = ap_block_pp0_stage0_subdone))) then 
                    ap_enable_reg_pp0_iter0 <= ap_const_logic_0;
                elsif (((ap_start = ap_const_logic_1) and (ap_const_logic_1 = ap_CS_fsm_state1))) then 
                    ap_enable_reg_pp0_iter0 <= ap_const_logic_1;
                end if; 
            end if;
        end if;
    end process;


    ap_enable_reg_pp0_iter1_assign_proc : process(ap_clk)
    begin
        if (ap_clk'event and ap_clk =  '1') then
            if (ap_rst = '1') then
                ap_enable_reg_pp0_iter1 <= ap_const_logic_0;
            else
                if (((ap_const_logic_1 = ap_condition_pp0_exit_iter0_state2) and (ap_const_boolean_0 = ap_block_pp0_stage0_subdone))) then 
                    ap_enable_reg_pp0_iter1 <= (ap_const_logic_1 xor ap_condition_pp0_exit_iter0_state2);
                elsif ((ap_const_boolean_0 = ap_block_pp0_stage0_subdone)) then 
                    ap_enable_reg_pp0_iter1 <= ap_enable_reg_pp0_iter0;
                elsif (((ap_start = ap_const_logic_1) and (ap_const_logic_1 = ap_CS_fsm_state1))) then 
                    ap_enable_reg_pp0_iter1 <= ap_const_logic_0;
                end if; 
            end if;
        end if;
    end process;


    i_0_reg_313_assign_proc : process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((ap_enable_reg_pp0_iter1 = ap_const_logic_1) and (ap_const_logic_1 = ap_CS_fsm_pp0_stage0) and (ap_const_boolean_0 = ap_block_pp0_stage0_11001) and (icmp_ln236_reg_601 = ap_const_lv1_0))) then 
                i_0_reg_313 <= select_ln239_5_reg_615;
            elsif (((ap_start = ap_const_logic_1) and (ap_const_logic_1 = ap_CS_fsm_state1))) then 
                i_0_reg_313 <= ap_const_lv3_0;
            end if; 
        end if;
    end process;

    indvar_flatten_reg_302_assign_proc : process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((ap_enable_reg_pp0_iter0 = ap_const_logic_1) and (ap_const_logic_1 = ap_CS_fsm_pp0_stage0) and (ap_const_boolean_0 = ap_block_pp0_stage0_11001) and (icmp_ln236_fu_335_p2 = ap_const_lv1_0))) then 
                indvar_flatten_reg_302 <= add_ln236_fu_341_p2;
            elsif (((ap_start = ap_const_logic_1) and (ap_const_logic_1 = ap_CS_fsm_state1))) then 
                indvar_flatten_reg_302 <= ap_const_lv4_0;
            end if; 
        end if;
    end process;

    j_0_reg_324_assign_proc : process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((ap_enable_reg_pp0_iter0 = ap_const_logic_1) and (ap_const_logic_1 = ap_CS_fsm_pp0_stage0) and (ap_const_boolean_0 = ap_block_pp0_stage0_11001) and (icmp_ln236_fu_335_p2 = ap_const_lv1_0))) then 
                j_0_reg_324 <= j_fu_449_p2;
            elsif (((ap_start = ap_const_logic_1) and (ap_const_logic_1 = ap_CS_fsm_state1))) then 
                j_0_reg_324 <= ap_const_lv2_0;
            end if; 
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((ap_const_logic_1 = ap_CS_fsm_pp0_stage0) and (ap_const_boolean_0 = ap_block_pp0_stage0_11001))) then
                icmp_ln236_reg_601 <= icmp_ln236_fu_335_p2;
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((ap_const_logic_1 = ap_CS_fsm_pp0_stage0) and (ap_const_boolean_0 = ap_block_pp0_stage0_11001) and (icmp_ln236_fu_335_p2 = ap_const_lv1_0))) then
                select_ln239_4_reg_610 <= select_ln239_4_fu_359_p3;
                tmp_6_reg_647 <= tmp_6_fu_409_p6;
                tmp_7_reg_652 <= tmp_7_fu_419_p6;
                tmp_8_reg_657 <= tmp_8_fu_429_p6;
                tmp_9_reg_662 <= tmp_9_fu_439_p6;
                    zext_ln239_1_reg_622(1 downto 0) <= zext_ln239_1_fu_391_p1(1 downto 0);
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((ap_enable_reg_pp0_iter0 = ap_const_logic_1) and (ap_const_logic_1 = ap_CS_fsm_pp0_stage0) and (ap_const_boolean_0 = ap_block_pp0_stage0_11001) and (icmp_ln236_fu_335_p2 = ap_const_lv1_0))) then
                select_ln239_5_reg_615 <= select_ln239_5_fu_367_p3;
            end if;
        end if;
    end process;
    zext_ln239_1_reg_622(4 downto 2) <= "000";

    ap_NS_fsm_assign_proc : process (ap_start, ap_CS_fsm, ap_CS_fsm_state1, icmp_ln236_fu_335_p2, ap_enable_reg_pp0_iter0, ap_block_pp0_stage0_subdone)
    begin
        case ap_CS_fsm is
            when ap_ST_fsm_state1 => 
                if (((ap_start = ap_const_logic_1) and (ap_const_logic_1 = ap_CS_fsm_state1))) then
                    ap_NS_fsm <= ap_ST_fsm_pp0_stage0;
                else
                    ap_NS_fsm <= ap_ST_fsm_state1;
                end if;
            when ap_ST_fsm_pp0_stage0 => 
                if (not(((ap_enable_reg_pp0_iter0 = ap_const_logic_1) and (ap_const_boolean_0 = ap_block_pp0_stage0_subdone) and (icmp_ln236_fu_335_p2 = ap_const_lv1_1)))) then
                    ap_NS_fsm <= ap_ST_fsm_pp0_stage0;
                elsif (((ap_enable_reg_pp0_iter0 = ap_const_logic_1) and (ap_const_boolean_0 = ap_block_pp0_stage0_subdone) and (icmp_ln236_fu_335_p2 = ap_const_lv1_1))) then
                    ap_NS_fsm <= ap_ST_fsm_state4;
                else
                    ap_NS_fsm <= ap_ST_fsm_pp0_stage0;
                end if;
            when ap_ST_fsm_state4 => 
                ap_NS_fsm <= ap_ST_fsm_state1;
            when others =>  
                ap_NS_fsm <= "XXX";
        end case;
    end process;
    add_ln203_fu_471_p2 <= std_logic_vector(unsigned(zext_ln239_1_reg_622) + unsigned(sub_ln203_fu_465_p2));
    add_ln236_fu_341_p2 <= std_logic_vector(unsigned(indvar_flatten_reg_302) + unsigned(ap_const_lv4_1));
    add_ln239_fu_395_p2 <= std_logic_vector(unsigned(zext_ln239_1_fu_391_p1) + unsigned(zext_ln203_fu_383_p1));
    ap_CS_fsm_pp0_stage0 <= ap_CS_fsm(1);
    ap_CS_fsm_state1 <= ap_CS_fsm(0);
    ap_CS_fsm_state4 <= ap_CS_fsm(2);
        ap_block_pp0_stage0 <= not((ap_const_boolean_1 = ap_const_boolean_1));
        ap_block_pp0_stage0_11001 <= not((ap_const_boolean_1 = ap_const_boolean_1));
        ap_block_pp0_stage0_subdone <= not((ap_const_boolean_1 = ap_const_boolean_1));
        ap_block_state2_pp0_stage0_iter0 <= not((ap_const_boolean_1 = ap_const_boolean_1));
        ap_block_state3_pp0_stage0_iter1 <= not((ap_const_boolean_1 = ap_const_boolean_1));

    ap_condition_pp0_exit_iter0_state2_assign_proc : process(icmp_ln236_fu_335_p2)
    begin
        if ((icmp_ln236_fu_335_p2 = ap_const_lv1_1)) then 
            ap_condition_pp0_exit_iter0_state2 <= ap_const_logic_1;
        else 
            ap_condition_pp0_exit_iter0_state2 <= ap_const_logic_0;
        end if; 
    end process;


    ap_done_assign_proc : process(ap_start, ap_CS_fsm_state1, ap_CS_fsm_state4)
    begin
        if (((ap_const_logic_1 = ap_CS_fsm_state4) or ((ap_start = ap_const_logic_0) and (ap_const_logic_1 = ap_CS_fsm_state1)))) then 
            ap_done <= ap_const_logic_1;
        else 
            ap_done <= ap_const_logic_0;
        end if; 
    end process;

    ap_enable_pp0 <= (ap_idle_pp0 xor ap_const_logic_1);

    ap_idle_assign_proc : process(ap_start, ap_CS_fsm_state1)
    begin
        if (((ap_start = ap_const_logic_0) and (ap_const_logic_1 = ap_CS_fsm_state1))) then 
            ap_idle <= ap_const_logic_1;
        else 
            ap_idle <= ap_const_logic_0;
        end if; 
    end process;


    ap_idle_pp0_assign_proc : process(ap_enable_reg_pp0_iter0, ap_enable_reg_pp0_iter1)
    begin
        if (((ap_enable_reg_pp0_iter1 = ap_const_logic_0) and (ap_enable_reg_pp0_iter0 = ap_const_logic_0))) then 
            ap_idle_pp0 <= ap_const_logic_1;
        else 
            ap_idle_pp0 <= ap_const_logic_0;
        end if; 
    end process;


    ap_phi_mux_i_0_phi_fu_317_p4_assign_proc : process(i_0_reg_313, icmp_ln236_reg_601, ap_CS_fsm_pp0_stage0, select_ln239_5_reg_615, ap_enable_reg_pp0_iter1, ap_block_pp0_stage0)
    begin
        if (((ap_const_boolean_0 = ap_block_pp0_stage0) and (ap_enable_reg_pp0_iter1 = ap_const_logic_1) and (ap_const_logic_1 = ap_CS_fsm_pp0_stage0) and (icmp_ln236_reg_601 = ap_const_lv1_0))) then 
            ap_phi_mux_i_0_phi_fu_317_p4 <= select_ln239_5_reg_615;
        else 
            ap_phi_mux_i_0_phi_fu_317_p4 <= i_0_reg_313;
        end if; 
    end process;


    ap_ready_assign_proc : process(ap_CS_fsm_state4)
    begin
        if ((ap_const_logic_1 = ap_CS_fsm_state4)) then 
            ap_ready <= ap_const_logic_1;
        else 
            ap_ready <= ap_const_logic_0;
        end if; 
    end process;

    cache_in_0_V_address0 <= zext_ln239_2_fu_401_p1(3 - 1 downto 0);

    cache_in_0_V_ce0_assign_proc : process(ap_CS_fsm_pp0_stage0, ap_block_pp0_stage0_11001, ap_enable_reg_pp0_iter0)
    begin
        if (((ap_enable_reg_pp0_iter0 = ap_const_logic_1) and (ap_const_logic_1 = ap_CS_fsm_pp0_stage0) and (ap_const_boolean_0 = ap_block_pp0_stage0_11001))) then 
            cache_in_0_V_ce0 <= ap_const_logic_1;
        else 
            cache_in_0_V_ce0 <= ap_const_logic_0;
        end if; 
    end process;

    cache_in_1_V_address0 <= zext_ln239_2_fu_401_p1(3 - 1 downto 0);

    cache_in_1_V_ce0_assign_proc : process(ap_CS_fsm_pp0_stage0, ap_block_pp0_stage0_11001, ap_enable_reg_pp0_iter0)
    begin
        if (((ap_enable_reg_pp0_iter0 = ap_const_logic_1) and (ap_const_logic_1 = ap_CS_fsm_pp0_stage0) and (ap_const_boolean_0 = ap_block_pp0_stage0_11001))) then 
            cache_in_1_V_ce0 <= ap_const_logic_1;
        else 
            cache_in_1_V_ce0 <= ap_const_logic_0;
        end if; 
    end process;

    cache_in_2_V_address0 <= zext_ln239_2_fu_401_p1(3 - 1 downto 0);

    cache_in_2_V_ce0_assign_proc : process(ap_CS_fsm_pp0_stage0, ap_block_pp0_stage0_11001, ap_enable_reg_pp0_iter0)
    begin
        if (((ap_enable_reg_pp0_iter0 = ap_const_logic_1) and (ap_const_logic_1 = ap_CS_fsm_pp0_stage0) and (ap_const_boolean_0 = ap_block_pp0_stage0_11001))) then 
            cache_in_2_V_ce0 <= ap_const_logic_1;
        else 
            cache_in_2_V_ce0 <= ap_const_logic_0;
        end if; 
    end process;

    cache_in_3_V_address0 <= zext_ln239_2_fu_401_p1(3 - 1 downto 0);

    cache_in_3_V_ce0_assign_proc : process(ap_CS_fsm_pp0_stage0, ap_block_pp0_stage0_11001, ap_enable_reg_pp0_iter0)
    begin
        if (((ap_enable_reg_pp0_iter0 = ap_const_logic_1) and (ap_const_logic_1 = ap_CS_fsm_pp0_stage0) and (ap_const_boolean_0 = ap_block_pp0_stage0_11001))) then 
            cache_in_3_V_ce0 <= ap_const_logic_1;
        else 
            cache_in_3_V_ce0 <= ap_const_logic_0;
        end if; 
    end process;

    cache_out_0_V_address0 <= sext_ln203_fu_476_p1(4 - 1 downto 0);

    cache_out_0_V_ce0_assign_proc : process(ap_CS_fsm_pp0_stage0, ap_block_pp0_stage0_11001, ap_enable_reg_pp0_iter1)
    begin
        if (((ap_enable_reg_pp0_iter1 = ap_const_logic_1) and (ap_const_logic_1 = ap_CS_fsm_pp0_stage0) and (ap_const_boolean_0 = ap_block_pp0_stage0_11001))) then 
            cache_out_0_V_ce0 <= ap_const_logic_1;
        else 
            cache_out_0_V_ce0 <= ap_const_logic_0;
        end if; 
    end process;

    cache_out_0_V_d0 <= 
        tmp_6_reg_647 when (icmp_ln239_fu_484_p2(0) = '1') else 
        cache_in_0_V_q0;

    cache_out_0_V_we0_assign_proc : process(icmp_ln236_reg_601, ap_CS_fsm_pp0_stage0, ap_block_pp0_stage0_11001, ap_enable_reg_pp0_iter1)
    begin
        if (((ap_enable_reg_pp0_iter1 = ap_const_logic_1) and (ap_const_logic_1 = ap_CS_fsm_pp0_stage0) and (ap_const_boolean_0 = ap_block_pp0_stage0_11001) and (icmp_ln236_reg_601 = ap_const_lv1_0))) then 
            cache_out_0_V_we0 <= ap_const_logic_1;
        else 
            cache_out_0_V_we0 <= ap_const_logic_0;
        end if; 
    end process;

    cache_out_1_V_address0 <= sext_ln203_fu_476_p1(4 - 1 downto 0);

    cache_out_1_V_ce0_assign_proc : process(ap_CS_fsm_pp0_stage0, ap_block_pp0_stage0_11001, ap_enable_reg_pp0_iter1)
    begin
        if (((ap_enable_reg_pp0_iter1 = ap_const_logic_1) and (ap_const_logic_1 = ap_CS_fsm_pp0_stage0) and (ap_const_boolean_0 = ap_block_pp0_stage0_11001))) then 
            cache_out_1_V_ce0 <= ap_const_logic_1;
        else 
            cache_out_1_V_ce0 <= ap_const_logic_0;
        end if; 
    end process;

    cache_out_1_V_d0 <= 
        tmp_7_reg_652 when (icmp_ln239_fu_484_p2(0) = '1') else 
        cache_in_1_V_q0;

    cache_out_1_V_we0_assign_proc : process(icmp_ln236_reg_601, ap_CS_fsm_pp0_stage0, ap_block_pp0_stage0_11001, ap_enable_reg_pp0_iter1)
    begin
        if (((ap_enable_reg_pp0_iter1 = ap_const_logic_1) and (ap_const_logic_1 = ap_CS_fsm_pp0_stage0) and (ap_const_boolean_0 = ap_block_pp0_stage0_11001) and (icmp_ln236_reg_601 = ap_const_lv1_0))) then 
            cache_out_1_V_we0 <= ap_const_logic_1;
        else 
            cache_out_1_V_we0 <= ap_const_logic_0;
        end if; 
    end process;

    cache_out_2_V_address0 <= sext_ln203_fu_476_p1(4 - 1 downto 0);

    cache_out_2_V_ce0_assign_proc : process(ap_CS_fsm_pp0_stage0, ap_block_pp0_stage0_11001, ap_enable_reg_pp0_iter1)
    begin
        if (((ap_enable_reg_pp0_iter1 = ap_const_logic_1) and (ap_const_logic_1 = ap_CS_fsm_pp0_stage0) and (ap_const_boolean_0 = ap_block_pp0_stage0_11001))) then 
            cache_out_2_V_ce0 <= ap_const_logic_1;
        else 
            cache_out_2_V_ce0 <= ap_const_logic_0;
        end if; 
    end process;

    cache_out_2_V_d0 <= 
        tmp_8_reg_657 when (icmp_ln239_fu_484_p2(0) = '1') else 
        cache_in_2_V_q0;

    cache_out_2_V_we0_assign_proc : process(icmp_ln236_reg_601, ap_CS_fsm_pp0_stage0, ap_block_pp0_stage0_11001, ap_enable_reg_pp0_iter1)
    begin
        if (((ap_enable_reg_pp0_iter1 = ap_const_logic_1) and (ap_const_logic_1 = ap_CS_fsm_pp0_stage0) and (ap_const_boolean_0 = ap_block_pp0_stage0_11001) and (icmp_ln236_reg_601 = ap_const_lv1_0))) then 
            cache_out_2_V_we0 <= ap_const_logic_1;
        else 
            cache_out_2_V_we0 <= ap_const_logic_0;
        end if; 
    end process;

    cache_out_3_V_address0 <= sext_ln203_fu_476_p1(4 - 1 downto 0);

    cache_out_3_V_ce0_assign_proc : process(ap_CS_fsm_pp0_stage0, ap_block_pp0_stage0_11001, ap_enable_reg_pp0_iter1)
    begin
        if (((ap_enable_reg_pp0_iter1 = ap_const_logic_1) and (ap_const_logic_1 = ap_CS_fsm_pp0_stage0) and (ap_const_boolean_0 = ap_block_pp0_stage0_11001))) then 
            cache_out_3_V_ce0 <= ap_const_logic_1;
        else 
            cache_out_3_V_ce0 <= ap_const_logic_0;
        end if; 
    end process;

    cache_out_3_V_d0 <= 
        tmp_9_reg_662 when (icmp_ln239_fu_484_p2(0) = '1') else 
        cache_in_3_V_q0;

    cache_out_3_V_we0_assign_proc : process(icmp_ln236_reg_601, ap_CS_fsm_pp0_stage0, ap_block_pp0_stage0_11001, ap_enable_reg_pp0_iter1)
    begin
        if (((ap_enable_reg_pp0_iter1 = ap_const_logic_1) and (ap_const_logic_1 = ap_CS_fsm_pp0_stage0) and (ap_const_boolean_0 = ap_block_pp0_stage0_11001) and (icmp_ln236_reg_601 = ap_const_lv1_0))) then 
            cache_out_3_V_we0 <= ap_const_logic_1;
        else 
            cache_out_3_V_we0 <= ap_const_logic_0;
        end if; 
    end process;

    i_fu_347_p2 <= std_logic_vector(unsigned(ap_const_lv3_1) + unsigned(ap_phi_mux_i_0_phi_fu_317_p4));
    icmp_ln236_fu_335_p2 <= "1" when (indvar_flatten_reg_302 = ap_const_lv4_C) else "0";
    icmp_ln237_fu_353_p2 <= "1" when (j_0_reg_324 = ap_const_lv2_3) else "0";
    icmp_ln239_fu_484_p2 <= "1" when (select_ln239_4_reg_610 = ap_const_lv2_2) else "0";
    j_fu_449_p2 <= std_logic_vector(unsigned(ap_const_lv2_1) + unsigned(select_ln239_4_fu_359_p3));
    select_ln239_4_fu_359_p3 <= 
        ap_const_lv2_0 when (icmp_ln237_fu_353_p2(0) = '1') else 
        j_0_reg_324;
    select_ln239_5_fu_367_p3 <= 
        i_fu_347_p2 when (icmp_ln237_fu_353_p2(0) = '1') else 
        ap_phi_mux_i_0_phi_fu_317_p4;
        sext_ln203_fu_476_p1 <= std_logic_vector(IEEE.numeric_std.resize(signed(add_ln203_fu_471_p2),64));

    sub_ln203_fu_465_p2 <= std_logic_vector(unsigned(tmp_55_fu_458_p3) - unsigned(zext_ln239_fu_455_p1));
    tmp_55_fu_458_p3 <= (select_ln239_5_reg_615 & ap_const_lv2_0);
    tmp_fu_375_p3 <= (select_ln239_5_fu_367_p3 & ap_const_lv1_0);
    trunc_ln239_fu_387_p1 <= select_ln239_5_fu_367_p3(2 - 1 downto 0);
    zext_ln203_fu_383_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(tmp_fu_375_p3),5));
    zext_ln239_1_fu_391_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(select_ln239_4_fu_359_p3),5));
    zext_ln239_2_fu_401_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(add_ln239_fu_395_p2),64));
    zext_ln239_fu_455_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(select_ln239_5_reg_615),5));
end behav;
-- ==============================================================
-- RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and OpenCL
-- Version: 2019.2
-- Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
-- 
-- ===========================================================

library IEEE;
use IEEE.std_logic_1164.all;
use IEEE.numeric_std.all;

entity transpose_last_two_d is
port (
    ap_clk : IN STD_LOGIC;
    ap_rst : IN STD_LOGIC;
    ap_start : IN STD_LOGIC;
    ap_done : OUT STD_LOGIC;
    ap_idle : OUT STD_LOGIC;
    ap_ready : OUT STD_LOGIC;
    input_V_address0 : OUT STD_LOGIC_VECTOR (7 downto 0);
    input_V_ce0 : OUT STD_LOGIC;
    input_V_q0 : IN STD_LOGIC_VECTOR (39 downto 0);
    output_V_address0 : OUT STD_LOGIC_VECTOR (7 downto 0);
    output_V_ce0 : OUT STD_LOGIC;
    output_V_we0 : OUT STD_LOGIC;
    output_V_d0 : OUT STD_LOGIC_VECTOR (39 downto 0) );
end;


architecture behav of transpose_last_two_d is 
    constant ap_const_logic_1 : STD_LOGIC := '1';
    constant ap_const_logic_0 : STD_LOGIC := '0';
    constant ap_ST_fsm_state1 : STD_LOGIC_VECTOR (4 downto 0) := "00001";
    constant ap_ST_fsm_state2 : STD_LOGIC_VECTOR (4 downto 0) := "00010";
    constant ap_ST_fsm_state3 : STD_LOGIC_VECTOR (4 downto 0) := "00100";
    constant ap_ST_fsm_state4 : STD_LOGIC_VECTOR (4 downto 0) := "01000";
    constant ap_ST_fsm_state5 : STD_LOGIC_VECTOR (4 downto 0) := "10000";
    constant ap_const_lv32_0 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000000";
    constant ap_const_lv32_1 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000001";
    constant ap_const_lv1_0 : STD_LOGIC_VECTOR (0 downto 0) := "0";
    constant ap_const_lv32_2 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000010";
    constant ap_const_lv32_3 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000011";
    constant ap_const_lv2_0 : STD_LOGIC_VECTOR (1 downto 0) := "00";
    constant ap_const_lv1_1 : STD_LOGIC_VECTOR (0 downto 0) := "1";
    constant ap_const_lv3_0 : STD_LOGIC_VECTOR (2 downto 0) := "000";
    constant ap_const_lv4_0 : STD_LOGIC_VECTOR (3 downto 0) := "0000";
    constant ap_const_lv32_4 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000100";
    constant ap_const_lv2_2 : STD_LOGIC_VECTOR (1 downto 0) := "10";
    constant ap_const_lv2_1 : STD_LOGIC_VECTOR (1 downto 0) := "01";
    constant ap_const_lv3_6 : STD_LOGIC_VECTOR (2 downto 0) := "110";
    constant ap_const_lv3_1 : STD_LOGIC_VECTOR (2 downto 0) := "001";
    constant ap_const_lv4_C : STD_LOGIC_VECTOR (3 downto 0) := "1100";
    constant ap_const_lv4_1 : STD_LOGIC_VECTOR (3 downto 0) := "0001";
    constant ap_const_boolean_1 : BOOLEAN := true;

    signal ap_CS_fsm : STD_LOGIC_VECTOR (4 downto 0) := "00001";
    attribute fsm_encoding : string;
    attribute fsm_encoding of ap_CS_fsm : signal is "none";
    signal ap_CS_fsm_state1 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state1 : signal is "none";
    signal i_fu_128_p2 : STD_LOGIC_VECTOR (1 downto 0);
    signal i_reg_326 : STD_LOGIC_VECTOR (1 downto 0);
    signal ap_CS_fsm_state2 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state2 : signal is "none";
    signal sext_ln203_fu_164_p1 : STD_LOGIC_VECTOR (6 downto 0);
    signal sext_ln203_reg_331 : STD_LOGIC_VECTOR (6 downto 0);
    signal icmp_ln256_fu_122_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal sext_ln203_1_fu_198_p1 : STD_LOGIC_VECTOR (7 downto 0);
    signal sext_ln203_1_reg_336 : STD_LOGIC_VECTOR (7 downto 0);
    signal j_fu_208_p2 : STD_LOGIC_VECTOR (2 downto 0);
    signal j_reg_344 : STD_LOGIC_VECTOR (2 downto 0);
    signal ap_CS_fsm_state3 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state3 : signal is "none";
    signal zext_ln203_4_fu_214_p1 : STD_LOGIC_VECTOR (8 downto 0);
    signal zext_ln203_4_reg_349 : STD_LOGIC_VECTOR (8 downto 0);
    signal icmp_ln257_fu_202_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal sub_ln203_2_fu_247_p2 : STD_LOGIC_VECTOR (8 downto 0);
    signal sub_ln203_2_reg_354 : STD_LOGIC_VECTOR (8 downto 0);
    signal k_fu_259_p2 : STD_LOGIC_VECTOR (3 downto 0);
    signal k_reg_362 : STD_LOGIC_VECTOR (3 downto 0);
    signal ap_CS_fsm_state4 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state4 : signal is "none";
    signal icmp_ln258_fu_253_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal add_ln203_3_fu_314_p2 : STD_LOGIC_VECTOR (8 downto 0);
    signal add_ln203_3_reg_372 : STD_LOGIC_VECTOR (8 downto 0);
    signal i_0_reg_89 : STD_LOGIC_VECTOR (1 downto 0);
    signal j_0_reg_100 : STD_LOGIC_VECTOR (2 downto 0);
    signal k_0_reg_111 : STD_LOGIC_VECTOR (3 downto 0);
    signal ap_CS_fsm_state5 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state5 : signal is "none";
    signal zext_ln203_8_fu_278_p1 : STD_LOGIC_VECTOR (63 downto 0);
    signal zext_ln203_9_fu_319_p1 : STD_LOGIC_VECTOR (63 downto 0);
    signal tmp_2_fu_134_p3 : STD_LOGIC_VECTOR (4 downto 0);
    signal tmp_3_fu_146_p3 : STD_LOGIC_VECTOR (2 downto 0);
    signal zext_ln203_fu_142_p1 : STD_LOGIC_VECTOR (5 downto 0);
    signal zext_ln203_1_fu_154_p1 : STD_LOGIC_VECTOR (5 downto 0);
    signal sub_ln203_fu_158_p2 : STD_LOGIC_VECTOR (5 downto 0);
    signal tmp_4_fu_168_p3 : STD_LOGIC_VECTOR (5 downto 0);
    signal tmp_5_fu_180_p3 : STD_LOGIC_VECTOR (3 downto 0);
    signal zext_ln203_2_fu_176_p1 : STD_LOGIC_VECTOR (6 downto 0);
    signal zext_ln203_3_fu_188_p1 : STD_LOGIC_VECTOR (6 downto 0);
    signal sub_ln203_1_fu_192_p2 : STD_LOGIC_VECTOR (6 downto 0);
    signal zext_ln203_5_fu_218_p1 : STD_LOGIC_VECTOR (6 downto 0);
    signal add_ln203_fu_222_p2 : STD_LOGIC_VECTOR (6 downto 0);
    signal trunc_ln203_fu_227_p1 : STD_LOGIC_VECTOR (4 downto 0);
    signal p_shl4_cast_fu_231_p3 : STD_LOGIC_VECTOR (8 downto 0);
    signal p_shl5_cast_fu_239_p3 : STD_LOGIC_VECTOR (8 downto 0);
    signal zext_ln203_7_fu_269_p1 : STD_LOGIC_VECTOR (8 downto 0);
    signal add_ln203_1_fu_273_p2 : STD_LOGIC_VECTOR (8 downto 0);
    signal zext_ln203_6_fu_265_p1 : STD_LOGIC_VECTOR (7 downto 0);
    signal add_ln203_2_fu_283_p2 : STD_LOGIC_VECTOR (7 downto 0);
    signal trunc_ln203_1_fu_288_p1 : STD_LOGIC_VECTOR (5 downto 0);
    signal p_shl6_cast_fu_292_p3 : STD_LOGIC_VECTOR (8 downto 0);
    signal p_shl7_cast_fu_300_p3 : STD_LOGIC_VECTOR (8 downto 0);
    signal sub_ln203_3_fu_308_p2 : STD_LOGIC_VECTOR (8 downto 0);
    signal ap_NS_fsm : STD_LOGIC_VECTOR (4 downto 0);


begin




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


    i_0_reg_89_assign_proc : process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((icmp_ln257_fu_202_p2 = ap_const_lv1_1) and (ap_const_logic_1 = ap_CS_fsm_state3))) then 
                i_0_reg_89 <= i_reg_326;
            elsif (((ap_const_logic_1 = ap_CS_fsm_state1) and (ap_start = ap_const_logic_1))) then 
                i_0_reg_89 <= ap_const_lv2_0;
            end if; 
        end if;
    end process;

    j_0_reg_100_assign_proc : process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((icmp_ln258_fu_253_p2 = ap_const_lv1_1) and (ap_const_logic_1 = ap_CS_fsm_state4))) then 
                j_0_reg_100 <= j_reg_344;
            elsif (((icmp_ln256_fu_122_p2 = ap_const_lv1_0) and (ap_const_logic_1 = ap_CS_fsm_state2))) then 
                j_0_reg_100 <= ap_const_lv3_0;
            end if; 
        end if;
    end process;

    k_0_reg_111_assign_proc : process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if ((ap_const_logic_1 = ap_CS_fsm_state5)) then 
                k_0_reg_111 <= k_reg_362;
            elsif (((icmp_ln257_fu_202_p2 = ap_const_lv1_0) and (ap_const_logic_1 = ap_CS_fsm_state3))) then 
                k_0_reg_111 <= ap_const_lv4_0;
            end if; 
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((icmp_ln258_fu_253_p2 = ap_const_lv1_0) and (ap_const_logic_1 = ap_CS_fsm_state4))) then
                add_ln203_3_reg_372 <= add_ln203_3_fu_314_p2;
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if ((ap_const_logic_1 = ap_CS_fsm_state2)) then
                i_reg_326 <= i_fu_128_p2;
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if ((ap_const_logic_1 = ap_CS_fsm_state3)) then
                j_reg_344 <= j_fu_208_p2;
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if ((ap_const_logic_1 = ap_CS_fsm_state4)) then
                k_reg_362 <= k_fu_259_p2;
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((icmp_ln256_fu_122_p2 = ap_const_lv1_0) and (ap_const_logic_1 = ap_CS_fsm_state2))) then
                    sext_ln203_1_reg_336(7 downto 2) <= sext_ln203_1_fu_198_p1(7 downto 2);
                    sext_ln203_reg_331(6 downto 1) <= sext_ln203_fu_164_p1(6 downto 1);
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((icmp_ln257_fu_202_p2 = ap_const_lv1_0) and (ap_const_logic_1 = ap_CS_fsm_state3))) then
                    sub_ln203_2_reg_354(8 downto 2) <= sub_ln203_2_fu_247_p2(8 downto 2);
                    zext_ln203_4_reg_349(2 downto 0) <= zext_ln203_4_fu_214_p1(2 downto 0);
            end if;
        end if;
    end process;
    sext_ln203_reg_331(0) <= '0';
    sext_ln203_1_reg_336(1 downto 0) <= "00";
    zext_ln203_4_reg_349(8 downto 3) <= "000000";
    sub_ln203_2_reg_354(1 downto 0) <= "00";

    ap_NS_fsm_assign_proc : process (ap_start, ap_CS_fsm, ap_CS_fsm_state1, ap_CS_fsm_state2, icmp_ln256_fu_122_p2, ap_CS_fsm_state3, icmp_ln257_fu_202_p2, ap_CS_fsm_state4, icmp_ln258_fu_253_p2)
    begin
        case ap_CS_fsm is
            when ap_ST_fsm_state1 => 
                if (((ap_const_logic_1 = ap_CS_fsm_state1) and (ap_start = ap_const_logic_1))) then
                    ap_NS_fsm <= ap_ST_fsm_state2;
                else
                    ap_NS_fsm <= ap_ST_fsm_state1;
                end if;
            when ap_ST_fsm_state2 => 
                if (((icmp_ln256_fu_122_p2 = ap_const_lv1_1) and (ap_const_logic_1 = ap_CS_fsm_state2))) then
                    ap_NS_fsm <= ap_ST_fsm_state1;
                else
                    ap_NS_fsm <= ap_ST_fsm_state3;
                end if;
            when ap_ST_fsm_state3 => 
                if (((icmp_ln257_fu_202_p2 = ap_const_lv1_1) and (ap_const_logic_1 = ap_CS_fsm_state3))) then
                    ap_NS_fsm <= ap_ST_fsm_state2;
                else
                    ap_NS_fsm <= ap_ST_fsm_state4;
                end if;
            when ap_ST_fsm_state4 => 
                if (((icmp_ln258_fu_253_p2 = ap_const_lv1_1) and (ap_const_logic_1 = ap_CS_fsm_state4))) then
                    ap_NS_fsm <= ap_ST_fsm_state3;
                else
                    ap_NS_fsm <= ap_ST_fsm_state5;
                end if;
            when ap_ST_fsm_state5 => 
                ap_NS_fsm <= ap_ST_fsm_state4;
            when others =>  
                ap_NS_fsm <= "XXXXX";
        end case;
    end process;
    add_ln203_1_fu_273_p2 <= std_logic_vector(unsigned(zext_ln203_7_fu_269_p1) + unsigned(sub_ln203_2_reg_354));
    add_ln203_2_fu_283_p2 <= std_logic_vector(unsigned(zext_ln203_6_fu_265_p1) + unsigned(sext_ln203_1_reg_336));
    add_ln203_3_fu_314_p2 <= std_logic_vector(unsigned(zext_ln203_4_reg_349) + unsigned(sub_ln203_3_fu_308_p2));
    add_ln203_fu_222_p2 <= std_logic_vector(unsigned(zext_ln203_5_fu_218_p1) + unsigned(sext_ln203_reg_331));
    ap_CS_fsm_state1 <= ap_CS_fsm(0);
    ap_CS_fsm_state2 <= ap_CS_fsm(1);
    ap_CS_fsm_state3 <= ap_CS_fsm(2);
    ap_CS_fsm_state4 <= ap_CS_fsm(3);
    ap_CS_fsm_state5 <= ap_CS_fsm(4);

    ap_done_assign_proc : process(ap_start, ap_CS_fsm_state1, ap_CS_fsm_state2, icmp_ln256_fu_122_p2)
    begin
        if ((((icmp_ln256_fu_122_p2 = ap_const_lv1_1) and (ap_const_logic_1 = ap_CS_fsm_state2)) or ((ap_start = ap_const_logic_0) and (ap_const_logic_1 = ap_CS_fsm_state1)))) then 
            ap_done <= ap_const_logic_1;
        else 
            ap_done <= ap_const_logic_0;
        end if; 
    end process;


    ap_idle_assign_proc : process(ap_start, ap_CS_fsm_state1)
    begin
        if (((ap_start = ap_const_logic_0) and (ap_const_logic_1 = ap_CS_fsm_state1))) then 
            ap_idle <= ap_const_logic_1;
        else 
            ap_idle <= ap_const_logic_0;
        end if; 
    end process;


    ap_ready_assign_proc : process(ap_CS_fsm_state2, icmp_ln256_fu_122_p2)
    begin
        if (((icmp_ln256_fu_122_p2 = ap_const_lv1_1) and (ap_const_logic_1 = ap_CS_fsm_state2))) then 
            ap_ready <= ap_const_logic_1;
        else 
            ap_ready <= ap_const_logic_0;
        end if; 
    end process;

    i_fu_128_p2 <= std_logic_vector(unsigned(i_0_reg_89) + unsigned(ap_const_lv2_1));
    icmp_ln256_fu_122_p2 <= "1" when (i_0_reg_89 = ap_const_lv2_2) else "0";
    icmp_ln257_fu_202_p2 <= "1" when (j_0_reg_100 = ap_const_lv3_6) else "0";
    icmp_ln258_fu_253_p2 <= "1" when (k_0_reg_111 = ap_const_lv4_C) else "0";
    input_V_address0 <= zext_ln203_8_fu_278_p1(8 - 1 downto 0);

    input_V_ce0_assign_proc : process(ap_CS_fsm_state4)
    begin
        if ((ap_const_logic_1 = ap_CS_fsm_state4)) then 
            input_V_ce0 <= ap_const_logic_1;
        else 
            input_V_ce0 <= ap_const_logic_0;
        end if; 
    end process;

    j_fu_208_p2 <= std_logic_vector(unsigned(j_0_reg_100) + unsigned(ap_const_lv3_1));
    k_fu_259_p2 <= std_logic_vector(unsigned(k_0_reg_111) + unsigned(ap_const_lv4_1));
    output_V_address0 <= zext_ln203_9_fu_319_p1(8 - 1 downto 0);

    output_V_ce0_assign_proc : process(ap_CS_fsm_state5)
    begin
        if ((ap_const_logic_1 = ap_CS_fsm_state5)) then 
            output_V_ce0 <= ap_const_logic_1;
        else 
            output_V_ce0 <= ap_const_logic_0;
        end if; 
    end process;

    output_V_d0 <= input_V_q0;

    output_V_we0_assign_proc : process(ap_CS_fsm_state5)
    begin
        if ((ap_const_logic_1 = ap_CS_fsm_state5)) then 
            output_V_we0 <= ap_const_logic_1;
        else 
            output_V_we0 <= ap_const_logic_0;
        end if; 
    end process;

    p_shl4_cast_fu_231_p3 <= (trunc_ln203_fu_227_p1 & ap_const_lv4_0);
    p_shl5_cast_fu_239_p3 <= (add_ln203_fu_222_p2 & ap_const_lv2_0);
    p_shl6_cast_fu_292_p3 <= (trunc_ln203_1_fu_288_p1 & ap_const_lv3_0);
    p_shl7_cast_fu_300_p3 <= (add_ln203_2_fu_283_p2 & ap_const_lv1_0);
        sext_ln203_1_fu_198_p1 <= std_logic_vector(IEEE.numeric_std.resize(signed(sub_ln203_1_fu_192_p2),8));

        sext_ln203_fu_164_p1 <= std_logic_vector(IEEE.numeric_std.resize(signed(sub_ln203_fu_158_p2),7));

    sub_ln203_1_fu_192_p2 <= std_logic_vector(unsigned(zext_ln203_2_fu_176_p1) - unsigned(zext_ln203_3_fu_188_p1));
    sub_ln203_2_fu_247_p2 <= std_logic_vector(unsigned(p_shl4_cast_fu_231_p3) - unsigned(p_shl5_cast_fu_239_p3));
    sub_ln203_3_fu_308_p2 <= std_logic_vector(unsigned(p_shl6_cast_fu_292_p3) - unsigned(p_shl7_cast_fu_300_p3));
    sub_ln203_fu_158_p2 <= std_logic_vector(unsigned(zext_ln203_fu_142_p1) - unsigned(zext_ln203_1_fu_154_p1));
    tmp_2_fu_134_p3 <= (i_0_reg_89 & ap_const_lv3_0);
    tmp_3_fu_146_p3 <= (i_0_reg_89 & ap_const_lv1_0);
    tmp_4_fu_168_p3 <= (i_0_reg_89 & ap_const_lv4_0);
    tmp_5_fu_180_p3 <= (i_0_reg_89 & ap_const_lv2_0);
    trunc_ln203_1_fu_288_p1 <= add_ln203_2_fu_283_p2(6 - 1 downto 0);
    trunc_ln203_fu_227_p1 <= add_ln203_fu_222_p2(5 - 1 downto 0);
    zext_ln203_1_fu_154_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(tmp_3_fu_146_p3),6));
    zext_ln203_2_fu_176_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(tmp_4_fu_168_p3),7));
    zext_ln203_3_fu_188_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(tmp_5_fu_180_p3),7));
    zext_ln203_4_fu_214_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(j_0_reg_100),9));
    zext_ln203_5_fu_218_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(j_0_reg_100),7));
    zext_ln203_6_fu_265_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(k_0_reg_111),8));
    zext_ln203_7_fu_269_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(k_0_reg_111),9));
    zext_ln203_8_fu_278_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(add_ln203_1_fu_273_p2),64));
    zext_ln203_9_fu_319_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(add_ln203_3_reg_372),64));
    zext_ln203_fu_142_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(tmp_2_fu_134_p3),6));
end behav;
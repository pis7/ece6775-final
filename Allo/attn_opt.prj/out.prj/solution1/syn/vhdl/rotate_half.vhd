-- ==============================================================
-- RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and OpenCL
-- Version: 2019.2
-- Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
-- 
-- ===========================================================

library IEEE;
use IEEE.std_logic_1164.all;
use IEEE.numeric_std.all;

entity rotate_half is
port (
    ap_clk : IN STD_LOGIC;
    ap_rst : IN STD_LOGIC;
    ap_start : IN STD_LOGIC;
    ap_done : OUT STD_LOGIC;
    ap_idle : OUT STD_LOGIC;
    ap_ready : OUT STD_LOGIC;
    v152_0_address0 : OUT STD_LOGIC_VECTOR (10 downto 0);
    v152_0_ce0 : OUT STD_LOGIC;
    v152_0_q0 : IN STD_LOGIC_VECTOR (31 downto 0);
    v152_0_address1 : OUT STD_LOGIC_VECTOR (10 downto 0);
    v152_0_ce1 : OUT STD_LOGIC;
    v152_0_q1 : IN STD_LOGIC_VECTOR (31 downto 0);
    v153_0_address0 : OUT STD_LOGIC_VECTOR (10 downto 0);
    v153_0_ce0 : OUT STD_LOGIC;
    v153_0_we0 : OUT STD_LOGIC;
    v153_0_d0 : OUT STD_LOGIC_VECTOR (31 downto 0);
    v153_0_address1 : OUT STD_LOGIC_VECTOR (10 downto 0);
    v153_0_ce1 : OUT STD_LOGIC;
    v153_0_we1 : OUT STD_LOGIC;
    v153_0_d1 : OUT STD_LOGIC_VECTOR (31 downto 0) );
end;


architecture behav of rotate_half is 
    constant ap_const_logic_1 : STD_LOGIC := '1';
    constant ap_const_logic_0 : STD_LOGIC := '0';
    constant ap_ST_fsm_state1 : STD_LOGIC_VECTOR (3 downto 0) := "0001";
    constant ap_ST_fsm_state2 : STD_LOGIC_VECTOR (3 downto 0) := "0010";
    constant ap_ST_fsm_state3 : STD_LOGIC_VECTOR (3 downto 0) := "0100";
    constant ap_ST_fsm_state4 : STD_LOGIC_VECTOR (3 downto 0) := "1000";
    constant ap_const_lv32_0 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000000";
    constant ap_const_lv32_1 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000001";
    constant ap_const_lv1_0 : STD_LOGIC_VECTOR (0 downto 0) := "0";
    constant ap_const_lv32_2 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000010";
    constant ap_const_lv5_0 : STD_LOGIC_VECTOR (4 downto 0) := "00000";
    constant ap_const_lv1_1 : STD_LOGIC_VECTOR (0 downto 0) := "1";
    constant ap_const_lv6_0 : STD_LOGIC_VECTOR (5 downto 0) := "000000";
    constant ap_const_lv32_3 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000011";
    constant ap_const_lv5_10 : STD_LOGIC_VECTOR (4 downto 0) := "10000";
    constant ap_const_lv5_1 : STD_LOGIC_VECTOR (4 downto 0) := "00001";
    constant ap_const_lv7_0 : STD_LOGIC_VECTOR (6 downto 0) := "0000000";
    constant ap_const_lv6_30 : STD_LOGIC_VECTOR (5 downto 0) := "110000";
    constant ap_const_lv6_1 : STD_LOGIC_VECTOR (5 downto 0) := "000001";
    constant ap_const_lv7_30 : STD_LOGIC_VECTOR (6 downto 0) := "0110000";
    constant ap_const_lv32_80000000 : STD_LOGIC_VECTOR (31 downto 0) := "10000000000000000000000000000000";
    constant ap_const_boolean_1 : BOOLEAN := true;

    signal ap_CS_fsm : STD_LOGIC_VECTOR (3 downto 0) := "0001";
    attribute fsm_encoding : string;
    attribute fsm_encoding of ap_CS_fsm : signal is "none";
    signal ap_CS_fsm_state1 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state1 : signal is "none";
    signal h1_fu_125_p2 : STD_LOGIC_VECTOR (4 downto 0);
    signal h1_reg_225 : STD_LOGIC_VECTOR (4 downto 0);
    signal ap_CS_fsm_state2 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state2 : signal is "none";
    signal sub_ln249_fu_151_p2 : STD_LOGIC_VECTOR (11 downto 0);
    signal sub_ln249_reg_230 : STD_LOGIC_VECTOR (11 downto 0);
    signal icmp_ln246_fu_119_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal add_ln248_fu_167_p2 : STD_LOGIC_VECTOR (5 downto 0);
    signal add_ln248_reg_239 : STD_LOGIC_VECTOR (5 downto 0);
    signal ap_CS_fsm_state3 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state3 : signal is "none";
    signal sext_ln249_fu_188_p1 : STD_LOGIC_VECTOR (63 downto 0);
    signal sext_ln249_reg_244 : STD_LOGIC_VECTOR (63 downto 0);
    signal icmp_ln248_fu_161_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal sext_ln252_fu_202_p1 : STD_LOGIC_VECTOR (63 downto 0);
    signal sext_ln252_reg_254 : STD_LOGIC_VECTOR (63 downto 0);
    signal h1_0_reg_97 : STD_LOGIC_VECTOR (4 downto 0);
    signal d1_0_0_reg_108 : STD_LOGIC_VECTOR (5 downto 0);
    signal ap_CS_fsm_state4 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state4 : signal is "none";
    signal tmp_8_fu_139_p3 : STD_LOGIC_VECTOR (9 downto 0);
    signal tmp_s_fu_131_p3 : STD_LOGIC_VECTOR (11 downto 0);
    signal zext_ln249_fu_147_p1 : STD_LOGIC_VECTOR (11 downto 0);
    signal zext_ln248_fu_157_p1 : STD_LOGIC_VECTOR (6 downto 0);
    signal add_ln249_fu_173_p2 : STD_LOGIC_VECTOR (6 downto 0);
    signal zext_ln249_1_fu_179_p1 : STD_LOGIC_VECTOR (11 downto 0);
    signal add_ln249_1_fu_183_p2 : STD_LOGIC_VECTOR (11 downto 0);
    signal zext_ln252_fu_193_p1 : STD_LOGIC_VECTOR (11 downto 0);
    signal add_ln252_fu_197_p2 : STD_LOGIC_VECTOR (11 downto 0);
    signal bitcast_ln250_fu_207_p1 : STD_LOGIC_VECTOR (31 downto 0);
    signal xor_ln250_fu_211_p2 : STD_LOGIC_VECTOR (31 downto 0);
    signal ap_NS_fsm : STD_LOGIC_VECTOR (3 downto 0);


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


    d1_0_0_reg_108_assign_proc : process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if ((ap_const_logic_1 = ap_CS_fsm_state4)) then 
                d1_0_0_reg_108 <= add_ln248_reg_239;
            elsif (((icmp_ln246_fu_119_p2 = ap_const_lv1_0) and (ap_const_logic_1 = ap_CS_fsm_state2))) then 
                d1_0_0_reg_108 <= ap_const_lv6_0;
            end if; 
        end if;
    end process;

    h1_0_reg_97_assign_proc : process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((icmp_ln248_fu_161_p2 = ap_const_lv1_1) and (ap_const_logic_1 = ap_CS_fsm_state3))) then 
                h1_0_reg_97 <= h1_reg_225;
            elsif (((ap_start = ap_const_logic_1) and (ap_const_logic_1 = ap_CS_fsm_state1))) then 
                h1_0_reg_97 <= ap_const_lv5_0;
            end if; 
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if ((ap_const_logic_1 = ap_CS_fsm_state3)) then
                add_ln248_reg_239 <= add_ln248_fu_167_p2;
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if ((ap_const_logic_1 = ap_CS_fsm_state2)) then
                h1_reg_225 <= h1_fu_125_p2;
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((icmp_ln248_fu_161_p2 = ap_const_lv1_0) and (ap_const_logic_1 = ap_CS_fsm_state3))) then
                sext_ln249_reg_244 <= sext_ln249_fu_188_p1;
                sext_ln252_reg_254 <= sext_ln252_fu_202_p1;
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((icmp_ln246_fu_119_p2 = ap_const_lv1_0) and (ap_const_logic_1 = ap_CS_fsm_state2))) then
                    sub_ln249_reg_230(11 downto 5) <= sub_ln249_fu_151_p2(11 downto 5);
            end if;
        end if;
    end process;
    sub_ln249_reg_230(4 downto 0) <= "00000";

    ap_NS_fsm_assign_proc : process (ap_start, ap_CS_fsm, ap_CS_fsm_state1, ap_CS_fsm_state2, icmp_ln246_fu_119_p2, ap_CS_fsm_state3, icmp_ln248_fu_161_p2)
    begin
        case ap_CS_fsm is
            when ap_ST_fsm_state1 => 
                if (((ap_start = ap_const_logic_1) and (ap_const_logic_1 = ap_CS_fsm_state1))) then
                    ap_NS_fsm <= ap_ST_fsm_state2;
                else
                    ap_NS_fsm <= ap_ST_fsm_state1;
                end if;
            when ap_ST_fsm_state2 => 
                if (((icmp_ln246_fu_119_p2 = ap_const_lv1_1) and (ap_const_logic_1 = ap_CS_fsm_state2))) then
                    ap_NS_fsm <= ap_ST_fsm_state1;
                else
                    ap_NS_fsm <= ap_ST_fsm_state3;
                end if;
            when ap_ST_fsm_state3 => 
                if (((icmp_ln248_fu_161_p2 = ap_const_lv1_1) and (ap_const_logic_1 = ap_CS_fsm_state3))) then
                    ap_NS_fsm <= ap_ST_fsm_state2;
                else
                    ap_NS_fsm <= ap_ST_fsm_state4;
                end if;
            when ap_ST_fsm_state4 => 
                ap_NS_fsm <= ap_ST_fsm_state3;
            when others =>  
                ap_NS_fsm <= "XXXX";
        end case;
    end process;
    add_ln248_fu_167_p2 <= std_logic_vector(unsigned(d1_0_0_reg_108) + unsigned(ap_const_lv6_1));
    add_ln249_1_fu_183_p2 <= std_logic_vector(unsigned(sub_ln249_reg_230) + unsigned(zext_ln249_1_fu_179_p1));
    add_ln249_fu_173_p2 <= std_logic_vector(unsigned(zext_ln248_fu_157_p1) + unsigned(ap_const_lv7_30));
    add_ln252_fu_197_p2 <= std_logic_vector(unsigned(sub_ln249_reg_230) + unsigned(zext_ln252_fu_193_p1));
    ap_CS_fsm_state1 <= ap_CS_fsm(0);
    ap_CS_fsm_state2 <= ap_CS_fsm(1);
    ap_CS_fsm_state3 <= ap_CS_fsm(2);
    ap_CS_fsm_state4 <= ap_CS_fsm(3);

    ap_done_assign_proc : process(ap_start, ap_CS_fsm_state1, ap_CS_fsm_state2, icmp_ln246_fu_119_p2)
    begin
        if ((((icmp_ln246_fu_119_p2 = ap_const_lv1_1) and (ap_const_logic_1 = ap_CS_fsm_state2)) or ((ap_start = ap_const_logic_0) and (ap_const_logic_1 = ap_CS_fsm_state1)))) then 
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


    ap_ready_assign_proc : process(ap_CS_fsm_state2, icmp_ln246_fu_119_p2)
    begin
        if (((icmp_ln246_fu_119_p2 = ap_const_lv1_1) and (ap_const_logic_1 = ap_CS_fsm_state2))) then 
            ap_ready <= ap_const_logic_1;
        else 
            ap_ready <= ap_const_logic_0;
        end if; 
    end process;

    bitcast_ln250_fu_207_p1 <= v152_0_q0;
    h1_fu_125_p2 <= std_logic_vector(unsigned(h1_0_reg_97) + unsigned(ap_const_lv5_1));
    icmp_ln246_fu_119_p2 <= "1" when (h1_0_reg_97 = ap_const_lv5_10) else "0";
    icmp_ln248_fu_161_p2 <= "1" when (d1_0_0_reg_108 = ap_const_lv6_30) else "0";
        sext_ln249_fu_188_p1 <= std_logic_vector(IEEE.numeric_std.resize(signed(add_ln249_1_fu_183_p2),64));

        sext_ln252_fu_202_p1 <= std_logic_vector(IEEE.numeric_std.resize(signed(add_ln252_fu_197_p2),64));

    sub_ln249_fu_151_p2 <= std_logic_vector(unsigned(tmp_s_fu_131_p3) - unsigned(zext_ln249_fu_147_p1));
    tmp_8_fu_139_p3 <= (h1_0_reg_97 & ap_const_lv5_0);
    tmp_s_fu_131_p3 <= (h1_0_reg_97 & ap_const_lv7_0);
    v152_0_address0 <= sext_ln249_fu_188_p1(11 - 1 downto 0);
    v152_0_address1 <= sext_ln252_fu_202_p1(11 - 1 downto 0);

    v152_0_ce0_assign_proc : process(ap_CS_fsm_state3)
    begin
        if ((ap_const_logic_1 = ap_CS_fsm_state3)) then 
            v152_0_ce0 <= ap_const_logic_1;
        else 
            v152_0_ce0 <= ap_const_logic_0;
        end if; 
    end process;


    v152_0_ce1_assign_proc : process(ap_CS_fsm_state3)
    begin
        if ((ap_const_logic_1 = ap_CS_fsm_state3)) then 
            v152_0_ce1 <= ap_const_logic_1;
        else 
            v152_0_ce1 <= ap_const_logic_0;
        end if; 
    end process;

    v153_0_address0 <= sext_ln252_reg_254(11 - 1 downto 0);
    v153_0_address1 <= sext_ln249_reg_244(11 - 1 downto 0);

    v153_0_ce0_assign_proc : process(ap_CS_fsm_state4)
    begin
        if ((ap_const_logic_1 = ap_CS_fsm_state4)) then 
            v153_0_ce0 <= ap_const_logic_1;
        else 
            v153_0_ce0 <= ap_const_logic_0;
        end if; 
    end process;


    v153_0_ce1_assign_proc : process(ap_CS_fsm_state4)
    begin
        if ((ap_const_logic_1 = ap_CS_fsm_state4)) then 
            v153_0_ce1 <= ap_const_logic_1;
        else 
            v153_0_ce1 <= ap_const_logic_0;
        end if; 
    end process;

    v153_0_d0 <= xor_ln250_fu_211_p2;
    v153_0_d1 <= v152_0_q1;

    v153_0_we0_assign_proc : process(ap_CS_fsm_state4)
    begin
        if ((ap_const_logic_1 = ap_CS_fsm_state4)) then 
            v153_0_we0 <= ap_const_logic_1;
        else 
            v153_0_we0 <= ap_const_logic_0;
        end if; 
    end process;


    v153_0_we1_assign_proc : process(ap_CS_fsm_state4)
    begin
        if ((ap_const_logic_1 = ap_CS_fsm_state4)) then 
            v153_0_we1 <= ap_const_logic_1;
        else 
            v153_0_we1 <= ap_const_logic_0;
        end if; 
    end process;

    xor_ln250_fu_211_p2 <= (bitcast_ln250_fu_207_p1 xor ap_const_lv32_80000000);
    zext_ln248_fu_157_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(d1_0_0_reg_108),7));
    zext_ln249_1_fu_179_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(add_ln249_fu_173_p2),12));
    zext_ln249_fu_147_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(tmp_8_fu_139_p3),12));
    zext_ln252_fu_193_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(d1_0_0_reg_108),12));
end behav;
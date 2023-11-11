library IEEE;
use IEEE.STD_LOGIC_1164.ALL;



entity top is
    Port ( clk : in  STD_LOGIC);
end top;

architecture Behavioral of top is
COMPONENT common_bus
	PORT(
		clk : IN std_logic;
		S0 : IN std_logic;
		S1 : IN std_logic;
		S2 : IN std_logic;
		wr : IN std_logic;
		re : IN std_logic;
		AR_load : IN std_logic;
		AR_rst : IN std_logic;
		AR_inr : IN std_logic;
		PC_load : IN std_logic;
		PC_rst : IN std_logic;
		PC_inr : IN std_logic;
		DR_load : IN std_logic;
		DR_rst : IN std_logic;
		DR_inr : IN std_logic;
		AC_load : IN std_logic;
		AC_rst : IN std_logic;
		AC_inr : IN std_logic;
		IR_load : IN std_logic;
		IR_rst : IN std_logic;
		IR_inr : IN std_logic;
		TR_load : IN std_logic;
		TR_rst : IN std_logic;
		TR_inr : IN std_logic;
		OUTR_load : IN std_logic;
		OUTR_rst : IN std_logic;
		OUTR_inr : IN std_logic;
		E_rst : IN std_logic;
		E_load : IN std_logic;
		alu_op : IN std_logic_vector(3 downto 0);          
		IR_out_CTRL : OUT std_logic_vector(15 downto 0);
		AC_out_CTRL : OUT std_logic_vector(15 downto 0);
		DR_out_CTRL : OUT std_logic_vector(15 downto 0);
		E_out_CTRL : OUT std_logic;
		alu_zero : OUT std_logic
		);
	END COMPONENT;
		
		
	COMPONENT control_unit
	PORT(
		clk : IN std_logic;
		IR_inp : IN std_logic_vector(15 downto 0);
		AC_inp : IN std_logic_vector(15 downto 0);
		DR_inp : IN std_logic_vector(15 downto 0);
		E_inp : IN std_logic;
		alu_zero : IN std_logic;          
		S0 : OUT std_logic;
		S1 : OUT std_logic;
		S2 : OUT std_logic;
		wr : OUT std_logic;
		re : OUT std_logic;
		AR_load : OUT std_logic;
		AR_rst : OUT std_logic;
		AR_inr : OUT std_logic;
		PC_load : OUT std_logic;
		PC_rst : OUT std_logic;
		PC_inr : OUT std_logic;
		DR_load : OUT std_logic;
		DR_rst : OUT std_logic;
		DR_inr : OUT std_logic;
		AC_load : OUT std_logic;
		AC_rst : OUT std_logic;
		AC_inr : OUT std_logic;
		IR_load : OUT std_logic;
		IR_rst : OUT std_logic;
		IR_inr : OUT std_logic;
		TR_load : OUT std_logic;
		TR_rst : OUT std_logic;
		TR_inr : OUT std_logic;
		OUTR_load : OUT std_logic;
		OUTR_rst : OUT std_logic;
		OUTR_inr : OUT std_logic;
		E_rst : OUT std_logic;
		E_load : OUT std_logic;
		alu_op : OUT std_logic_vector(3 downto 0)
		);
	END COMPONENT;
	
signal IR : std_logic_vector(15 downto 0):= (others => '0');
signal AC : std_logic_vector(15 downto 0):= (others => '0');
signal DR : std_logic_vector(15 downto 0):= (others => '0');
signal E  : std_logic := '0';

signal S0 :   std_logic:= '0';
signal S1 :   std_logic:= '0';
signal S2 :   std_logic:= '0';

signal wr :   std_logic:= '0';
signal re :   std_logic:= '0';

signal AR_load :   std_logic:= '0';
signal AR_rst  :   std_logic:= '0';
signal AR_inr  :   std_logic:= '0';

signal PC_load :   std_logic:= '0';
signal PC_rst  :   std_logic:= '0';
signal PC_inr  :   std_logic:= '0';

signal DR_load :   std_logic:= '0';
signal DR_rst  :   std_logic:= '0';
signal DR_inr  :   std_logic:= '0';

signal AC_load :   std_logic:= '0';
signal AC_rst  :   std_logic:= '0';
signal AC_inr  :   std_logic:= '0';

signal IR_load :   std_logic:= '0';
signal IR_rst  :   std_logic:= '0';
signal IR_inr  :   std_logic:= '0';

signal TR_load :   std_logic:= '0';
signal TR_rst  :   std_logic:= '0';
signal TR_inr  :   std_logic:= '0';			  

signal OUTR_load :   std_logic:= '0';
signal OUTR_rst  :   std_logic:= '0';
signal OUTR_inr  :   std_logic:= '0';

signal E_rst  :   std_logic:= '0';
signal E_load  :   std_logic:= '0';

signal alu_zero  : std_logic:= '0';
signal alu_op :   std_logic_vector(3 downto 0):= (others => '0');
	
	
	
	
	
	
	
begin
Inst_common_bus: common_bus PORT MAP(
		clk => clk,
		IR_out_CTRL => IR,
		AC_out_CTRL => AC,
		DR_out_CTRL => DR,
		E_out_CTRL => E,
		S0 => S0,
		S1 => S1,
		S2 => S2,
		wr => wr,
		re => re,
		AR_load => AR_load,
		AR_rst => AR_rst,
		AR_inr => AR_inr,
		PC_load => PC_load,
		PC_rst => PC_rst,
		PC_inr => PC_inr,
		DR_load => DR_load,
		DR_rst => DR_rst,
		DR_inr => DR_inr,
		AC_load => AC_load,
		AC_rst => AC_rst,
		AC_inr => AC_inr,
		IR_load => IR_load,
		IR_rst => IR_rst,
		IR_inr => IR_inr,
		TR_load => TR_load,
		TR_rst => TR_rst,
		TR_inr => TR_inr,
		OUTR_load => OUTR_load,
		OUTR_rst => OUTR_rst,
		OUTR_inr => OUTR_inr,
		E_rst => E_rst,
		E_load => E_load,
		alu_zero => alu_zero,
		alu_op => alu_op
	);
	Inst_control_unit: control_unit PORT MAP(
		clk => clk,
		IR_inp => IR,
		AC_inp => AC,
		DR_inp => DR,
		E_inp => E,
		S0 => S0,
		S1 => S1,
		S2 => S2,
		wr => wr,
		re => re,
		AR_load => AR_load,
		AR_rst => AR_rst,
		AR_inr => AR_inr,
		PC_load => PC_load,
		PC_rst => PC_rst,
		PC_inr => PC_inr,
		DR_load => DR_load,
		DR_rst => DR_rst,
		DR_inr => DR_inr,
		AC_load => AC_load,
		AC_rst => AC_rst,
		AC_inr => AC_inr,
		IR_load => IR_load,
		IR_rst => IR_rst,
		IR_inr => IR_inr,
		TR_load => TR_load,
		TR_rst => TR_rst,
		TR_inr => TR_inr,
		OUTR_load => OUTR_load,
		OUTR_rst => OUTR_rst,
		OUTR_inr => OUTR_inr,
		E_rst => E_rst,
		E_load => E_load,
		alu_zero => alu_zero,
		alu_op => alu_op
	);
end Behavioral;


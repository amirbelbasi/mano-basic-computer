library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity common_bus is
    Port ( clk : in  STD_LOGIC;
			  IR_out_CTRL : out std_logic_vector(15 downto 0);
			  AC_out_CTRL : out std_logic_vector(15 downto 0);
			  DR_out_CTRL : out std_logic_vector(15 downto 0);
			  E_out_CTRL : out std_logic;
			  
			  S0 : in std_logic;
			  S1 : in std_logic;
			  S2 : in std_logic;
	
			  wr : in std_logic;
			  re : in std_logic;
			  
			  AR_load : in std_logic;
			  AR_rst  : in std_logic;
			  AR_inr  : in std_logic;
			  
			  PC_load : in std_logic;
			  PC_rst  : in std_logic;
			  PC_inr  : in std_logic;
			  
			  DR_load : in std_logic;
			  DR_rst  : in std_logic;
			  DR_inr  : in std_logic;
			  
			  AC_load : in std_logic;
			  AC_rst  : in std_logic;
			  AC_inr  : in std_logic;
			  
			  IR_load : in std_logic;
			  IR_rst  : in std_logic;
			  IR_inr  : in std_logic;
			  
			  TR_load : in std_logic;
			  TR_rst  : in std_logic;
			  TR_inr  : in std_logic;			  
			  
			  OUTR_load : in std_logic;
			  OUTR_rst  : in std_logic;
			  OUTR_inr  : in std_logic;

			  E_rst  : in std_logic;
			  E_load  : in std_logic;
			  
			  alu_zero  : out std_logic;
			  alu_op : in std_logic_vector(3 downto 0)
			  
			  
			  
	 );
end common_bus;

architecture Behavioral of common_bus is
	
	COMPONENT memory
	PORT(
		address : IN std_logic_vector(11 downto 0);
		in_data : IN std_logic_vector(15 downto 0);
		wr : IN std_logic;
		re : IN std_logic;          
		out_data : OUT std_logic_vector(15 downto 0)
		);
	END COMPONENT;
	
	COMPONENT AR
	PORT(
		in_data : IN std_logic_vector(11 downto 0);
		load : IN std_logic;
		rst : IN std_logic;
		clk : IN std_logic;
		inr : IN std_logic;          
		out_data : OUT std_logic_vector(11 downto 0)
		);
	END COMPONENT;
	
	COMPONENT PC
	PORT(
		in_data : IN std_logic_vector(11 downto 0);
		load : IN std_logic;
		rst : IN std_logic;
		clk : IN std_logic;
		inr : IN std_logic;          
		out_data : OUT std_logic_vector(11 downto 0)
		);
	END COMPONENT;

	COMPONENT DR
	PORT(
		in_data : IN std_logic_vector(15 downto 0);
		load : IN std_logic;
		rst : IN std_logic;
		clk : IN std_logic;
		inr : IN std_logic;          
		out_data : OUT std_logic_vector(15 downto 0)
		);
	END COMPONENT;

	COMPONENT AC
	PORT(
		in_data : IN std_logic_vector(15 downto 0);
		load : IN std_logic;
		rst : IN std_logic;
		clk : IN std_logic;
		inr : IN std_logic;          
		out_data : OUT std_logic_vector(15 downto 0)
		);
	END COMPONENT;

	COMPONENT alu
	PORT(
		a : IN std_logic_vector(15 downto 0);
		b : IN std_logic_vector(15 downto 0);
		alu_op : IN std_logic_vector(3 downto 0);          
		output : OUT std_logic_vector(15 downto 0);
		cout : OUT std_logic;
		zero : OUT std_logic
		);
	END COMPONENT;

	COMPONENT E
	PORT(
		clk : IN std_logic;
		input : IN std_logic;
		rst : IN std_logic;          
		load :in std_logic;
		output : OUT std_logic
		);
	END COMPONENT;	

	COMPONENT IR
	PORT(
		in_data : IN std_logic_vector(15 downto 0);
		load : IN std_logic;
		rst : IN std_logic;
		clk : IN std_logic;
		inr : IN std_logic;          
		out_data : OUT std_logic_vector(15 downto 0)
		);
	END COMPONENT;
	
	COMPONENT TR
	PORT(
		in_data : IN std_logic_vector(15 downto 0);
		load : IN std_logic;
		rst : IN std_logic;
		clk : IN std_logic;
		inr : IN std_logic;          
		out_data : OUT std_logic_vector(15 downto 0)
		);
	END COMPONENT;
	
	COMPONENT OUTR
	PORT(
		in_data : IN std_logic_vector(7 downto 0);
		load : IN std_logic;
		rst : IN std_logic;
		clk : IN std_logic;
		inr : IN std_logic       
		);
	END COMPONENT;

signal AR_out :std_logic_vector(11 downto 0):=(others => '0');
signal PC_out :std_logic_vector(11 downto 0):=(others => '0');
signal DR_out :std_logic_vector(15 downto 0):=(others => '0');
signal AC_out :std_logic_vector(15 downto 0):=(others => '0');
signal IR_out :std_logic_vector(15 downto 0):=(others => '0');
signal TR_out :std_logic_vector(15 downto 0):=(others => '0');
signal ALU_out :std_logic_vector(15 downto 0):=(others => '0');
signal MEM_out :std_logic_vector(15 downto 0):=(others => '0');
signal OUTR_out :std_logic_vector(7 downto 0):=(others => '0');
signal E_out :std_logic := '0';
signal alu_cout :std_logic := '0';

signal C_B :std_logic_vector(15 downto 0):=(others => '0');
signal S :std_logic_vector(2 downto 0):=(others => '0'); 
	
begin

S <= S2&S1&S0;

E_out_CTRL <= E_out;
AC_out_CTRL <= AC_out;
IR_out_CTRL <= IR_out;
DR_out_CTRL <= DR_out;



Inst_memory: memory PORT MAP(address => AR_out , in_data => C_B, out_data => MEM_out, wr => wr, re => re);

Inst_AR  : AR   PORT MAP(in_data => C_B(11 downto 0) ,out_data => AR_out , load => AR_load , rst => AR_rst , clk => clk , inr => AR_inr);

Inst_PC  : PC   PORT MAP(in_data => C_B(11 downto 0) ,out_data => PC_out , load => PC_load , rst => PC_rst , clk => clk , inr => PC_inr);

Inst_DR  : DR   PORT MAP(in_data => C_B ,out_data => DR_out , load => DR_load , rst => DR_rst , clk => clk , inr => DR_inr);

Inst_AC  : AC   PORT MAP(in_data => ALU_out ,out_data => AC_out , load => AC_load , rst => AC_rst , clk => clk , inr => AC_inr);

Inst_alu : alu  PORT MAP(a => AC_out , b => DR_out , alu_op => alu_op, output => ALU_out , cout => alu_cout , zero => alu_zero);

Inst_E   : E    PORT MAP(clk => clk , input => alu_cout , rst => E_rst,load => E_load , output => E_out);

Inst_IR  : IR   PORT MAP(in_data => C_B ,out_data => IR_out , load => IR_load , rst => IR_rst , clk => clk , inr => IR_inr);

Inst_TR  : TR   PORT MAP(in_data => C_B ,out_data => TR_out , load => TR_load , rst => TR_rst , clk => clk , inr => TR_inr);
	
Inst_OUTR: OUTR PORT MAP(in_data => C_B(7 downto 0), load => OUTR_load , rst => OUTR_rst , clk => clk , inr => OUTR_inr);


with S select C_B <= ("0000"&AR_out) when "001",
							("0000"&PC_out) when "010",
							DR_out when "011",
							AC_out when "100",
							IR_out when "101",
							TR_out when "110",
							MEM_out when "111",
							(others => '0') when others;




end Behavioral;


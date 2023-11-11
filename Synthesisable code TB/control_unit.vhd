
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity control_unit is
    Port ( clk : in  STD_LOGIC;
			  IR_inp : in std_logic_vector(15 downto 0);
			  AC_inp : in std_logic_vector(15 downto 0);
			  DR_inp : in std_logic_vector(15 downto 0);
			  E_inp : in std_logic;
			  
			  S0 : out std_logic;
			  S1 : out std_logic;
			  S2 : out std_logic;
	
			  wr : out std_logic;
			  re : out std_logic;
			  
			  AR_load : out std_logic;
			  AR_rst  : out std_logic;
			  AR_inr  : out std_logic;
			  
			  PC_load : out std_logic;
			  PC_rst  : out std_logic;
			  PC_inr  : out std_logic;
			  
			  DR_load : out std_logic;
			  DR_rst  : out std_logic;
			  DR_inr  : out std_logic;
			  
			  AC_load : out std_logic;
			  AC_rst  : out std_logic;
			  AC_inr  : out std_logic;
			  
			  IR_load : out std_logic;
			  IR_rst  : out std_logic;
			  IR_inr  : out std_logic;
			  
			  TR_load : out std_logic;
			  TR_rst  : out std_logic;
			  TR_inr  : out std_logic;			  
			  
			  OUTR_load : out std_logic;
			  OUTR_rst  : out std_logic;
			  OUTR_inr  : out std_logic;

			  E_rst  : out std_logic;
			  E_load  : out std_logic;
			  
			  alu_zero  : in std_logic;
			  
			  alu_op : out std_logic_vector(3 downto 0)
	 );
end control_unit;

architecture Behavioral of control_unit is
	
	COMPONENT decoder3_8
	PORT(
		a : IN std_logic_vector(2 downto 0);          
		z : OUT std_logic_vector(7 downto 0)
		);
	END COMPONENT;

	COMPONENT decoder4_16
	PORT(
		a : IN std_logic_vector(3 downto 0);          
		z : OUT std_logic_vector(15 downto 0)
		);
	END COMPONENT;

	COMPONENT sequence_counter
	PORT(
		clk : IN std_logic;
		clear : IN std_logic;          
		output : OUT std_logic_vector(3 downto 0)
		);
	END COMPONENT;

signal SC : std_logic_vector(3 downto 0) := (others => '0');
signal D  : std_logic_vector(7 downto 0) := (others => '0');
signal T  : std_logic_vector(15 downto 0):= (others => '0');
--signal SC_Clear : std_logic:= '0';

begin

Inst_decoder3_8: decoder3_8 PORT MAP(a => IR_inp(14 downto 12),z => D);

Inst_decoder4_16: decoder4_16 PORT MAP(a => SC,z => T);

Inst_sequence_counter: sequence_counter PORT MAP(clk => clk , clear => SC(2) , output => SC);


process(clk)
begin
	if(rising_edge(clk))then
		if(T(0) = '1')then
		  S0 <= '0';
		  S1 <= '1';
		  S2 <= '0';

		  wr <= '0';
		  re <= '0';
		  
		  AR_load <= '1';
		  AR_rst  <= '0';
		  AR_inr  <= '0';
		  
		  PC_load <= '0';
		  PC_rst  <= '0';
		  PC_inr  <= '0';
		  
		  DR_load <= '0';
		  DR_rst  <= '0';
		  DR_inr  <= '0';
		  
		  AC_load <= '0';
		  AC_rst  <= '0';
		  AC_inr  <= '0';
		  
		  IR_load <= '0';
		  IR_rst  <= '0';
		  IR_inr  <= '0';
		  
		  TR_load <= '0';
		  TR_rst  <= '0';
		  TR_inr  <= '0';			  
		  
		  OUTR_load <= '0';
		  OUTR_rst  <= '0';
		  OUTR_inr  <= '0';
		  
		  E_rst  <= '0';
		  E_load <= '0';
		  alu_op <= "1111";
		
		elsif(T(1) = '1')then
		  S0 <= '1';
		  S1 <= '1';
		  S2 <= '1';

		  wr <= '0';
		  re <= '1';
		  
		  AR_load <= '0';
		  AR_rst  <= '0';
		  AR_inr  <= '0';
		  
		  PC_load <= '0';
		  PC_rst  <= '0';
		  PC_inr  <= '1';
		  
		  DR_load <= '0';
		  DR_rst  <= '0';
		  DR_inr  <= '0';
		  
		  AC_load <= '0';
		  AC_rst  <= '0';
		  AC_inr  <= '0';
		  
		  IR_load <= '1';
		  IR_rst  <= '0';
		  IR_inr  <= '0';
		  
		  TR_load <= '0';
		  TR_rst  <= '0';
		  TR_inr  <= '0';			  
		  
		  OUTR_load <= '0';
		  OUTR_rst  <= '0';
		  OUTR_inr  <= '0';
		  
		  E_rst  <= '0';
		  E_load <= '0';
		  alu_op <= "1111";
				
		
		elsif(T(2) = '1')then
		  S0 <= '1';
		  S1 <= '0';
		  S2 <= '1';

		  wr <= '0';
		  re <= '0';
		  
		  AR_load <= '1';
		  AR_rst  <= '0';
		  AR_inr  <= '0';
		  
		  PC_load <= '0';
		  PC_rst  <= '0';
		  PC_inr  <= '0';
		  
		  DR_load <= '0';
		  DR_rst  <= '0';
		  DR_inr  <= '0';
		  
		  AC_load <= '0';
		  AC_rst  <= '0';
		  AC_inr  <= '0';
		  
		  IR_load <= '0';
		  IR_rst  <= '0';
		  IR_inr  <= '0';
		  
		  TR_load <= '0';
		  TR_rst  <= '0';
		  TR_inr  <= '0';			  
		  
		  OUTR_load <= '0';
		  OUTR_rst  <= '0';
		  OUTR_inr  <= '0';
		  
		  E_rst  <= '0';
		  E_load <= '0';
		  alu_op <= "1111";
		
		
		elsif(T(3) = '1')then
		  S0 <= '1';
		  S1 <= '1';
		  S2 <= '1';

		  wr <= '0';
		  re <= '1';
		  
		  AR_load <= '0';
		  AR_rst  <= '0';
		  AR_inr  <= '0';
		  
		  PC_load <= '0';
		  PC_rst  <= '0';
		  PC_inr  <= '0';
		  
		  DR_load <= '1';
		  DR_rst  <= '0';
		  DR_inr  <= '0';
		  
		  AC_load <= '0';
		  AC_rst  <= '0';
		  AC_inr  <= '0';
		  
		  IR_load <= '0';
		  IR_rst  <= '0';
		  IR_inr  <= '0';
		  
		  TR_load <= '0';
		  TR_rst  <= '0';
		  TR_inr  <= '0';			  
		  
		  OUTR_load <= '0';
		  OUTR_rst  <= '0';
		  OUTR_inr  <= '0';
		  
		  E_rst  <= '0';
		  E_load <= '0';
		  alu_op <= "1111";
		else
			PC_rst <= '0';
			if((not(IR_inp(15)) and D(0)) = '1')then--mul
				S0 <= '1';
				S1 <= '1';
				S2 <= '0';

				wr <= '0';
				re <= '0';
				
				AC_load <= '1';
				AC_rst <= '0';
				
				E_load <= '1';
				
				PC_load <= '0';
				PC_inr <= '0';
				alu_op <= "0000";
			elsif((not(IR_inp(15)) and D(1)) = '1')then--add
				S0 <= '1';
				S1 <= '1';
				S2 <= '0';

				wr <= '0';
				re <= '0';
				
				AC_load <= '1' ;
				AC_rst <= '0' ;
				
				E_load <= '1' ;
				
				PC_load <= '0' ;
				PC_inr <= '0' ;			
				alu_op <= "0001";
			elsif((not(IR_inp(15)) and D(2)) = '1')then--and
				S0 <= '1';
				S1 <= '1';
				S2 <= '0';

				wr <= '0';
				re <= '0';
				
				AC_load <= '1' ;
				AC_rst <= '0' ;
				
				E_load <= '0' ;
				
				PC_load <= '0' ;
				PC_inr <= '0' ;
				alu_op <= "0010";
			elsif((not(IR_inp(15)) and D(3)) = '1')then--or
				S0 <= '1';
				S1 <= '1';
				S2 <= '0';

				wr <= '0';
				re <= '0';
				
				AC_load <= '1' ;
				AC_rst <= '0' ;
				
				E_load <= '0' ;
				
				PC_load <= '0' ;
				PC_inr <= '0' ;
				alu_op <= "0011";
			elsif((not(IR_inp(15)) and D(4)) = '1')then--not
				S0 <= '1';
				S1 <= '1';
				S2 <= '0';

				wr <= '0';
				re <= '0';
				
				AC_load <= '1' ;
				AC_rst <= '0' ;
				
				E_load <= '0' ;
				
				PC_load <= '0' ;
				PC_inr <= '0' ;
				alu_op <= "0100";
			elsif((not(IR_inp(15)) and D(5)) = '1')then--isz
				S0 <= '1';
				S1 <= '1';
				S2 <= '0';

				wr <= '1';
				re <= '0';
				
				AC_load <= '0' ;
				AC_rst <= '0' ;
				
				DR_inr <= '1';
				
				E_load <= '0' ;
				
				if(DR_inp = "1111111111111111")then
					PC_inr <= '1' ;
				else
					PC_inr <= '0' ;
				end if;	
				PC_load <= '0' ;
				alu_op <= "1111";
			elsif((not(IR_inp(15)) and D(6)) = '1')then--shl
				S0 <= '1';
				S1 <= '1';
				S2 <= '0';

				wr <= '0';
				re <= '0';
				
				AC_load <= '1' ;
				AC_rst <= '0' ;
				
				E_load <= '1' ;
				
				PC_load <= '0' ;
				PC_inr <= '0' ;
				alu_op <= "0110";
			elsif((not(IR_inp(15)) and D(7)) = '1')then--shr
				S0 <= '1';
				S1 <= '1';
				S2 <= '0';

				wr <= '0';
				re <= '0';
				
				AC_load <= '1' ;
				AC_rst <= '0' ;
				
				E_load <= '1' ;
				
				PC_load <= '0' ;
				PC_inr <= '0' ;
				alu_op <= "0111";
			elsif(((IR_inp(15)) and D(0)) = '1')then--LDA
				S0 <= '1';
				S1 <= '1';
				S2 <= '1';

				wr <= '0';
				re <= '0';
				
				AC_load <= '1' ;
				AC_rst <= '0' ;
				
				E_load <= '0' ;
				
				PC_load <= '0' ;
				PC_inr <= '0' ;
				alu_op <= "1000";
			elsif(((IR_inp(15)) and D(1)) = '1')then--STA
				S0 <= '0';
				S1 <= '0';
				S2 <= '1';

				wr <= '1';
				re <= '0';
				
				AC_load <= '0' ;
				AC_rst <= '0' ;
				
				E_load <= '0' ;
				
				PC_load <= '0' ;
				PC_inr <= '0' ;
				
				alu_op <= "1111";				
			elsif(((IR_inp(15)) and D(2)) = '1')then--BUN
				S0 <= '1';
				S1 <= '0';
				S2 <= '0';

				wr <= '0';
				re <= '0';
				
				AC_load <= '0' ;
				AC_rst <= '0' ;
				
				E_load <= '0' ;
				
				PC_load <= '1' ;
				PC_inr <= '0' ;
				alu_op <= "1111";
			elsif(((IR_inp(15)) and D(3)) = '1')then--BSA
--				S0 <= '1';
--				S1 <= '1';
--				S2 <= '1';
--
--				wr <= '0';
--				re <= '1';
--				
--				AC_load <= '0' ;
--				AC_rst <= '0' ;
--				
--				E_load <= '0' ;
--				
--				PC_load <= '0' ;
--				PC_inr <= '0' ;
--				alu_op <= "1111";
			elsif(((IR_inp(15)) and D(4)) = '1')then--SZA
				S0 <= '1';
				S1 <= '1';
				S2 <= '1';

				wr <= '0';
				re <= '0';
				
				AC_load <= '0' ;
				AC_rst <= '0' ;
				
				E_load <= '0' ;
				
				PC_load <= '0' ;
				if(AC_inp = "0000000000000000")then
					PC_inr <= '1';
				else
					PC_inr <= '0';
				end if;
			elsif(((IR_inp(15)) and D(5)) = '1')then--SZE
				S0 <= '1';
				S1 <= '1';
				S2 <= '1';

				wr <= '0';
				re <= '1';
				
				AC_load <= '0' ;
				AC_rst <= '0' ;
				
				E_load <= '0' ;
				
				PC_load <= '0' ;
				if(E_inp = '0')then
					PC_inr <= '1';
				else
					PC_inr <= '0';
				end if;
			elsif(((IR_inp(15)) and D(6)) = '1')then--CLA
				S0 <= '1';
				S1 <= '1';
				S2 <= '1';

				wr <= '0';
				re <= '0';
				
				AC_load <= '0' ;
				AC_rst <= '1' ;
				
				E_load <= '0' ;
				
				PC_load <= '0' ;
				PC_inr <= '0' ;

			end if;
		end if;
	end if;
end process;


end Behavioral;


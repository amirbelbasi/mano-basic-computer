library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use ieee.std_logic_signed.all;


entity E is
    Port ( clk : in  STD_LOGIC;
           input : in  STD_LOGIC;
           rst : in  STD_LOGIC;
			  load :in std_logic;
           output : out  STD_LOGIC);
end E;

architecture Behavioral of E is
signal temp :std_logic := '0';
begin
process(clk)
begin
	if(rising_edge(clk))then
		if(rst = '1')then
			temp <= '0';
		else
			if(load = '1')then
				temp <= input;
			end if;
		end if;
	end if;
output <= temp;	
end process;
end Behavioral;


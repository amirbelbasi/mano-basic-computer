library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use ieee.std_logic_signed.all;


entity AC is
    Port ( in_data : in  STD_LOGIC_VECTOR (15 downto 0);
           out_data : out  STD_LOGIC_VECTOR (15 downto 0);
           load : in  STD_LOGIC;
           rst : in  STD_LOGIC;
           clk : in  STD_LOGIC;
           inr : in  STD_LOGIC);
end AC;

architecture Behavioral of AC is
signal temp :std_logic_vector(15 downto 0) := (others => '0');

begin

process(clk)
begin
	if(rising_edge(clk))then
		if(rst = '1')then
			temp <= "0000000000000000";
		else
			if(inr = '1')then
				temp <= temp + 1;
			else
				if(load = '1')then
					temp <= in_data;
				end if;
			end if;
		end if;
	end if;
end process;

out_data <= temp;
end Behavioral;

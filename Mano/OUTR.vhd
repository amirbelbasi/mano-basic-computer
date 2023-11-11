library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use ieee.std_logic_unsigned.all;


entity OUTR is
    Port ( in_data : in  STD_LOGIC_VECTOR (7 downto 0);
           load : in  STD_LOGIC;
           rst : in  STD_LOGIC;
           clk : in  STD_LOGIC;
           inr : in  STD_LOGIC);
end OUTR;

architecture Behavioral of OUTR is
signal temp :std_logic_vector(7 downto 0) := (others => '0');

begin

process(clk)
begin
	if(rising_edge(clk))then
		if(rst = '1')then
			temp <= "00000000";
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

end Behavioral;


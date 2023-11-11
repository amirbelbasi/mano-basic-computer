library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use ieee.std_logic_unsigned.all;


entity sequence_counter is
    Port ( clk : in  STD_LOGIC;
           clear : in  STD_LOGIC;
           output : out  STD_LOGIC_VECTOR (3 downto 0):= (others => '0'));
end sequence_counter;

architecture Behavioral of sequence_counter is
signal counter : std_logic_vector(3 downto 0) := (others => '0');

begin
process(clk)
begin
	if(rising_edge(clk))then
		if(clear = '1')then
			counter <= "0000";
		else
			counter <= counter + 1;
		end if;
	end if;
end process;
output <= counter;
end Behavioral;


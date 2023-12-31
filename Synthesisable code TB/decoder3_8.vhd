library IEEE;
use IEEE.STD_LOGIC_1164.ALL;


entity decoder3_8 is
    Port ( a : in  STD_LOGIC_VECTOR (2 downto 0);
           z : out  STD_LOGIC_VECTOR (7 downto 0));
end decoder3_8;

architecture Behavioral of decoder3_8 is

begin
with a select z <= "00000001" when "000",
						 "00000010" when "001",
						 "00000100" when "010",
						 "00001000" when "011",
						 "00010000" when "100",
						 "00100000" when "101",
						 "01000000" when "110",
						 "10000000" when "111",
						 (others => '0') when others;

end Behavioral;


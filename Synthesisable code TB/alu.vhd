library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use ieee.std_logic_arith.all;
use ieee.std_logic_unsigned.all;


entity alu is
    Port ( a : in  STD_LOGIC_VECTOR (15 downto 0);
           b : in  STD_LOGIC_VECTOR (15 downto 0);
           alu_op : in  STD_LOGIC_VECTOR (3 downto 0);
           output : out  STD_LOGIC_VECTOR (15 downto 0);
           cout : out  STD_LOGIC;
           zero : out  STD_LOGIC);
end alu;

architecture Behavioral of alu is
signal addtemp : STD_LOGIC_VECTOR(16 downto 0) := (others=>'0');
signal inctemp : STD_LOGIC_VECTOR(16 downto 0) := (others=>'0');
signal multemp : STD_LOGIC_VECTOR(31 downto 0) := (others=>'0');

signal output_temp : STD_LOGIC_VECTOR(15 downto 0) := (others=>'0');
signal cout_temp : STD_LOGIC:= '0';

begin
multemp <= a * b;
addtemp <= conv_std_logic_vector((conv_integer(a) + conv_integer(b)),17);
inctemp <= conv_std_logic_vector((conv_integer(a) + 1),17);
with alu_op select output_temp <= multemp(15 downto 0) when "0000",
									  addtemp(15 downto 0) when "0001",
									  a and b when "0010",
									  a or b when "0011",
									  not a when "0100",
									  inctemp(15 downto 0) when "0101",
									  a(14 downto 0)&'0' when"0110",
									  a(15)&a(15 downto 1) when "0111",
									  b when "1000",
									  "0000000000000000" when others;

with alu_op select cout_temp <=   multemp(16) when "0000",
									  addtemp(16) when "0001",
									  '0' when "0010",
									  '0' when "0011",
									  '0' when "0100",
									  inctemp(16) when "0101",
									  a(15) when"0110",
									  a(0) when "0111",
									  '0' when others;

									  
zero <= '1' when (cout_temp&output_temp) = "00000000000000000" else '0';
output <= output_temp;
cout <= cout_temp;
end Behavioral;


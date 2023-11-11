library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use ieee.std_logic_signed.all;
USE ieee.numeric_std.ALL;

entity memory is
    Port ( address : in  STD_LOGIC_VECTOR (11 downto 0);
           in_data : in  STD_LOGIC_VECTOR (15 downto 0);
           out_data : out  STD_LOGIC_VECTOR (15 downto 0);
           wr : in  STD_LOGIC;
           re : in  STD_LOGIC);
end memory;

architecture Behavioral of memory is

type t_Memory is array (127 downto 0) of std_logic_vector(15 downto 0);
signal temp : t_Memory := (0  => "0001000000001010", -- ADD 10
									1  => "0000000000001011", -- MUL 11
									2  => "0010000000001100", -- AND 12
									3  => "0111000000000000", -- SHR
									4  => "1000000000001101", -- LDA 13
									5  => "1110000000000000", -- CLA
									10 => "0000000000001010",
									11 => "0000000000000010",
									12 => "0000000000000100",
									13 => "0000000000001101",
									others => (others =>'0'));


begin


out_data <= temp(to_integer(unsigned(address(6 downto 0)))) when re = '1';
temp(to_integer(unsigned(address(6 downto 0)))) <= in_data when wr = '1';
end Behavioral;


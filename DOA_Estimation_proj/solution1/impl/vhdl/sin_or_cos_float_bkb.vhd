-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.1 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity sin_or_cos_float_bkb_rom is 
    generic(
             DWIDTH     : integer := 100; 
             AWIDTH     : integer := 4; 
             MEM_SIZE    : integer := 13
    ); 
    port (
          addr0      : in std_logic_vector(AWIDTH-1 downto 0); 
          ce0       : in std_logic; 
          q0         : out std_logic_vector(DWIDTH-1 downto 0);
          clk       : in std_logic
    ); 
end entity; 


architecture rtl of sin_or_cos_float_bkb_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "0000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001010001011", 
    1 => "0000000000000000000000000000000000000000000000000000000000000000000000000010100010111110011000001101", 
    2 => "0000000000000000000000000000000000000000000000000000000000101000101111100110000011011011100100111001", 
    3 => "0000000000000000000000000000000000000000001010001011111001100000110110111001001110010001000001010100", 
    4 => "0000000000000000000000000010100010111110011000001101101110010011100100010000010101001010011111110000", 
    5 => "0000000000101000101111100110000011011011100100111001000100000101010010100111111100001001110101011111", 
    6 => "1011111001100000110110111001001110010001000001010100101001111111000010011101010111110100011111010100", 
    7 => "1101101110010011100100010000010101001010011111110000100111010101111101000111110101001101001101110111", 
    8 => "1001000100000101010010100111111100001001110101011111010001111101010011010011011101110000001101101101", 
    9 => "0100101001111111000010011101010111110100011111010100110100110111011100000011011011011000101001010110", 
    10 => "0000100111010101111101000111110101001101001101110111000000110110110110001010010101100110010011110001", 
    11 => "1111010001111101010011010011011101110000001101101101100010100101011001100100111100010000111001000001", 
    12 => "0100110100110111011100000011011011011000101001010110011001001111000100001110010000010111111110010100" );

attribute syn_rom_style : string;
attribute syn_rom_style of mem : signal is "select_rom";
attribute ROM_STYLE : string;
attribute ROM_STYLE of mem : signal is "distributed";

begin 


memory_access_guard_0: process (addr0) 
begin
      addr0_tmp <= addr0;
--synthesis translate_off
      if (CONV_INTEGER(addr0) > mem_size-1) then
           addr0_tmp <= (others => '0');
      else 
           addr0_tmp <= addr0;
      end if;
--synthesis translate_on
end process;

p_rom_access: process (clk)  
begin 
    if (clk'event and clk = '1') then
        if (ce0 = '1') then 
            q0 <= mem(CONV_INTEGER(addr0_tmp)); 
        end if;
    end if;
end process;

end rtl;

Library IEEE;
use IEEE.std_logic_1164.all;

entity sin_or_cos_float_bkb is
    generic (
        DataWidth : INTEGER := 100;
        AddressRange : INTEGER := 13;
        AddressWidth : INTEGER := 4);
    port (
        reset : IN STD_LOGIC;
        clk : IN STD_LOGIC;
        address0 : IN STD_LOGIC_VECTOR(AddressWidth - 1 DOWNTO 0);
        ce0 : IN STD_LOGIC;
        q0 : OUT STD_LOGIC_VECTOR(DataWidth - 1 DOWNTO 0));
end entity;

architecture arch of sin_or_cos_float_bkb is
    component sin_or_cos_float_bkb_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    sin_or_cos_float_bkb_rom_U :  component sin_or_cos_float_bkb_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;



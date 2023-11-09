#include<iostream>
#include<bitset>
#include<iomanip>

int main()
{
	const size_t w = sizeof(int)<<3;
	std::bitset<w> b1(42);
	std::cout << b1.to_string() << std::endl;
	
	std::bitset<w> b2("10101010");
	std::cout <<"dec: " <<  b1.to_ulong() << " "
			  <<"hex: " << std::hex << b1.to_ulong() << std::endl;
	
}
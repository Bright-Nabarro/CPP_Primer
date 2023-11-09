#include<bitset>
#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	const size_t w = sizeof(int)<<3;
	bitset<w> b1(58);
	cout << b1.to_string() << endl;
	b1[2] = 1;
	cout << b1.to_string() << endl;

	bitset<w> b2(43);
	cout << b2.to_string() << " " << static_cast<int>(b2.to_ulong()) << endl;
	b2 = ~b2;
	cout << b2.to_string() << " " << static_cast<int>(b2.to_ulong()) << endl;

	cout << setfill('-') << setw(30) << '-' << endl;
	bitset<w> cb1(15);
	bitset<w> cb2(240);
	cout << cb1.to_string() << endl;
	cout << cb2.to_string() << endl;
	cout << (cb1 & cb2) << endl;
	cout << (cb1 | cb2) << endl;
	cout << (cb1 ^ cb2) << endl;
}
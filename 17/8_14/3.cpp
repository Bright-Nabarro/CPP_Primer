#include<iostream>
#include<bitset>
using namespace std;

int main()
{
	bitset<32> b1(-1);
	cout << b1.to_string() << endl;
	cout << boolalpha << b1.all() << endl;

	bitset<32> b2(0);
	cout << b2.to_string() << endl;
	cout << boolalpha << b2.none() << endl;

	bitset<32> b3(29);
	cout << b3.to_string() << endl;
	cout << b3.count() << endl;
	
	bitset<32> b4(84);
	cout << b4.to_string() << endl;
	cout << b4._Find_first() << endl;

}
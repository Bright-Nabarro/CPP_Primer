#include<iostream>
using namespace std;

int main()
{
	int &&rr = 42;
	int &r = rr;
	cout << rr << ": " << &rr << endl;
	rr = 1;
	cout << rr << ": " << &rr << endl;
}

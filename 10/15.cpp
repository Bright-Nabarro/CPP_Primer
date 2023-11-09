#include<iostream>
using namespace std;

int main()
{
	int x = 10, y = 20;
	auto sum = [x](int y)->int {return x + y; };

	cout << sum(y) << endl;
}

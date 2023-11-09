#include<functional>
#include<iostream>
using namespace std;
int main()
{
	plus<int> intAdd;
	negate<int> intNegate;
	int sum = intNegate(intAdd(10,20));
	cout << sum << endl;
}

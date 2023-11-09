#include<iostream>
using namespace std;

int main()
{
	auto sqrt = [](int a, int b)->int{return a*b;};
	int a, b;
	cin >> a >> b;
	cout << sqrt(a,b) << endl;
}

#include<iostream>
using namespace std;

int main()
{
	int a[10];
	auto sum = [](int a,int b){return a+b;};
	for(int i = 0; i < 10; i++)
	{
		a[i] = i+1;
	}
	for(int i = 1; i < 10; i++)
	{
		cout << sum(a[i-1],a[i]) << " ";
	}
	cout << endl;
}

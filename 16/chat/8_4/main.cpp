#include"FixedArray.h"
#include<iostream>
using namespace std;

int main()
{
	FixedArray<int, 10> a;
	for(int i =0; i<10; i++)
	{
		a[i] = i;
	}
	for(int i =0; i<10; i++)
	{
		cout << a[i] << " ";
	}
	cout << endl;
}

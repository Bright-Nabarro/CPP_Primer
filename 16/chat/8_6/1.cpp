#include<iostream>
using namespace std;

template<typename T>
T add(T v1, T v2)
{
	return v1+v2;
}

int main()
{
	cout <<hex <<  add(0xFF,-1);
}

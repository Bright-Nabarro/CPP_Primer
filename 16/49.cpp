#include<iostream>
using namespace std;

template<typename T>
void f(T t)
{
	cout << "f(T)" << endl;
}

template<typename T>
void f(const T*)
{
	cout << "f(const T*)" << endl;
}

template<typename T>
void g(T)
{
	cout << "g(T)" << endl;
}

template<typename T>
void g(T*)
{
	cout << "g(T*)" << endl;
}

int main()
{
	int i = 42, *p = &i;
	const int ci = 0, *p2 = &ci;
	f(ci);
}
#include<iostream>
#include<type_traits>
using namespace std;

template<typename T>
auto sum(T t1, T t2) 
	-> typename std::make_unsigned<decltype(t1+t2)>::type
{
	return t1+t2;
}

int main()
{
	int t1 = 0x60000000, t2 = 0x70008090;
	cout << t1+t2 << endl;
	cout << sum(t1, t2) << endl;
}

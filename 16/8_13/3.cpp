#include<iostream>
using namespace std;

template<typename T>
ostream& print(ostream& os, const T& t)
{
	return os << t;
}

template<typename T, typename... Args>
ostream& print(ostream& os, const T& t, const Args&... rest)
{
	os << t << ", ";
	return print(os, rest...);
}

int main()
{
	double i3 =  343;
	print(cout, 42, "123", i3);
	cout << "\060" <<  endl;
}
#include<iostream>
#include<string>
using namespace std;

template<typename T, typename... Args>
void foo(const T& t, const Args& ... rest)
{
	cout << "类型: " << sizeof...(Args) << endl;	
	cout << "args个数: " << sizeof...(rest) << endl;
}

int main()
{
	int i = 0;
	const int ci = i;
	const int&& rci = std::move(i);
	double d = 3.14;
	string s("hello world");

	foo(0,0,0);
}
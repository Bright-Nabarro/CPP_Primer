#include<iostream>
#include<string>
#include<sstream>
using namespace std;

template<typename T>
string debug_rep(const T& t)
{
	ostringstream ret;
	ret << t;
	return ret.str();
}

string debug_rep(const string& s)
{
	return '"' + s + '"';
}



int main()
{
	cout << debug_rep("abc") << endl;
}
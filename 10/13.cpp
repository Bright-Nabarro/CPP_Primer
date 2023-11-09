#include<algorithm>
#include<iostream>
#include<iterator>
#include<string>
#include<vector>
using namespace std;

bool longStr(const string& s)
{
	return s.size() >= 5;
}

int main()
{
	vector<string> v;
	v.push_back("abcde");
	v.push_back("hello world");
	v.push_back("cplusplus reference");
	v.push_back("abc");
	v.push_back("primer");
	v.push_back("cpp");
	v.push_back("std::vector");
	auto ptr = partition(v.begin(), v.end(), longStr);

	for(auto x: v) cout << x << " ";
	cout << endl;
}

#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

bool combineSize(string s1, string s2)
{
	if (s1.size() < s2.size())
		return true;
	return false;
}

int main()
{
	vector<string> v;
	v.push_back("ba");
	v.push_back("bb");
	v.push_back("a");
	v.push_back("abc");
	v.push_back("c");
	stable_sort(v.begin(),v.end(),combineSize);
	for(auto x: v) cout << x << " ";
	cout << endl;
}

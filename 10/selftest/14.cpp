#include<vector>
#include<algorithm>
#include<iostream>
#include<string>
using namespace std;

int main()
{
	vector<string> v;
	v.push_back("abc");
	v.push_back("def");
	v.push_back("igh");
	v.push_back("dskljglds");
	cout << *find_if(v.begin(), v.end(),
		   	[](string x){return x.size() >= 5;}) << endl;
}

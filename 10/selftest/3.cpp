#include<string>
#include<vector>
#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	vector<string> v{"c++", "c", "python", "java", "javascript"};
	replace(v.begin(),v.end(),string("python"),string("go"));
	for(auto x: v) cout << x << " ";
	cout << endl;
}

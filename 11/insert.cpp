#include<vector>
#include<utility>
#include<map>
#include<string>
#include<iostream>
using namespace std;

int main()
{
	vector<pair<int,string>> vp;
	string alpha("abcdefghijklmnopqrstuvwxyz");
	for(int i = 1; i <= alpha.size(); i++)
	{
		vp.push_back({i,alpha.substr(i-1)});
	}
	map<int,string> mp(vp.begin(), vp.end());
	for(auto x: mp) cout << x.first << " " << x.second
		<< endl;
}

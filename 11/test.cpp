#include<map>
#include<iostream>
#include<string>
#include<set>
#include<vector>
#include<utility>
using namespace std;

int main()
{
	map<int, string> m{{1,"a"},{2,"b"}};
	pair<int, string> p1{3,"c"}, p2{1,"z"};
	m.insert(p1);

	cout << m.find(1)->second << endl;
	for(auto x: m) cout << x.first << " " << x.second
		<< endl;
}

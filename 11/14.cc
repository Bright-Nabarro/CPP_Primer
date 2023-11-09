#include<map>
#include<iostream>
#include<string>
using namespace std;

int main()
{
	map<int,string> m{{17,"lin17"},{13,"13"}};

	pair<int, string> p{34, "lyq"};
	m.insert(p);
	m.erase(13);
	for(auto x: m) cout << x.first << " " 
		<< x.second << endl;
}


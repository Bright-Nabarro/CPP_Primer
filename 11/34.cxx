#include<iostream>
#include<algorithm>
#include<map>
using namespace std;
int main()
{
	unordered_map<int, char> a;
	a[1] = 'a';
	a[3] = 'c';
	a[2] = 'b';
	a[0] = 'Z';
	for(auto x: a) cout << x.first << " " << x.second
		<< endl;
}

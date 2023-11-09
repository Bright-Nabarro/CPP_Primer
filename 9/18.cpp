#include<iostream>
#include<vector>
#include<deque>
#include<string>
#include<list>
using namespace std;

int main()
{
	list<string> dq;
	string str;
	while(cin >> str) dq.push_back(str);
	list<string>::iterator it = dq.begin();
	for(;it != dq.end();it++)
	{
		cout << *it << endl;
	}
	
}

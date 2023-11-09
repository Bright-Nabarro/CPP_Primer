#include<string>
#include<vector>
#include<iostream>
#include<algorithm>
#include<iterator>
using namespace std;
int main()
{
	vector<char> vc(10);
	string abc("abcdefghigklmnopqrstuvwxyz");
	vector<char>::iterator itr = vc.begin();
	int i = 0;
	while(itr != vc.end())
	{
		*itr = abc[i++];
		itr++;
	}
	string temp(vc.cbegin(),vc.cend());
	cout << temp;
}

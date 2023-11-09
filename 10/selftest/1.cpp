#include<iostream>
#include<string>
#include<algorithm>
#include<iterator>
using namespace std;

int main()
{
	string abc("abcdefghijklmnopqrstuvwxyz");
	string temp;
	copy(abc.rbegin(),abc.rend(),back_inserter(temp));
	for(auto x: temp) cout << x;
	cout << endl;
}

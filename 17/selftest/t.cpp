#include<iostream>
#include<string>
using namespace std;

int main()
{
	string row;
	cin >> row;
	string::size_type sz = 0;
	while((sz = row.find('\\',sz)) != string::npos)
	{
		row.insert(sz++, "\\");
		sz++;
	}
	cout << row;
}

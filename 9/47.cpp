#include<iostream>
#include<string>
#include<sstream>
using namespace std;

int main()
{
	string digit("0123456789");
	string abc("abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ");

	string row("ab2c3d7R4E6");
	cout << row << endl;
	string::size_type pos = 0;
	ostringstream result;
	while((pos = row.find_first_of(digit,pos)) != string::npos)
	{
		result << row[pos];
		pos++;
	}
	cout << result.str()  << endl;

	result.str("");
	pos = 0;
	while((pos = row.find_first_of(abc,pos)) != string::npos)
	{
		result << row[pos];
		pos++;
	}
	cout << result.str() << endl;
}

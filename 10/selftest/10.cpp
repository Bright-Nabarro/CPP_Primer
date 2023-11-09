#include<string>
#include<cstring>
#include<algorithm>
#include<iostream>
using namespace std;

int main()
{
	string abc("abcdefghijklmnopqrstuvwxyz");
	for_each(abc.begin(), abc.end(), [](char& c){c = toupper(c);});
	cout << abc;
}

#include<iostream>
#include"teach.h"
using namespace std;

int main()
{
	StrVec sv1;
	string row("abcdefghijklmnopqrstuvwxyz");
	for(size_t i=0; i<row.size(); i++)
	{
		sv1.push_back(row.substr(0, i+1));
	}
	for(size_t i=0; i<row.size(); i++)
	{
		cout << sv1[i] << endl;
	}
	return 0;
}

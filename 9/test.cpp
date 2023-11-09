#include<iostream>
#include<string>
using namespace std;

int main()
{
	string row("abcd");
	string d("ea");
	cout << row.find_first_of(d) << endl;
}

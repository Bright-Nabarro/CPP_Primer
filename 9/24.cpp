#include<iostream>
#include<vector>
#include<stdexcept>
using namespace std;
int main()
{
	vector<int> iv;
	try{
		iv.at(3);
	}
	catch(exception& e)
	{
		cout << e.what() << endl;
	}
	try{
		int i = *iv.begin();
	}
	catch(exception& e)
	{
		cout << e.what() << endl;
	}
	try{
		int j = iv.front();
	}
	catch(exception& e)
	{
		cout << e.what() << endl;
	}
}

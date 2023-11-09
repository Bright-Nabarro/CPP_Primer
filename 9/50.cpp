#include<string>
#include<vector>
#include<cstdlib>
#include<ctime>
#include<iostream>
using namespace std;

int intSum(const vector<string>& v)
{
	int sum = 0;
	for(auto itr = v.begin(); itr != v.end(); itr++)
	{
		sum += stoi(*itr);
	}
	return sum;
}

double doubleSum(const vector<string>& v)
{
	double sum = 0;
	for(auto itr = v.begin(); itr != v.end(); itr++)
	{
		sum += stod(*itr);
	}
	return sum;
}

int main()
{
	vector<string> vstr;
	vstr.push_back("289");
	vstr.push_back("839");
	vstr.push_back("433");
	vstr.push_back("598");
	vstr.push_back("765");

	
	cout << intSum(vstr);
}

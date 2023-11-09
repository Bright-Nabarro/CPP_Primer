#include<vector>
#include<map>
#include<iostream>
#include<string>
using namespace std;

int main()
{
	map<string, vector<int>> bb;
	for(int i = 0; i < 10; i++)
		bb["lin17"].push_back(i);
	for(auto x: bb["lin17"]) cout << x << " ";
	cout << endl;
}

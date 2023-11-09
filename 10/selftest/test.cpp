#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<iterator>
#include<functional>
#include<fstream>
using namespace std;
using namespace placeholders;

int main()
{
	ifstream inFile("file");
	istream_iterator<int> in(inFile);
	istream_iterator<int> e;
	vector<int> v(in, e);
	for(auto x: v) cout << x << " ";
	cout << endl;
}

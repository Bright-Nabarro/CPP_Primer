#include<iostream>
#include<string>
#include<functional>
#include<iterator>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
	vector<int> v{0,1,2,3,4,5,6,7,8,9};
	ostream_iterator<int> itr(cout,".");
	for(auto x: v)
		itr = x;
	cout << endl;
}

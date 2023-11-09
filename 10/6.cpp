#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
	vector<int> v(10);
	fill(v.begin(), v.end(), 0);
	for(auto x: v) cout << x << " ";
	cout << endl;
}

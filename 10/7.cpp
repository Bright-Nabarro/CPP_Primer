#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
	vector<int> vec;
	vec.resize(10);
	fill_n(vec.begin(), 10, 3);
	cout << vec.size() << endl;
	for(auto x: vec) cout << x << " ";
	cout << endl;
}

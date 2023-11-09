#include<algorithm>
#include<vector>
#include<iostream>
#include<numeric>
using namespace std;

int main()
{
	int n;
	cin >> n;
	vector<int> v(n);
	iota(v.begin(),v.end(),1);
	cout << accumulate(v.cbegin(),v.cend(),0) << endl;
}

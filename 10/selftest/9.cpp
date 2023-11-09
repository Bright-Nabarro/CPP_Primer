#include<vector>
#include<algorithm>
#include<iostream>
using namespace std;
int main()
{
	vector<int> v;
	for(int i = 0; i < 10; i++)
		v.push_back(i+1);
	for_each(v.begin(), v.end(), [](int& x){x*=x;});
	for(auto x: v) cout << x << " ";
	cout << endl;
}

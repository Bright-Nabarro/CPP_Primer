#include<iostream>
#include<vector>
#include<algorithm>
#include<iterator>
#include<ctime>
#include<cstdlib>
using namespace std;

int main()
{
	srand(time(0));
	vector<int> v;
	for(int i = 0; i < 20; i++)
		v.push_back(rand()%10);
	for(auto x: v) cout << x << " ";
	cout << endl;

	sort(v.begin(), v.end());
	auto uniquePtr = unique(v.begin(),v.end());
	v.erase(uniquePtr, v.end());
	for(const auto& x: v) cout << x << " ";
	cout << endl;
}

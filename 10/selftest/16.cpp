#include<iostream>
#include<vector>
#include<algorithm>
#include<functional>
#include<iterator>
using namespace std;
using namespace placeholders;

int main()
{
	vector<int> v1, v2;
	for(int i = 0; i < 10; i++)
		v1.push_back(i);
	auto plus = [](int x, int multiple){return x*multiple;};
	int mult;
	cin >> mult;
	transform(v1.begin(),v1.end(),back_inserter(v2), bind(plus, _1, mult));
	for(auto x: v2) cout << x << " ";
	cout << endl;
}


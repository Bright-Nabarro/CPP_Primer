#include<iostream>
#include<vector>
#include<algorithm>
#include<functional>
using namespace std;

int main()
{
	auto bigerThan = [](int x, int comp){return x >= comp;};
	vector<int> v;
	for(int i = 0; i < 100; i++)
	{
		v.push_back(i);
	}

	cout << count_if(v.begin(), v.end(), bind(bigerThan, placeholders::_1,
				10)) << endl;
}

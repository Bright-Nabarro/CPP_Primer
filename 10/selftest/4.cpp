#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
	vector<int> v;
	for(int i = 0; i < 100; i++)
	{
		v.push_back(i%10);
	}
	auto ptr = remove(v.begin(), v.end(), 0);
	v.erase(ptr, v.end());
	int i = 1;
	for(auto x: v) 
	{
		cout << x << " ";
		if(i++ % 9 == 0)
			cout << endl;
	}
}

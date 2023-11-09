#include<iostream>
#include<vector>
#include<algorithm>
#include<ctime>
#include<cstdlib>
using namespace std;

int main()
{
	srand(time(0));
	vector<int> v;
	for(int i = 0; i < 20; i++)
	{
		v.push_back(rand() % 10);
	}
	stable_sort(v.begin(), v.end());
	
			
}

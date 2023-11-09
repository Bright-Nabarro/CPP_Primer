#include<algorithm>
#include<vector>
#include<ctime>
#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
	srand(time(0));
	vector<int> v;
	for(int i=0; i < 20; i++)
		v.push_back(rand()%30);
	for(auto x: v) cout << x << " ";
	cout << endl;

	cout << *max_element(v.begin(), v.end()) << endl;
}

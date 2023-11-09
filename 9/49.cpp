#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<iterator>
using namespace std;

int main()
{
	string g("aceimnorsuvwxz");
	string ng("bdfghjklpqty");
	vector<int> v;
	string target;
	cin >> target;
	int pos = 0;
	while((pos = target.find_first_of(ng, pos)) != string::npos)
	{
		v.push_back(pos++);
	}
	int max = 0;
	int maxI = 0;
	for(int i = 0, j = 1; j < v.size(); i++,j++)
	{
		if( max < v[j] - v[i] )
		{
			maxI = i;
			max = v[j] - v[i];
		}
	}
	copy(target.begin()+v[maxI]+1, target.begin()+v[maxI+1],\
		   	ostream_iterator<char>(cout, ""));
	cout << endl;
}

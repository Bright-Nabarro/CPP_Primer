#include<algorithm>
#include<vector>
#include<iostream>
#include<iterator>
using namespace std;

int main()
{
	vector<int> v;
	for(int i = 0; i < 10; i++)
		v.push_back(i);
	partition(v.begin(), v.end(), [](int x){return x%2==1;});
	copy(v.begin(),v.end(),ostream_iterator<int>(cout," "));
	cout << endl;
}

#include<vector>
#include<algorithm>
#include<iterator>
#include<iostream>
using namespace std;

int main()
{
	vector<int> v{0,1,2,3,4,5,6,7,8,9};
	transform(v.begin(), v.end(),
		   	ostream_iterator<int>(cout," "),
			[](int x){ return x*x;});
}

#include<iostream>
#include<vector>
#include<iterator>
using namespace std;

int main()
{
	vector<int> iv{1,2,3,4,5};
	vector<int>::iterator iter = iv.begin(),
		mid = iv.begin() + iv.size()/2;

	iter++;
	iv.insert(iter, 999);
	copy(iv.begin(),iv.end(),ostream_iterator<int>(cout," "));
}


#include<vector>
#include<iostream>
#include<numeric>
using namespace std;

int main()
{
	vector<double> v {1.11,2.22,3.33,4.44};

	cout << accumulate(v.begin(), v.end(), 0.0) << endl;
}

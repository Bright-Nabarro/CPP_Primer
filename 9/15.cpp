#include<iostream>
#include<vector>
using namespace std;
int main()
{
	vector<int> v1{1,2,3,4,5};
	vector<int> v2{1,2,3,4,5};
	vector<int> v3{1,2,3,4,6};
	if (v1 == v2) cout << "yes" << endl;
	if (v2 > v3) cout << "v2" << endl;
	else cout << "v3" << endl;
}

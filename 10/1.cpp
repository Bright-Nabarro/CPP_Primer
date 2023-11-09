#include<iostream>
#include<vector>
#include<algorithm>
#include<ctime>
#include<cstdlib>
#include<iterator>
using namespace std;

int main()
{
	vector<int> v(20);
	srand(time(0));
	for(auto& x: v) x = rand()%10;
	copy(v.begin(),v.end(),ostream_iterator<int>(cout, " "));
	cout << endl;
	
	cout << "0 appers " << count(v.begin(),v.end(),0) << " times";
	cout << endl;
}

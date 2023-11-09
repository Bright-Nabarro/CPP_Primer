#include<iostream>
#include<list>
using namespace std;

int main()
{
	list<int> lst1{0, 2, 4, 56,3,2,1};
	list<int> lst2{3,5,8,6,4,2,4};
	cout << "lst1: ";
	for(auto x: lst1) cout << x << " ";
	cout << endl << "lst2: ";
	for(auto x: lst2) cout << x << " ";
	cout << endl;
	lst1.merge(lst2);
	for(auto x: lst1) cout << x << " ";
	cout << endl;
}

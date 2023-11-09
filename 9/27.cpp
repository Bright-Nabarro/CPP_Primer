#include<forward_list>
#include<iostream>
#include<numeric>
#include<iterator>
using namespace std;

int main()
{
	forward_list<int> fli{1,2,3,4,4,5,6,7,7};

	forward_list<int>::iterator it1,it2;
	it1 = fli.before_begin();
	it2 = fli.begin();
	while(it2 != fli.end())
	{
		if(*it2 % 2 == 1)
		{
			it2 = fli.erase_after(it1);
		}
		else
		{
			it1 = it2++;
		}
	}
	for(const auto& x: fli) cout << x << " ";
	cout << endl;
}

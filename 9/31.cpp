#include<list>
#include<forward_list>
#include<algorithm>
#include<iterator>
#include<iostream>
#include<vector>
#include<numeric>
using namespace std;

int main()
{
	forward_list<int> r(10);
	iota(r.begin(),r.end(),1);
	auto pre = r.before_begin();
	auto cur = r.begin();
	while(cur != r.end())
	{
		if(*cur % 2 == 0)
		{
			pre = r.insert_after(pre,99);
			cur = r.erase_after(pre);
		}
		else
		{
			pre++;
			cur++;
		}
	}
	for(const auto& x: r) cout << x << " ";
    cout << endl;	
}

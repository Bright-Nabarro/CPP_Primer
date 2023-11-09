#include<iostream>
#include <iterator>
#include<vector>
#include<algorithm>
#include<list>
int main()
{
	std::vector<int> v(10);
	int i =0;
	for(auto p=v.begin(); p!=v.end(); p++)
		*p = i++;
	auto fir = find(v.cbegin(), v.cend(), 3);
	auto last = find(v.cbegin(), v.cend(), 7);
	auto rlast = std::make_reverse_iterator(fir);
	auto rfir = std::make_reverse_iterator(last);
	std::list<int> li;
	for(auto p=rfir; p!= rlast; p++)
	{
		li.push_back(*p);
	}
	for(auto x: li) std::cout << x << " ";
	std::cout << std::endl;
}
	

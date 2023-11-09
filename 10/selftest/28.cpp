#include<vector>
#include<iterator>
#include<algorithm>
#include<iostream>
#include<list>

int main()
{
	std::vector<int> v{1,2,3,4,5,6,7,8,9};
	std::vector<int> v1, v2, v3;
	std::list<int> li1;

	std::copy(v.cbegin(), v.cend(), back_inserter(v1));
	std::copy(v.cbegin(), v.cend(), front_inserter(li1));
	auto p2 = v2.begin();
	std::copy(v.cbegin(), v.cend(), inserter(v2,p2));
	for(auto x: v) std::cout << x << " ";
	std::cout << std::endl;
	for(auto x: li1) std::cout << x << " ";
	std::cout << std::endl;
}

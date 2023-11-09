#include<algorithm>
#include<iostream>
#include<vector>
#include<numeric>

int main()
{
	std::vector<int> v(10);
	iota(v.begin(), v.end(), 1);

	for_each_n(v.rbegin(), 3, [](int& x){x*=x;});
	for(auto x: v) std::cout << x << " ";
	std::cout << std::endl;
}

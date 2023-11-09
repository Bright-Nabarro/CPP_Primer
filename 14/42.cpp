#include<iostream>
#include<functional>
#include<algorithm>
#include<vector>
#include<cstdlib>
#include<ctime>
int main()
{
	srand(time(0));
	std::vector<int> v(20);
	for(auto ptr=v.begin(); ptr!=v.end(); ptr++)
		*ptr = rand()%10000;
	for(const auto& x: v) std::cout << x << " ";
	std::cout << std::endl;

	std::cout << count_if(v.begin(), v.end(),
			std::bind(std::greater<int>(), std::placeholders::_1, 1024))
		<< " bigger than 1024" << std::endl;
}

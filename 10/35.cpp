#include<iostream>
#include<vector>

int main()
{
	std::vector<int> v;
	for(int i = 0; i < 10; i++)
		v.push_back(i);

	auto ptr = v.end() -1;
	while(ptr != v.begin() -1)
	{
		std::cout << *ptr-- << " ";
	}
	std::cout << std::endl;
}

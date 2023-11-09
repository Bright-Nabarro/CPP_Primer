#include<algorithm>
#include<vector>
#include<iostream>
#include<cstdlib>
#include<ctime>
#include<numeric>

int main()
{
	srand(time(0));
	std::vector<long long> vi(5);
	for(auto& x: vi)
	{
		x = rand()%10+1;
		std::cout << x << " ";
	}
	std::cout << std::endl;

	sort(vi.begin(), vi.end(), std::greater<>());
	for(const auto& x: vi) std::cout << x << " ";
	std::cout << std::endl;

	long sum = std::accumulate(vi.begin(), vi.end(), 1, std::multiplies<>());
	std::cout << sum;
}

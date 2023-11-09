#include<vector>
#include<list>
#include<algorithm>
#include<iterator>
#include<cstdlib>
#include<ctime>
#include<iostream>

int main()
{
	srand(time(0));
	std::vector<int> v(20);
	for(auto p = v.begin(); p!=v.end(); p++)
		*p = rand()%10;
	std::sort(v.begin(), v.end());	
	for(auto x: v) std::cout << x << " ";
	std::cout << std::endl;

	std::list<int> li;
	std::unique_copy(v.cbegin(), v.cend(), back_inserter(li));

	for(auto x: li) std::cout << x << " ";
	std::cout << std::endl;
}


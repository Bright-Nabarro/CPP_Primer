#include<iostream>
#include<vector>
#include<algorithm>
#include<iterator>
int main()
{
	std::vector<int> v(10);
	int i = 1;
	for(auto ptr=v.begin(); ptr!=v.end(); ptr++)
		*ptr = i++;
	copy(v.crbegin(), v.crend(),
		   	std::ostream_iterator<int>(std::cout," "));
	std::cout << std::endl;
}

#include<vector>
#include<ctime>
#include<cstdlib>
#include<iostream>
#include<iterator>
#include<algorithm>
int main()
{
	srand(time(0));
	std::vector<int> v(25);
	for(auto ptr=v.begin(); ptr!=v.end(); ptr++)
		*ptr = rand()%10;
	
	sort(v.begin(), v.end());
	unique_copy(v.begin(), v.end(),
		   	std::ostream_iterator<int>(std::cout," "));
	std::cout << std::endl;
}

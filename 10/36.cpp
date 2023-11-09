#include<algorithm>
#include<vector>
#include<iostream>
#include<ctime>
#include<cstdlib>
#include<iterator>
int main()
{
	srand(time(0));
	std::vector<int> v(25);
	for(auto p=v.begin(); p!=v.end(); p++)
		*p = rand()%10;
	auto p0 = find(v.crbegin(), v.crend(), 0).base();
	std:: cout << std::distance(v.cbegin(), p0);
}

#include<list>
#include<iostream>
int main()
{
	std::list<int> lst1{0,9,4,2,1},
				   lst2{1,2,3,4,5};
	lst1.splice(lst1.end(),lst2);
	for(auto x: lst1) std::cout << x << " ";
	std::cout << std::endl;
}

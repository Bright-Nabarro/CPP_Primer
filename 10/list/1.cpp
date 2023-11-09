#include<list>
#include<algorithm>
#include<iostream>
#include<numeric>
#include<ctime>
#include<cstdlib>

typedef std::list<int> li;
void removeDuplicates(std::list<int>& lst)
{
	lst.sort();
	lst.unique();
}

void mergeList(li& lst1, li& lst2)
{
	lst1.merge(lst2);
}

int main()
{
	srand(time(0));
	std::list<int> lst1(10);
	std::list<int> lst2(10);
	int i = 1;
	auto p1 = lst1.begin(); auto p2 = lst2.begin();
	while(p1!=lst1.end() && p2!=lst2.end())
	{
		*p1++ = i++;
		*p2++ = i++;
	}
	*lst1.begin() = 44;
	mergeList(lst1, lst2);
	for(auto x: lst1) std::cout << x << " ";
	std::cout << std::endl;
}

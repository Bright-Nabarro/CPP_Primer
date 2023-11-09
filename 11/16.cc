#include<iostream>
#include<map>
int main()
{
	std::map<int,std::string> m;
	std::map<int,std::string>::const_iterator
		map_it = m.cbegin();
}

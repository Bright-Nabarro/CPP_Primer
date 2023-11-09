#include<iostream>
#include<string>
#include<regex>
int main()
{
	std::string pattern("h\\S*?h");
	std::regex r(pattern, std::regex::icase);
	std::string row;
	std::getline(std::cin,row);
	std::sregex_iterator reptr(row.begin(), row.end(), r), 
		end_reptr;
	while(reptr != end_reptr)
	{
		std::cout << reptr->str() << std::endl;
		reptr++;
	}
}

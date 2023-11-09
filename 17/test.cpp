#include<regex>
#include<iostream>
#include<string>
#include<vector>
int main(int argc, char* argv[])
{
	//match c++ source filename
	std::regex r("^([[:alpha:]]|[[:digit:]])+\\.(cpp|cc|cxx)$",
		   	std::regex::icase);
	std::smatch matched;
	std::vector<std::string> results;
	for(int i = 1; i < argc; i++)
	{
		std::string temp(argv[i]);
		if (std::regex_search(temp, matched, r))
			std::cout << matched.str() << std::endl;		
	}
}

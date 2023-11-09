#include<regex>
#include<iostream>
#include<string>
#include<sstream>

int main()
{
	std::string p("^[[:alnum:]]+\\.(cpp|cxx|cc)$");
	std::regex r(p);
	std::smatch results;
	std::string test = "hello world";

	if(std::regex_search(test, results, r))
			std::cout << results.str() << std::endl;
}

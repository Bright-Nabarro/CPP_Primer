#include<iostream>
#include<regex>
#include<string>

int main()
{
	std::string pattern("(([^\\d])|^)(1\\d{2}(-|\\s)?\\d{4}(-|\\s)?\\d{4})(([^\\d])|$)");
	std::string row;
	getline(std::cin, row);
	std::regex r(pattern);
	std::sregex_iterator ptr(row.begin(), row.end(), r),
		end;
	while(ptr != end)
	{
		std::cout << (*ptr)[3].str();
		if(((*ptr)[4]).matched)
			std::cout << " use spilit: "
					  << (*ptr)[4].str();
		std::cout << std::endl;
		++ptr;
	}
}

#include<iostream>
#include<string>
#include<regex>
int main()
{
	std::string pattern("(([[:alpha:]]|[[:digit:]])+)@(([[:alpha:]]|[[:digit:]])+\\.(com))");
	std::regex r(pattern);
	std::string text;
	getline(std::cin, text);
	std::sregex_iterator ptr(text.begin(), text.end(), r),
		end;

	if(ptr != end)
		std::cout << "matched! ";
	else
		std::cout << "wrong ";
	while(ptr!=end)
	{
		std::cout << "text: " << (*ptr)[1].str();
		std::cout << "\ncomp: " << (*ptr)[3].str();
		ptr++;
	}
}

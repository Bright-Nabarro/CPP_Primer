#include<iostream>
#include<regex>
#include<string>
int main()
{
	try
	{
		std::string top("([^\\d]|^)"), end("([^\\d]|$)");
		std::string pattern("((1\\d{2})([-\\s.]?)(\\d{4})([-\\s.]?)(\\d{4}))");
		std::regex numR("(1\\d{2})([-\\s.]?)(\\d{4})([-\\s.]?)(\\d{4})");
		pattern = top + pattern + end;
		std::regex r(pattern);
		std::string phoneNumber;
		std::getline(std::cin, phoneNumber);

		std::sregex_iterator rePtr(phoneNumber.begin()
				,phoneNumber.end(),r), reEnd;
		std::ssub_match number;
		while(rePtr != reEnd)
		{
			number = (*rePtr)[2];
			std::string fmt = "$1.$3.$5";
			std::cout << regex_replace(number.str(),numR,fmt) << std::endl; 
			rePtr++;
		}
		std::cout << std::endl;
	}catch(std::regex_error& e)
	{
		std::cout << e.what() << std::endl;
		std::cout << e.code() << std::endl;
		return e.code();
	}
}

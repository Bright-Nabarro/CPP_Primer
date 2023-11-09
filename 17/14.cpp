#include<iostream>
#include<regex>
int main()
{
	try
	{
		std::regex r("[[:pha:]]@");
		std::string row;
		std::cin >> row;
		std::smatch result;
		if(std::regex_search(row, result, r))
			std::cout << result.str() << std::endl;
		else
			std::cout << "no!!!" << std::endl;
	}catch(std::regex_error& e)
	{
		std::cout << e.what() << "\ncode" << e.code() << std::endl;
	}
}

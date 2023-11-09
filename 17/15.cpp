#include<iostream>
#include<regex>
#include<string>
int main()
{
	std::string multline;
	std::regex r("^\\S*(([^c]ie)|ci|ie)\\S*$");
	std::smatch result;
	while(std::cin>>multline)
	{
		if(std::regex_search(multline,result,r))
			std::cout << "yes" << std::endl;
		else
			std::cout << "no" << std::endl;
	}
}

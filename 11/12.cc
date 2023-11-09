#include<iostream>
#include<string>
#include<vector>
#include<utility>
int main()
{
	std::vector<std::pair<int,std::string>> vPair;
	int iIn;
	std::string sIN;
	std::pair<int, std::string> tempP;
	while(std::cin >> iIn && std::cin >> sIN)
	{
		tempP = {iIn, sIN};
		vPair.push_back(tempP);
	}
	for(auto x: vPair)
	{
		std::cout << x.first << " " << x.second
			<< std::endl;
	}
}

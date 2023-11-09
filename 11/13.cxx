#include<iostream>
#include<string>
#include<vector>
#include<utility>
int main()
{
	std::vector<std::pair<int,std::string>> vPair;
	std::pair<int, std::string> tempP;
	vPair.push_back({34, "lin17"});
	vPair.push_back(std::pair<int, std::string>(33, "me"));
	vPair.push_back(std::make_pair(23, "swh"));
	for(auto x: vPair) std::cout << x.first << " " << x.second
		<< std::endl;
}

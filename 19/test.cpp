#include <vector>
#include <algorithm>
#include <string>
#include <iostream>
#include <functional>

int main()
{
	std::vector<std::string> v;
	v.push_back("abc");
	v.push_back("def");
	v.push_back("");
	v.push_back("igh");
	std::function<bool(const std::string&) > fcn = &std::string::empty;
	std::cout << std::distance(v.begin(),
		find_if(v.begin(), v.end(), fcn))
		<< std::endl;
}

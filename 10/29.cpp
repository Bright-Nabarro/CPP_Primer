#include<vector>
#include<string>
#include<iostream>
#include<iterator>
#include<fstream>
int main()
{
	std::vector<std::string> vstr;
	std::ifstream inFile("file");
	std::istream_iterator<std::string> in(inFile), eof;
	while(in != eof)
	{
		vstr.push_back(*in++);
	}
	for(auto x: vstr) std::cout << x << " ";
	std::cout << std::endl;
}

#include<string>
#include<iostream>
#include<cassert>
using std::string;

void pluspp(string& s, string add = "+++")
{
	s.insert(0,add);
	s.insert(s.size(),add);
}

int main()
{
	string result("bsd");
	pluspp(result);
	std::cout << result << std::endl;
}

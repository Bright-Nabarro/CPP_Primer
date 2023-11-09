#include <algorithm>
#include <iostream>
#include <string>
using std::string;

int main()
{
	string t1 = "abc";
	string t2 = "def";
	int a = 1, b = 2;
	std::swap(a, b);
	std::cout << t1 << " " << t2 << std::endl;
}
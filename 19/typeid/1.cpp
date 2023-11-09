#include <typeinfo>
#include <iostream>

int main()
{
	int i;
	double d;
	float f;
	std::cout << typeid(i).name() << std::endl;
	std::cout << typeid(d).name() << std::endl;
	std::cout << typeid(f).name() << std::endl;
}

#include <iostream>

template<typename T>
void f(T a)
{
	std::cout << typeid(a).name() << std::endl;
}

int main()
{
	f(1);
	f(1.0);
}

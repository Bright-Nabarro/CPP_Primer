#include<iostream>

class A
{
public:
	virtual ~A(){}
};

class B: public A
{
public:
	virtual ~B(){}
};

int main()
{
	A* pa = new B();
	if(typeid(*pa) == typeid(B))
		std::cout << "true" << std::endl;
	else
		std::cout << "false" << std::endl;
}

#include <iostream>

class A
{
  public:
	A() { std::cout << "A" << std::endl; }
};

class B : public A
{
  public:
	B() { std::cout << "B" << std::endl; }
};
class C : public B
{
  public:
	C() { std::cout << "C" << std::endl; }
};

class X
{
  public:
	X() { std::cout << "X" << std::endl; }
};

class Y
{
  public:
	Y() { std::cout << "Y" << std::endl; }
};

class Z : public X, public Y
{
  public:
	Z() { std::cout << "Z" << std::endl; }
};

class MI : public C, public Z
{
  public:
	MI() { std::cout << "MI" << std::endl; }
};

class D : public C, public X
{
  public:
	D() { std::cout << "D" << std::endl; }
};
int main()
{
	D* pd = new D();

	X* px = pd;
	A* pa = pd;
	B* pb = pd;
	C* pc = pd;
}
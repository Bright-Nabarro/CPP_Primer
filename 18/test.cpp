#include <iostream>
#include <string>

namespace LIB
{
void compute() { std::cout << "LIB::compute()" << std::endl; }
void compute(const void*)
{
	std::cout << "LIB::compute(const void*)" << std::endl;
}

} // namespace LIB

void compute(int) { std::cout << "INT" << std::endl; }
void compute(double, double = 3.4)
{
	std::cout << "DOUBLE DOUBLE" << std::endl;
}
void compute(char*, char* = 0) { std::cout << "CHAR* CHAR*" << std::endl; }

using namespace LIB;
int main() { compute(0); }
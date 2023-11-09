#include<iostream>
int main()
{
	std::cout << typeid(42).name() << std::endl;
	int arr[10];
	std::cout << typeid(arr).name() << std::endl;
	std::cout << typeid(std::string).name() << std::endl;
}

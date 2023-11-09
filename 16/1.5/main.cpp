#include"t.h"
#include<iostream>

extern template size_t byte_size(long);

int main()
{
	std::cout << byte_size(long());
}

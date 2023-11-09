#include<cstdarg>
#include<iostream>

double sum(int lim, ...)
{
	va_list ap;
	va_start(ap, lim);
	double result = 0;
	for(int i = 0; i < lim; i++)
	{
		result += va_arg(ap, double);
	}
	va_end(ap);
	
	return result;
}

int main()
{
	double d1[] = {1,2,3,4,5,6,7,8,9};
	double d2[] = {1.1, 2.2, 3.3, 4.4};
	std::cout << sum(5, 1, 2, 3, 4, 5) << std::endl;
	std::cout << sum(3, 1.1, 2.2, 3.3) << std::endl;
}
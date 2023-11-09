#include<iostream>
#include<typeinfo>
using namespace std;

template<typename T>
int compare(const T& a, const T& b)
{
	if(a < b)
		return -1;
	else if (a > b)
	 	return 1;
	return 0;
}

int comparec(const char*& a, const char*& b)
{
	if(a < b)
		return -1;
	else if (a > b)
	 	return 1;
	return 0;

}

int comparecc(const char* const &a, const char* const &b)
{
	if(a < b)
		return -1;
	else if (a > b)
	 	return 1;
	return 0;
	
}

int main()
{
	cout << compare<const char*>("abc", "def") << endl;
	
}
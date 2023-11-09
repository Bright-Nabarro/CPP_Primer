#include<iostream>
#include<cstring>
#include<typeinfo>
using namespace std;

template<typename T>
int compare(const T& t1, const T& t2)
{
	cout << sizeof(t1) << endl;
	if(t1 < t2)
		return -1;
	if(t2 < t1)
		return 1;
	return 0;
}

template<size_t N, size_t M>
int compare(const char (&arr1)[N], const char (&arr2)[M])
{
	return strcmp(arr1, arr2);
}

template<>
int compare(const char* const &p1, const char* const &p2)
{
	cout << "template<> compare" << endl;
	return strcmp(p1, p2);
}

int main()
{
	const char* p1 = "abc", * p2 = "def";
	cout << compare<const char*>("abc","defg") << endl;
	cout << compare(p1, p2) << endl;
	cout << compare<const char*>("abcdefghi","123456789") << endl;
}
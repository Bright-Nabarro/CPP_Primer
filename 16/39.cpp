#include<iostream>
#include<string>
using namespace std;

template<typename T>
int compare(const T& t1, const T& t2)
{
	if(t1 < t2)
		return -1;
	if(t2 < t1)
		return 1;
	return 0;
}

int main()
{
	const char* s1 = "abc";
	const char* s2 = "def";
	cout << compare<const char*>(s1, s2) << endl;
}


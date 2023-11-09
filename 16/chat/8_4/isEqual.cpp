#include<iostream>
#include<iomanip>
using namespace std;

template<int A, int B>
struct isEqual
{
	static const bool value = (A == B);
};

int main()
{
	isEqual<4,5> bi;
	cout << boolalpha << bi.value << endl;
}

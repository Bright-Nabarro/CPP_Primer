#include<iostream>
#include<utility>
using namespace std;

int main()
{
	int&& r1 = 42;
	int r2 = std::move(r1);
	cout << r1 << endl;
}

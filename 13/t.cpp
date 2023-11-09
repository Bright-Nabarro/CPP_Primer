#include<iostream>
#include<string>
#include<utility>
using namespace std;

int main()
{
	int&& t = 53;
	cout << &t << endl;
	int&& h = std::move(t);
	cout << h << ": " << &h << endl;
	cout << t << ": " << &t << endl;
}

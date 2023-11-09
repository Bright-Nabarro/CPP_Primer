#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	double num;
	cin >> num;
	cout << [](double a){return (round(a));}(num) << endl;
}

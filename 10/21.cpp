#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main()
{
	int a = 10;
	cout << [&a](){return --a;}();
}

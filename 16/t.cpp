#include<iostream>
#include<ctime>
#include<cstdlib>
#include<utility>
using namespace std;

int main()
{
	int i = 1;
	int&& ri = std::move(i);
}


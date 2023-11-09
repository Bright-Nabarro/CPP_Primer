#include"my_shared_ptr.h"
#include"my_unique_ptr.h"
#include<iostream>
using namespace std;

void my_del(int* p)
{
	cout << "del p" << endl;
	delete p;
}

int main()
{
	my_unique_ptr<int, void(*)(int* p)> 
		mp(new int(42), my_del);
	cout << *mp << endl;
}

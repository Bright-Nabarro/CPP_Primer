#include<memory>
#include<iostream>
using namespace std;

void f_del(int* p)
{
	cout << "function del" << endl;
	delete p;
}

int main()
{
	auto f = f_del;
	unique_ptr<int, void(*)(int*)>
		up(new int(42), f);
	cout << *up << endl;
	up.reset(new int(44));
}

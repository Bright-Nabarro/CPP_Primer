#include<iostream>
#include<memory>
using namespace std;

int main()
{
	unique_ptr<int[]> uptr(new int[9]);
	for(int i = 0; i < 9; i++)
	{
		uptr[i] = i;
	}
	for(int i = 0; i < 9; i++)
	{
		cout << uptr[i] << " ";
	}
	cout << endl;
}

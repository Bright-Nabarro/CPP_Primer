#include<iostream>
#include<memory>
using namespace std;
class test
{
private:
	int i;
public:
	test(int i):i(i){}
	void output()
	{
		cout << i;
	}
	int& o(){return i;}
};

int main()
{
	test t1(3);
	t1.output(); cout << endl;
	int& b = t1.o();
	b = 19;
	t1.output(); cout << endl;
}

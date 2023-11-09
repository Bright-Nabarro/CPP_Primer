#include<iostream>
#include<vector>
using namespace std;

class NoDefault
{
private:
	int a;
public:
	NoDefault(int a):a(a){}
	int a_(){return a;}
};

int main()
{
	vector<NoDefault> v;
}

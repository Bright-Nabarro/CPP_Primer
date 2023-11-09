#include<functional>
#include<iostream>
using namespace std;

template<typename T, typename F = function<bool(T,T)>>
int compare(T v1, T v2, 
		F f = [](T v1, T v2){return v1 < v2;})
{
	if(f(v1,v2))
		return -1;
	if(f(v2,v1))
		return 1;
	return 0;
}

int main()
{
	//无法隐式类型转换
	cout << compare(int(0xFFFFFFFF), -1) << endl;
	cout << compare(0.01+0.02, 0.03) << endl;
}

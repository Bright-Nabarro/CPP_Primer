#include<iostream>
using namespace std;

template<typename T>
class Pair
{
private:
	T first;
	T second;
public:
	Pair(T f = 0, T s = 0):
		first(f), second(s){}
	template<typename T1, typename T2>
	friend bool areEqual(T1, T2);
};

template<typename T1, typename T2>
bool areEqual(T1 p1, T2 p2)
{
	return p1.first == p2.second;
}

int main()
{
	Pair<int> pi(1,1);
	Pair<double> pd(1.0, 1.0);
	cout << boolalpha << areEqual(pi,pd) << endl;
}

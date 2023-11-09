#include<iostream>
#include<utility>
using namespace std;

template<typename F, typename T1, typename T2>
void flip2(F f, T1&& t1, T2&& t2)
{
    f(forward<T2>(t2), forward<T1>(t1));
}

void g(int&& a, int& b)
{
    cout << a << " " << b << endl;
}

int main()
{
    int b = 3;
    flip2(g, b, 42);
}

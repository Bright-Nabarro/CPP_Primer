#include<iostream>
#include<type_traits>
using namespace std;

template<typename T1, typename T2>
void f(T1 t1, T2 t2)
{
    t1++;
    t2++;
}
int main()
{
    const int t1 = 0;
    int t2 = 0;
    int& rt2 = t2;
    f(t1,rt2);
    std::cout << t1 << " " << t2 << std::endl;
}
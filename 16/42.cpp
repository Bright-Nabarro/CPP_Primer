#include<iostream>
#include<typeinfo>
using namespace std;

template <typename T> void g(T&& val)
{
    val++;   
}

int main()
{
    int i = 0;
    const int ci = i;
    auto n = ci;
    g(i = ci);
    cout << i << endl;
}
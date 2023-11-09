#include<memory>
#include<iostream>
using namespace std;

shared_ptr<int> ssqrt(shared_ptr<int> p)
{
    *p = (*p) * (*p);
    return p;
}

int main()
{
    auto p = make_shared<int>(42);
    cout << *(ssqrt(p)) << endl;
}

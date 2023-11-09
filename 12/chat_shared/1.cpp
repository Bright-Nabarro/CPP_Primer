#include<memory>
#include<iostream>
using namespace std;

shared_ptr<int> makeInt(int n)
{
    auto result = make_shared<int>(n);
    return result;
}

int main()
{
    auto p = makeInt(42);
    cout << *p << endl;
}

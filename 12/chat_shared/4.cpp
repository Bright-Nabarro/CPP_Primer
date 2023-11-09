#include<memory>
#include<iostream>
using namespace std;

int main()
{
    auto p = make_shared<int>(5);
    weak_ptr<int> wp = p;
}

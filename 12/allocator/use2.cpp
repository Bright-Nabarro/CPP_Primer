#include<memory>
#include<iostream>
#include<algorithm>
#include<iterator>
using namespace std;

struct noDC
{
    const int num;
    noDC(const int n): num(n){}
};

ostream& operator<<(ostream& os, const noDC& s1)
{
    return os << s1.num;
}

int main()
{
    allocator<noDC> alloc_s;
    const int a_size = 5;
    auto const p_noDC = alloc_s.allocate(a_size);
    noDC s1(42);
    uninitialized_fill(p_noDC, p_noDC+a_size, s1);
    copy(p_noDC, p_noDC+a_size, ostream_iterator<noDC>(cout, " "));
    cout << endl;

    for(auto p=p_noDC; p!=p_noDC+a_size; p++)
        alloc_s.destroy(p);
    alloc_s.deallocate(p_noDC, a_size);
}


#include<memory>
#include<iostream>
using namespace std;

struct m
{
    int* p;
    m(int* d): p(d){}
};

int main()
{
    int a = 10;
    m h(&a);
    cout << *(h.p) << endl;
    allocator<m> alloc_m;
    auto const mp = alloc_m.allocate(10);
    int num[20];
    int i=0;
    for(int i =0; i<20; i++)
        num[i] = i;
    for(auto pt = mp; pt < mp+10; pt++)
    {
        alloc_m.construct(pt, &num[i++]);
    }
    for(auto pt = mp; pt < mp+10; pt++)
    {
        cout << *(pt->p) << ' ';
    }
    cout << endl;
    for(auto pt = mp; pt < mp+10; pt++)
        alloc_m.destroy(pt);
    alloc_m.deallocate(mp, 10);
}

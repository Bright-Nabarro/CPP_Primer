#include<memory>
#include<iostream>
#include<vector>
using namespace std;

struct noDC
{
    const int num;
    noDC(const int n): num(n){}
};

int main()
{
    vector<noDC> vStruct;
    vStruct.reserve(5);
    vStruct.emplace_back(10);
    vStruct.emplace_back(30);
    vStruct.emplace_back(500);

    allocator<noDC> alloc_v;
    const int alloc_size = 5;
    auto const pv = alloc_v.allocate(alloc_size);

    uninitialized_copy(vStruct.begin(), vStruct.end(), pv);
    for(auto epv = pv; epv < pv+alloc_size; epv++)
        cout << epv->num << " ";
    cout << endl;
    
    for(auto epv = pv; epv < pv+alloc_size; epv++)
        alloc_v.destroy(epv);
    alloc_v.deallocate(pv, alloc_size);
}

#include<memory>
#include<iostream>
using namespace std;

struct ListNode
{
    int element;
    shared_ptr
    ListNode(int ele):
        element(ele), next(nullptr){}
};



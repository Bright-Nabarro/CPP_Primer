// noooooo!
#include<iostream>
#include<type_traits>
#include<typeinfo>

template<typename T>
void print_type(T i)
{
    if(std::is_reference<T>::value)
        std::cout << "reference" << std::endl;
    else
        std::cout << "no reference" << std::endl;
}

int main()
{
    int i;
    int& ri = i;
    print_type(ri);
}
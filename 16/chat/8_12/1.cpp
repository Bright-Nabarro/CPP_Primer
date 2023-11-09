#include<iostream>
#include<type_traits>

template<typename T>
bool is_int(T val)
{
    return std::is_same<typename std::remove_reference<T>::type,int>::value;
}
int main()
{
    int i = 0;
    std::cout << std::boolalpha << is_int(i) << std::endl;
    const int ci = i;
    std::cout << std::boolalpha << is_int(ci) << std::endl;
    int&& rri = std::move(i);
    std::cout << std::boolalpha << is_int(rri) << std::endl;
}
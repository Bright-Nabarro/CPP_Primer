#include<iostream>
#include<type_traits>

template<typename T, size_t sizeiiooyy>
size_t get_size(T(&arr)[sizeiiooyy])
{
    return sizeiiooyy;
}

int main()
{
    int arr[5] = {1,2,3,4,5};
    int (&ref_arr)[5] = arr;
    std::cout << get_size(ref_arr) << std::endl;
}
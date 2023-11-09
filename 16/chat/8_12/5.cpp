#include<iostream>
#include<string>
#include<sstream>

template<typename T>
std::string debug_rep(const T& t)
{
    std::ostringstream ret;
    ret << t;
    return ret.str();
}

template<typename T>
std::string debug_rep(T* p)
{
    std::ostringstream ret;
    ret << "pointer: " << p;
    if(p)
        ret << " " << debug_rep(*p);
    else
        ret << " null pointer";
    return ret.str();
}

int main(int argc, char* argv[])
{
    int i;
    if(argc >= 2)
    {
        std::cout << argc << std::endl;
        std::istringstream issm(argv[1]);
        issm >> i;
    }
    else
        i = 42;
    int* p = &i;
    std::cout << debug_rep(p) << std::endl;
}
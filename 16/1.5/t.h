#include<cstdlib>
template<typename T>
size_t byte_size(T ele)
{
	return sizeof(ele) << 3;
}

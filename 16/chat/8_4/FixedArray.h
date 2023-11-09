#include<cstdlib>

template<typename T, size_t N>
class FixedArray
{
private:
	T array[N];
public:
	FixedArray() = default;
	T& operator[](int i);
};

template<typename T, size_t N>
T& FixedArray<T,N>::operator[](int i)
{
	return array[i];
}

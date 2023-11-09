#include<iostream>
#include<vector>
#include<memory>
#include<initializer_list>

template<typename T>
class Bolb
{
private:
	std::unique_ptr<T[]> p_eles;
public:
	Bolb():p_eles(new T[5]){}
	template<typename It>
	Bolb(It be, It en);
	Bolb(const std::initializer_list<T>& inil);
	T& operator[](int n);
};

template<typename T>
template<typename It>
Bolb<T>::Bolb(It be, It en)
{
	p_eles.reset(new T[std::distance(be,en)]);
	int i = 0;
	for(;be != en; be++)
		p_eles[i++] = *be;
}

template<typename T>
Bolb<T>::Bolb(const std::initializer_list<T>& inil)
{
	p_eles.reset(new T[inil.size()]);
	for(const auto& x: inil)
	{
		*p_eles = x;
	}
}

template<typename T>
T& Bolb<T>::operator[](int n)
{
	return p_eles[n];
}

int main()
{
	std::vector<int> v{1,2,3,4,5,6,7,8,9};
	Bolb<int> b(v.begin(), v.end());
	for(int i = 0; i < v.size(); i++)
		std::cout << b[i] << " ";
	std::cout << std::endl;
}

#include<iostream>
#include<vector>
using namespace std;

template<typename T>
class Container;

template<typename T>
size_t sizeOfContainer(const Container<T>& c);

template<typename T>
class Container
{
private:
	vector<T> elements;
	friend size_t sizeOfContainer(const Container<T>& c);
public:
	Container(const vector<T>& e): elements(e){}
};

template<typename T>
size_t sizeOfContainer(const Container<T>& c)
{
	return c.elements.size();
}

int main()
{
	vector<int> v{1,2,3,4,5,6,7,8,9};
	Container<int> c(v);
	cout << sizeOfContainer(c) << endl;
}



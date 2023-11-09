#include<iostream>
#include<memory>

class DebugDelete
{
public:
	DebugDelete(std::ostream& os = std::cerr): os(os){}
	template<typename T>
	void operator()(T *p) 
	{
	   	os << "deleting unique_ptr" << std::endl;
		delete p;
	}
private:
	std::ostream& os;
};

int main()
{
	std::unique_ptr<int, DebugDelete> p(new int, DebugDelete(std::cout));
	*p = 42;
	std::cout << *p << std::endl;
}



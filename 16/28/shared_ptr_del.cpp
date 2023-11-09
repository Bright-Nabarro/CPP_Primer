#include<memory>
#include<functional>
#include<iostream>
using namespace std;

void intDel(int* p)
{
	cout << "function delete int" << endl;
	delete p;
}

class DelInt
{
private:
	ostream& os;
public:
	DelInt(ostream& os = cerr):os(os){}
	void operator()(int *p)
	{
		os << "function obj delete int" << endl;
		delete p;
	}
};

int main()
{
	shared_ptr<int> sp(new int(42), intDel);
	cout << *sp << endl;
	sp.reset(new int(43), DelInt());
	cout << *sp << endl;
	auto lam = [](int* p){ cout << "lambda delete int" << endl; delete p;}; 
	sp.reset(new int(44), lam);
	cout << *sp << endl;
	sp.reset(new int(45), function<void(int*)>(lam));
	cout << *sp << endl;
}

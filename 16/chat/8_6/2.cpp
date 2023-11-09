#include<memory>
#include<vector>
#include<cassert>
using namespace std;

template<typename T>
class Box
{
private:
	using p_vt = shared_ptr<vector<T>>;
	p_vt p_eles; 
public:
	Box():p_eles(new vector<T>){}
	void push_back(T ele){p_eles->push_back(ele);}
	bool isEmpty(){return !p_eles->size();}
	explicit operator bool(){ return isEmpty();}
};

int main()
{
	Box<double> b1;
	assert(b1);
	b1.push_back(0.23);
	assert(!b1);
}

#include<cstdlib>
#include<functional>

template<typename T>
class my_shared_ptr
{
private:
	using D = std::function<void(T*)>;
	T* point;
	size_t* ref_count;
	D* deleter;
private:
	static void f_delete(T* p){ delete p;}
	void release();
public:
	my_shared_ptr(): 
		point(nullptr), ref_count(new size_t(1)), deleter(f_delete){}
	my_shared_ptr(T* p, D del = f_delete):
		point(p),ref_count(new size_t(1)), deleter(new D(del)){} 
	my_shared_ptr(const my_shared_ptr& msp);
	my_shared_ptr& operator=(const my_shared_ptr& msp);
	my_shared_ptr(my_shared_ptr&& msp) noexcept;		//一般用于创建匿名对象返回的右值
	my_shared_ptr& operator=(my_shared_ptr&& msp) noexcept;
	~my_shared_ptr(){release();}

	T& operator*() const { return *point;}
	T* operator->() const { return point;}	
	void reset(T* p, D del = f_delete);
};

template<typename T>
inline void my_shared_ptr<T>::release()
{
	if(--*ref_count == 0)
	{
		(*deleter)(point);
		delete ref_count;
	}
	
}

template<typename T>
my_shared_ptr<T>::my_shared_ptr(const my_shared_ptr& msp)
{
	ref_count = msp.ref_count;
	++*ref_count;
	point = msp.point;
	deleter = msp.deleter;
}

template<typename T>
my_shared_ptr<T>& my_shared_ptr<T>::operator=
	(const my_shared_ptr& msp)
{
	release();
	ref_count = msp.ref_count;
	++*ref_count;
	point = msp.point;
	deleter = msp.deleter;
	return *this;
}


template<typename T>
my_shared_ptr<T>::my_shared_ptr(my_shared_ptr&& msp) noexcept
{
	//引用计数总体不变
	ref_count = msp.ref_count;
	point = msp.point;
	deleter = msp.deleter;
	msp.ref_count = point = deleter = nullptr;
}

template<typename T>
my_shared_ptr<T>& my_shared_ptr<T>::
	operator=(my_shared_ptr&& msp) noexcept
{
	release();
	ref_count = msp.ref_count;
	point = msp.point;
	deleter = msp.deleter;
	msp.ref_count = point = deleter = nullptr;
	return *this;
}

template<typename T>
void my_shared_ptr<T>::reset(T* p, D del)
{
	release();
	ref_count = new size_t(1);
	point = p;
	deleter = new D(del);
}

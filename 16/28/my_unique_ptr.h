template<typename T>
void default_del(T* p){ delete p; }

template<typename T, typename D = void(*)(T*)>
class my_unique_ptr
{
private:
	T* point;
	D deleter;
public:
	my_unique_ptr(T* p, D del = default_del):
		point(p), deleter(del){}
	my_unique_ptr(const my_unique_ptr&) = delete;
	my_unique_ptr& operator=
		(const my_unique_ptr&) = delete;
	~my_unique_ptr(){ deleter(point);}
	my_unique_ptr(my_unique_ptr&& mup) noexcept;
	my_unique_ptr& operator=
		(my_unique_ptr&& mup) noexcept;
	my_unique_ptr* release();
	void reset(T* p);		//不可以重置删除器
	
	T& operator*(){ return *point;}
	T* operator->() {return point;}
};

template<typename T, typename D>
my_unique_ptr<T,D>::my_unique_ptr(my_unique_ptr&& mup) noexcept
{
	point = mup.point;
	mup.point = nullptr;
}

template<typename T, typename D>
my_unique_ptr<T,D>& my_unique_ptr<T,D>::
	operator=(my_unique_ptr&& mup) noexcept
{
	delete(point);
	point = mup.point;
	mup.point = nullptr;
}

template<typename T, typename D>
my_unique_ptr<T,D>* my_unique_ptr<T,D>::
	release()
{
	auto temp = point;
	point = nullptr;
	return temp;
}

template<typename T, typename D>
void my_unique_ptr<T,D>::reset(T *p)
{
	deleter(point);
	point = p;
}

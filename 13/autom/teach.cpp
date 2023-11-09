#include"teach.h"
allocator<string> StrVec::alloc;

void StrVec::re_allocate()
{
	size_t newcapacity = size()*2;
	string* newdata = alloc.allocate(newcapacity);
	string* dest = newdata;
	string* elem = elements;
	while(elem != elements + size())
		alloc.construct(dest++, *elem++);
	alloc_free();

	elements = newdata;
	first_free = dest;
	cap = elements + newcapacity;
}

void StrVec::alloc_free()
{
	if(elements)
	{
		string* p = first_free;
		while(p != elements)
			alloc.destroy(--p);
		alloc.deallocate(elements, cap - elements);
	}
}

StrVec::StrVec()
{
	first_free = alloc.allocate(ini_size);
	cap = first_free + ini_size;
	elements = nullptr;
}

StrVec::StrVec(const StrVec& sv)
{
	elements = alloc.allocate
		(sv.cap - sv.elements);
	first_free = uninitialized_copy
		(sv.elements, sv.first_free, elements);
	cap = elements + (sv.cap - sv.elements);
}

StrVec& StrVec::operator=(const StrVec& sv)
{
	alloc_free();
	elements = alloc.allocate
		(sv.cap - sv.elements);
	first_free = uninitialized_copy
		(sv.elements, sv.first_free, elements);
	cap = elements + (sv.cap - sv.elements);
	return *this;
}

StrVec::~StrVec()
{
	alloc_free();
}

void StrVec::push_back(const string& str)
{
	chk_n_alloc();
	if(elements == nullptr)
		elements = first_free;
	alloc.construct(first_free++, str);
}

string StrVec::operator[](size_t n)
{
	return *(elements + n);
}

size_t StrVec::size() const 
{
	if(elements == nullptr)
		return 0;
	return first_free - elements;
}

size_t StrVec::capacity() const
{
	if(elements == nullptr)
		return ini_size;
	return cap - elements;
}


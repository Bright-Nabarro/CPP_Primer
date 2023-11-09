#ifndef TEACH_H
#define TEACH_H
#include<string>
#include<memory>
#include<initializer_list>
#include<utility>
using namespace std;

class StrVec
{
private:
	static allocator<string> alloc;
	string* elements;		//数组首元素
	string* first_free;		//数组第一个空闲元素的指针
	string* cap;			//数组尾后位置的指针
private:
	//工具函数
	void re_allocate();		//扩展内存
	void alloc_free();		//释放内存
	void chk_n_alloc()		//检测内存是否到达上限
	{ if (size() == capacity()) re_allocate(); }
public:
	StrVec();
	StrVec(const StrVec& sv);
	StrVec& operator=(const StrVec& sv);
	~StrVec();
	void push_back(const string& str);
	string operator[](size_t n);
	//elements数量
	size_t size() const;
	//容器容量
	size_t capacity() const;
	string* begin() const { return elements; }
	string* end() const { return first_free; }
private:
	const size_t ini_size = 4;	//默认构造时分配的元素个数
};

#endif	//TEACH_H

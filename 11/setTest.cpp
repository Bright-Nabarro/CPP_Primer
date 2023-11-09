#include<iostream>
#include<set>
#include<string>
#include<map>
using namespace std;

struct book
{
	string name;
	int isbn;
	
	book(string n, int i):name(n), isbn(i){}
};

bool compare(const book& b1, const book& b2)
{
		return b1.isbn < b2.isbn;
}

struct bookCompare
{
	bool operator()(const book& b1, const book& b2) const
	{
		return b1.isbn < b2.isbn;
	}
};

ostream& operator<<(ostream& os, const book& b)
{
	os << b.isbn << " " << b.name;
	return os;
}

int main()
{
	set<book,bool(*)(const book&, const book&)> b(compare);
	book b1("c++ primer", 2);
	book b2("thinking in c++", 1);
	book b3("c++ primer plus", 0);
	b.insert(b1);
	b.insert(b2);
	b.insert(b3);
}

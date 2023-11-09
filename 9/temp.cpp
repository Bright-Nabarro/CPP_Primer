#include<string>
#include<iostream>
using namespace std;

void replaceM(string& s, const string& oldVal,const string& newVal)
{
	unsigned long beg = 0;
	auto pos = beg;
	auto oldSize = oldVal.size();
	auto newSize = newVal.size();
	while((beg = s.find(oldVal,pos)) != string::npos)
	{
		s.replace(beg,oldSize,newVal);
		pos = beg+newSize;
	}
}

int main()
{
	string t1("hello world! hello world, dlrow olleh");
	replaceM(t1,"hello","hello c++");
	cout << t1;
}

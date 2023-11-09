#include<iostream>
#include<map>
#include<string>
#include<utility>
#include<iomanip>
using namespace std;

int main()
{
	multimap<string, string> m;
	m.insert({"stanley B. L.", "c++ primer"});
	m.insert({"stephen P.", "c++ primer plus"});
	m.insert({"stephen P.", "c prmier plus"});
	m.insert({"bruce eckel", "thinking in c++"});
	m.insert({"bruce eckel", "thinking in java"});
	m.insert({"thomas H. C", "introduction to algorithms"});
	
	auto p = m.begin();
	while(p!=m.end())
	{
		cout << setw(20) << left << p->first
			 << p->second << endl;
		p++;
	}
}

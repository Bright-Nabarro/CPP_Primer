#include<iostream>
#include<map>
#include<string>
#include<utility>
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
	
	string search_item;
	getline(cin, search_item);
	auto pos = m.equal_range(search_item);
	while(pos.first != pos.second)
	{
		cout << pos.first->second << endl;
		pos.first++;
	}
}

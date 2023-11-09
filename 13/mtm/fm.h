#ifndef FM_H
#define FM_H
#include<string>
#include<set>
#include<iostream>
using namespace std;
//多对多的关系不需要在构造函数中强制创建
class folder;
class message
{
private:
	string contents;
	set<folder*> folders;
	void copyAddToFolder(const message& msg);
	void removeFromFolders();
public:
	explicit message(const string& str):
		contents(str){}
	message(const message& msg);
	~message();
	message& operator=(const message& msg);
	void save(folder& fl);
	void remove(folder& fl);
};

class folder
{
	friend class message;
private:
	string name;
	set<message*> msgs;
	void copyAddMsg(const folder& fl);
	void removeFromMsg();
	void copyAddToMsg(const message& msg);
	void removeFromFolders();
public:
	explicit folder(const string& str):
		name(str){}
	folder(const folder& fl);
	folder& operator=(const folder& fl);
	void save(message& msg);
	void remove(message& msg);
};

#endif //FM_H

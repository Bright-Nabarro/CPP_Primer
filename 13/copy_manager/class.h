#ifndef ORCLASS_H
#define ORCLASS_H
#include<string>
#include<set>
#include<stdexcept>
#include<iostream>
using namespace std;

class Owner;
class Resource
{
private:
	int data_int;
	string data_str;
private:
	Owner* pOwner;
public:		//basic
	Resource(int di, string ds,
			Owner* p);
	Resource(const Resource& re2);
	~Resource();
	Resource& operator=(const Resource& re2);
public:		//userface
	int dataInt(){ return data_int; }
	string dataStr(){ return data_str; }
};

class Owner
{
friend class Resource;
private:
	string owner_data;
	set<Resource*> resources;
public:
	Owner(string str): owner_data(str),
		resources(){}
	void display_all();
};

#endif //ORCLASS_H

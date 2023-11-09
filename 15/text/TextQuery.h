#pragma once

#include<string>
#include<iostream>
#include<set>
#include<map>
#include<vector>
#include<memory>
using std::string;
using std::vector;
using std::map;
using std::set;
using std::shared_ptr;
using std::make_shared;

class QueryResult;
class TextQuery
{
private:
	shared_ptr<vector<string>> file_one;
	map<string, shared_ptr<set<int>>> word2line;
public:
	TextQuery(std::istream&);
	QueryResult query(const string& ) const;
};


class QueryResult
{
private:
	string word;
	shared_ptr<set<int>> lines;
	shared_ptr<vector<string>> p_file;
public:
	QueryResult(const string& w,
				shared_ptr<set<int>> ls,
				shared_ptr<vector<string>> file);
	void printFile();
	void print(std::ostream& os);
};

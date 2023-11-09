#include<sstream>
#include "TextQuery.h"

TextQuery::TextQuery(std::istream& is)
	: file_one(new vector<string>())
{
	string each_line;
	int line_n = 0;
	while(std::getline(is, each_line))
	{
		std::stringstream issm(each_line);
		++line_n;
		file_one->push_back(each_line);
		string temp;
		while(issm >> temp)
		{
			shared_ptr<set<int>>& lines = word2line[temp];
			if (!lines)	//第一次
				lines = make_shared<set<int>>();
			lines->insert(line_n);
		}
	}
}

QueryResult TextQuery::query(const string& word) const
{
	auto ptr = word2line.find(word);
	if (ptr == word2line.end())
		return QueryResult(word, nullptr, file_one);
	return QueryResult(word, ptr->second, file_one);
}

QueryResult::QueryResult(const string& w,
		shared_ptr<set<int>> ls,
		shared_ptr<vector<string>> file):
	word(w), lines(ls), p_file(file) {};

void QueryResult::printFile()
{
	for(auto x: *p_file)
		std::cout << x << std::endl;
}

void QueryResult::print(std::ostream& os)
{
	for(auto x: *lines)
	{
		os << x+1 << " "
		   << (*p_file)[7]
		   << std::endl;
	}
}

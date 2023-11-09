#include<iostream>
#include<map>
#include<fstream>
#include<string>
#include<algorithm>
#include<sstream>
#include<stdexcept>
using namespace std;

map<string, string> buildMap(ifstream& map_file)
{
	map<string, string> trans_map;
	string key, value;
	while(map_file >> key && 
		  map_file >> value)
	{
		if (!value.empty() && !key.empty())
		{
			trans_map[key] = value;
		}
		else
			throw runtime_error("file no value");
	}

	return trans_map;
}

const string& tranform(const string& s,
		const map<string, string>& m)
{
	auto ptr = m.find(s);
	if(ptr == m.cend())
		return s;
	return ptr->second;
}

int main()
{
	ifstream inFile("map_file");
	auto trans_map = buildMap(inFile);
	string text,word;
	getline(cin, text);
	istringstream issm(text);

	while(issm >> word)
	{
		cout << tranform(word, trans_map) << " ";
	}
	cout << endl;
}

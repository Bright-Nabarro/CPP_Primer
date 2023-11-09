#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
#include<fstream>
#include<iterator>
using namespace std;

int main()
{
	ifstream inFile("source.txt");
	if(!inFile.is_open())
	{
		cerr << "cannot open the file\n";
		exit(1);
	}
	
	vector<string> vstr;
	string temp;
	while(inFile >> temp)
		vstr.push_back(std::move(temp));

	int count;
	for(int len=1; len <= 15; len++)
	{
		count = count_if(vstr.begin(), vstr.end(),
				[len](const string& a){ return a.size() == len;});
		cout << "lenth " << len << ": " << count << endl;
	}
}

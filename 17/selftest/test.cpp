#include<iostream>
#include<regex>
using namespace std;

int main()
{
	regex r("\\d\\d\\d");
	string t;
	cin >> t;
	smatch result;
	regex_search(t, result, r);
	cout << result.str() << endl;
}

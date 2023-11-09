#include<iostream>
#include<string>
using namespace std;

void pluspp(string& s, string add = "+++")
{
	s.insert(s.begin(), add.begin(), add.end());
	s.append(add);
}

int main()
{
	string result("bsd");
	pluspp(result);
	cout << result << endl;
}

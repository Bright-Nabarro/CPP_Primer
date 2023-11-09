#include<string>
#include<iostream>
#include<algorithm>
#include<iterator>
using namespace std;

int main()
{
	auto can_reverse = [](string a){
	string reverse;
	copy(a.rbegin(),a.rend(),back_inserter(reverse));
	return reverse == a;
	};

	string a("aba");
	string b("abc");
	cout << boolalpha << can_reverse(a) << endl
		 << boolalpha << can_reverse(b) << endl;
}

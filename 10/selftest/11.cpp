#include<string>
#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	string c("asdlkgfjdsljflk;dsjfdslkdfgjhfosdgufiodsuosdf");
	cout << count(c.begin(),c.end(),'a') << endl;
}

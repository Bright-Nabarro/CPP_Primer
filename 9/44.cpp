#include<string>
#include<iostream>
using namespace std;

void replaceM(string& s, const string& oldVal, const string& newVal)
{
	auto oSize = oldVal.size();
	auto nSize = newVal.size();
	for(int i = 0; i < s.size(); i++)
	{
		if(oldVal[0] == s[i])
		{
			bool is_equal = true;
			int temp = i;
			for(int j = 0; j < oSize; j++,temp++)
			{
				if(s[temp] != oldVal[j])
				{
					is_equal = false;
					break;
				}
			}
			if(is_equal)
			{
				s.replace(i, oSize, newVal);
				i += nSize;
			}
		}
	}
}

int main()
{
	string result("hello hello world");
	replaceM(result,"hello","hello hello hello c++");
	cout << result << endl;

}

#include<iostream>
#include<string>
using namespace std;
void replaceM(string& s, const string& oldVal, const string& newVal)
{
	for(auto sptr = s.begin(); sptr!= s.end(); sptr++)
	{
		if(*sptr == oldVal[0])
		{
			bool is_equal = true;
			auto optr = oldVal.begin();
			auto tempPtr = sptr;
			for(; optr != oldVal.end(); optr++,tempPtr++)
			{
				if(*optr != *tempPtr)
				{
					is_equal = false;
					break;
				}
			}
			if(is_equal)
			{
				tempPtr = s.erase(sptr,sptr+oldVal.size());
				sptr = s.insert(tempPtr,newVal.begin(),newVal.end());
				sptr += newVal.size() -2;
			}
		}
	}
}

int main()
{
	string result("hello world!");
	replaceM(result,"hello","hello hello hello c++");
	cout << result << endl;
}

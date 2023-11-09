#include<iostream>
#include<vector>
#include<list>
#include<iterator>
using namespace std;
int main()
{
	int ia[] = {0,1,1,2,3,5,8,13,21,55,99};
	vector<int> iv;
	list<int> il;
	iv.assign(ia,ia+sizeof(ia)/sizeof(ia[0]));
	il.assign(ia,ia+sizeof(ia)/sizeof(ia[0]));
	vector<int>::iterator vptr = iv.begin();
	list<int>::iterator lptr = il.begin();
	while(vptr != iv.end())
	{
		if (*vptr % 2 == 1)
		{
			vptr = iv.erase(vptr);
		}
		else
			vptr++;
	}
	while(lptr != il.end())
	{
		if (*lptr % 2 == 0)
		{
			lptr = il.erase(lptr);
		}
		else
			lptr++;
	}
	copy(iv.begin(),iv.end(),ostream_iterator<int>(cout," "));
	cout << endl;
	copy(il.begin(),il.end(),ostream_iterator<int>(cout," "));
	cout << endl;
}

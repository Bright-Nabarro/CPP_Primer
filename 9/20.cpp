#include<list>
#include<iostream>
#include<deque>
#include<cstdlib>
#include<ctime>
#include<iterator>
#include<vector>
using namespace std;
int main()
{
	srand(time(0));
	vector<int> li;
	for(int i = 0; i < 100; i++)
	{
		li.push_back(rand()%100);
		cout << li[i] << " ";
		if (i % 10 == 0 && i != 0)
		{
			cout << endl;
		}
	}
	deque<int> evenque, oddque;
	vector<int>::iterator itr ;
	for(itr = li.begin(); itr != li.end(); itr++)
	{
		if (*itr % 2 == 0)
			evenque.push_back(*itr);
		else
			oddque.push_back(*itr);
	}
	int i = 0;
	cout << endl << endl;
	for(auto x: evenque)
	{
		cout << x << " ";
		i++;
		if(i%10 == 0 && i != 0)
			cout << endl;
	}
	cout << endl << endl;
	for(auto x: oddque)
	{
		cout << x << " ";
		i++;
		if(i%10 == 0 && i != 0)
			cout << endl;
	}	
}

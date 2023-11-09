#include<iostream>
#include<vector>
#include<iomanip>
using namespace std;

int main()
{
	int s;
	cin >> s;
	int* sizeA = new int[s];
	int* capA = new int[s];
	vector<int> v;
	sizeA[0] = v.size();
	capA[0] = v.capacity();
	for(int i = 1; i < s; i++)
	{
		v.push_back(i);
		sizeA[i] = v.size();
		capA[i] = v.capacity();
	}

	cout << setw(10) << left << "size:";
	for(int i = 0; i < s; i++)
	{
		cout << setw(s/10+1) << sizeA[i];
	}
	cout << endl;
	cout << setw(10) << left << "capacity:";
	for(int i = 0; i < s; i++)
	{
		cout << setw(s/10+1) << capA[i];
	}
	delete[] sizeA;
	delete[] capA;
}

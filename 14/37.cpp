#include<iostream>
#include<vector>
#include<cstdlib>
#include<ctime>
#include<iomanip>
#include<algorithm>
using namespace std;

class BigerThanN
{
private:
	int n;
public:
	BigerThanN(int n): n(n){}
	bool operator()(int size){ return size > n; }
};

int main()
{
	srand(time(0));
	vector<int> vi(20);
	for(auto& x: vi)
	{
		x = rand() % 150;
		cout << setw(4) << left << x;
	}
	cout << endl;
	vi.erase(remove_if(vi.begin(), vi.end(), BigerThanN(100)), vi.end());
	for(auto& x: vi)
	{
		cout << setw(4) << left << x;
	}
	cout << endl;
}

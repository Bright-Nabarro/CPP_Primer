#include<vector>
#include<iterator>
#include<cstdlib>
#include<ctime>
#include<iostream>
using namespace std;

void spiltOddEven(vector<int>& nums)
{
	int left = 0;
	int right = nums.size() - 1;

	while(left<right)
	{
		if(nums[left]%2 == 1 && nums[right]%2 == 0)
		{
			left++;
			right--;
			continue;
		}
		else if(nums[left]%2 == 0 && nums[right]%2 == 1)
			swap(nums[left++],nums[right++]);
		else if(nums[left]%2 == 0 && nums[right]%2 == 0)
		{
			swap(nums[left],nums[right-1]);
			right -= 2;
		}
		else if(nums[left]%2 == 1 && nums[right]%2 == 1)
		{
			swap(nums[left+1],nums[right]);
			left += 2;
		}
	}
}

int main()
{
	vector<int> iv;
	srand(time(0));
	for(int i = 0; i < 11; i++)
		iv.push_back(rand()%10);
	copy(iv.begin(),iv.end(),ostream_iterator<int>(cout," "));
	cout << endl;
	spiltOddEven(iv);
	for(auto x: iv) cout << x << " ";
	cout << endl;
}

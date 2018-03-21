#include <iostream>
#include <vector>
using namespace std;


void print(std::vector<int> vec)
{
	for(int i: vec)
		cout<<i<<" ";
	cout<<endl;
}

void merge(std::vector<int> &nums, std::vector<int> left, std::vector<int> right)
{
	int i = 0, j = 0, k = 0;

	while(i < left.size() &&  j < right.size())
	{
		if(left[i] <= right[j])
		{
			nums[k++] =left[i++];
		}
		else
		{
			nums[k++] = right[j++];
		}
	}
	while(i < left.size())
	{
		nums[k++] = left[i++];
	}
	while(j < right.size())
	{
		nums[k++] = right[j++];
	}
}

void mergeSort(vector<int> &nums)
{
	int n = nums.size();
	if(n < 2) return;
	int mid = n/2;
	vector<int> left(&nums[0], &nums[mid]);
	vector<int> right(&nums[mid], &nums[n]);
	mergeSort(left);
	mergeSort(right);
	merge(nums, left, right);
}

int main() {
	vector<int>  nums = {2,4,1,6,8,5,3,7};
	cout<<"Before Sort: ";
	print(nums);
	mergeSort(nums);
	cout<<"After Sort: ";
	print(nums);
	return 0;
}
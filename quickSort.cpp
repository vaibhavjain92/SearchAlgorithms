#include <iostream>
#include <vector>
using namespace std;


void print(std::vector<int> vec)
{
	for(int i: vec)
		cout<<i<<" ";
	cout<<endl;
}

int partition(std::vector<int> &nums, int low, int high)
{
	int pInd = low;
	int pivot = high;
	for(int i = low; i < high; i++)
	{
		if(nums[i] <= nums[pivot])
		{
			swap(nums[i], nums[pInd]);
			pInd++;
		}
	}
	swap(nums[pInd], nums[pivot]);
	return pInd;

}

void quickSort(std::vector<int> &nums, int low, int high)
{
	if(low < high)
	{
		int pInd = partition(nums, low, high);
		quickSort(nums, low, pInd -1);
		quickSort(nums, pInd+1, high);
	}
}

int main() {
	vector<int>  input = {7, 2,1, 6,8,5,3, 4};
	int n  = input.size();
	cout<<"Before Sort: ";
	print(input);
	quickSort(input, 0, n-1);
	cout<<"After Sort: ";
	print(input);
	return 0;
}
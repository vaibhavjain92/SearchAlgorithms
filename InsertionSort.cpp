#include <iostream>
#include <vector>
using namespace std;

void print(std::vector<int> vec)
{
	for(int i: vec)
		cout<<i<<" ";
	cout<<endl;
}

void insertionSort(vector<int> &nums, int n)
{
	for(int i = 1; i < n; i++)
	{
		int x = nums[i];
		int j = i-1		;
		while(j >=0  && nums[j]>x)
		{
			nums[j+1] = nums[j--];
		}
		nums[j+1] = x;
	}
}

int main() {
	vector<int>  input = {8, 7,6,5,4,3,2, 1};
	int n  = input.size();
	cout<<"Before Sort: ";
	print(input, n);
	insertionSort(input, n);
	cout<<"After Sort: ";
	print(input, n);
	return 0;
}
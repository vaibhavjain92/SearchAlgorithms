#include <iostream>
#include <vector>
using namespace std;

void bubbleSort(vector<int> &nums, int n)
{
	int flag  = 0;
	for(int i = 0; i < n-1; i++)
	{
		for(int j = 0; j < n-i-1; j++)
		{
			if(nums[j+1] < nums[j])
			{
				flag = 1;
				swap(nums[j+1], nums[j]);
			}
		}
		if(flag == 0)
			return;
	}
}
void print(std::vector<int> vec, int n)
{
	for(int i: vec)
		cout<<i<<" ";
	cout<<endl;
}
int main() {
	vector<int>  input = {8, 7,6,5,4,3,1};
	int n  = input.size();
	cout<<"Before Sort: ";
	print(input, n);
	bubbleSort(input, n);
	cout<<"After Sort: ";
	print(input, n);
	return 0;
}
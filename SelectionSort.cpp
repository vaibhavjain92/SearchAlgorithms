#include <iostream>
#include <vector>
using namespace std;

void swap(int &a, int &b)
{
	int temp = a;
	a = b;
	b = temp;
}

void selectionSort(vector<int> &input, int n)
{
	if(n == 0) return;
	for(int i = 0; i < n-1; i++)
	{
		for(int j = i+1; j < n; j++)
		{
			if( input[j] < input[i])
				swap(input[i], input[j]);
		}
	}
}
void print(std::vector<int> vec, int n)
{
	for(int i: vec)
		cout<<i<<" ";
	cout<<endl;
}
int main() {
	vector<int>  input = {2,7,4,1,5,3};
	int n  = input.size();
	cout<<"Before Sort: ";
	print(input, n);
	selectionSort(input, n);
	cout<<"After Sort: ";
	print(input, n);
	return 0;
}
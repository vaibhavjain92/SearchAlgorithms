// BinarySearchAlgo.cpp : Defines the entry point for the console application.
//
// Implementing BinarySearch algorithm 
#include "stdafx.h"
#include<iostream>
using namespace std;

/*Function to implement binary search to find an element in a sorted array*/
int binarySearch(int arr[], int size, int num)
{
	int low = 0, high = size - 1;
	
	while (low < high)
	{
		int mid = (low + high) / 2;
		if (arr[low] == num) 
			return low;
		if (arr[high] == num)
			return high;
		if (arr[mid] == num)
			return mid;
		
		if (num < arr[mid])
			high = mid - 1;
		else if (num > arr[mid])
			low = mid + 1;
	}
	return -1;
}
int main()
{
	int arr[] = { 2, 3, 4, 10, 40 };
	int n = sizeof(arr) / sizeof(arr[0]);
	int x = 10;
	int result = binarySearch(arr, n, x);
	(result == -1) ? printf("Element is not present in array \n")
		: printf("Element is present at index %d \n",
			result);
    return 0;
}


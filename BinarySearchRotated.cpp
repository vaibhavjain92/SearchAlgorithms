// BinarySearchRotated.cpp : Defines the entry point for the console application.
// By: Vaibhav Jain
// Implementing binary search in a sorted and rotated array to find an element
#include "stdafx.h"
#include<iostream>
using namespace std;

/*Function to find an element in a sorted and rotated array with Binary Search*/
// Same concept low high and mid, focus on the part which is sorted
int binarySearchRotated(int arr[], int size, int elem)
{
	int low = 0, high = size - 1;
	
	while (low < high)
	{
		if (elem == arr[low])
			return low;
		else if (elem == arr[high])
			return high;
		else
		{
			int mid = (low + high) / 2;
			if (elem == arr[mid])
				return mid;
			// check if the middle element is higher than the low
			// which  means left half is sorted
			if (arr[mid] > arr[low]) //left hald sorted
			{
				//check if element is in the sorted half
				if (elem < arr[mid] && elem >= arr[low])
				{
					high = mid - 1;
				}
				else
					low = mid + 1;
			}
			// check if right half is sorted
			if (arr[mid] < arr[high]) // right half is sorted
			{
				//check if element is in the sorted half
				if (elem > arr[mid] && elem <= arr[high])
					low = mid + 1;
				else 
					high = mid - 1;
			}
		}
	}
	return -1; // if element was not found return -1
}

int main()
{
	int arr[] = { 4, 5, 6, 7, 8, 9, 1, 2, 3 };
	int n = sizeof(arr) / sizeof(arr[0]);
	int key = 6;
	int i = binarySearchRotated(arr, n, key);
	if (i != -1) cout << "Index: " << i << endl;
	else cout << "Key not found \n";
    return 0;
}


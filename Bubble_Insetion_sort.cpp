// BubbleSort.cpp : Defines the entry point for the console application.
// By: Vaibhav Jain
// The bubble sort element goes through the array and swap the adjacent elements 
// if right element is smaller than left element, they will be swapped
// Functions required: swap and bubbleSort

#include "stdafx.h"
#include<iostream>
using namespace std;

/*Function to swap two elements*/
void swap(int &a, int &b)
{
	int temp = a;
	a = b;
	b = temp;
}

/* Function to perform bubble sort*/
void bubbleSort(int arr[], int size)
{
	int flag = 0;
	int count = 0;
	for(int i = 0; i , size-1; i++)
	{
		count++;
		flag = 0;
		for (int j = 0; j < size - i - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				flag = 1;
				swap(arr[j], arr[j + 1]);
			}
		}
		if (flag == 0)
			break;
	}
	cout << "Sorting completed in " << count <<" iterations!"<< endl;
	//return arr;
}

/*Function to sort an array using insertion sort*/
void insertionSort(int arr[], int size)
{
	for (int i = 1; i < size; i++)
	{
		int key = arr[i];
		int j = i - 1;
		while (j >= 0 && key < arr[j])
		{
			arr[j + 1] = arr[j];
			j--;
		}
		arr[j + 1] = key;
	}
}

/*Functionto print the elements of the array*/
void printArray(int *arr, int size)
{
	for(int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}

int main()
{
	//int arr[] = { 3,8,5,9,1,6,2 };
	int arr[] = { 9,8,7,6,5,4,2 };
	//int arr[] = { 1,2,3,4,5,7,6 };
	int size = sizeof(arr) / sizeof(arr[0]);
	cout << "Size of array: "<<size << endl;
	printArray(arr, size);
	//bubbleSort(arr, size);
	insertionSort(arr, size);
	printArray(arr, size);
    return 0;
}


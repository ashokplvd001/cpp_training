/*
Description : You are given an array A of positive integers. Your task is to find and print all the leaders in the array.

			An element is considered a leader if it is greater than all elements to its right. The rightmost element is always considered a leader.

			Return the list of leaders in the same order as they appear from right to left in the original array.


Auther : Ashok Giddaluru ( 293950 )
Date of Creation : 2-5-24
DAte of modification : 2-5--24
Vesrion : 0.1
*/


#include <iostream>

using namespace std;	// using name space to use "cout" and "cin" 

void reverseSubArray(int*, int , int);
void printArray(int*, int);

#define SIZE 150

int main()
{
	int arr[SIZE];
	int size = 0, subArraySize = 0;
	cin >> size;

	for (int i = 0; i < size; i++)
	{
		//	cout << "Enter the " << i << "th index element : ";
		cin >> arr[i];
	}

	cin >> subArraySize;

	reverseSubArray( arr , size , subArraySize );
	printArray(arr, size);
}

void printArray(int* arr, int size)
{

	for (int i = 0;i < size; i++)
		cout << arr[i] << ' ';
}

void reverseSubArray(int* arr , int size , int subArraySize)
{	
	int i = 0, j = 0, temp = 0;
	for ( i = 0  ; i < size / subArraySize; i++)
	{
		for ( j = 0; j < subArraySize / 2; j++)
		{
			temp = arr[i + (subArraySize - j - 1)];
			arr[i + (subArraySize - j - 1)] = arr[i + j];
			arr[i + j] = temp;
		}
	}



	for (j =0 , i = size - (size % SubArrySize) - 1 ; i < size; i++ , j++ )
	{
		temp = arr[i]; 
		arr[i] = arr[size - i - j];
		arr[size - i - j] = arr[i];
	}


} 
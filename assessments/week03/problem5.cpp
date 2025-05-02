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

void printLeaders(int*, int);

#define SIZE 30 

int main()
{
	int arr[SIZE];
	int size;
	cin >> size;

	for (int i = 0; i < size; i++)
	{
		//	cout << "Enter the " << i << "th index element : ";
		cin >> arr[i];
	}

	printLeaders(arr, size);
	

}

void printLeaders(int* arr, int size)
{
	int leader = arr[size - 1] - 1;

	for (int i = size - 1; i >= 0; i--)
	{
		if (arr[i] > leader)
		{
			cout << arr[i] << ' ';
			leader = arr[i];
		}
	}

}



/*
INPUT : 
5
2 6 3 8 4


OUTPUT : 
4 8


*/
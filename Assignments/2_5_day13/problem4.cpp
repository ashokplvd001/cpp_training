/*
Description : You are given an array A of N positive or negative integers. Your task is to find the first equilibrium position in the array.

			An equilibrium position is an index i such that the sum of elements before index i is equal to the sum of elements after index i.

			Return the first equilibrium index (0-based indexing). If no such index exists, return -1.
Auther : Ashok Giddaluru ( 293950 )
Date of Creation : 2-5-24
DAte of modification : 2-5--24
Vesrion : 0.1
*/


#include <iostream>

using namespace std;	// using name space to use "cout" and "cin" 

int checkIndex(int*, int);
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

	int index = checkIndex(arr, size);

	cout << index << endl;


}
int checkIndex(int* arr, int size)
{
	int left = 0, right = 0;

	for (int i = 0; i < size; i++)
	{
		right += arr[i];
	}

	for (int i = 0; i < size; i++)
	{
		right -= arr[i];
		if (left == right)
			return i;

		left += arr[i];
	}

	return -1;

}

/*
INPUT :
5
3 1 5 2 2

OUTPUT :
2


*/
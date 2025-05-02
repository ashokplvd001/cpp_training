/*
Description : You are given an array A of size N containing positive integers. For each element in the array, 
			count the number of elements to its right that are smaller than the current element.
			Your task is to compute and print a list of counts corresponding to each element.
Auther : Ashok Giddaluru ( 293950 )
Date of Creation : 2-5-24
DAte of modification : 2-5--24
Vesrion : 0.1
*/


#include <iostream>

using namespace std;	// using name space to use "cout" and "cin" 

void checkAndPrint(int*, int);
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

	checkAndPrint(arr, size);

}

void checkAndPrint(int* arr, int size)
{
	int count = 0;

	for (int i = 0;i < size; i++)
	{
		count = 0;
		for (int j = i + 1; j < size; j++)
		{
		//	cout << arr[i] << ',' << arr[j] << endl;
			if (arr[i] > arr[j])
				count++;
		}
		cout << count << ' ';
	}
	cout << endl;
}


/*
INPUT :
4
4 4 2 1

OUTPUT :
2 2 1 0
*/
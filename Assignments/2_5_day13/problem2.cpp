/*
Description : You are given a sorted array A of size N containing integers. Every element in the array appears exactly twice, except for one element that appears only once.
				Your task is to find and print that unique element.
Auther : Ashok Giddaluru ( 293950 )
Date of Creation : 2-5-24
DAte of modification : 2-5--24
Vesrion : 0.1
*/


#include <iostream>

using namespace std;	// using name space to use "cout" and "cin" 

#define SIZE 30
int findValue(int*, int);

int main()
{

	int arr[SIZE];

	int size;
	//cout << "Enter the array size : ";
	cin >> size;

	for (int i = 0; i < size; i++)
	{
		//	cout << "Enter the " << i << "th index element : ";
		cin >> arr[i];
	}

	int result = findValue(arr, size);
	cout << result << endl;

}

int findValue(int* arr, int size)
{
	int sum = 0 ;

	for (int i = 0; i < size; i++)
		sum = sum ^ arr[i];

	return sum;
}

/*
INPUT :
7
3 3 4 4 5 5 7

OUTPUT :
7


*/
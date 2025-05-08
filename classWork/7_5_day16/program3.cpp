#include <iostream>

using namespace std; 

#define MAX 50 
void program3()
{
	int arr[MAX] = { 0 };

	int size; 
	cout << "Enter the size of array : ";
	cin >> size;


	for (int i = 0; i < size ; i++)
	{
		cout << "Enter element : ";
		cin >> arr[i];
	}

	int j = 0,i= 0 ; 

	for ( i = 0; i < size-1; i++)
	{
		if (arr[i] != arr[i + 1])
			arr[j++] = arr[i];
	}

	if( arr[i] != arr[i-1])
		arr[j++] = arr[i];

	size = j; 

	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << ' ';
	}


}
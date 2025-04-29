#include <iostream>

using namespace std;

#define SIZE 6
void arrayFun8()
{
	int arr[SIZE];
	
	for (int i = 0; i < SIZE; i++)
	{
		cout << "Enter the " << i << "th number : ";
		cin >> arr[i];
	}

	int greater = 0; 
	cout << arr[i] << " ";

	for (int i = SIZE -1 ; i >= 0 ; i--)
	{
		if (arr[i] > greater)
		{
			cout << arr[i] << " ";
			greater = arr[i];
		}
	}
	cout << endl;

}
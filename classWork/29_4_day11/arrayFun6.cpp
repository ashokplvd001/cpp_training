#ifdef _INTELLISENSE__
pragma diag_suppress 28
#endif

#include <iostream>
using namespace std; 

#define SIZE 8

void arrayFun6()
{
	/*
	int size;

	cout << "Enter the size : " ;
	cin >> size; 
	*/

	int arr[SIZE];

	for (int i = 0; i < SIZE; i++)
	{
		cout << "Enter " << i << "th number ";
		cin >> arr[i];
	}

	int sumValue,sum;
	cout << "Enter the sumValue : "  ;
	cin >> sumValue ;

	int i , j;

	for ( i = 0; i < SIZE; i++)
	{
		sum = 0;
		for ( j = i; j < SIZE; j++)
		{
			sum = sum + arr[j];
			if (sum >= sumValue)
				break;
		}
		if (sum == sumValue)
			break;
	}

	if (sum == sumValue)
		cout << "from index " << i << " to " << j << endl;
	else
		cout << "no sub array found\n";



}
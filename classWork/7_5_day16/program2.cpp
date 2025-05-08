#include <iostream>

using namespace std; 

void program2()
{
	int arr[6] = { 0 } ;

	for (int i = 0; i < 6; i++)
	{
		cout << "Enter element : ";
		cin >> arr[i];
	}

	int ss = INT_MAX, sf = INT_MAX; 


	for (int i = 1; i < 6; i++)
	{
		if (ss > arr[i])
		{
			if (sf > arr[i])
			{
				ss = sf;
				sf = arr[i];
			}
			else if (sf < arr[i])
				ss = arr[i];
		}
	}

	/*

	int ss = arr[0], sf = arr[0];

	if (arr[0] > arr[1])
	{
		ss = arr[0];
		sf = arr[1];
	}
	else if ( arr[0] < arr[1])
	{
		sf = arr[0];
		ss = arr[1];
	}
	else
	{
		for (int i = 2; i < 6; i++)
		{
			if (arr[0] != arr[i])
			{
				if (arr[0] > arr[i])
				{
					ss = arr[0];
					sf = arr[i];
				}
				else
				{
					sf = arr[0];
					ss = arr[i];
				}

			}
		}
	}
	

	for (int i = 1; i < 6; i++)
	{
		if (ss > arr[i])
		{
			if (sf > arr[i])
			{
				ss = sf;
				sf = arr[i];
			}
			else if( sf < arr[i])
				ss = arr[i];
		}
	}
	*/

	cout << "second lowest : " << ss << endl;


}
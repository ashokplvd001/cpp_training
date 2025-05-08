#include <iostream>

using namespace std; 

void program1()
{
	int arr[6];

	for (int i = 0; i < 6; i++)
	{
		cout << "Enter element : ";
		cin >> arr[i];
	}
	int max = arr[0], min = arr[0];
	
	for (int i = 1; i < 6; i++)
	{
		if (max < arr[i])
			max = arr[i];
		else if (min > arr[i])
			min = arr[i];
	}

	cout << "min : " << min << endl;
	cout << "max : " << max << endl;


}
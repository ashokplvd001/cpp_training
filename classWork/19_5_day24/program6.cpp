#include <iostream>

using namespace std; 

void program6()
{
	int rows = 3, cols = 4;

	int** arr = new int* [rows];

	for (int i = 0; i < rows; i++)
		*(arr + i) = new int[cols];


	cout << "Enter the values : ";
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
			cin >> arr[i][j];
	}

	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
			cout << arr[i][j] <<'\t' ;
		cout << endl; 
	}

	for (int i = 0; i < rows; i++)
	{
		delete[] arr[i];
	}
	delete[] arr;

}
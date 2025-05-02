#include <iostream>

using namespace std;

#define ROW1 4 
#define COL1 2
#define ROW2 2
#define COL2 3

void array2DmatrixMul()
{
	int arr1[ROW1][COL1] = {1 , 2, 3 , 4, 5, 6, 7 , 8 };
	int arr2[ROW2][COL2] = { 11,12,13,14,15,16 };

	int res[ROW1][COL2] = { 0 };

	if (COL1 != ROW2)
	{
		cout << "Invalid matrix multiplication\n";
		return; 
	}


	for (int i = 0 , sum ; i < ROW1 ; i++)
	{
		for (int j = 0; j < COL2 ; j++)
		{
			sum = 0; 
			for (int k = 0; k < COL1 ; k++)
				sum += arr1[i][k] * arr2[k][j];

			res[i][j] = sum;
		}
	}


	for (int i = 0; i < ROW1 ; i++)
	{
		for (int j = 0; j < COL1; j++)	// to access items in array
		{
			
			cout << arr1[i][j] << '\t';
			
		}
		cout << endl;
	}
	cout << "============================\n";

	for (int i = 0; i < ROW2; i++)
	{
		for (int j = 0; j < COL2; j++)	// to access items in array
		{

			cout << arr2[i][j] << '\t';

		}
		cout << endl;
	}
	cout << "============================\n";


	for (int i = 0; i < ROW1 ; i++)
	{
		for (int j = 0; j < COL2 ; j++)	// to access items in array
		{

			cout << res[i][j] << '\t';

		}
		cout << endl;
	}
	cout << "============================\n";



}
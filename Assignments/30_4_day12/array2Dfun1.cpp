#include <iostream>

using namespace std; 

#define ROW 3 
#define COL 3 
extern int tempsize;
void array2Dfun1()
{
	// int arr[1][3]; or arr[3] both same , bcz only one row 

	int arr[ROW][COL] = {{ 10 , 20 , 30 }, { 40 , 50 , 60 }, { 70 , 80 , 90 }};
	int arr1[ROW][COL] = { 10,20,30,40,50,60,70,80,90 };
	int arr2[ROW][COL] = { 0, } ;
	//int temp[tempsize];

	int count = 0;

	for (int i = 0; i < ROW; i++)
	{
		for (int j = 0; j < COL; j++)	// to access items in array
		{
			cout << count++ << " -> ";
 			cout << arr[i][j] <<'\t';
			cout << "address of["<<i<<"]["<<j<<"] -> " << (long long int) & arr[i][j] << endl;
		}
	}

	cout << "===========================================\n";
	count = 0; 
	for (int i = 0 ; i < ROW; i++)
	{
		for (int j = 0; j < COL; j++)	// to access items in array
		{
			cout << count++ << " -> ";
			cout << arr1[i][j] << '\t';
			cout << "address of[" << i << "][" << j << "] -> " << (long long int) & arr1[i][j] << endl;
		}
	}
	cout << "===========================================\n";

	count = 0; 
	for (int i = 0; i < ROW; i++)
	{
		for (int j = 0; j < COL; j++)	// to access items in array
		{
			cout << "Enter the " << count++ << "item value : ";
				cin >> arr2[i][j];
		}
	}
	count = 0;
	for (int i = 0; i < ROW; i++)
	{
		for (int j = 0; j < COL; j++)	// to access items in array
		{
			cout << count++ << " -> ";
			cout << arr2[i][j] << '\t';
			cout << "address of[" << i << "][" << j << "] -> " << (long long int) & arr2[i][j] << endl;
		}
	}

}
#include <iostream>

using namespace std; 

#define ROW 3 
#define COL 5 

void program1()
{
	int arr[3][5]{ 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15 };


	for (int i = 0; i < ROW; i++)
	{
		for (int j = 0; j < COL; j++)
		{
			cout << "&arr[" << i << "][" << j << "] = " << (unsigned long long int) &arr[i][j] << endl;
		
			
			//	cout << arr + (i * COL + j ) << endl; 
		//	cout <<  ( unsigned long long int ) ( arr + ((i * COL + j) )  << endl;
		
		}
	}
}


/* 
To get the address of each index in 2d array  
= Base address + ( ( presentRowIndex * ColSize ) + presentCol ) * sizeof( dt ) 
*/
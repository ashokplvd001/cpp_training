#include <iostream>

using namespace std;

#define ROW 4
#define COL 4 

void array2Dfun3()
{
	
	int arr[ROW][COL];
	int count = 0; 

	for (int i = 0; i < ROW; i++)
	{
		for (int j = 0; j < COL; j++)	// to access items in array
		{
			cout << "Enter the " << count++ << "item value : ";
			cin >> arr[i][j];
		}
	}

	int rowSum[ROW] = { 0, };
	int colSum[COL] = { 0 , };
	int d1 = 0; 
	int d2 = 0; 

	for (int i = 0; i < ROW; i++)
	{
		for (int j = 0; j < COL; j++)
		{
			rowSum[i] += arr[i][j];
			colSum[i] += arr[j][i];
		}
		d1 += arr[i][i];
		d2 += arr[i][(ROW - 1)-i];
	}

	int flag = 0;

	cout << "d1 = " << d1 << endl;
	cout << "d2 = " << d2 << endl;

	if (d1 == d2)
	{
		int i = 0;
		for (i = 0; i < ROW; i++)
		{
			cout << "rowSum[" << i << "] = " << rowSum[i] << endl;
			cout << "colSum[" << i << "] = " << colSum[i] << endl;
			if (!(rowSum[i] == d1 && colSum[i] == d1))
				break;

		}

		if (i == ROW)
			flag = 1;
	}
	
	if (flag == 1)
	{
		cout << "It is a Magic Square!\n";
	}
	else
	{
		cout << "It is not a Magic Square!\n";
	}


	
}
#ifdef _INTELLISENSE__
	pragma diag_suppress 28
#endif



#include <iostream>

using namespace std;

//#define SIZE 11 

void arrayFun5()
{
	int arr[] = { 12, 23 , 45 , 34 , 26 , 63 , 65 , 37 , 54 ,23 , 46 };

	int i, countOdd, countEven;
	/*
	//constexpr int temp = countOdd + countEven;
	//constexpr int temp = sizeof( arr) / sizeof( arr[0] );
	int arrTemp[temp];
	cout << "size of temp = " << temp << endl;
	*/

	constexpr int noElems = sizeof(arr) / sizeof(arr[0]);

	//int outputArr[noElems];

	int outputArr[noElems];

	int index1 = 0;
	int index2 = noElems - 1;

	/*
	for (int i = 0; i < noElems ; i++)
	{
		if( arr[i] %2 )
			outputArr[index1++] = arr[i] ;
		else
			outputArr[index2--] = arr[i];

	}
	*/

	int index = 0;

	for (int i = 0; i < noElems; i++)
	{
		if (arr[i] % 2)
			arr[index++] = i + 10;
	}

	for (int i = 0; i < noElems; i++)
	{
		if (arr[i] % 2 == 0)
		arr[index++] = i + 10;
	}

	 


	for (int i = 0; i < noElems ; i++)
		cout << arr[i] << ',';
	cout <<endl ;

	for (int i = 0; i < noElems ; i++)
		cout << outputArr[i] << ',';

	cout <<endl;
}
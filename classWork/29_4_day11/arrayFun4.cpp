#include <iostream>

using namespace std; 

#define SIZE 9
void arrayFun4()
{
	int arr[SIZE];
/*
	for (int i = 0 ; i < SIZE; i++)
	{
		if (i % 2 == 0)
			arr[SIZE / 2 + i / 2 ] = i+10;
		else
			arr[i / 2 ] = i+10;
	}
	*/
	int index = 0;

	for (int i = 1; i < SIZE; i += 2)
		arr[index++] = i + 10 ;

	for (int i = 0 ; i < SIZE; i += 2)
		arr[index++] = i+10 ;


	for (int i = 0; i < SIZE; i++)
		cout << arr[i] << ',';

	cout << endl;

}
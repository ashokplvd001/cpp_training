#include <iostream>
using namespace std; 

#define SIZE 10 

void readValues(int*, int);
void printValues(int*, int);
int findFun(int*, int, int);

void arrayFun3()
{
	int arr[ SIZE ] = { 0 };

	readValues(arr, SIZE );

	printValues(arr, SIZE);

	int num = 0; 
	cout << "Enter the number : ";
	cin >> num; 

	int ret = findFun(arr, SIZE, num);

	if (ret == -1)
		cout << "number not present in array\n";
	else
		cout << "The given number is present in index : " << ret<<endl;


}

void readValues(int* arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << "Enter the index"<<i << " value : ";
		cin >> arr[i] ;
	}
}

void printValues(int* arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << "Index[" << i << "] = " << arr[i] << endl;
	}
}

int findFun( int * arr, int size ,int  num)
{
	for (int i = 0; i < size; i++)
	{
		if (arr[i] == num)
			return i; 
	}
	return -1;
}
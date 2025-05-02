#include <iostream>

using namespace std; 

void display(int*, int);
void update(int*, int);

void arrayFun1()
{
	int arr[] = { 11 , 12, 13 ,14 };

	int size = sizeof(arr) / sizeof(arr[0]);
	display(arr, size);
	update(arr, 2);
	display(arr, size);


}

void update(int* arr, int index)
{
	arr[index] = 444;
}

void display(int* arr, int size)
{
	for (int i = 0; i < size; i++)
		cout << arr[i] << ' ';
	cout << endl;
}
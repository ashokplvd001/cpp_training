#include <iostream>

using namespace std; 

int sumArr(int * arr , int size )
{
	int sum = 0; 

	for (int i = 0; i < size; i++)
		sum += *(arr++) ;

	return sum; 

}

void program4()
{
	int arr[5];
	int n = sizeof(arr) / sizeof(arr[0]);
	cout << "Enter 5 elements : \n";
	for (int i = 0; i < n; i++)
		cin >> arr[i];

	cout << "Sum of the array elements : " << sumArr(arr, n) << endl;
}
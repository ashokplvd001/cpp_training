#include <iostream>

using namespace std; 
#define SIZE 7
int arrayFun7Fun(int* arr, int size);
void arrayFun7()
{
	int arr[SIZE];

	for (int i = 0; i < SIZE; i++)
	{
		cout << "Enter the " << i << "th number : ";
		cin >> arr[i];
	}

	int ret = arrayFun7Fun(arr, SIZE);

	if (ret == -1)
	{
		cout << "no equalibrium index\n";
	}
	else
	{
		cout << "index " << ret << " is qualibrium index\n";
	}

}

int arrayFun7Fun(int* arr, int size)
{
	int leftSum = 0, rightSum = 0;
	
	for (int i = 0; i < SIZE; i++)
		rightSum += arr[i];

	for (int i = 0; i < size; i++)
	{
		rightSum -= arr[i];

		if (leftSum == rightSum)
			return i;

		leftSum += arr[i];
	}
	return -1;
}
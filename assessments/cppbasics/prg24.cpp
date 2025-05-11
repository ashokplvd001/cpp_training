/*
Discription: 	Write a Program to Calculate the Sum of Elements in an Array
*/
#include <iostream>

using namespace std;

int main()
{
	int arr[5] = { 2 , 4 ,5 , 3 , 9 };
	int n = 5;

	int sum = 0;

	for (int i = 0; i < n; i++)
		sum += arr[i];

	cout << "sum = " << sum << endl;
}
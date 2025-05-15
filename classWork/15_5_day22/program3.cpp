#include <iostream>

using namespace std;

int* maxOfTwoUsingPointer(int* ptr1, int* ptr2);

void program3()
{
	int a , b ;

	cout << "Enter the two numbers : ";

	cin >> a >> b;


	int* ptr1 = &a, * ptr2 = &b; 

	cout << "Max number is " << *(maxOfTwoUsingPointer(ptr1, ptr2)) << endl;

}

int *  maxOfTwoUsingPointer(int* ptr1 , int* ptr2 )
{

	/*
	if (*ptr1 > *ptr2)
		return ptr1; 
	return ptr2; 

	*/

	return (*ptr1 > *ptr2 ? ptr1 : ptr2);

}

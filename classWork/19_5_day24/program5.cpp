#include <iostream>

using namespace std; 

void program5()
{
	int* ptr1 = new int;
	cout << "ptr = " << ptr1 << endl;
	cout << "*ptr = " << *ptr1 << endl;
	*ptr1 = 10; 
	cout << "*ptr = " << *ptr1 << endl;

	int* ptr2 = new int(5);
	cout << "ptr2 = " << *ptr2 << endl;
	cout << "*ptr2 = " << *ptr2 << endl;
	* ptr1 = * ptr1 + 100 ;
	cout << "*ptr2 = " << *ptr2 << endl;

	cout << "sizeof( *ptr1) : " << sizeof(*ptr1) << endl;

#define MAX 5 
	int* arr = new int[MAX];

	for( int i = 0 ; i < MAX ; i++ )
		cout << "arr[i] = " << arr[i] << endl;

	for (int i = 0; i < MAX; i++)
		cin >> arr[i] ;

	for (int i = 0; i < MAX; i++)
		cout << "arr[i] = " << arr[i] << endl;

	int* arr1 = new int[MAX] { 11, 12, 13, 14, 15};

	for (int i = 0; i < MAX; i++)
		cout << "arr1[i] = " << arr1[i] << endl;

	


	delete ptr1;
	//free(ptr1);
	free(ptr2);
	//delete[] arr;
	free(arr);
	delete[] arr1;

}
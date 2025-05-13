#include <iostream>

using namespace std; 

void program5()
{
	int a[3] = { 10, 20, 30 };

	int* ptr = a; 

	cout << *ptr++ << endl;
	cout << *++ptr << endl;		// this points to the next location // *++ptr increment the value in the location 
	cout << *ptr++ << endl;

	cout << sizeof(ptr) << " " << sizeof(void*) << endl;
}
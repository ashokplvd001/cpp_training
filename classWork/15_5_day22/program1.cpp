#include <iostream>

using namespace std; 

void program1()
{
	int* ptr = nullptr ; 
	//ptr = (void*)0; 
	ptr = (int*)0; 

	int a = 10; 
	cout << " a = " << a << endl;
	cout << "ptr = " << ptr << endl;
	cout << "&a = " << &a << endl;
	cout << "&prt " << &ptr << endl;

	ptr = &a; 
	cout << "ptr = " << ptr << endl;
	cout << "*ptr = " << *ptr << endl;

	*ptr = 100;
	cout << " a = " << a << endl;
	cout << "ptr = " << ptr << endl;
	cout << "*ptr = " << *ptr << endl;


} 
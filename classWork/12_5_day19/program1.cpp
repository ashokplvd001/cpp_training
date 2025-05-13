#include <iostream>

using namespace std;

void program1()
{
	char ch = 'A';
	int a = 10; 
	int b = 30; 
	float f = 10.5;

	void * ptr = nullptr ; 

	cout << "Address of ch = " <<  ( unsigned long long int) & ch << " and its value = " << ch << endl;
	cout << "Address of a = " << (unsigned long long int) &a << " and its value = " << a << endl;
	cout << "Address of b = " << (unsigned long long int) & b << " and its value = " << b << endl;
	cout << "Address of f = " << (unsigned long long int) &f << " and its value = " << f << endl;
	cout << "Address of ptr = " << (unsigned long long int) &ptr << " and its value = " << ptr << endl;

	ptr = &a; 

	cout << "Address of ptr = " << (unsigned long long int) &ptr << " and its value = " << (unsigned long long int)ptr << endl;
	cout << "value inside the address which is stored in ptr = " << *(( int * ) ptr) << endl;
	
	ptr = &b;

	cout << "Address of ptr = " << (unsigned long long int) & ptr << " and its value = " << (unsigned long long int)ptr << endl;
	cout << "value inside the address which is stored in ptr = " << *((int*)ptr) << endl;


}
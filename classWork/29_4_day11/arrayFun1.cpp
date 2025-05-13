#include <iostream>

using namespace std; 

void arrayFun1()
{

	int a;
	long long int b; 
	char c;
	short s;
	double d; 
	float f; 
	

	cout << "Address of int a  = " << (unsigned long long int) &a << endl;

	cout << "Address of long long int a  = " << (unsigned long long int) &b << endl;

	cout << "Address of double d  = " << (unsigned long long int) &d << endl;

	cout << "Address of float f  = " << (unsigned long long int) &f << endl;

	cout << "Address of short s   = " << (unsigned long long int) &s << endl;

	cout << "Address of char c  = " << ( unsigned long long int ) & c << endl;





	int arr[3];
	cout << "Cap/size of arr = " << sizeof(arr) << endl;

	cout << "Address of arr[0] = " << &arr[0] << endl;
	cout << "Address of arr[0] = " << ( unsigned int ) & arr[0] << endl;
	
	cout << "Address of arr[1] = " << &arr[1] << endl;
	cout << "Address of arr[1] = " << (unsigned int)&arr[1] << endl;

	cout << "Address of arr[2] = " << &arr[2] << endl;
	cout << "Address of arr[2] = " << (unsigned int)&arr[2] << endl;

}



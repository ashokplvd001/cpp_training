#include <iostream>

using namespace std; 

void arrayFun1()
{

	int a;
	long long int b; 
	char c;
	double d; 
	float f; 
	short s; 

	cout << "Address of int a  = " << &a << endl;

	cout << "Address of long long int a  = " << &b << endl;

	//cout << "Address of char c  = " << &c << endl;

	cout << "Address of double d  = " << &d << endl;

	cout << "Address of float f  = " << &f << endl;

	cout << "Address of short s   = " << &s << endl;




	int arr[3];
	cout << "Cap/size of arr = " << sizeof(arr) << endl;

	cout << "Address of arr[0] = " << &arr[0] << endl;
	cout << "Address of arr[0] = " << ( unsigned int ) & arr[0] << endl;
	
	cout << "Address of arr[1] = " << &arr[1] << endl;
	cout << "Address of arr[1] = " << (unsigned int)&arr[1] << endl;

	cout << "Address of arr[2] = " << &arr[2] << endl;
	cout << "Address of arr[2] = " << (unsigned int)&arr[2] << endl;
}



#include <iostream>

using namespace std;

static int add(int *, int*);
static int calculation(int*, int*);


void function2() //function which have example of pass by reference
{
	int a = 5, b = 32;
	int* ptr1 = &a, * ptr2 = &a;
	cout << "In actual funcgtion -> ptr1 = " << ptr1 << ", ptr2 = " << ptr2 << endl;
	int res = add(ptr1 , ptr2 );
	cout << "res = " << res << endl;
	cout << "a = "<<a << ", b = " << b << endl;
	res = calculation( ptr1 , ptr2 );
	cout << "res = " << res << endl;
	cout << "a = "<<a << ", b = " << b << endl;
}

static int add(int * ptr1 , int * ptr2 )
{
	cout << "In add funcgtion -> ptr1 = " << ptr1 << ", ptr2 = " << ptr2 << endl;
	return *ptr2 + *ptr2;
}
static int calculation(int * ptr1, int *  ptr2)
{
	*ptr1 *= 2;
	*ptr2 /= 3;
	cout << "In calculation funcgtion -> ptr1 = " << ptr1 << ", ptr2 = " << ptr2 << endl;
	return *ptr1 + *ptr2;
}
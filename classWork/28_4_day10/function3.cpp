#include <iostream>

using namespace std;

static int add(int & , int & );
static int calculation(int & , int & );


void function3() //function which have example of pass by reference
{
	int a = 5, b = 32;
//	int1 = &a, * ptr2 = &a;
	//cout << "In actual funcgtion -> ptr1 = " << ptr1 << ", ptr2 = " << ptr2 << endl;
	int res = add(a, b);
	cout << "res = " << res << endl;
	cout << "a = " << a << ", b = " << b << endl;
	res = calculation(a, b);
	cout << "res = " << res << endl;
	cout << "a = " << a << ", b = " << b << endl;
}

static int add(int & x , int & y)
{
	//	cout << "In add funcgtion -> ptr1 = " << ptr1 << ", ptr2 = " << ptr2 << endl;
	return x + y;
}
static int calculation(int & ref1, int & ref2 )
{
	ref1 *= 2;
	ref2 /= 3;
	//cout << "In calculation funcgtion -> ptr1 = " << ptr1 << ", ptr2 = " << ptr2 << endl;
	return ref1 + ref2;
}
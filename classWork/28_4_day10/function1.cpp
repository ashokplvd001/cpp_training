#include <iostream>

using namespace std; 

static int add(int, int);
static int calculation(int, int);


void function1()	// function which have example of pass by values
{
	int a = 5, b = 32; 
	int res = add(a, b);
	cout << "res = " << res << endl;
	res = calculation(a, b);
	cout << "res = " << res << endl;
}

static int add(int a, int b)
{
	return a + b; 
}
static int calculation(int a,int  b)
{
	a *= 2;
	b /= 3;
	return a + b; 
}
#include <iostream>

using namespace std; 

void swap1(int, int);
void swap2(int*, int*);
void swap3(int&, int&);


void program9()
{
	int a = 10, b = 20; 
	cout << "In main( before swap1)\n" << a << '\t' << b << endl;
	swap1(a, b);
	cout << "In main( after swap1) \n" << a << '\t' << b << endl;
	swap2(&a, &b);
	cout << "In main( after swap2) \n" << a << '\t' << b << endl;
	swap3(a, b);
	cout << "In main( after swap3) \n" << a << '\t' << b << endl;
	
}

void swap1(int a, int b)
{
	int t; 
	t = a; 
	a = b; 
	b = t; 
	cout << "In swap1 function \n" << a << '\t' << b << endl;
}

void swap2(int* a, int* b)
{
	int t ;
	t = *a;
	*a = *b;
	*b = t;
	cout << "In swap2 function \n" << *a << '\t' << *b << endl;
}

void swap3(int & a, int & b)
{
	int t;
	t = a;
	a = b;
	b = t;
	cout << "In swap3 function \n" << a << '\t' << b << endl;
}
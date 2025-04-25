#include <iostream>
#include <main.h>
using namespace std;

int main()
{
	int a = 115, b = 34; 
	cout << a << " + " << b << " is " << add(a, b) << endl;
	cout << a << " - " << b << " is " << sub(a, b) << endl;
	cout << a << " * " << b << " is " << mul(a, b) << endl;
	cout << a << " / " << b << " is " << divi(a, b) << endl;
	cout << a << " % " << b << " is " << mod(a, b) << endl;
	return 0;
}
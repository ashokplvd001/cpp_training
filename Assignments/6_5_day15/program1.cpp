#include <iostream>

using namespace std; 

void program1()
{
	int a = 0, b = 0; 

	cout << "Enter num1 and num2 ";
	cin >> a >> b;

	a = a + b; 
	b = a - b; 
	a = a - b; 

	cout << "num1 = " << a << endl;
	cout << "num2 = " << b << endl;

	a = a ^ b ;
	b = a ^ b ;
	a = a ^ b ;

	cout << "num1 = " << a << endl;
	cout << "num2 = " << b << endl;

	a = a * b;
	b = a / b;
	a = a / b;

	cout << "num1 = " << a << endl;
	cout << "num2 = " << b << endl;


}
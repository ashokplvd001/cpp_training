#include <iostream>

using namespace std;

void program11()
{
	int a, b;
	cout << "Enter two numbers : ";
	cin >> a >> b;

	a = a ^ b;
	b = a ^ b;
	a = a ^ b;

	cout << "num1 = " << a << endl;
	cout << "num2 = " << b << endl;
}
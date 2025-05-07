#include <iostream>

using namespace std; 

int gcd(int, int);

void program8()
{
	int num1 = 0, num2 = 0; 
	cout << "Enter two numbers : ";
	cin >> num1 >> num2;

	cout << "gcd = " << gcd(num1, num2);
}

int gcd(int num1, int num2)
{
	int res = 0;

	if (num1 > num2)
	{
		num1 = num1 + num2;
		num2 = num1 - num2;
		num1 = num1 - num2;
	}

	res = num2 % num1;

	while( res )
	{
		num2 = num1;

		num1  = res ;
		res = num2 % num1;
		
	}

	return num1;

}
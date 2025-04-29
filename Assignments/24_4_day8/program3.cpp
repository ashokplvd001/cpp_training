#include <iostream>
using namespace std; 

int fibFun(int );
int factorial(int);

void program3()
{
	int opt,num; 
	

	while (1)
	{
		cout << "Enter the number : ";
		cin >> num;
		cout << "Enter the option 1.fibinoce 2.factorial 3.exit\n";
		cin >> opt;

		switch (opt)
		{
		default:
			cout << "Invalid option\n";
			break;
		case 1:
			cout << "fibinoce of " << num << " is " << fibFun(num) << endl;
			break;
		case 2:
			cout << "factorial of " << num << " is " << factorial(num) << endl;
			break;
		case 3:
			return;
		}
	}
}
int fibFun(int num)
{
	int a = 0, b = 1;
	while (num--)
	{
		cout << a << ',';
		b = a + b; 
		a = b - a ;
	}
	cout << a <<endl ;
	return a;
}

int factorial(int num)
{
	int res = 1 ; 

	while (num)
	{
		res *= num; 
		num--;
	}
	return res; 
}
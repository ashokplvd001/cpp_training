/*
Description :	Form a new number using last digit of first number and first digit of second number.
Auther : Ashok Giddaluru ( 293950 )
Date of Creation : 28-4-24
DAte of modification : 28-4-24
Vesrion : 0.1
*/


#include <iostream>


using namespace std;	// using name space to use "cout" and "cin" 

void problem11()
{
	int num1, num2;
	cout << "Enter the number1 : ";
	cin >> num1;
	cout << "Enter the number2 : ";
	cin >> num2;

	int res = 0 ;
	while (num2 >= 10)
		num2 /= 10;

	res = (num1 % 10 ) * 10 + num2;


	cout << "new number is : " << res << endl;

}

/*
OUTPUT :
Enter the number1 : 456
Enter the number2 : 98
new number is : 69
*/
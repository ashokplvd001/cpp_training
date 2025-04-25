/*
Description :  write a program to read Sum and Product of digits in a given number
		Input Format: Read a positive integer N
		Output Format:Print the sum and product of digits of the number

Auther : Ashok Giddaluru ( 293950 )
Date of Creation : 22-4-24
DAte of modification : 22-4-24
Vesrion : 0.1
*/

#include <iostream>

using namespace std;	// using name space to use "cout" and "cin"
void problem1()
{
	int num;
	cout << "Enter the number : ";
	cin >> num;

	int sum = 0, product = 1 , temp ; 

	while (num)
	{
		temp = num % 10; 
		if (temp)
			product *= temp;
		sum += temp;
		num /= 10; 
	}

	cout << "sum of digits : " << sum << endl;
	cout << "product of digits : " << product << endl;

}

/*
OUTPUT :

ter the number : 2506
sum of digits : 13
product of digits : 60
*/
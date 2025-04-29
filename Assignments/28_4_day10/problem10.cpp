/*
Description :	Write a function that returns true if the sum of two integers is even.
Auther : Ashok Giddaluru ( 293950 )
Date of Creation : 28-4-24
DAte of modification : 28-4-24
Vesrion : 0.1
*/


#include <iostream>
bool problem10Fun(int, int);

using namespace std;	// using name space to use "cout" and "cin" 

void problem10()
{
	int num1, num2;
	cout << "Enter the number1 : ";
	cin >> num1;
	cout << "Enter the number2 : ";
	cin >> num2;

	if( problem10Fun(num1 , num2 ) )
		cout<<"yes, sum of this two numbers is even\n";
	else
		cout << "No, sum of this two numbers is not even\n";

}
bool problem10Fun(int num1 , int num2)
{
	if ((num1 + num2) % 2 )
		return false;
	return true;
}


/*
OUTPUT :
Enter the number1 : 3
Enter the number2 : 5
yes, sum of this two numbers is even
*/
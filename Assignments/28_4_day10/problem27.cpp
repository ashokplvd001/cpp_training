/*
Description :Extract the last digit of a number using the modulus operator (n % 10).
Recursion Base Case: When n becomes zero, stop.
Logic: Print the current digit, then recursively call the function with n / 10 to remove the last digit.

Auther : Ashok Giddaluru ( 293950 )
Date of Creation : 28-4-24
DAte of modification : 28-4-24
Vesrion : 0.1
*/


#include <iostream>
void problem27Fun(int);
using namespace std;	// using name space to use "cout" and "cin" 

void problem27()
{
	int num;
	cout << "Enter the number : ";
	cin >> num;

	problem27Fun( num );
	cout << endl;
}

void problem27Fun(int num )
{

	if (num == 0)
		return;
	
	cout << num % 10 << ' ';
		problem27Fun(num / 10);

	
}

/*
OUTPUT :
Enter the number : 14325
5 2 3 4 1
*/
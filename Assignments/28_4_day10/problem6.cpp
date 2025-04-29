/*
Description :	Take an integer and keep adding its digits recursively until only one digit remains

Auther : Ashok Giddaluru ( 293950 )
Date of Creation : 28-4-24
DAte of modification : 28-4-24
Vesrion : 0.1
*/


#include <iostream>
int p6sumOfDigits(int );

using namespace std;	// using name space to use "cout" and "cin" 

void problem6()
{
	int num;
	cout << "Enter the number : ";
	cin >> num;
	
	int res = num;

	while( res / 10)
	{
		res = p6sumOfDigits(res);
	}

	cout << "final output is : " << res << endl;
}

int p6sumOfDigits(int num)
{
	int sum = 0; 
	while (num)
	{
		sum = sum + ( num % 10) ; 
		num /= 10; 
	}
	return sum; 
}

/*
OUTPUT :
Enter the number : 5467
final output is : 4
*/
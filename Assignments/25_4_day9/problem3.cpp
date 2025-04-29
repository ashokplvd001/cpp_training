/*
program name : Check for Armstrong Number
Description :Write a program to check if a given number is an Armstrong number
Auther : Ashok Giddaluru ( 293950 )
Date of Creation : 25-4-24
DAte of modification : 25-4-24
Vesrion : 0.1
*/


#include <iostream>

using namespace std;	// using name space to use "cout" and "cin" 

int main()
{
	long int number = 0;

	cout << "Enter the number : ";
	cin >> number; 
	
	if (number < 1)
	{
		cout << "invalid input\n";
		return 0; 
	}
	// to not loose the actual number while we slicing it , so one temp variable to use for that 
	long int tempNumber = number;	
	int noOfDigits = 0; 

	// to count the number of digits in that number , size of the number 
	while (tempNumber)
	{
		noOfDigits++;
		tempNumber /= 10; 
	}

	tempNumber = number ;	
	long int sum = 0;		// to hold the sum of all digits products 
	int res;				//  to hold the each digit while slicing the number 
	int resProduct = 0;		// to hold the product of each digit 

	//cout << "digits = " << noOfDigits << endl;

	while (tempNumber != 0)
	{
		res = tempNumber % 10;
		resProduct = 1;
	//	cout << "res = " << res << endl;
		for (int i = 0 ; i < noOfDigits ; i++)		// to get the product of each digit 
		{
			resProduct *= res ; 
		}
		//cout << "resProduct = " << resProduct << endl;	// to sum the each digit product .
		sum = sum +  resProduct; 
		
		tempNumber /= 10;
	}

	if (sum == number)
		cout << "yes " << number << " is a amstrome number\n";
	else
		cout << "no " << number << " is not a amstrome number\n";

}

/*
OUTPUT :

Enter the number : 153
number : 153
digits = 3
resProduct = 27
resProduct = 125
resProduct = 1
yes 153 is a amstrome number
*/
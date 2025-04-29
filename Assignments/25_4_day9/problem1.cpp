/*
program name :Number-Star Pattern
Description : Write the program for number and star pattern printing given n value.
Auther : Ashok Giddaluru ( 293950 )
Date of Creation : 25-4-24
DAte of modification : 25-4-24
Vesrion : 0.1
*/


#include <iostream>

using namespace std;	// using name space to use "cout" and "cin" 

int main()
{
	int number = 0;
	cout << "Enter the number : ";
	cin >> number;
	
	int temp = 0;		// to use for condition equations 
	int pvalue = 0;		// to print the values 

	cout << "*\n";// first start in the patter 

	for (int i = 1; i < 2 * number; i++)	// 2 * n - 1 times 
	{
		cout << '*';		// for ever line starting  

		if (i <= number)				// this will iterate first n times 
		{
			temp = 2 * i ;
			pvalue = 0; 
			for (int j = 1; j < temp ; j++)
			{
				if (j <= temp / 2)		// first  half colums in a row 
					cout << ++pvalue;
				else
					cout << --pvalue;		// second half coloms on a row . 
			}
		}			
		else// this will iterate from n + 1 to 2* n - 1 , of i value 
		{
			temp = 2 * ( ( 2* number ) - i ) ;
			pvalue = 0;

			for (int j = 1; j < temp; j++)
			{
				if (j <= temp / 2)		// first  half colums in a row 
					cout << ++pvalue;
				else
					cout << --pvalue;		// second half coloms on a row . 
			}
	
		}
		cout << "*\n"; // prints in every line end 
	}
	cout << "*\n";	// last star in the patter 
}


/*
OUTPUT :
Enter the number : 6
*
*1*
*121*
*12321*
*1234321*
*123454321*
*12345654321*
*123454321*
*1234321*
*12321*
*121*
*1*
*
*/


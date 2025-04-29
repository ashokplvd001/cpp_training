/*
Description :	Write a function that takes three integers and returns the middle one (not maximum, not minimum).

Auther : Ashok Giddaluru ( 293950 )
Date of Creation : 28-4-24
DAte of modification : 28-4-24
Vesrion : 0.1
*/


#include <iostream>
int problem5Fun( int , int , int );

using namespace std;	// using name space to use "cout" and "cin" 

void problem5()
{
	cout << "hi this is middle of three numbers program\n";
	int num1, num2, num3;
	cout<<"Enter number1  : ";
	cin >> num1;
	cout<<"Enter number2  : ";
	cin >> num2;
	cout<<"Enter number3  : ";
	cin >> num3;

	int res = problem5Fun(num1, num2, num3);

	cout << "The largest number in the three numbers is : " << res << endl;

}

int problem5Fun(int num1, int num2, int num3)
{
	int res; 
	if ((num1 < num2 && num3 < num1) || (num1 < num3 && num2 < num1))
	{
		res = num1;
	}
	else if ((num2 < num1 && num3 < num2) || (num2 < num3 && num1 < num2))
	{
		res = num2;
	}
	else
		res = num3; 

	return res; 

}


/*
OUTPUT :

hi this is middle of three numbers program
Enter number1  : 1
Enter number2  : 3
Enter number3  : 2
The largest number in the three numbers is : 2

*/
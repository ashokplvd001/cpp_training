/*
Description :	Write a recursive function to count the number of zeros in an integer.
				i/p: 102040
				o/p: Number of zeros in 102040 is 3

Auther : Ashok Giddaluru ( 293950 )
Date of Creation : 28-4-24
DAte of modification : 28-4-24
Vesrion : 0.1
*/


#include <iostream>
int problem4Fun(long long int , int );

using namespace std;	// using name space to use "cout" and "cin" 

void problem4()
{
	long long int num;
	short int digit = 0;
	
	cout << "hi , this is count digit function\n";
	cout << "Enter the number : ";
	cin >> num;
	/*
	cout << "Enter the digit : ";
	cin >> digit;
	*/

	int ret = problem4Fun(num , digit);
	cout << digit << " repeated " << ret << " number of times in " << num << endl;
}

int problem4Fun(long long int num, int digit)
{

	if (num == 0)
		return 0;

	return !((num % 10) ^ digit) + problem4Fun(num/10, digit);
		
}
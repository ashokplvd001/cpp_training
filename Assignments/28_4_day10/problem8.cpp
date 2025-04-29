/*
Description :	Given a positive integer, find its second last digit.
Auther : Ashok Giddaluru ( 293950 )
Date of Creation : 28-4-24
DAte of modification : 28-4-24
Vesrion : 0.1
*/


#include <iostream>
int problem8Fun(long long int);

using namespace std;	// using name space to use "cout" and "cin" 

void problem8()
{
	cout << "hi , this is second last digit in number\n";
	long long int num;
	cout << "Enter the number : ";
	cin >> num;

	int res = problem8Fun(num);
	cout << "The second last digit in number " << num << " is : " << res << endl;
}

int problem8Fun( long long int num)
{
	num /= 10; 
	return num % 10; 
}

/*
OUTPUT :
hi , this is second last digit in number
Enter the number : 24535
The second last digit in number 24535 is : 3
*/
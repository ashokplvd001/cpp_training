/*
Description :A code is considered valid only if its first non-zero digit from the left is even.
Write a program that extracts the first non-zero digit and checks if it's even.

Auther : Ashok Giddaluru ( 293950 )
Date of Creation : 28-4-24
DAte of modification : 28-4-24
Vesrion : 0.1
*/


#include <iostream>
bool problem21Fun(int);

using namespace std;	// using name space to use "cout" and "cin" 

void problem21()
{
	int num;
	cout << "Enter the number : ";
	cin >> num;

	int ret = problem21Fun(num);

	if (ret == true)
		cout << "yes, its valid secret code\n";
	else
		cout << "no, its not valid secret code\n";


}

bool problem21Fun(int num)
{
	int res;
	while (num >= 10)
	{
		num /= 10; 
	}

	if (num % 2 == 0)
		return true;
	else
		return false;
}

/*
OUTPUT :
Enter the number : 23424
yes, its valid secret code
*/
/*
Description :A code is considered valid only if its first non-zero digit from the left is even.
Write a program that extracts the first non-zero digit and checks if it's even.

Auther : Ashok Giddaluru ( 293950 )
Date of Creation : 28-4-24
DAte of modification : 28-4-24
Vesrion : 0.1
*/


#include <iostream>
int problem22Fun(int);

using namespace std;	// using name space to use "cout" and "cin" 

void problem22()
{
	int num;
	cout << "Enter the number : ";
	cin >> num;

	int res = problem22Fun(num);
	cout << "The power of 2 below or equal to this numer is : " << res << endl;
}

int problem22Fun(int num)
{
	for (int i = 0; i < 32; i++)
	{
		if (num >> i == 0)
			return i-1 ; 
	}

}

/*
OUTPUT :
Enter the number : 20
The power of 2 below or equal to this numer is : 4
*/
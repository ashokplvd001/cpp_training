/*
Description :You find a magic box that multiplies the digits of a number you enter.
If the final product of digits is a prime number, the box opens.
Write a program to simulate the box opening logic.

Auther : Ashok Giddaluru ( 293950 )
Date of Creation : 28-4-24
DAte of modification : 28-4-24
Vesrion : 0.1
*/


#include <iostream>
int problem23Fun(int num);

using namespace std;	// using name space to use "cout" and "cin" 

void problem23()
{
	int num;
	cout << "Enter the number : ";
	cin >> num;

	int res = problem23Fun(num);

	bool isPrime(int);
	if (isPrime(res))
		cout << "Box opened\n";
	else
		cout << "box cant open\n";

}

bool isPrime(int num)
{
	for (int i = 2; i < num / 2; i++)
	{
		if (num % i == 0)
			return false;
	}
	return true;
}

int problem23Fun(int num)
{
	int res = 1;
	while (num)
	{
		res *= (num % 10);
		num /= 10;
	}
	cout << "res : " << res << endl;
	return res;

}

/*
OUTPUT :
Enter the number : 34
res : 12
box cant open
*/
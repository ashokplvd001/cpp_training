/*
Description :	A king decided only perfect armies can enter the final battle.
An army's number is perfect if the sum of its divisors equals the number itself.
Check whether a given army number is perfect.


Auther : Ashok Giddaluru ( 293950 )
Date of Creation : 28-4-24
DAte of modification : 28-4-24
Vesrion : 0.1
*/


#include <iostream>
bool problem19Fun(int);

using namespace std;	// using name space to use "cout" and "cin" 

void problem19()
{
	int num;
	cout << "Enter the number : ";
	cin >> num;

	if (problem19Fun(num))
		cout << "yes , its perfect army\n";
	else
		cout << "no , its not perfect army\n";
 

}

bool problem19Fun(int num )
{
	int sum = 0; 

	for (int i = 1; i <= num/2; i++)
	{
		if (num % i == 0)
			sum += i;
	}
	
	if (sum == num)
		return true;
	else
		return false;

}

/*
OUTPUT :
Enter the number : 6
yes , its perfect army
*/
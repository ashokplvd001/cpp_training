/*
Description :	Write a function to check whether a given year is leap year or not.
Auther : Ashok Giddaluru ( 293950 )
Date of Creation : 28-4-24
DAte of modification : 28-4-24
Vesrion : 0.1
*/


#include <iostream>
int problem7Fun(int);

using namespace std;	// using name space to use "cout" and "cin" 

void problem7()
{
	cout << "hi , this is leaf year check problem\n";
	int num;
	cout << "Enter the number : ";
	cin >> num;

	int ret = problem7Fun(num);
	if (ret == 0)
		cout << "yes , " << num << " is leaf year\n";
	else
		cout << "No , " << num << " is not leaf year\n";

}
int problem7Fun(int num )
{
	if (num % 4 == 0)
	{
		if ((num % 100) == 0 && (num % 400) != 0)
		{
			return 1;
		}
		return 0;
	}

	return 1;

}

/*
OUTPUT :
hi , this is leaf year check problem
Enter the number : 2001
No , 2001 is not leaf year
*/



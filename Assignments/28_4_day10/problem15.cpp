/*
Description :	Write a program to find the smallest digit in the given number.
Auther : Ashok Giddaluru ( 293950 )
Date of Creation : 28-4-24
DAte of modification : 28-4-24
Vesrion : 0.1
*/


#include <iostream>
int problem15Fun( int);

using namespace std;	// using name space to use "cout" and "cin" 

void problem15()
{
	int num;
	cout << "Enter the number : ";
	cin >> num;
	
	int small = problem15Fun(num);
	cout << "Result = " << small << endl;
}

int problem15Fun(int num )
{
	int small = 9; 
	int res;
	while (num)
	{
		res = num % 10; 
		if (small > res)
			small = res;
		num /= 10;
	}
	return small;
}


/*
OUTPUT :
Enter the number : 234643743
Result = 2
*/


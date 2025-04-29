/*
Description :	Given your total coin-collection number,
	find the sum of only the odd digits of your coin number to determine your prize.
Auther : Ashok Giddaluru ( 293950 )
Date of Creation : 28-4-24
DAte of modification : 28-4-24
Vesrion : 0.1
*/


#include <iostream>

using namespace std;	// using name space to use "cout" and "cin" 

void problem16()
{
	int num;
	cout << "Enter no.of coins : ";
	cin >> num; 

	int coinValue; 
	int sum = 0;
	cout << "Enter the coins : ";
	for (int i = 0; i < num; i++)
	{
		cin >> coinValue;
		if( coinValue % 2 )
		sum += coinValue;
	}

	cout << "sum of odd coins is " << sum << endl;
}

/*
OUTPUT :
Enter no.of coins : 6
Enter the coins : 1
2
3
4
5
6
sum of odd coins is 9

*/
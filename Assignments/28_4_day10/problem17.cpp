/*
Description :	A magical clock only rings when the current minute is a divisor of the hour shown.
			Given an hour value, print all minutes when the clock will ring.
Auther : Ashok Giddaluru ( 293950 )
Date of Creation : 28-4-24
DAte of modification : 28-4-24
Vesrion : 0.1
*/


#include <iostream>

using namespace std;	// using name space to use "cout" and "cin" 

void problem17()
{
	int hr;

	cout << "Enter hour : ";
	cin >> hr;

	int value = hr;
	int temp = value;
	cout << "minutes where the clock will ring for this hour are : ";

	while (value <= 60)
	{
		cout << value << ' ';
		value += temp;
	}

	cout << endl;


}
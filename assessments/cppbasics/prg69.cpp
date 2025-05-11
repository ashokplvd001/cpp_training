/*
Description :	A magical clock only rings when the current minute is a divisor of the hour shown.
			Given an hour value, print all minutes when the clock will ring.
*/


#include <iostream>

using namespace std;	

void main()
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
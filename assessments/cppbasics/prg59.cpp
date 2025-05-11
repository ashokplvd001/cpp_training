/*
Description :	Before launching, a spaceship performs a countdown from a given number n to 1.
Write a program to simulate the countdown using a while loop.

*/


#include <iostream>


using namespace std;	

void main()
{
	int num;
	cout << "Enter the number : ";
	cin >> num;

	while (num)
	{
		cout << num-- << ' ';
	}
	cout << endl;

}


/*
Description :	Before launching, a spaceship performs a countdown from a given number n to 1.
Write a program to simulate the countdown using a while loop.



Auther : Ashok Giddaluru ( 293950 )
Date of Creation : 28-4-24
DAte of modification : 28-4-24
Vesrion : 0.1
*/


#include <iostream>


using namespace std;	// using name space to use "cout" and "cin" 

void problem20()
{
	int num;
	cout << "Enter the number : ";
	cin >> num;

	while (num)
	{
		cout << num-- <<' ';
	}
	cout << endl;

}

/*
OUTPUT :
Enter the number : 15
15 14 13 12 11 10 9 8 7 6 5 4 3 2 1
*/
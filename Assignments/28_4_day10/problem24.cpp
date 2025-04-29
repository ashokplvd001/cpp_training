/*
Description :A strange machine doubles a number every time you press a button.
Starting from 1, you press the button n times.
Find the sum of all numbers you see after each press.

Auther : Ashok Giddaluru ( 293950 )
Date of Creation : 28-4-24
DAte of modification : 28-4-24
Vesrion : 0.1
*/


#include <iostream>

using namespace std;	// using name space to use "cout" and "cin" 

void problem24()
{
	int num;
	cout << "Enter the number : ";
	cin >> num;
	
	int value = 1;
	while (num)
	{
		
		cout << value << ' ';
		value *= 2;
		num--;
	}
	cout << endl;

}

/*
OUTPUT :
Enter the number : 6
1 2 4 8 16 32
*/
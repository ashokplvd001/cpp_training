/*
program name : Digits Frequency Counter
Description : Write a program to count the frequency of each digit (0–9) in a given integer

Auther : Ashok Giddaluru ( 293950 )
Date of Creation : 25-4-24
DAte of modification : 25-4-24
Vesrion : 0.1
*/


#include <iostream>

using namespace std;	// using name space to use "cout" and "cin" 

int main()
{
	long int number = 0;
	cout << "Enter the number : ";
	cin >> number; 

	long int tempNumber = 0;		// to copy the original number for every inner iteration 
	int iter = 0; // to run the loop for 10 times as digits are 0-10 decimal number digits 
	int res = 0;	// to get the each digit and to compare with iter . 
	int	count;

	cout << "Digit frequencies:" << endl;

	while (iter < 10)
	{
		tempNumber = number; // copy the actual number for every iteration 
		count = 0;
		while ( tempNumber != 0 )
		{
			res = tempNumber % 10; 
			if ( res == iter )	// if the digit is matching with the iter then count increment
				count++;
			tempNumber /= 10 ; 
		}
		cout << iter << ": " << count<<endl;
		iter++;
	}
}


/*
OUTPUT :
Enter the number : 234324
Digit frequencies:
0: 0
1: 0
2: 2
3: 2
4: 2
5: 0
6: 0
7: 0
8: 0
9: 0
*/
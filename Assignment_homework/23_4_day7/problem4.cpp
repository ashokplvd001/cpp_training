/*
Description :  Program to Check if product of digits of a number at even and odd places is equal.
			Input: 2841
			Output: Yes

Auther : Ashok Giddaluru ( 293950 )
Date of Creation : 22-4-24
DAte of modification : 22-4-24
Vesrion : 0.1
*/


#include <iostream>

using namespace std;	// using name space to use "cout" and "cin" 

void problem4()
{
	int num;
	cout << "Enter the number : ";
	cin >> num; 

	int oddP = 1 ;
	int evenP = 1;
	int temp; 
	int switchV = 1; 
	while (num)
	{
		temp = num % 10;
		if (temp)
		{
			if (switchV)
				oddP *= temp;
			else
				evenP *= temp;

		}
		switchV = !switchV;
		num /= 10;
	}
	cout << "oddP = " << oddP<<endl;
	cout << "evenP = " << evenP<<endl;


	if (oddP == evenP)
		cout << "odd and even digit product is same\n";
	else
		cout<<"odd and even digit product is different\n";
}

/*
OUTPUT :

Enter the number : 1234
oddP = 8
evenP = 3
odd and even digit product is different
*/
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
	long long int number = 0;
	cout << "Enter the number : ";
	cin >> number; 


	short int res = 0;	// to get the each digit and to compare with iter . 
	short int count0 = 0 ;
	short int count1 = 0; 
	short int count2 = 0;
	short int count3 = 0;
	short int count4 = 0;
	short int count5 = 0;
	short int count6 = 0;
	short int count7 = 0;
	short int count8 = 0;
	short int count9 = 0;


	cout << "Digit frequencies:" << endl;

	if (number < 0)
		number *= -1;


	while (number)
	{
		res = number % 10; 

		switch (res)
		{
		case 0 : 
			count0++;
			break; 
		case 1:
			count1++;
			break;
		case 2:
			count2++;
			break;
		case 3:
			count3++;
			break;
		case 4:
			count4++;
			break;
		case 5:
			count5++;
			break;
		case 6:
			count6++;
			break;
		case 7:
			count7++;
			break;
		case 8:
			count8++;
			break;
		case 9:
			count9++;
			break;
		}
		number /= 10; 
	}

	cout << "0 : " << count0 << endl;
	cout << "1 : " << count1 << endl;
	cout << "2 : " << count2 << endl;
	cout << "3 : " << count3 << endl;
	cout << "4 : " << count4 << endl;
	cout << "5 : " << count5 << endl;
	cout << "6 : " << count6 << endl;
	cout << "7 : " << count7 << endl;
	cout << "8 : " << count8 << endl;
	cout << "9 : " << count9 << endl;


	


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
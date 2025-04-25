/*
Description :  Isha is playing with numbers and trying to write program to Check if the sum of distinct digits of two integers are equal
	Output Format:
		If  the sum of distinct digits of both the numbers are equal 
		if true	print YES 
		otherwise  print NO.

Auther : Ashok Giddaluru ( 293950 )
Date of Creation : 22-4-24
DAte of modification : 22-4-24
Vesrion : 0.1
*/


#include <iostream>

using namespace std;	// using name space to use "cout" and "cin" 


void problem5()
{
	int num1, num2;
	cout << "Enter the number1 : ";
	cin >> num1;
	cout << "Enter the number2 : ";
	cin >> num2;
	int num1UniqueSum = 0 , num2UniqueSum = 0 ;

	int arr[10] = { 0 } ;

	while (num1)
	{
		arr[num1 % 10]++ ;
		num1 /= 10;
	}

	for (int i = 0; i < 10; i++)
	{
		if (arr[i] == 1)
			num1UniqueSum += i;
		
		arr[i] = 0; 
	}
	cout << "num1UniqueSum : " << num1UniqueSum << endl;
	while (num2)
	{
		arr[num2 % 10]++;
		num2 /= 10;
	}

	for (int i = 0; i < 10; i++)
	{
		if (arr[i] == 1)
			num2UniqueSum += i;
		arr[i] = 0;
	}
	cout << "num2UniqueSum : " << num2UniqueSum << endl;

	if (num1UniqueSum == num2UniqueSum)
		cout << "Yes the single time repeater numbers in the two intergers are same\n";
	else
		cout << "No the single time repeater numbers in the two intergers are not same\n";

}



/*
OUTPUT :
Enter the number1 : 1233
Enter the number2 : 4566
num1UniqueSum : 3
num2UniqueSum : 9
No the single time repeater numbers in the two intergers are not same
*/
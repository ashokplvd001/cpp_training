/*
Description :Write a recursive function to find the sum of the first N natural numbers.
Auther : Ashok Giddaluru ( 293950 )
Date of Creation : 28-4-24
DAte of modification : 28-4-24
Vesrion : 0.1
*/


#include <iostream>
int problem2Fun(int num);

using namespace std;	// using name space to use "cout" and "cin" 

void problem2()
{
	int num;

	cout << "Enter the number : ";
	cin >> num;

	int ret = problem2Fun(num);
	cout << "sum of first " << num << " natural numbers is " << ret << endl;
}

int problem2Fun(int num)
{
	if (num <= 1)
		return 1; 
	return num + problem2Fun(num - 1);
}

/*
OUTPUT :

Enter the number : 6
sum of first 6 natural numbers is 21
*/
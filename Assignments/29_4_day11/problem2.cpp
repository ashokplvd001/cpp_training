/*
Description :	posiiblilties of sum of two prime numbers is equal to given number 
Auther : Ashok Giddaluru ( 293950 )
Date of Creation : 29-4-24
DAte of modification : 29-4-24
Vesrion : 0.1
*/


#include <iostream>

using namespace std;	// using name space to use "cout" and "cin" 

#define SIZE 50 
bool isPrime(int);
void problem2()
{
	int num; 

	cout << "Enter the number : ";
	cin >> num;
	
	int arr[SIZE];
	int size = 0;
	for (int i  = 0; i < SIZE; i++)
	{
		if (isPrime(i))
			arr[size++] = i;
	}
	int count = 0; 
	for (int i = 0; i < size; i++)
	{
		for (int j = i ; j < size; j++)
		{
			if (arr[i] + arr[j] == num)
			{
				cout << arr[i] << '+' << arr[j] << '=' << arr[i] + arr[j] << endl;
				count++;
			}
		}
	}
	cout << "Posibilites count is " << count << endl;

}

bool isPrime(int num)
{
	if (num < 2)
		return false;

	for (int i = 2; i <= num / 2; i++)
	{
		if (num % i == 0)
			return false;
	}
	return true;
}


/*
OUTPUT :

Enter the number : 34
3+31=34
5+29=34
11+23=34
17+17=34
Posibilites count is 4
*/
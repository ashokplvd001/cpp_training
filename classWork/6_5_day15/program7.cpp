#include <iostream>
#include "common.h"

using namespace std;

bool armstrong(unsigned long long int , int );
int digitsCount(unsigned long long  int num);
unsigned long long int powerFun(int res, int digits);

void program7()
{
	unsigned long long int num = 0; 
	cout << "Enter th number : ";
	cin >> num;; 

#if 1

	for (unsigned long long int i = 1; i < num; i++)
	{
		
		if (armstrong( i , digitsCount( i ) ) ) 
			cout << i << ' ';
	}
	
#else 
	unsigned long long int i = 0;
	int count = 0;

	while (count < num)
	{
		if (armstrong(i, digitsCount(i)))
		{
			cout << i << ' ';
			count++;
		}
		i++;
	}

#endif

	cout << endl;
	cout << "End\n";

}

int digitsCount(unsigned long long int num)
{
	int digits = 0; 
	while (num)
	{
		digits++;
		num /= 10;
	}
	return digits;

}

unsigned long long int powerFun(int res, int digits)
{
	unsigned long long int product = 1; 

	for (int i = 0; i < digits; i++)
		product *= res;

	return product;
}

bool armstrong( unsigned long long int num , int digits)
{
	int res = 0;
	unsigned long long int temp = num, sum = 0;

	while (temp)
	{
		res = temp % 10;
		sum  += powerFun( res , digits ) ;
		temp /= 10; 
	}

	if (sum == num)
		return true;
	else
		return false; 

}
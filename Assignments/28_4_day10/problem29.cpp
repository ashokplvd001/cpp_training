/*
Description :  Each step involves summing the square of all previous steps.
Recursion Base Case: If n == 0, return 0 (no more steps).
Logic: For each step, return the square of n and add the sum of squares for the previous steps (n-1).

Auther : Ashok Giddaluru ( 293950 )
Date of Creation : 28-4-24
DAte of modification : 28-4-24
Vesrion : 0.1
*/


#include <iostream>
long long int problem27Fun(int);
using namespace std;	// using name space to use "cout" and "cin" 

void problem29()
{
	int num;
	cout << "Enter the number : ";
	cin >> num;
	long long int res = problem27Fun(num);
	cout << "res = " << res << endl;
}
long long int problem27Fun(int num )
{
	long long int sum = 0; 

	for (int i = 1; i <= num; i++)
	{
		sum = sum + i * i;
	}
		return sum;

}


/*
OUTPUT :
Enter the number : 3
res = 14
*/
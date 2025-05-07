#include <iostream>
#include "common.h"
using namespace std; 
int factorial(int);

void program4()
{
	int num = readIntValue();
	cout << "Factorial of " << num << " is : " << factorial(num) << endl;
}


int factorial(int num)
{
	int fact = 1 ; 

	for (int i = 1; i <= num; i++)
		fact *= i; 

	return fact; 

}
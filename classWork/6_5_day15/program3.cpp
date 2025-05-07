#include <iostream>
#include "common.h"
using namespace std; 

int sumNnatural(int num);

void program3()
{
	int num = readIntValue();

	cout << "sum of " << num << " natural numbers : " << sumNnatural(num) << endl;

}




int sumNnatural(int num)
{
	int sum = 0; 

	for (int i = 1; i <= num; i++)
		sum = sum + i; 
	
	return sum; 
}
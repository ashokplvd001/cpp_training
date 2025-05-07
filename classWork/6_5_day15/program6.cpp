#include <iostream>
#include "common.h"
using namespace std; 
bool palandrom(int num);

void program6()
{
	int size = 3; 
	
	int arr[6];

	for (int i = 0; i < size; i++)
		arr[i] = readIntValue();

	bool flag = true ; 

	for (int i = 0; i < size; i++)
	{
		if (!palandrom(arr[i]))
		{
			flag = false; 
			break;
		}
	}

	if (flag == true)
		cout << "yes, its palandrom array\n";
	else
		cout << "no, its not palandrom array\n";


 
}

bool palandrom(int num)
{
	int temp = num, res = 0;

	while (temp)
	{
		res = res * 10 + temp % 10;
		temp /= 10;
	}

	if (res == num)
		return true;
	else
		return false;
}

#include <iostream>
#include "header.h"
using namespace std; 

void program2()
{
	int num,count=0;
	cout << "Enter the number : ";
	cin >> num; 

	for (int i = 2; i < num; i++)
	{
		for (int j = i; j < num; j++)
		{
			if (num == (j + i))
			{
				if (prime(i) && prime(j))
				{
					cout << i << '+' << j << '=' << j + i << endl;
					count++;
				}
			}
		}
	}
	cout << "the possibility is : " << count << endl;

}
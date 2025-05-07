#include <iostream>
#include "common.h"
using namespace std; 

void program5()
{
	int num = readIntValue();

	bool flag = false;

	if (num % 4 == 0)
	{
		if (num % 100 == 0)
		{
			if (num % 400 != 400)
				flag = false;
			else
				flag = true;
		}
		else
			flag = true;
	}
	else
		flag = false;

	if (flag == true)
		cout << "its leaf year\n";
	else
		cout << "its not leaf year\n";
}
#include <iostream>

using namespace std; 

void program7()
{
	int n = 6; 

	int i, j, k, l, m;

	for (i = 0; i < n; i++)
	{

		if (i < n / 2)
		{
			for (j = 0; j < n / 2; j++)
				cout << "* ";
			for (; j < n; j++)
				cout << "* ";
		}
		else
		{
			for (j = 0; j < n / 2; j++)
				cout << "* ";
			for (; j < n; j++)
				cout << "* ";

		}

		cout << endl;


	}

}
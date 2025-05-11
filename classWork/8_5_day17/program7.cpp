#include <iostream>

using namespace std; 

void program7()
{
	int n; 
	cin >> n; 

	n++;

	for (int i = 1; i <= n; i++)
	{

		for (int j = 1; j <= 2 * n; j++)
		{
			if (j <= i || j >= (2 * n) - i + 1)
				cout << "* ";
			else
				cout << "  ";
		}
		cout<<endl;
	}




	for (int i = n-1; i >= 1 ; i--)
	{
			
		for (int j = 1; j <= 2 * n; j++)
		{
			if (j <= i || j >= (2 * n) - i + 1)
				cout << "* ";
			else
				cout << "  ";
		}

		cout << endl;
	}
}
#include <iostream>

using namespace std;

void program6()
{
	int n; 
	cin >> n;

	for (int i = 1 , j = 0 ; i < 2 * n; i++)
	{
		if (i <= n)
		{
			for ( j = 1; j < i; j++)
				cout << ' ';
			for ( j = 2 * (n - i) + 1 ; j > 0; j--)
				cout << '*';
		}
		else
		{
			for ( j = 2*n - i  ; j > 1 ; j--)
				cout << ' ';
			for ( j = 2 * ( i - n ) + 1  ; j > 0; j--)
				cout << '*';

		}
		cout << endl;
	}


}
#include <iostream>

using namespace std; 
void pattern1(int );
void program5()
{
	int n; 
	cin >> n; 

	pattern1(n);
	
}

void pattern1(int n)
{
	int i, j;
	//int k = 2* n - 2  ; 

	for ( i = 0; i < n; i++)
	{
		/*
		for (j = i +2  ; j < 2 * n ; j++)
			cout << " ";
			*/

		/*
		for (j = 0 ; j < k ; j++)
			cout << " ";
		k--;
		*/

		for (j = i ; j < 2 * n ; j++)
			cout << " ";

		for (j = 0; j <= i; j++)
			cout << "* ";
		cout<<endl; 
	}

}
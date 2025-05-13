#include <iostream>

using namespace std; 

void program2()
{
	int a = 0, b = 0, c = 0, d = 0, e = 0 ; 

	cout << "Enter the 5 numbers\n";
	cin >> a >> b >> c >> d >> e;
	/*
	int high = a; 

	if (high <= b)
		high = b; 

	if (high <= c)
		high = c;
	
	if (high <= d)
		high = d;
	
	if (high <= e)
		high = e;

	cout << high << " is the highest number\n";
	*/


	

	if (a > b )
	{
		if (a > c)
		{
			if (a > d)
			{
				if (a > e)
					cout << a << " is biggest number\n";
				else
					cout<< e << " is biggest number\n";
			}
			else if (d > e)
				cout << d << " is biggest number\n";
			else
				cout << e << " is biggest number\n";
			
		}
		else if (c > d)
		{
			if (c > e)
				cout << a << " is biggest number\n";
			else
				cout << e << " is biggest number\n";
		}
		else if (d > e)
			cout << d << " is biggest number\n";
		else
			cout << e << " is biggest number\n";

	}
	else if ( b > c )
	{
		if (b > d)
		{
			if (b > e)
				cout << b << " is biggest number\n";
			else
				cout << e << " is biggest number\n";
		}
		else if (b > e)
			cout << d << " is biggest number\n";
		else
			cout << e << " is biggest number\n";
	}
	else if (  c > d )
	{
		if (c > e)
			cout << b << " is biggest number\n";
		else
			cout << e << " is biggest number\n";

	}
	else if (d > e)
		cout << d << " is biggest number\n";
	else
		cout << e << " is biggest number\n";


	

}
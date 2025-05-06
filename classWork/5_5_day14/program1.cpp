#include <iostream>

using namespace std;

void program1()
{
	int a = 0 , b = 0 , c = 0 ;

	cout << "Enter the three numbers\n";

	cin >> a >> b >> c;

	if (a > b)
	{
		if( a > c )
		cout << a << " is biggest number\n";
	}
	else if( b > c )
		cout << b << " is biggest number\n";
	else
		cout << c << " is biggest number\n";


}
/*
Description :	Check if three given angles form a valid triangle.
Auther : Ashok Giddaluru ( 293950 )
Date of Creation : 28-4-24
DAte of modification : 28-4-24
Vesrion : 0.1
*/


#include <iostream>
long long int powerFun(int, int);

using namespace std;	// using name space to use "cout" and "cin" 

void problem14()
{
	int a1, a2, a3;
	int num1, num2;

	cout << "Enter the angle1 : ";
	cin >> a1;
	cout << "Enter the angle2 : ";
	cin >> a2;
	cout << "Enter the angle3 : ";
	cin >> a3;

	if ((a1 + a2 + a3) == 180)
		cout << "yes , this three angles can form triangle\n";
	else
		cout << "No , this three angles cant form triagnle\n";
}


/*
OUTPUT :
Enter the angle1 : 45
Enter the angle2 : 40
Enter the angle3 : 95
yes , this three angles can form triangle
*/
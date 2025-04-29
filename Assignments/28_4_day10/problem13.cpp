/*
Description :	Write a function to compute a^b using only multiplication, no pow() or loops.
Auther : Ashok Giddaluru ( 293950 )
Date of Creation : 28-4-24
DAte of modification : 28-4-24
Vesrion : 0.1
*/


#include <iostream>
long long int powerFun(int , int );

using namespace std;	// using name space to use "cout" and "cin" 

void problem13()
{
	int num;
	cout << "Enter the number : ";
	cin >> num;
	int power;
	cout << "Enter the power : ";
	cin >> power;

	long long int res = powerFun(num, power);

	cout << "result = " << res << endl;

}

long long int powerFun(int num, int power)
{
	if (power <= 1)
		return num;
	return num * powerFun(num ,power - 1);
}


/*
OUTPUT :
Enter the number : 4
Enter the power : 3
result = 64
*/
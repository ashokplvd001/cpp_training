/*
Description :	Swap two integers without using a temporary variable, using pass-by-reference.
Auther : Ashok Giddaluru ( 293950 )
Date of Creation : 28-4-24
DAte of modification : 28-4-24
Vesrion : 0.1
*/


#include <iostream>
void problem12Fun(int &, int&);

using namespace std;	// using name space to use "cout" and "cin" 

void problem12()
{
	int num1, num2;
	cout << "Enter the number1 : ";
	cin >> num1;
	cout << "Enter the number2 : ";
	cin >> num2;
	swap(num1, num2);

	cout << "num1 - " << num1 << endl;
	cout << "num1 - " << num2 << endl;

}

void problem12Fun(int & ref1, int & ref2)
{
	ref1 = ref1 + ref2;
	ref2 = ref1 - ref2;
	ref1 = ref1 - ref2;
}

/*
OUTPUT :
Enter the number1 : 34
Enter the number2 : 76
num1 - 76
num1 - 34
*/
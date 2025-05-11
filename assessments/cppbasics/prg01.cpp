/*
Discription: Write a C++ Program to Check Whether a Number is a Positive or Negative Number
*/
#include <iostream>

using namespace std;

int main()
{
	int num = 0; 
	cin >> num; 

	if (num > 0)
		cout << "number is positive\n";
	else if( num < 0 )
		cout << "number is negative\n";
	else 
		cout << "number is zero\n";

}
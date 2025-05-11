/*
Discription:   	C++ Program To Check Whether Number is Even Or Odd
*/
#include <iostream>

using namespace std;

int main()
{
	int num; 
	cin >> num; 

	if (num % 2 == 0)
		cout << " it is even\n";
	else
		cout << "it is odd\n";
}
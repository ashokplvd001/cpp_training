//Program to Check for the Equality of Two Numbers Without Using Arithmetic or Comparison Operator	
#include <iostream>
using namespace std;
int main()
{
	int a, b;
	cin >> a >> b;
	if (a ^ b)
		cout << "not equal";
	else
		cout << "equal";
	return 0;
}
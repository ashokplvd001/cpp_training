//Program to Print the Maximum Value of an Unsigned int Using One's Complement (~) Operator
#include <iostream>
using namespace std;
int main()
{
	unsigned int n = 1;
	while (n != 0)
	{
		n = n << 1;
	}
	n = n >> 1;
	n = ~n;
	cout << "The maximum value of an unsigned int is: " << n << endl;

	return 0;
}
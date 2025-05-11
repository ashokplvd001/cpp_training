/*
Description :You find a magic box that multiplies the digits of a number you enter.
If the final product of digits is a prime number, the box opens.
Write a program to simulate the box opening logic.

*/


#include <iostream>
int Fun(int num);

using namespace std;	

void main()
{
	int num;
	cout << "Enter the number : ";
	cin >> num;

	int res = Fun(num);

	bool isPrime(int);
	if (isPrime(res))
		cout << "Box opened\n";
	else
		cout << "box cant open\n";

}

bool isPrime(int num)
{
	for (int i = 2; i < num / 2; i++)
	{
		if (num % i == 0)
			return false;
	}
	return true;
}

int Fun(int num)
{
	int res = 1;
	while (num)
	{
		res *= (num % 10);
		num /= 10;
	}
	cout << "res : " << res << endl;
	return res;

}

/*
OUTPUT :
Enter the number : 34
res : 12
box cant open
*/
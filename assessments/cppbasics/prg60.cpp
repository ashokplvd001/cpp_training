/*
Description :A code is considered valid only if its first non-zero digit from the left is even.
Write a program that extracts the first non-zero digit and checks if it's even.

*/


#include <iostream>
bool Fun(int);

using namespace std;	

int main()
{
	int num;
	cout << "Enter the number : ";
	cin >> num;

	int ret = Fun(num);

	if (ret == true)
		cout << "yes, its valid secret code\n";
	else
		cout << "no, its not valid secret code\n";


}

bool Fun(int num)
{
	int res;
	while (num >= 10)
	{
		num /= 10;
	}

	if (num % 2 == 0)
		return true;
	else
		return false;
}

/*
OUTPUT :
Enter the number : 23424
yes, its valid secret code
*/
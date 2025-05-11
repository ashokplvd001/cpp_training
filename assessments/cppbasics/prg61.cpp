/*
Description :A code is considered valid only if its first non-zero digit from the left is even.
Write a program that extracts the first non-zero digit and checks if it's even.

*/


#include <iostream>
int Fun(int);

using namespace std;	
void main()
{
	int num;
	cout << "Enter the number : ";
	cin >> num;

	int res = Fun(num);
	cout << "The power of 2 below or equal to this numer is : " << res << endl;
}

int Fun(int num)
{
	for (int i = 0; i < 32; i++)
	{
		if (num >> i == 0)
			return i - 1;
	}

}

/*
OUTPUT :
Enter the number : 20
The power of 2 below or equal to this numer is : 4
*/
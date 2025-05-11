//Program to Print the Rotated Hourglass Pattern
#include<iostream>
using namespace std;
int main()
{
	int n = 5;
	for (int i = 0;i <= n;i++)
	{
		for (int j = 0;j <= i;j++)
		{
			cout << "* ";
		}
		int spaces = 2 * (n - i);
		for (int k = 0;k < spaces;k++)
		{
			cout << "  ";
		}
		for (int j = 0;j <= i;j++)
		{
			cout << "* ";
		}
		cout << endl;
	}
	for (int i = n - 1;i >= 0;i--)
	{
		for (int j = 0;j <= i;j++)
		{
			cout << "* ";
		}
		int spaces = 2 * (n - i);
		for (int k = 0;k < spaces;k++)
		{
			cout << "  ";
		}
		for (int j = 0;j <= i;j++)
		{
			cout << "* ";
		}
		cout << endl;
	}
}
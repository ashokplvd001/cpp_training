/*check whether the given string is pallindrome or not usng recursion*/
#include<iostream>
using namespace std;
int palindrome(char arr[], int, int);
int main()
{
	char arr[100];
	cin.getline(arr, 100);
	int end = 0;
	while (arr[end])
	{
		end++;
	}
	end--;
	if (palindrome(arr, 0, end))
	{
		cout << "pallindrome";
	}
	else
	{
		cout << "not pallindrome";
	}
	return 0;
}
int palindrome(char arr[], int first, int end)
{
	if (first >= end)
	{
		return 1;
	}
	if (arr[first] != arr[end])
	{
		return 0;
	}
	palindrome(arr, first + 1, end - 1);
}
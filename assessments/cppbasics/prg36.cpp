//Program to Print the Given String in Reverse Order Using Recursion
#include <iostream>
#include <cstring>
using namespace std;
void reverseString(char str[], int start, int end)
{
	if (start >= end)
		return;
	swap(str[start], str[end]);
	reverseString(str, start + 1, end - 1);
}
int main()
{
	char str[100];
	cout << "Enter a string: ";
	cin.getline(str, 100);
	int n = strlen(str);
	reverseString(str, 0, n - 1);
	cout << "Reversed string: " << str << endl;
	return 0;
}
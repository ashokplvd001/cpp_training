//Program to Calculate the Length of the String Using Recursion
#include <iostream>
#include <cstring>
using namespace std;
int stringLength(char str[], int index)
{
	if (str[index] == '\0')
		return index;
	return stringLength(str, index + 1);
}
int main()
{
	char str[100];
	cout << "Enter a string: ";
	cin.getline(str, 100);
	int length = stringLength(str, 0);
	cout << "Length of the string: " << length << endl;
	return 0;
}
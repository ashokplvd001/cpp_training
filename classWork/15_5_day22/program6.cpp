#include <iostream>

using namespace std;
#define MAX 100 
int countVowels(char* str)
{
	int count = 0 ;
	while (*str)
	{
		switch (*str)
		{
			case 'a' :
			case 'e' :
			case 'i' :
			case 'o' :
			case 'u' :
			case 'A' :
			case 'E' :
			case 'I' :
			case 'O' :
			case 'U' :
				count++;
				break;
		}
		str++;
	}
	return count; 
}

void program6()
{
	char str[MAX] = { 0 };
	cout << "Enter the string\n";
	cin.getline(str, MAX - 1 );


	cout << "count of vowel sin this string is " << countVowels(str) << endl; 


}
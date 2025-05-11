/*
Discription: 	Write a Program to Check if Two Strings are Anagram or Not
*/
#include <iostream>

using namespace std;

int main()
{
	char str1[50];
	char str2[50];

	cin >> str1;
	cin >> str2;
	char alpha[26] = { 0 , };

	bool flag = false; 

	if (strlen(str1) == strlen(str2))
	{

		for (int i = 0; i < strlen(str1); i++)
		{
			alpha[str1[i] - 'a']++;
			alpha[str2[i] - 'a']--;
		}

		int i = 0;
		for (i = 0; i < 26; i++)
		{
			if (alpha[i] != 0)
				break;
		}
		if (i == 26)
			flag = true;
	}
	if (flag == true )
		cout << "This two strings are anagrams\n";
	else
		cout << "This two strings are not anagrams\n";

}

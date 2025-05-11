#include <iostream>
#include <ctype.h>

using namespace std;

bool anagramCheck( char * , char * );

#define MAX 128 
void program4()
{
	char str1[MAX] = { 0 };
	char str2[MAX] = { 0 };

	cout << "Enter first string1 : ";
	cin >> str1;
	cout << "Enter first string2 : ";
	cin >> str2;


	bool flag = anagramCheck(str1, str2);

	if ( flag == true )
		cout << "yes , this are anagrams" << endl;
	else
		cout << "no , this is not anagrams" << endl;


}

bool anagramCheck(char* str1, char* str2)
{
	if (strlen(str1) != strlen(str2))
		return false; 


	int arr[26] = { 0, };

	int i = 0;
	char ch = 0;
	int len = strlen(str1);

	for( int i = 0 ; i < len ; i++ )
	{
		ch = tolower(str1[i]);

		arr[ch - 'a']++;
		ch = tolower(str2[i]);

		arr[ch - 'a']--;
	}
	

	for (i = 0; i < 26; i++)
	{
		if (arr[i] != 0)
			return false;
	}

	
		return false;

}

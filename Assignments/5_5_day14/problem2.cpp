#include <iostream>

using namespace std;

void remVowels(char*);
void program2()
{
	char str[50];
	cin.getline(str, 48);
	cout << str << endl;

	remVowels(str);

	cout << str << endl;

}

void remVowels(char* str)
{
	int i = 0, j = 0;

	int size = strlen(str);

	while (str[i])
	{
		switch (str[i])
		{
		case 'A':
		case 'a':
		case 'E':
		case 'e':
		case 'I':
		case 'i':
		case 'O':
		case 'o':
		case 'U':
		case 'u':
			break;
		default :
			str[j++] = str[i] ;
			break;
		}
		i++;
	}
	str[j] = 0;


}
#include <iostream>

using namespace std; 

void remVowels(char*);
void program7()
{
	char str[50];
	cin.getline(str, 48);
	cout << str << endl;

	remVowels(str);

	cout << str << endl;

}

void remVowels(char* str)
{
	int i = 0,j= 0; 

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
			str[i] = '\0';
			break;
		}
		i++;
	}

	cout << " i = " << i << endl;

	for (int i = 0,j= 0, k = 0 ; i < size; i++ )
	{
		//cout << (int)str[i] << endl;

		if (str[i] == '\0')
		{
			j = 1; 
			while (str[j+i] == '\0' && i+j < size )
				j++;

			k = 0; 

			while (str[k+j+i])
			{
				str[i + k] = str[i + k + j];
				str[i + k + j] = '\0';
				k++;
			}
			cout << " k = " << k << endl;
			cout << " j = " << j << endl;
			i = i + k - 1;
		}
		cout << " i = " << i << endl;
	
	}
	
}
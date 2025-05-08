#include <iostream>

using namespace std; 

#define MAX 128 

void lineRev(char* str);
void strRev(char* str, int len);
void program8()
{
	char str[MAX];

	//scanf("%[^\n]s", str);

	cin.getline(str, MAX - 1);

	int len = -1; 

	while (str[++len]);

	//strRev(str, len);
	lineRev(str);

	cout << str << endl;


}

void lineRev(char* str)
{
	int i = 0, j = 0;
	while (str[i])
	{
		if (str[i] != ' ')
		{
			j = 1;
			while (str[i + j] != ' ' && str[i + j] != '\0')
				j++;

			strRev(str + i, j);
			i = i + j;
		}

		i++;

	}

}


void strRev(char* str, int len)
{
	char temp;
	for (int i = 0; i <= len / 2; i++)
	{
		temp = str[i];
		str[i] = str[len - i - 1];
		str[len - i - 1] = temp;
	}
}
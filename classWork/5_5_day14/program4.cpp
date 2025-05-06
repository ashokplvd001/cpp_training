#include <iostream>

using namespace std;
char * ltrim(char*);

char* rtrim(char*);

char* trim(char*);

void program4()
{
	char str[50] = { 0 };
		char *  ptr = str   ;

	cout << "Enter the string : ";
		scanf("%[^\n]s", str);


		cout <<"---------" <<ptr<< "------------------\n"; 

		int opt = 0; 
		cout << "Enter options 1.ltrim 2.rtrim 3. totalTrim : ";
		cin >> opt;


	switch (opt)
	{
	case 1 :
		ptr = ltrim(str);
		break;
	case 2 :
		ptr = rtrim(str);
		break;
	case 3:
		ptr = ltrim(str);
		ptr = rtrim(str);
		break;
	default :
		cout << "Invalid option\n";
		break;
	}
	cout << "---------" << ptr << "------------------\n";
}

char* ltrim(char* str)
{
	int i = 0, j = 0;

	while (str[i])
	{
		if (str[i] != ' ')
			break;
		i++;
	}

	if (i == 0)
		return str;

	while (str[j+i])
	{
		str[j] = str[j + i];
		j++;
	}
	str[j] = 0; 

	return str; 

}

char* rtrim(char* str)
{
	int i = 0; 
	int point = 0 ; 

	while (str[i])
	{
		// if (str[i] == ' ' && i != 0 && str[i - 1] != ' ')
		// 		
			if (str[i] == ' '  && str[i - 1] != ' ')
			point = i; 

		i++;
	}

	if (str[i - 1] == ' ')
		str[point] = 0;

	return str;
}
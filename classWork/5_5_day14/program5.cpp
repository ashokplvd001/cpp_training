#include <iostream>

using namespace std; 

void program5()
{
	char str[50] = { 0 } ;

	cout << "Enter the string : ";
	cin >> str;

	int i = 0; 
	int count = 0; 
	while (str[i])
	{
		switch (str[i])
		{
		case 'A' :
		case 'a' :
		case 'E' :
		case 'e' :
		case 'I' :
		case 'i' :
		case 'O' :
		case 'o' :
		case 'U' :
		case 'u' :
			count++;
			
		}

		i++;
	}

	cout << "There are " << count << " vowels\n";

}
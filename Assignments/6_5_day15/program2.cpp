#include <iostream>

using namespace std;
char* remSpace(char*);
void readStringTillNewline(char* , int);
void printString(char*);
void program2()
{
	char str[50];
	readStringTillNewline(str, sizeof( str)- 1 ) ;
	printString(str);
	char* ptr = remSpace(str); 
	printString(str);

	
}

void readStringTillNewline(char * str , int size )
{
	cout << "Enter the string : ";
	cin.getline( str , size ) ;
}

char* remSpace(char * str)
{
	int i = -1, j = 0; 
	while (str[++i])
	{
		if (str[i] != ' ')
			str[j++] = str[i];
	}
	str[j] = '\0';
	return str;
}


void printString(char * str )
{
	cout << str << endl;

}
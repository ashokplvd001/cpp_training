#include <iostream>

using namespace std;

#define MAX 128 

int strLength(char*);
void strRev(char* str, int len);
char* strtoken(char* str, char* dilim);

int main()
{
	char str[MAX] = { 0 };

	//scanf("%[^\n]s", str);

	cin.getline(str, MAX - 1);

	char arr[10][30] = {0 };
	int i = 0; 
	strcpy( arr[i] , strtoken(str, (char*)" "));

	int len = 0 ; 
	while ( arr[i])
	{
		len = strLength(arr[i]);
		strRev(arr[i], len);

		strcpy( arr[++i] , strtoken(NULL , (char*)" ")) ;

	}
	int j = 0;
	strcpy(str, arr[j++]);
	

	while (j <= i)
	{
		strcat(str, arr[j]);
		j++;
	}


	cout << str << endl;



}

int strLength(char* str)
{
	int len = -1 ;
	while (str[++len]);
	return len; 
}

char* strtoken(char* str, char* dilim)
{

	
	static char * ptr1 = nullptr; 
	if (str != nullptr)
		ptr1 = str;

	if ( *ptr1 == NULL )
		return nullptr;

	char* ptr2 = ptr1;

	int i = 0;
	bool flag = false;
	char ch = '\0';
	while ( *ptr1 )
	{
		i = 0;
		while (dilim[i])
		{
			if (*ptr1 == dilim[i])
				break; 
			i++;
		}

		if (dilim[i] != '\0')
		{
				*ptr1 = '\0';		
		}

		if( dilim[i] == '\0' and ch == '\0' )
		{
			if (flag == false)
				ptr2 = ptr1;
			else
				break;

				flag = true; 
		}
		ch = *ptr1; 
		ptr1++;
	}

	return ptr2; 
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


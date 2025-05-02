#include <iostream>

using namespace std;

void fun6(char*, char*, char*);

void charArray6()
{
	char str1[20]={'\0',}, str2[20], str3[50] = {0};

	cout << "Enter the two strings : ";

	//cin >> str1 >> str2;
	strcpy(str2, "Bhima");
	 fun6(str1, str2, str3);

	 cout << str3<<endl;

}

void fun6(char* s1, char* s2, char* s3)
{
	int l = 0 , i=0 , j=0; 
	while (s1[i] || s2[j])
	{
		if (s1[i])
		{
			s3[l++] = s1[i++];
		}

		if (s2[j])
		{
			s3[l++] = s2[j++];
		}
	}
	s3[l] = '\0';
}
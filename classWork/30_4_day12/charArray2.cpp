#include <iostream>
#include <cstdio>

using namespace std;

void charArray2()
{
	// char name[20] = "ashok";
	char name[20] = { 'a' ,'s','h', 'o' , 'k' };

	for (int i = 0; i < 20; i++)
	{
		cout << (int)name[i] << " - " << name[i] << endl;
	}

	for (int i = 0; i < 20; i++)
	{
		name[i] = i + 48;
	}

	for (int i = 0; i < 20; i++)
	{
		cout << (int)name[i] << " - " << name[i] << endl;
	}

	name[0] = 'a';
	name[1] = 's';
	name[2] = 'h';
	name[3] = 'o';
	name[4] = 'k';

	for (int i = 0; i < 20; i++)
	{
		cout << (int)name[i] << " - " << name[i] << endl;
	}

	printf("======\n");

	printf("%s\n", name);
	scanf("%[^\n]s", name);	//
	printf("%s\n", name);

	printf("======\n");
	scanf(" ");
	fgets(name, 18, stdin);

	for (int i = 0; i < 20; i++)
	{
		cout << (int)name[i] << " - " << name[i] << endl;
	}

	printf("%s\n", name);
	puts(name);


}
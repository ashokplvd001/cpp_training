#include <iostream>

using namespace std;

#define MAX 128 

void program3()
{

	char str[MAX] = { 0 , };

	scanf("%s", str);

	int alpha[26] = { 0 , };

	int i = 0;
	while (str[i])
	{
		alpha[str[i] - 'a']++;
		i++;
	}

	for (int i = 0; i < 26; i++)
	{
		if (alpha[i] != 0)
			cout <<( char) (i + 'a') << " - " << alpha[i] << endl;
	}
}
#include <iostream>

using namespace std;

#define MAX 50 

void program2()
{

	char str[MAX] = { 0 };

	scanf("%s", str);

	int i = 0, j = 0, k = 0, count = 0;
	while (str[i])
	{
		for (j = 0; j < i; j++)
		{
			if (str[i] == str[j])
				break;
		}
		if (j == i)
		{
			count = 0;
			while (str[j])
			{
				if (str[j] == str[i])
					count++;
				j++;
			}
			cout << str[i] << " - " << count << endl;

		}

		i++;
	}


}
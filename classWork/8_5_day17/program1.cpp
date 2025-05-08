#include <iostream>

using namespace std; 

#define MAX 50 

void program1()
{

	char str[MAX] = { 0 };
	
	scanf("%s", str);

	int i = 0, j = 0, k = 0 , count = 0 ;
	while (str[i])
	{
		for ( j = 0; j < i; j++)
		{
			if (str[i] == str[j])
				break;
		}
		if (j == i)
		{
			k = 0 , count = 0 ;
			while (str[k+i])
			{
				if (str[i+k] == str[i])
					count++;
				k++;
			}
			cout << str[i] << " - " << count << endl;

		}

		i++;
	}


}
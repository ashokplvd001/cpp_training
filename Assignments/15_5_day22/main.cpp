#include <iostream>

using namespace std;

int main()
{
	char str[50] = { 0, };
	cin >> str;

	int i = 0, j = 0;
	bool flag = false;
	int count = 0;
	int sum = 0;

	while (true)
	{
		flag = false;
		j = 0;
		i = 0;
		count = 0;
		while (str[i])
		{
			sum = str[i] - str[i + 1];
			//	if( sum == 1 || sum == -1  )
			if (sum != -1)
			{
				str[j++] = str[i];
			}
			else {
				count++;
				i++;
			}

			i++;
		}
		str[j] = '\0';
		if (j == i)
			break;


		cout << str << '\n' << "count = " << count << endl;

	}

	cout << str << endl;



}
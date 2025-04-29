#include <iostream>
using namespace std;

void loop2()
{
	int n; 
	cout << "Enter the n value : ";
	cin >> n;
#if 0 
	for (int i = 0 , j; i < n; i++)
	{
		for (j = 1; j < n; j++)
			cout << i * n + j<<"*" ;
		cout << i * n + j << endl;
	}
#elif 0 

	for (int i = 1; i <= n * n; i++)
	{
		if (i % n == 0)
			cout << i << endl;
		else
			cout << i << '*';
	}
#elif 1

	iter1 = 0;
	while (iter1 < n)
	{
		iter2 = 0; 
		while (iter2 < n)
		{
			if (count % n == 0)
				cout << count;
			else
				cout << count << '*';
			count++; 
			iter2++;
		}
		cout << endl;
		iter1++;
	}
	cout << "end3\n";
#endif


}
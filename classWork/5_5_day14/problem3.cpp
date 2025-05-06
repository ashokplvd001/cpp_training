#include <iostream>

using namespace std;

void program3()
{
	int start = 0, end = 0; 

	cout << "Enter start and end numbers : ";
		cin >> start >> end;

		if (start % 2)
			start += 1;

		for (int i = start; i <= end; i += 2 )
		{
		
				cout << i << " ";
		}

		/*
	for (int i = start; i <= end; i++)
	{
		if (i % 2 == 0)
			cout << i << " ";
	}
	cout << endl;

	*/


}
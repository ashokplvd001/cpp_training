#include <iostream>

using namespace std;

void program8()
{
	int n;

	cin >> n;
	cout << endl;
	int  ch = 1;
	for (int i = 0, j; i < n; i++)
	{
		for (j = 0; j <= i; j++)
			cout << ch++ << '\t';
		cout << endl << endl;
	}
}
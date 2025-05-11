/*
Description :A strange machine doubles a number every time you press a button.
Starting from 1, you press the button n times.
Find the sum of all numbers you see after each press.

*/


#include <iostream>

using namespace std;	

void main()
{
	int num;
	cout << "Enter the number : ";
	cin >> num;

	int value = 1;
	while (num)
	{

		cout << value << ' ';
		value *= 2;
		num--;
	}
	cout << endl;

}

/*
OUTPUT :
Enter the number : 6
1 2 4 8 16 32
*/
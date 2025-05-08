#include <iostream>

using namespace std; 
void printPattern(int);

void program5()
{
	int num = 0;
	cout << "Enter the number : ";
	cin >> num; 

	printPattern(num);
}

void printPattern(int num)
{

	for (int i = 1; i < 2 * num; i++)
	{
		if (i <= num)
		{
			for (int j = 0; j < num-i ; j++)
			{
				cout << ' ';
			}
			for (int j = 2 * i-1 ; j > 0 ; j--)
			{
				cout << '*';
			}
		}
		else
		{
			for (int j = i - num ; j > 0; j--)
			{
				cout << ' ';
			}
			for (int j = 2 * ( 2 *  num - i )-1  ; j > 0  ; j--)
			{
				cout << '*';
			}
			

		}
		cout << endl;
	}

}
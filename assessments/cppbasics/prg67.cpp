/*
Description :  Use a loop to iterate through numbers from 1 to n.
For each number, check if it's divisible by 3. If it is, skip that number.
Logic: If not divisible by 3, print the number.
*/


#include <iostream>

using namespace std;	
void main()
{
	int num;
	cout << "Enter the number : ";
	cin >> num;

	for (int i = 1; i <= num; i++)
	{
		if (i % 3)
			cout << i << ' ';
	}
	cout << endl;
}

/*
OUTPUT :
Enter the number : 10
1 2 4 5 7 8 10
*/
/*
Description :	You received a secret code in the form of an integer.
The number of 1s in its binary form tells how many steps you need to unlock a door.
Find the number of 1s in the binary form of the given number.
*/


#include <iostream>
int Fun(int);

using namespace std;	

void main()
{
	int num;
	cout << "Enter the number : ";
	cin >> num;


	int res = Fun(num);
	cout << res << " of 1's there in " << num << endl;

}
int Fun(int num)
{
	int count = 0;
	for (int i = 0; i < 32; i++)
	{
		if ((num >> i) & 1)
			count++;
	}
	return count;
}



/*
OUPUT :
Enter the number : 7
3 of 1's there in 7
*/
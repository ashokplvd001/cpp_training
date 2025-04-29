/*
Description :	You received a secret code in the form of an integer.
The number of 1s in its binary form tells how many steps you need to unlock a door.
Find the number of 1s in the binary form of the given number.


Auther : Ashok Giddaluru ( 293950 )
Date of Creation : 28-4-24
DAte of modification : 28-4-24
Vesrion : 0.1
*/


#include <iostream>
int problem18Fun(int);

using namespace std;	// using name space to use "cout" and "cin" 

void problem18()
{
	int num;
	cout << "Enter the number : ";
		cin >> num;


	int res = problem18Fun(num);
	cout << res << " of 1's there in " << num << endl;

}
int problem18Fun(int num )
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
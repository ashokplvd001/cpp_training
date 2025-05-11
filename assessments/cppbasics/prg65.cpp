/*
Description :You are allowed to visit only odd-numbered floors.
Start from floor 1, and recursively call the function, adding 2 to the current floor each time, until it exceeds n.
*/


#include <iostream>
void Fun(int, int);
using namespace std;	

void main()
{
	int num;
	cout << "Enter the number : ";
	cin >> num;


	Fun(1, num);
	cout << endl;


}
void Fun(int i, int num)
{
	if (i > num - 2)
	{
		cout << i << endl;
		return;
	}
	cout << i << " , ";
	Fun(i + 2, num);
}

/*
OUTPUT :
Enter the number : 10
1 , 3 , 5 , 7 , 9
*/

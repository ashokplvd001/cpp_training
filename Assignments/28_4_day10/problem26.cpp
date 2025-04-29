/*
Description :You are allowed to visit only odd-numbered floors.
Start from floor 1, and recursively call the function, adding 2 to the current floor each time, until it exceeds n.
Auther : Ashok Giddaluru ( 293950 )
Date of Creation : 28-4-24
DAte of modification : 28-4-24
Vesrion : 0.1
*/


#include <iostream>
void problem26Fun(int , int);
using namespace std;	// using name space to use "cout" and "cin" 

void problem26()
{
	int num;
	cout << "Enter the number : ";
	cin >> num;

	
	problem26Fun(1, num);
	cout << endl;


}
void problem26Fun(int i , int num)
{
	if (i > num-2)
	{
		cout << i << endl;
		return;
	}
	cout << i << " , ";
	problem26Fun(i+2, num);
}

/*
OUTPUT :
Enter the number : 10
1 , 3 , 5 , 7 , 9
*/

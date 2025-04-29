/*
Description :- Start with a function that takes the current energy (`n`) as input.
- **Recursion Base Case**: Stop when energy becomes zero or less.

Auther : Ashok Giddaluru ( 293950 )
Date of Creation : 28-4-24
DAte of modification : 28-4-24
Vesrion : 0.1
*/


#include <iostream>
void problem25Fun(int num);
using namespace std;	// using name space to use "cout" and "cin" 

void problem25()
{
	int num;
	cout << "Enter the number : ";
	cin >> num;

	problem25Fun(num);
	
}

void problem25Fun(int num)
{
	if (num == 0)
	{
		cout << num <<endl ;
		return;
	}
	cout << num <<"->";
	problem25Fun(num / 2);
}

/*
OUTPUT :
Enter the number : 18
18->9->4->2->1->0
*/
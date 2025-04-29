/*
Description : Write a recursive function to print numbers from N down to 1.
Auther : Ashok Giddaluru ( 293950 )
Date of Creation : 28-4-24
DAte of modification : 28-4-24
Vesrion : 0.1
*/


#include <iostream>
void problem1Fun(int num);

using namespace std;	// using name space to use "cout" and "cin" 

void problem1()
{
	int num; 

	cout << "Enter the number : ";
	cin >> num; 

	problem1Fun(num);
}

void problem1Fun(int num)
{
	if (num <= 1)
	{
		cout << num << endl;
		return;
	}
	cout << num << ',';
	problem1Fun(num - 1);
	return; 
}


/*
OUTPUT :

Enter the number : 10
10,9,8,7,6,5,4,3,2,1
*/
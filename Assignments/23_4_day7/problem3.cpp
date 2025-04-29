/*
Description :  Program to Check print tables from given start number to end number .

Auther : Ashok Giddaluru ( 293950 )
Date of Creation : 22-4-24
DAte of modification : 22-4-24
Vesrion : 0.1
*/


#include <iostream>

using namespace std;	// using name space to use "cout" and "cin" 

void problem3()
{
	int start, end; 

	cout << "Enter the start : ";
	cin >> start;
	cout << "Enter the end : ";
	cin >> end;

	for (int i = start; i <= end; i++)
	{
		for (int j = 1; j <= 10; j++)
			cout << i << " * " << j << " = " << i * j << endl;
		cout << "===============\n";
	}

	cout << "***********************\n";

	for (int i = 1; i <= 10; i++)
	{
		for (int j = start ; j <= end; j++)
			cout << i << " * " << j << " = " << i * j <<'\t';
		cout <<endl ;
	}


}

/*
OUTPUT :

Enter the start : 3
Enter the end : 5
3 * 1 = 3
3 * 2 = 6
3 * 3 = 9
3 * 4 = 12
3 * 5 = 15
3 * 6 = 18
3 * 7 = 21
3 * 8 = 24
3 * 9 = 27
3 * 10 = 30
===============
4 * 1 = 4
4 * 2 = 8
4 * 3 = 12
4 * 4 = 16
4 * 5 = 20
4 * 6 = 24
4 * 7 = 28
4 * 8 = 32
4 * 9 = 36
4 * 10 = 40
===============
5 * 1 = 5
5 * 2 = 10
5 * 3 = 15
5 * 4 = 20
5 * 5 = 25
5 * 6 = 30
5 * 7 = 35
5 * 8 = 40
5 * 9 = 45
5 * 10 = 50
===============
***********************
1 * 3 = 3       1 * 4 = 4       1 * 5 = 5
2 * 3 = 6       2 * 4 = 8       2 * 5 = 10
3 * 3 = 9       3 * 4 = 12      3 * 5 = 15
4 * 3 = 12      4 * 4 = 16      4 * 5 = 20
5 * 3 = 15      5 * 4 = 20      5 * 5 = 25
6 * 3 = 18      6 * 4 = 24      6 * 5 = 30
7 * 3 = 21      7 * 4 = 28      7 * 5 = 35
8 * 3 = 24      8 * 4 = 32      8 * 5 = 40
9 * 3 = 27      9 * 4 = 36      9 * 5 = 45
10 * 3 = 30     10 * 4 = 40     10 * 5 = 50


*/
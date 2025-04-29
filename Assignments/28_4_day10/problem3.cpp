/*
Description : Write a recursive function to return the nth Fibonacci number.
				(Fibonacci series: 0, 1, 1, 2, 3, 5, 8, ...)
Auther : Ashok Giddaluru ( 293950 )
Date of Creation : 28-4-24
DAte of modification : 28-4-24
Vesrion : 0.1
*/


#include <iostream>
int problem3Fun(int num , int , int );

using namespace std;	// using name space to use "cout" and "cin" 

void problem3()
{
	int num; 
	cout << "Enter the number : ";
	cin >> num;

	int ret = problem3Fun( num , 0 , 1 );
	cout <<num<<"th fibonacci number is : " << ret << endl;

}

int problem3Fun( int num , int a , int b )
{
	if (num <= 1)
	{
		cout << a <<endl ;
		return a; 
	}
	cout << a << ',' ;
	
	
	a = b - a; 
	b = a + b; 
	return problem3Fun(num - 1, a, b);
}

/*
OUTPUT :

Enter the number : 10
0,1,1,2,3,5,8,13,21,34
10th fibonacci number is : 34

*/
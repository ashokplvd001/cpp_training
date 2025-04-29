/*
Description :	Find the nth number made of omly 1 , 4, 6 , 9
Auther : Ashok Giddaluru ( 293950 )
Date of Creation : 29-4-24
DAte of modification : 29-4-24
Vesrion : 0.1
*/


#include <iostream>

using namespace std;	// using name space to use "cout" and "cin" 

#define SIZE 4 

void problem1()
{

	int arr[] = { 1, 4, 6 , 9 };

	int n; 
	cout << "Enter the number : ";
	cin >> n;

	int count = 0  , num = 0 , temp = 0 , res ;

	while (count  < n)
	{
		num++;
		temp = num;
		
		while (temp)
		{
			res = num % 10; 
			if ( !(arr[0] == res || arr[1] == res || arr[2] == res || arr[3] == res))
				break;
			
			temp /= 10; 
		}

		if (temp == 0)
		{
			count++;
		//	cout << num << ',';
		}
		
	}
	//cout << endl;
	cout << n << "th number only contains 1, 4 , 6, 9 is " << num << endl;

}

/*
OUTPUT :

Enter the number : 8
1,4,6,9,11,14,16,19,
8th number only contains 1, 4 , 6, 9 is 19
*/




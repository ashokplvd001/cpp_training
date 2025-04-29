/*
Description :posibilites to for  a number with sum of 4 numbers without repeadting same patters
Auther : Ashok Giddaluru ( 293950 )
Date of Creation : 29-4-24
DAte of modification : 29-4-24
Vesrion : 0.1
*/


#include <iostream>

using namespace std;	// using name space to use "cout" and "cin" 

void problem3()
{
	int num;  

	cout << "Enter the number : ";
	cin >> num; 

	if (num < 4)
	{
		cout << "not possbile : ";
		return; 
	}

	int arr[4] = { 1 , 1 , 1 , num - 3 } ;
	int tempArr[4] = { 1 , 1, 1, num - 3 };
	int index = 4 ; 
	while (arr[0] <= arr[3])
	{
		tempArr[3] = arr[3];

		//temp = tempArr[index--];
	if( !( arr[index] <= arr[3]))

		while (tempArr[index] < arr[3])
		{
				res = tempArr[0] + tempArr[1] + tempArr[2] + tempArr[3];
				cout << tempArr[0] << '+' << tempArr[1] << '+' << tempArr[2] << '+' << tempArr[2] << '=' << res << endl;
				tempARr[3]--;
				tempArr[index]++;
		}
	
		for (int i = 2; i >= (index - 1); i--)
		{
			if( )
			temp[i] = ++arr[i];
			arr[3]--;
		}

	}


}
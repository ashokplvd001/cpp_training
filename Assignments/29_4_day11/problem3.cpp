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
	int count = 0; 

	if (num < 4)
	{
		cout << "not possbile : ";
		return;
	}

	int a[4] = { 1 , 1 , 1 , num - 3 };
	int t[4] = { 1 , 1, 1, num - 3 };

	int temp = a[3] , sum = 0 , index = 2 ;
	while (a[0] <= a[3])
	{
		t[3] = a[3];
			while (t[index] <= t[3])
			{
				sum =  t[0] + t[1] + t[2] + t[3];
				//if (sum  == num)
				{
					cout << t[0] << '+' << t[1] << '+' << t[2] << '+' << t[3] << '=' << sum << endl;
				}
				t[index]++;
				t[3]--;
				count++;

			}

			if (index == 0)
			{
				a[0] = t[0];
			}

			if (a[1] <= a[3])
			{
				index = 1;
				if ( !(a[2] + 1 > a[3]) )
				{
					t[2] = ++a[2];
					a[3]--;
				}
				if (!(a[1] + 1 > a[3]))
				{
					a[3]--;
					t[1] = ++a[1];
				}
				
			}
			else
			{
				index = 0;
				t[0] = ++a[0];
				a[3]-- ;
			}

	}

	cout << "the possibilities are : "<<count;

}


/*
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
*/
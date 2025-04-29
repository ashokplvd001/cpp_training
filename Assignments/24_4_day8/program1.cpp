#include <iostream>

using namespace std; 

void program1()
{
	int iter; 
	cout << "Enter the number : ";
	cin >> iter; 

	int arr[4] = { 2,3,5,7 };
	int count = 1 ;
	int temp,flag , res ; 

	while (iter)
	{
		count++;
		temp = count;

		while (temp)
		{
			res = temp % 10;
			flag = 0; 
			for (int i = 0; i < 4; i++)
			{
				if (res == arr[i])
				{
					flag = 1;
					break;
				}
			}
			if (flag == 0)
				break;
				temp /= 10;
		}
		if (temp == 0)
			iter--;
		//if( ) iter--;
	}
	cout << "result : " << count << endl;
}
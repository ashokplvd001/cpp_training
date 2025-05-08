#include  <iostream>

using namespace std; 
#define MAX 30 
void program4()
{
	int arr[MAX];

	int size;
	cout << "Enter the size of array : ";
	cin >> size;


	for (int i = 0; i < size; i++)
	{
		cout << "Enter element : ";
		cin >> arr[i];
	}

	int i = 0, j = 0 , k =0 ; 

	for (i = 0; i < size;i++)
	{
		
		for ( k = 0; k < j; k++)
		{
			if (arr[i] == arr[k])
				break;	
		}
		 
		if (k == j)
			arr[j++] = arr[i];

	}


	size = j; 
	for (int i = 0; i < size; i++)
	{
	
		cout << arr[i]  << ' ' ;
	}
	cout << endl;
	
}
/*
int removeDuplicate(int arr, int size)
{

}
*/

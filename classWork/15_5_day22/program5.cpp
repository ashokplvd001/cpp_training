#include <iostream>

using namespace std; 
 
void reverseArray(int * arr, int size)
{

	int* rarr = arr + size - 1;
	int temp = 0;

	while( rarr > arr ) 
	{
		temp = *(arr) ; 
		*arr = *rarr;
		*rarr = temp; 

		rarr--, arr++ ;
	}



	//int temp = 0;
	//for (int i = 0; i < size / 2 ; i++)
	//{
	//	temp = *(arr + i); 
	//	*(arr + i) = *(arr + size - i - 1 );
	//	*(arr + size - i - 1) = temp; 
	//}
	return; 
}

void printArray(int* arr, int size)
{
	for (int i = 0; i < size; i++)
		cout << *(arr++) << '\t';
	cout << endl;
}


void program5()
{

	cout << "--------------------Program started----------------------\n";

	int arr[6];
	int n = sizeof(arr) / sizeof(arr[0]);
	cout << "Enter "<<n<<" elements : \n";
	for (int i = 0; i < n; i++)
		cin >> arr[i];

	printArray(arr, n);

	reverseArray(arr, n);

	printArray(arr, n);

	cout << "--------------------Program ended----------------------\n";
}
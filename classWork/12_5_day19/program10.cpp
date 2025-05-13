#include <iostream>

using namespace  std; 

int readValues(int*, int);
int  sort(int*, int);
void  printArr(int*, int);
int * createArr(int*, int);

void program10()
{
	int size; 
	cin >> size; 

	int* arr = nullptr; 
	arr = createArr(arr, size);

	readValues( arr  , size);
	sort(arr, size);
	printArr(arr, size);

}
// here int * arr cant reflect the modification to main , so return must be needed 
int * createArr(int* arr, int size)
{
	arr = (int*)malloc(sizeof(int) * size);
	return arr; 
}

int  readValues(int* arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << "Enter the " << i << " number : ";
		cin >> *(arr++);
	}
	return 0; 
}

int sort(int* arr, int size)
{
	int* ptr , temp = 0  ; 

	for (int i = 0; i < size-1; i++)
	{
		
		ptr = arr + 1 ; 
		
		for (int j = i + 1; j < size; j++)
		{
			

			if (*ptr < *arr)
			{
				temp = *ptr; 
				*ptr = *arr; 
				*arr = temp;
			}

			ptr++ ; 
		}
		arr++ ;
	}
	return 0; 
}

void printArr(int* arr, int size)
{
	for (int i = 0; i < size; i++)
		cout << *arr++ << ' ';
	cout << endl;
}

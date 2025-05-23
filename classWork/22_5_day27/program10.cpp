#include <iostream>

using namespace std; 

class Array
{
	int * arr; 
	int size ;

public : 
	Array(int arr[], int size);
	int biggest();
	bool assending();
	bool desending();
	void print();
};

Array::Array(int arr[], int size)
{
	this->size = size; 
	this->arr = new int[size] { 0, };

	for (int i = 0; i < size; i++)
		this->arr[i] = arr[i];
	
}

int Array::biggest()
{
	int lar = arr[0];

	for (int i = 1; i < this->size; i++)
	{
		if (lar < arr[i])
			lar = arr[i];
	}

	return  lar ; 
}


bool Array::desending () 
{
	if (size == 0)
		return false;

	int temp = 0;
	for (int i = 0; i < size; i++)
	{
		for (int j = i + 1; j < size; j++)
		{
			if (arr[i] < arr[j])
			{
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp ;
			}
		}
	}
	return true;
}


bool Array::assending() 
{
	if (size == 0)
		return false;

	int temp = 0;
	for (int i = 0; i < size; i++)
	{
		for (int j = i + 1; j < size; j++)
		{
			if (arr[i] > arr[j])
			{
				temp = arr[i]; 
				arr[i] = arr[j];
				arr[j] = temp ;
			}
		}
	}
	return true;
}


void Array::print()
{
	cout << "Array elements are : ";
	for (int i = 0; i < size; i++)
		cout << arr[i] << '\t';
	cout << endl;
}

void program10()
{

	int arr[5] = { 1 , 54 , 34, 6545 , 23 };

	Array a1( arr , 5 );

	a1.print();
	cout << "largets = " << a1.biggest() << endl;

	a1.assending();
	a1.print();
	a1.desending();
	a1.print();
	
}


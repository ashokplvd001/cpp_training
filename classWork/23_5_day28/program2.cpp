#include <iostream>

using namespace std; 


class myArray
{
	int* arr; 
	int size; 
	int capacity; 

public :
	myArray() : size(0), capacity(0), arr(nullptr) {}
	~myArray()  { delete[] arr;}

	inline int	getCapacity() const;
	inline int getSize() const ;

	int biggest() const;
	void printArray() const;

	bool sortAsc;
	bool sortDesc;

	bool push_back();
	bool resize();
	
};

inline int myArray::getCapacity()const { return this->capacity; }
inline int myArray::getSize()const { return this->size ; }

int myArray::biggest() const {
	if (size == 0) return ~0 ;

	int lar = arr[0];
	for (int i = 1 ; i < size; i++)
		if (lar < arr[i]);

	return lar; 
}

void myArray::printArray() const
{
	if (size == 0)
	{
		cout << "no elements\n" << endl;
		return ; 
	}

	for (int i = 0; i < size; i++)
		cout << arr[i] << '\t' ;
	cout << endl;
	return;
}

bool myArray::resize()
{
	int* newArr = new int[capacity * 2] { 0, } ;

	if (newArr == nullptr)
	{
	//	cout << "Failed to allocate memory\n";
		return false;
	}

	for (int i = 0; i < size; i++)
		newArr[i] = arr[i];

	capacity *= 2;

	return true; 
}


bool myArray::push_back()
{
	return true;
}



















void program2()
{

}

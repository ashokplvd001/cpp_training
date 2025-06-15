#include <iostream>

using namespace std;

template <typename T >
class smartPtr
{
	T* ptr; 
public : 
	smartPtr(T* ptr) : ptr(ptr) {}

	~smartPtr()
	{
		delete ptr; 
	}

	T& operator * ()
	{
		return *ptr; 
	}
};


int main()
{
	smartPtr<int> ptr = new int; 

	*ptr = 20; 
	cout << *ptr;
}



#include <iostream>

using namespace std; 

template <typename T >
class PrintClass
{
	T var; 
public : 
	PrintClass( T v ):var( v){}
	void print()
	{
		cout << var << endl;
	}
};


int main()
{
	PrintClass<int> obj1(10);
	obj1.print();

	PrintClass<string> obj2("okok");
	obj2.print();
}
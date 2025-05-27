#include <iostream>
using namespace std; 

class Data
{
public : 
	int a; 
	void print()
	{
		cout << "a is " << a<<endl;
	}
};

int main()
{
	Data d, * dp; 
	dp = &d; 

	int *iptr = &d.a ;
	int Data::* ptr = &Data::a;

	d.*ptr = 10; 
	cout << "*iptr = " << *iptr << endl;
	d.print();
	
	dp->*ptr = 20; 
	dp->print(); 

}
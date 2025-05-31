#include <iostream>

using namespace std; 

class myArray
{ 
	int * data; 
public : 
	myArray(int val) 
	{
		data = new int(val);
	}
	bool setValue(int val)
	{
		*data = val;
		return true ;
	}
	void display()
	{
		cout << "val = " << *data << endl;
		cout << "address of val = " << data << endl;
	}
};


int main()
{
	myArray a1(10);
	a1.display();

	myArray a2 = a1; 
	a2.display();

	a2.setValue(20);

	a1.display();
	a2.display();

}
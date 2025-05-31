#include <iostream>

using namespace std; 

void greet()
{
	cout << "Hello World!" << endl;
}

int add(int x, int y)
{
	return x + y; 
}

int sub(int x, int y)
{
	return x - y;
}

int main()
{
	void (*fptr)() = greet;

	fptr(); 

	int (* fptr1)( int , int ) = add; 

	cout << "add : " << fptr1(40, 20) << endl;

	fptr1 = sub; 

	cout << "sub : " << fptr1(40, 20) << endl;

}





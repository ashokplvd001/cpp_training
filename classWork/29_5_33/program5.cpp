#include <iostream>
using namespace std; 

template <typename T>
void mySwap(T& a, T& b)
{
	T temp; 
	temp = a; 
	a = b;
	b = temp; 
}


int main()
{
	int a = 23, b = 45; 
	float x = 32.45, y = 345.23;

	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	mySwap(a, b);
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

	cout << "x = " << x << endl;
	cout << "y = " << y << endl;
	mySwap(x,y);
	cout << "x = " << x << endl;
	cout << "y = " << y << endl;


}
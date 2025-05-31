#include <iostream>

using namespace std; 

template < class T1 , class T2 > 

float add(T1 x, T2 y)
{
	return x+y;
}

int main()
{
	int a = 23;
	float b = 42.34;
	
	cout << "sum = " << add(a, b) << endl;
	cout << "sum = " << add(b , a) << endl;

}


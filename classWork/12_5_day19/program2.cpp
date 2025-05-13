#include <iostream>
using namespace std;

void program2()
{
	int a = 10, b = 20, c = 30; 

	int* ptr = nullptr; 

	ptr = &a; 

	cout << *ptr << endl;

	*ptr = 100;

	cout << *ptr << endl;

	ptr = &b;

	cout << *ptr << endl;

	*ptr = 200;

	cout << *ptr << endl;

}
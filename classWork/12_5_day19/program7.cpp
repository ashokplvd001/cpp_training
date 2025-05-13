#include <iostream>

using namespace std; 

void program7()
{
	int a = 10;

	int* ptr = (int*)malloc(3 * sizeof(int));
	*ptr= 202;
	cout << *ptr << endl;

	*(++ptr) = 203;
	cout << *ptr<<endl;

	*(++ptr) = 204;
	cout << *ptr << endl;

	cout << "---------\n";
	cout << ptr[0] << endl;
	cout << ptr[-1] << endl;
	cout << ptr[-2] << endl;

	return;

}
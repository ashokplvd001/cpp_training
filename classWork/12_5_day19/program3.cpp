#include <iostream>

using namespace std; 

void program3()
{
	int a[3] = { 10, 20, 30 };

	cout << a[0] << "\t" << a[1] << "\t" << a[2] << endl;

	int* ptr = &a[0] ; 
	cout << *ptr << endl;

	ptr = &*( a + 1 ) ;
	cout << *ptr << endl;

	ptr = a+2;
	cout << *ptr << endl;

	cout << "--------\n";

	ptr = ptr - 1 ;
	cout << *ptr << endl;

	cout << "--------\n";

	ptr++ ;
	cout << *ptr << endl;

	ptr--;
	cout << *ptr << endl;

	cout << "--------\n";

	++ptr;
	cout << *ptr << endl;

	--ptr;
	cout << *ptr << endl;
 
	cout << "--------\n";
	

}
#include <iostream>

using namespace std; 

void program2()
{
	int a[3] = { 1 , 2, 3 };

	cout << a[0] << '\t' << a[1] << '\t' << a[2] << endl;

	int* ptr = nullptr; 

	ptr = &a[0]; 

	cout <<"ptr[0] = " << &ptr[0] << endl;
	cout << "&*(ptr+0) = " << &*(ptr + 0) << endl;

	cout << "*(ptr+1) = "<< *(ptr + 1) << endl;
	


}
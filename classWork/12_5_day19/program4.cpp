#include <iostream>

using namespace std; 

void program4()
{

	char line[] = "This is a cpp programming class";

	char* ptr = line; 


	while (*ptr)
		cout << *(ptr++);

	cout << endl;

	while ( --ptr >= line)
		cout << *ptr;

	cout << endl;

}

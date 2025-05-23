#include <iostream>

using namespace std;

void program8()
{
	static int* a = new int(10);
	delete a; 
	// *a = 101 ;
}

#include <iostream>

using namespace std; 

void display(char name[])
{
	
	while (*name)
		cout << *name++;

	
	
	cout << endl;
}

void program4()
{

	display((char*)"ashok");

 }
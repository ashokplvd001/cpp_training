#include <iostream>

using namespace std; 

void charArray1()
{
	char name[20];
	cin >> name; 
	cout << "name : " << name << '\t' << " strlen - " << strlen(name) << '\t' << " size of -  " << sizeof(name) << endl;
}
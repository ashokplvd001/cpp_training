#include <iostream>

using namespace std; 

typedef union _employee
{
	int id; 
	char name[20];
}EMP;

void program9()
{
	EMP e; 
	cout << "sizeof( e ) : " << sizeof(e) << endl;
	cin >> e.name;
	cout << "e.id : " << e.id << endl;
	cout << "e.name : " << e.name << endl;
}
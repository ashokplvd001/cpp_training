#include <iostream>

using namespace std;

typedef struct Employee
{
	int empID; 
	int empPhno; 
	string empName; 
	string empAddress;
	char empGender;
}EMP;

void read(EMP* e);
void display(EMP e);


void program5()
{
	EMP e1; 
	e1.empID = 101; 
	e1.empName = "issokay";
	e1.empAddress = "chennai";
	e1.empGender = 'M';
	e1.empPhno = 889900;

	cout << "Size of EMP : " << sizeof(EMP) << "\t size = " << sizeof(e1) << endl;

	display(e1);
	read(&e1);
	display(e1);

	cout << "====================================\n";

	int size = 2; 

	EMP e[2];

	read(e + 0);

	for (int i = 0; i < size; i++)
		read(e + i);
	
	cout << "====================================\n";


	for (int i = 0; i < size; i++)
		display(e[i]);

}

void read(EMP * e)
{
	cout << "Id = "; cin >> e->empID;
	cout << "Name = "; cin >> e->empName;
	cout << "Gender = "; cin >> e->empGender;
	cout << "Address = "; cin >> e->empAddress;
	cout << "Phno = "; cin >> e->empPhno;
}


void display( EMP e)
{
	cout << "Name = " << e.empName << endl;
	cout << "Id = " << e.empID << endl;
	cout << "Gender = " << e.empGender << endl;
	cout << "Address = " << e.empAddress << endl;
	cout << "Phno = " << e.empPhno << endl;
}
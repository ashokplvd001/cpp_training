#include <iostream>
#include <stdlib.h>

using namespace std; 

typedef struct Employee
{
	int e_id;
	char e_name[20];
	char e_desg[20];
}EMP;

void program3()
{
	EMP e;

	cout << "Employee id : " << e.e_id << "\nname : " << e.e_name << "\ndesg : " << e.e_desg << endl;

	e = EMP{ 0, };
	cout << "Employee id : " << e.e_id << "\nname : " << e.e_name << "\ndesg : " << e.e_desg << endl;
	e = { 4, };
	cout << "Employee id : " << e.e_id << "\nname : " << e.e_name << "\ndesg : " << e.e_desg << endl;
	e = { 0, };
	cout << "Employee id : " << e.e_id << "\nname : " << e.e_name << "\ndesg : " << e.e_desg << endl;
	cin >> e.e_id >> e.e_name >> e.e_desg;
	cout << "Employee id : " << e.e_id << "\nname : " << e.e_name << "\ndesg : " << e.e_desg << endl;


}
#include <iostream>

using namespace std; 

class Employee
{
public : 
	int e_id; 
	string e_name; 
};


void program1()
{
	Employee e ;
	e.e_id = 1; 
	e.e_name = "okok";
	cout << "id = " << e.e_id << endl;
	cout << "name = " << e.e_name << endl;

}
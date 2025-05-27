#include <iostream>
#include <string>
#include "EmployeeRecord.h"

using namespace std; 

int main()
{
	LinkedList ll;
	
	cout << "1. Add Employee\n";
	cout << "2. Display All Employees\n";
	cout << "3. Delete Employee by ID\n";
	cout << "4. Search Employee by Name\n";
	cout << "5. Update Salary by ID\n";
	cout << "6. Count Employees\n";
	cout << "0. Exit\n";

	int opt = 0; 
	int id = 0; 
	string name = "";
	float salary = 0; 
	do
	{
		cin >> opt; 
		 
		switch (opt)
		{
			case 0 :
				break;
			default :
				cout << "Invald input\n";
				break;
			case 1:			cin >> id;	cin >> name;	cin >> salary; 
				ll.addEmployee(id, name, salary);	break;
			case 2 :	
				ll.displayEmployees() ;		break;
			case 3 :
				cin >> id; 
				ll.deleteEmployee(id);
				break;
			case 4 :
				cin >> name; 
				ll.searchByName(name);
				break;
			case 5 :
				cin >> id;	
				cin >> salary;
				ll.updateSalary(id, salary); break;
			case 6 :
				ll.countEmployees(); break;
		}

	} while (opt != 0 );

	ll.deleteAllEmployee();
}
#include <iostream>
using namespace std; 

typedef struct _date
{
	int day; 
	int month; 
	int year; 
}DATE;


typedef struct _employee
{
	int e_id; 
	string e_name; 
	string e_depart ;
}EMP;

bool getDetails(EMP& e);

bool nameValidation(string name);

void printDetails(EMP e);

//void 

bool getDetails(EMP& e)
{
	cout << "Enter the employee details\n";

	cout << "ID : ";cin >> e.e_id;
	cout << "Name : ";cin >> e.e_name; 

	if (!nameValidation(e.e_name))	return false; 
	
	cout << "Depart : "; cin >> e.e_depart;

	return true; 
}

void printDetails(EMP e)
{
	cout << "Employee details ->\n";
	cout << e.e_id << endl;
	cout << e.e_name << endl;
	cout << e.e_depart << endl;
	return;
}

bool nameValidation(string name)
{
	for (int i = 0; i < name.length(); i++)
	{
		if (!(isalpha(name[i]) || name[i] == ' '))
			return false; 
	}
	return true; 
}



void program1()
{
	EMP e; 

	if (!getDetails(e))
	{
		cout << "Somthing wrong with input details\n";
		return ; 
	}
	else
	{
		cout << "Details are updated\n";
		printDetails(e);
	}

	return ; 
}






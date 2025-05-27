#include <iostream>
#include <string>
using namespace std; 

class Employee
{
	int e_id;
	string e_name; 
	string e_address;
	int e_phno;

public:
	Employee();
	void set_e_id(int);
	void set_e_name(string);
	void set_e_address(string);
	void set_e_phno(int);

	int get_e_id();
	string get_e_name();
	string get_e_address();
	int get_e_phno();
};
Employee::Employee()
{
	e_id = 0; 
	e_name = "nobody";
	e_address = "nowhere";
	e_phno = 123;
} 

void Employee::set_e_id(int e_id)
{
	this->e_id = e_id; 
}
void Employee::set_e_name(string e_name )
{
	//this->e_name = e_name;
	e_name = e_name;
}
void Employee::set_e_address(string e_address)
{
	this->e_address	 = e_address;
}
void Employee::set_e_phno(int e_phno)
{
	this->e_phno = e_phno ;
}

int Employee::get_e_id( )
{
	return this->e_id ;
}
string Employee::get_e_name( )
{
	return  this->e_name ;
}
string Employee::get_e_address( )
{
	return this->e_address ;
}
int Employee::get_e_phno( )
{
	return this->e_phno ;
}


int main()
{
	Employee t1 ; 
	cout << "emp_id " << t1.get_e_id() << endl;
	cout << "emp_name " << t1.get_e_name() << endl;
}
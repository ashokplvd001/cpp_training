#pragma once 
#include <string>
using namespace std;

class EmployeeRecord
{
	unsigned int s_id; 
	string s_name;
	float s_salary;
	//static unsigned int s_totalIds ;
public :
	EmployeeRecord(int id  , string name , float salary );

	bool setName(string name);
	bool setId(int id);
	bool setSalary(float salary);
	string getName();
	int getId();
	float getSalary();
};




class Node
{
	EmployeeRecord e;
	Node* next; 
public: 
	Node(EmployeeRecord e, Node* ptr);
	EmployeeRecord getEmployeedetails();
	Node* getNext();
	bool setNext(Node * ptr);
	bool SetSalary( float salary );
};


class LinkedList
{
	Node* head;
	bool idValidate(int id);
	bool nameValidate(string name);
	bool salaryValidate(float salary);
public : 
	LinkedList();
	bool addEmployee( int id , string name , float salary );
	bool deleteEmployee(int id);
	bool deleteAllEmployee();
	bool searchByName(string name);
	bool updateSalary(int id, float salary);
	int countEmployees();
	void displayEmployees();
};

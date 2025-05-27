#include <iostream>
#include <string>
#include "EmployeeRecord.h"

using namespace std; 

////////////////////

EmployeeRecord::EmployeeRecord(int id = 0 , string name = "", float salary= 0 )
{
	s_id = id;
	s_name = name;
	s_salary = salary;
}

bool EmployeeRecord::setName(string name)
{
	s_name = name;
	return true;
}

bool EmployeeRecord::setId(int id)
{
	s_id = id;
	return true;
}

bool EmployeeRecord::setSalary(float salary)
{
	s_salary = salary;
	return true;
}

string EmployeeRecord::getName()
{
	return s_name;
}

int EmployeeRecord::getId()
{
	return s_id;
}

float EmployeeRecord::getSalary()
{
	return s_salary;
}

//////////////////////



Node::Node(EmployeeRecord e = 0 , Node* ptr = nullptr )
{
	this->e.setId(e.getId());
	this->e.setName(e.getName());
	this->e.setSalary(e.getSalary());
	 next  = ptr;
}

EmployeeRecord Node::getEmployeedetails()
{
	return e;
}

Node* Node::getNext()
{
	return next;
}

bool Node::setNext(Node* ptr)
{
	next = ptr;
	return true;
}

bool Node::SetSalary(float salary)
{
	e.setSalary(salary);
	return true; 
}




//////////////////


LinkedList::LinkedList()
{
	head = nullptr;
}

bool LinkedList::idValidate(int id)
{
	Node* temp = head;
	while (temp)
	{
		if (temp->getEmployeedetails().getId() == id)
			break;
		temp = temp->getNext();
	}

	if (temp)
		return false;

	return true;

}

bool LinkedList::nameValidate(string name)
{
	if ((name != "") && (name.size() < 50))
		return true;
	return  false;
}
bool LinkedList::salaryValidate(float salary)
{
	if (salary > 0)
		return true;

	return false;
}



bool LinkedList::addEmployee(int id, string name, float salary)
{
	if (id <= 0)
	{
		cout << "Failed to add : Invalid employee\n";
		return false;
	}

	if (!idValidate(id))
	{
		cout << "Failed to add : id already existed\n";
		return false;
	}

	if (!nameValidate(name))
	{
		cout << "Failed to add : name is invalid\n";
		return false;
	}

	if (!salaryValidate(salary))
	{
		cout << "Failed to add : name is invalid\n";
		return false;
	}

	EmployeeRecord e{id, name, salary};

	Node* newNode = new Node{ e , nullptr };

	if (head == nullptr)
	{
		head = newNode;
		return true ;
	}
		

	Node* temp = head;

	while (temp->getNext())
		temp = temp->getNext();

	temp->setNext(newNode );
	cout << "Employee added : " << name << endl;
	return true;
}


bool LinkedList::deleteEmployee(int id)
{
	if (head == nullptr)
		return false;
	else if (head->getEmployeedetails().getId() == id)
	{
		Node* temp = head;
		head = head->getNext();
		delete temp;
	}

	Node* temp1 = head;
	Node* temp2 = head->getNext();

	while (temp2)
	{
		if (temp2->getEmployeedetails().getId() == id)
			break;
		temp1 = temp2;
		temp2 = temp2->getNext();
	}

	if (temp2 == nullptr)
		return false;

	temp1 = temp2->getNext();
	delete temp2;

	return true; 
}

bool LinkedList::deleteAllEmployee()
{
	if (head == nullptr)
		return true;  

	Node* temp1 = head; 
	Node* temp2 = temp1->getNext();

	while (temp2)
	{
		delete temp1;
		temp1 = temp2;
		temp2 = temp2->getNext();
	}
	delete temp1;

	head = nullptr; 
}


bool LinkedList::searchByName(string name)
{
	Node* temp = head;

	while (temp)
	{
		if (temp->getEmployeedetails().getName() == name)
			break;
		temp = temp->getNext();
	}

	if (temp == nullptr)
		return false;

	cout << "--- Search Result ---\n";
	cout << "ID: " << temp->getEmployeedetails().getId() << ", Name : ";
	cout << temp->getEmployeedetails().getName() << ", Salary : ";
	cout << temp->getEmployeedetails().getSalary() << endl;

	return true; 
}

bool LinkedList::updateSalary(int id, float salary)
{
	if (!salaryValidate(salary))
	{
		cout << "Salary invalid\n";
		return false;
	}

	Node* temp = head;
	while (temp)
	{
		if (temp->getEmployeedetails().getId() == id)
			break;
		temp = temp->getNext();
	}

	if (temp == nullptr)
	{
		cout << "Failed to update : Id not existed\n";
		return false;
	}

	temp->getEmployeedetails().setSalary(salary);
	cout << "Salary updated for ID " << id << endl;
	return true;
}
int LinkedList::countEmployees()
{
	int count = 0;

	Node* temp = head;

	while (temp)
	{
		count++;
		temp = temp->getNext();
	}
	cout << "Total Employees : " << count;
	return count; 
}


void LinkedList::displayEmployees()
{
	if (head == nullptr)
	{
		cout << "List is empty\n";
		return;
	}

	Node* temp = head;
	cout << "--- All Employees ---\n";

	while (temp)
	{
		cout << "ID: " << temp->getEmployeedetails().getId();
		cout << ", Name : " << temp->getEmployeedetails().getName();
		cout << ", Salary : " << temp->getEmployeedetails().getSalary() << endl;
		temp = temp->getNext();
	}
}

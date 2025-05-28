#include <iostream>
using namespace std;

class Employee
{
protected :
	int e_id;
	string e_name;
public:
	Employee(int id, string name)
	{
		this->e_id = e_id; 
		this->e_name = name;
	}
	void displayEmp()
	{
		cout << "employee id : " << e_id << endl;
		cout << "Employee name : " << e_name << endl;
	}

};


class Manager : public Employee 
{
protected:
	int pay;
public:
	Manager(int id = 0 , string name = "" ) : Employee(id, name)
	{
		pay = 500;
	}
	int calSalary(int hours)
	{
		return hours * pay;
	}
};

class Developer : public Employee
{
protected:
	int pay;
public:
	Developer(int id = 0, string name = "") : Employee(id, name)
	{
		pay = 5000;
	}
	int calSalary()
	{
		return pay;
	}
};

class TechLead : public Manager, public Developer
{
	int hours;
	int teamSize;
public:
	TechLead(int id, string name, int hours, int teamSize) :
		Manager( id , name )
	{
		this->hours = hours;
		this->teamSize = teamSize;
	}

	void displaySalary()
	{

		cout << "Salary based on coding : " << Manager::calSalary(hours)<<endl;
		cout << "Salary based on coding + team: "
			<< Manager::calSalary(hours) + teamSize * Developer::calSalary();
	}

};

int main()
{
	int empId, hours, teamSize; 
	string name; 
	cout << "EmpId: "; cin >> empId;
	cout << "Name: "; cin >> name;
	cout << "Coding Hours: ";cin >> hours;
	cout << "Team Size: ";cin >> teamSize;
	TechLead t(empId, name, hours, teamSize);

	t.Manager::displayEmp();
//	t.displayEmp();
	t.displaySalary();
}
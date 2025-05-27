#include <iostream>
using namespace std;

class Manager
{
protected:
	int pay;
public:
	Manager()
	{
		pay = 500;
	}
	int calSalary(int hours)
	{
		return hours * pay;
	}
};

class Developer
{
protected:
	int pay;
public:
	Developer()
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
	int e_id;
	string name;
	int hours;
	int teamSize;
public:
	TechLead(int id, string name, int hours, int teamSize)
	{
		this->e_id = id;
		this->name = name;
		this->hours = hours;
		this->teamSize = teamSize;
	}
	void displayDetails()
	{
		cout << "Tech Lead Info :\n";
		cout << "EmpId: " << e_id << endl;
		cout << "Name : " << name << endl;
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

	t.displayDetails();
	t.displaySalary();
}
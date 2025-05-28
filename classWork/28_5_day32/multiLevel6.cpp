#include <iostream>
using namespace std;

class Person
{
protected:
	string name;
	char gender;
	int age;
	int phno;
public:
	Person(string name, char gender, int age, int phno) :
		name(name), gender(gender), age(age), phno(phno) {}
	void dispPerson() const
	{
		cout << "Name : " << name << endl;
		cout << "Gender : " << gender << endl;
		cout << "age : " << age << endl;
		cout << "phno : " << phno << endl;
	}
};

class Employee : private Person
{
protected:
	int e_id;
	int e_sal;
	string e_dept;
public:
	Employee(string name, char g, int age, int phno, int id, int sal, string dept) :
		e_id(id), e_sal(sal), e_dept(dept), Person(name, g, age, phno) {}
	void dispEmp()
	{
		dispPerson();
		cout << "ID: " << e_id << endl;
		cout << "Dept : " << e_dept << endl;
		cout << "Salary : " << e_sal << endl;
	}
};

class EmpFin : private Employee
{
	// we  dont inherite this properties anywhere , so we can make it private 
private:
	int e_pt;
	int e_pf;
	int e_vp;
	int e_days;
public:
	EmpFin(string name, char g, int age, int phno,
		int id, int sal, string dept, int pt, int pf, int vp, int nday)
		: e_pt(pt), e_pf(pf), e_vp(vp), e_days(nday),
		Employee(name, g, age, phno, id, sal, dept)
	{}

	void dispEmpFin()
	{
		dispEmp();
		cout << "PF: " << e_pf << endl;
		cout << "VP: " << e_vp << endl;
		cout << "No Days" << e_days << endl;
		int gs = (e_sal - e_pt - e_pf) / 30;
		gs = gs * e_days;
		cout << "Gross sal : " << gs << endl;
	}
};


int main()
{
	EmpFin e("okok", 'M', 24, 7777, 101, 29999, "AM", 200, 2600, 100000, 24);
	e.dispEmpFin();
}


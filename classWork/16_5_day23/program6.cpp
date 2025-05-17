#include <iostream>

using namespace std; 


typedef struct employee
{
	int empId; 
	string empName; 
}EMP;

typedef struct period
{
	int empId;
	int prdDays;
}PRD;

typedef struct salary
{
	int empId; 
	int slyBasicPay; 
	int slyVariablePay; 
	int slyTax; 
//	float slyHomeTake; 
}SLY;

void display(EMP e, PRD p, SLY s, float takeHome);
void  readDetail(EMP* e, PRD* p, SLY* s);
float calculation(SLY s, int days);


void display(EMP e, PRD p, SLY s, float takeHome)
{
	cout << "Employee name : " << e.empName << endl;
	cout << "Employee Id : " << e.empId << endl;
	cout << "no of days : " << p.prdDays << endl;
	cout << "basic pay : " << s.slyBasicPay << endl;
	cout << "variable pay : " << s.slyVariablePay << endl;
	cout << "tax deducted : " << s.slyTax << endl;
	cout << "============================================\n";
	cout << "Take home : " << takeHome << endl;

	cout << "============================================\n";
}


float calculation(SLY s, int days)
{
	float sum = (s.slyBasicPay + s.slyVariablePay) * days / 30 ;

	float result = sum - (sum * s.slyTax / 100);
//	s.slyHomeTake = result; 
	return result; 
}






void  readDetail(EMP * e , PRD * p , SLY * s)
{
	cout << "Enter the id of the employee : ";
	cin >> e->empId;
	 p->empId = s->empId = e->empId  ;

	cout << "Enter the name of the student : ";
	cin >> e->empName; 

	cout << "Enter the days : ";
	cin >>  p->prdDays;

	cout << "Enter the Basic Pay : ";
	cin >> s->slyBasicPay; 
	cout << "Enter the variable pay : ";
	cin >> s->slyVariablePay;
	cout << "Enter the tax rate : ";
	cin >> s->slyTax;

}

void program6()
{
	EMP e;
	PRD p;
	SLY s;

		readDetail(&e, &p, &s);

		float takeHome =  calculation(s, p.prdDays);
		display(e, p, s, takeHome);

			return; 
}
#include <iostream>

using namespace std;

typedef struct _employee
{
	int empId;
	char empName[20];
}EMP;

#define DEPTS 2
#define noOfEmp 3

void program8()
{
	EMP** e = nullptr;

	cout << "size of EMP : " << sizeof(EMP) << endl;

	//	e = (EMP**) malloc( DEPTS * sizeof(EMP*) );
	e = new EMP * [DEPTS];
	cout << "Address of e  -  " << e << endl;

	e[0] = new EMP[DEPTS * noOfEmp];
	cout << "Address of e[0]  -  " << e[0] << endl;
	
	for (int i = 0; i < DEPTS; i++)
	{
		e[i] = e[0] + (i * noOfEmp);
		cout << "Address of e[" << i << "]  -  " << e[i] << endl;
	}


	for (int i = 0; i < DEPTS; i++)
	{
		cout << "----------------Dept " << i + 1 <<"------------"<<endl;
		for (int j = 0; j < noOfEmp; j++)
		{
			cout << "Enter the employee e[" << i << "][" << j << "] ID  :  ";
			cin >> e[i][j].empId;
			cout << "Enter the employee e[" << i << "][" << j << "] name  :  ";
			cin >> e[i][j].empName;
		}
	}

	cout << endl;

	for (int i = 0; i < DEPTS; i++)
	{
		for (int j = 0; j < noOfEmp; j++)
		{
			cout << "Employee e[" << i << "][" << j << "] ID  :  " << e[i][j].empId << endl;
			cout << "Employee e[" << i << "][" << j << "] Name  :  " << e[i][j].empName << endl;
			cout << endl;
		}
		cout << endl;
	}






	for (int i = 0; i < DEPTS; i++)
		delete[] e[i];
	delete[] e;

}
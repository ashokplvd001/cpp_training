#include <iostream>
#include "header.h"
using namespace std; 

enum status
{
	e_fail = -1  ,
	e_success 
};

void calfunHandle();
int main()
{

	calfunHandle();
//	primeFun();
}

void calfunHandle()
{
	status res;
	int calFun();
	if (calFun() == e_success)
		cout << "calFun success\n";
	else
		cout << "calFun failed\n";

}

int calFun()
{
	int getOpt();
	int add(int, int);
	int sub(int, int);
	switch (getOpt())
	{
	default :
		cout << "Invalid option\n";
		return -1; 
	case 1 :
		cout << "sum of 7 and 3 : " << add(7, 3) << endl;
		break; 
	case 2: 
		cout << "7 - 3 = " << sub(7, 3) << endl;
		break;
	}
	return 0;
}

int add(int a, int b)
{
	return a + b;
}

int sub(int a, int b)
{
	return a - b; 
}


int getOpt()
{
	void  display();
	display();
	int Opt;
	cin >> Opt; 
	return Opt; 
}
void display()
{
	cout << "Enter the choice : \n1.addition\n2.subtraction\n";
}


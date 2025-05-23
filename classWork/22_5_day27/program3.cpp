#include <iostream>
#include "header.h"
using namespace std; 

class Employee2
{
private :
	int e_id;
	string e_name;

public :

	Employee2();	//constructor with default values 
	

	Employee2(int id, string name);
	~Employee2();

		void disp();
};

Employee2:: ~Employee2()
{
	cout <<  "Destructor called\n";
}

Employee2::Employee2()		//constructor with default values 
{
	cout << "Default Construction got called\n" << endl;
	e_id = 101;
	e_name = "None";
}

Employee2::Employee2(int id, string name)
{
	cout << "Parameterised Construction got called\n" << endl;
	e_id = id;
	e_name = name;
}

void Employee2::disp() {
	cout << "disp function got called\n";
	cout << e_id << "\t" << e_name << endl;
}




void program3()
{
	Employee2 e1 ;
	e1.disp();

	Employee2 e2( 201 , "okok" ) ;
	e2.disp();

	Employee2 e3( e2 );
	e3.disp();

	Employee2 e4 = e2 ;
	e4.disp();


	return ; 
}


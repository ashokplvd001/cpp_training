#include <iostream>

using namespace std;

class Employee1
{
	int e_id;
	string e_name;

public: 
	void init(int id, string n)
	{
		e_id = id; 
		e_name = n; 
	}

	void printDetails( string  objName )
	{
		cout << objName << " id = " << e_id << endl;
		cout << objName << " name = " << e_name << endl;
	}

};


void program2()
{
	Employee1 e1 ;

	e1.init(1, "okok");
	e1.printDetails( "e" );
}



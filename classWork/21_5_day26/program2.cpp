#include <iostream>
#include <cstring>
using namespace std;

class Student2
{

	int rollno;
	//char name[40];
	string name; 
public:
	void display()
	{
		cout << "name = " << this->name << endl;
	}

	void setName(string name)
	{
		rollno = 1;
		// both are local variables to function
	//	name = name;4
		// this will say the vriable from clas and , so this->name is class member , 
		// the another name is local to the function which is from function parameters from main 
	//	strcpy( this->name , name.c_str() ) ;
		this->name = name; 
	}

};

void program2()
{
	Student2 s;
	string n = "ok";

//	s.display();
	s.setName(n);
	s.display();

}
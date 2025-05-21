#include <iostream>

using namespace std;

class Student
{

	int rollno = 123;
	string name = "asdf";
public:
	void display(string str1)
	{
		cout << "string = " << str1 << endl;
		cout << "name = " << name << endl;
	}

	void setName(string name )
	{
		// both are local variables to function
		name = name;
			// this will say the vriable from clas and , so this->name is class member , 
			// the another name is local to the function which is from function parameters from main 
		this->name = name; 
	}

};

void program1()
{
	Student s;

	s.display("ok1");
	s.setName("ok2");
	s.display("ok3");

}
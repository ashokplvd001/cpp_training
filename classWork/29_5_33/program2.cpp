#include <iostream>

using namespace std; 


class Student
{
protected :
	int e_id; 
	string e_name; 
public  : 
	Student(int e_id,string name ){ 
		this-> e_id = e_id;
		this-> e_name = name;
	}
	virtual void display() = 0;
	/*
	{
		cout << "id = " << e_id << endl;
		cout << "name = " << e_name << endl;
	}
	*/
};

class Marks : public  Student 
{
protected :
	int m1;
	int m2;
	int m3;
public : 
	Marks(int id , string name , int m1 , int m2 , int m3 ) : 
		Student( id , name ) , m1( m1 ) , m2( m2 ) , m3( m3 ) {}
	
	void display()
	{
		cout << "id = " << e_id << endl;
		cout << "name = " << e_name << endl;
		cout << "marks : "<<m1 << '\t' << m2 << '\t' << m3 << endl;
	}
};

class Sports : public  Student
{
protected:
	string award ;
public:
	Sports(int id, string name, string award ) :
		Student(id, name),award(award ) {}

	void display()
	{
		cout << "id = " << e_id << endl;
		cout << "name = " << e_name << endl;
		
	}
};
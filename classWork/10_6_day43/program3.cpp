#include <iostream>
#include <fstream>
#include <vector>
#include <initializer_list>
#include <list>

using namespace std; 

class Employee
{
	int e_id;
	string  e_name; 
public : 
	Employee() : e_id(0), e_name("") {}
	Employee( int id  , string name ) : e_id(id), e_name(name) {}

	Employee(const Employee& e)
	{
		this->e_id = e.e_id;
		this->e_name = e.e_name;
	}


	void empDisp()
	{
		cout << "id : " << e_id << "name : " << e_name << endl;
	}

	friend ostream& operator <<(ostream& output, Employee& e)
	{
		output << e.e_id << " - ";
		output << e.e_name;
		return output; 
	}

	friend istream& operator >>( istream & input , Employee & e ) 
	{
		input >> e.e_id; 
		input >> e.e_name;
			return input; 
	}

};


int  main()
{
	istream_iterator<Employee> inIt( cin );
	istream_iterator<Employee> endIt;

	//vector<Employee> vEmp(inIt, endIt);

	list <Employee> vEmp;


	while (inIt != endIt)
	{
		vEmp.push_back(*inIt);
		++inIt;  

	}

	for (auto& var : vEmp)
		//	var.empDisp();
		cout << var; 

	/*
	fstream filehandle("print.txt", ios::out);

	ostream_iterator<Employee> printIt(filehandle);
	
	copy(vEmp.begin(), vEmp.end(), printIt);
	*/
	
}
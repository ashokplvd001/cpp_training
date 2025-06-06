#include <iostream>
#include <map>
#include <vector>

using namespace std;

class Employee
{
	//	int e_id; 
	string e_name;
	string e_dept;
public:
	///	Employee( int id , string name , string dept ) : e_id( id ) , e_name( name ) , e_dept( dept ){}
	Employee(string name = "", string dept = "") : e_name(name), e_dept(dept)
	{
		//	cout << "constructor ----  name = " << name << endl;
	}

	void display()
	{
		//	cout << e_id << " | " << e_name << " | " << e_dept << endl;
		cout << e_name << " | " << e_dept << endl;
	}
};





int main()
{
	map<int, vector<Employee>> empMap;

	Employee e1("asegw", "mec");
	empMap[101].push_back(e1) ;
	Employee e2("wsafw", "cse");
	empMap[102].push_back(e2);
	Employee e3("erhye", "it");
	empMap[101].push_back(e3);


	for (auto& pair : empMap)
	{
		auto key = pair.first;

		cout << key << " -> ";

		auto value = pair.second;
		for (auto it = value.begin(); it != value.end(); it++)
			it->display();


	}

}

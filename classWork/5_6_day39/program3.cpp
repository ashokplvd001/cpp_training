#include <iostream>
#include <map>

using namespace std;

class Employee
{
	int e_id; 
	string e_name;

public:
	///	Employee( int id , string name , string dept ) : e_id( id ) , e_name( name ) , e_dept( dept ){}
	Employee( int id , string name = "") : e_id(id) , e_name(name) {
		//	cout << "constructor ----  name = " << name << endl;
	}

	void display()
	{
		//	cout << e_id << " | " << e_name << " | " << e_dept << endl;
		cout << e_id << " | " << e_name << endl;
	}
};





int main()
{
	multimap< string, Employee> empMap;

	Employee e1( 101, "erhgest");
	empMap.insert({ string("CSE"), e1 });
	Employee e2(102 , "svgerg");
	empMap.insert({ string("IT") , e2 });
	Employee e3( 103 , "erwerg");
	empMap.insert({ string("CSE") , e3 });


	for (auto& pair : empMap)
	{

		auto key = pair.first;
		cout << key << " -> ";

		auto value = pair.second;
		value.display();

	}

}

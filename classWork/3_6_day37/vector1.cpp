#include <iostream>
#include <vector>

using namespace std; 

class Student
{
	int id; 
	string name;
public  : 
	Student( int id  , string name ) :id( id )  , name ( name ){}
	void display()
	{
		cout << "ID : " << id << endl;
		cout << "Name : " << name << endl;
	}
};

int main()
{
	Student s[3] = { {101 , "asfd"} , {102 , "abc2"}, { 103 , "abc3"} };
	Student s1 = { 104 , "wtw" };
	Student s2 = { 134 , "geeyer" };
	Student s3 = { 145 , "eewy" };

	for (auto e : s)
		e.display();
	cout << "---------------------\n";
	vector<Student> emp;

	emp.push_back(s1); 
	emp.push_back(s2);
	emp.push_back(s3);

	for( auto e : emp)
	e.display();
	cout << "---------------------\n";

	cout << "capacity = " << emp.capacity() << endl;
	cout << "size = " << emp.size() << endl;

	emp.front().display();
	emp.back().display();
	cout << "---------------------\n";
	emp.at(0).display();
	emp.at(emp.size() - 1);

	try
	{
		emp.at(10).display();
	}
	catch (const exception& e)
	{
		cout << "Captured exception handling" << e.what() << endl;
	}


	cout << "End of the program\n";

	emp.pop_back();
	emp.back().display();
	cout << "---------------------\n";

	emp.insert(emp.begin(), s2);

	for (auto e : emp)
		e.display();
	cout << "---------------------\n";

	


	cout << "size = " << emp.size() << endl;

}





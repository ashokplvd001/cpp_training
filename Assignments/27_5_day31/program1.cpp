#include <iostream>
#include <string>
using namespace std;

class Marks
{
	int arr[3];
public :
	Marks(int m1 = 0, int m2 = 0, int m3 = 0)
	{
		arr[0] = m1; arr[1] = m2; arr[2] = m3;
	}
	int totalMarks()
	{
		return arr[0] + arr[1] + arr[2];
	}
	float avrgCal()
	{
		return (float)totalMarks() / 3;
	}
	void displayMarks()
	{
		cout << "Full Result :\n";
		cout << "Total Marks : " << totalMarks() << endl;
		cout << "Average Marks : " << avrgCal()<<endl;
	}
};

class Student : public Marks
{
protected:
	int rollno;
	string name;
	int age;
public :
	Student(int rollno, string name, int age, int m1, int m2, int m3) : Marks(m1, m2, m3) 
	{
		this->rollno = rollno;
		this->name = name;
		this-> age = age;
	}
	void displayStudent()
	{
		cout << "Student Info :\n";
		cout << "Roll No : " << rollno << endl;
		cout << "Name : " << name << endl;
		cout << "Age : " << age << endl;
	}
};

int main()
{
	int id, age, m1, m2, m3;
	string name;

	cout << "Enter Roll No : "; cin >> id;
	cout << "Enter Name : ";cin >> name;
	cout << "Enter Age : ";cin >> age;
	cout << "Enter Marks : "; cin >> m1 >> m2 >> m3;

	Student s1(id, name, age, m1, m2, m3);
	s1.displayStudent();
	s1.displayMarks();
}
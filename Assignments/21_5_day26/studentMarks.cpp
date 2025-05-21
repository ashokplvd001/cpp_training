//Create a class Student with marks in 3 subjects.
//Add a function calculateAverage() and getGrade() that returns 'A', 'B', or 'C' based on the average.
//Display details using another function.

#include <iostream>
#include "studetMarks.h"

using namespace std; 

void studentMarks::displayDetails()
{
	cout << "student id : " << s_sno << endl;
	cout << "student name : " << s_name << endl;
	cout << "student marks m1 " << s_marks[0] << endl;
	cout << "student marks m2 " << s_marks[1] << endl;
	cout << "student marks m3 " << s_marks[2] << endl;
	cout << "student grade " << getGrade() << endl;
}


void studentMarks::getDetails(int id, string name, int m1, int m2, int m3)
{
	this->s_sno = id;
	this->s_name = name;
	this->s_marks[0] = m1;
	this->s_marks[1] = m2;
	this->s_marks[2] = m3;
}

double studentMarks::calculateAverage()
{
	return (s_marks[1] + s_marks[1] + s_marks[2]) / 3;
}

char studentMarks::getGrade()
{

	double avg = calculateAverage();
	if (avg >= 85 && avg <= 100)
		return 'A';
	else if (avg >= 55 && avg < 85)
		return 'B';
	else if (avg >= 35 && avg < 55)
		return 'C';
	else if (avg >= 0 && avg < 35)
		return 'F';
}

bool studentMarks::update_s_no(int sno)
{
	this->s_sno = sno;
	return true; 
}
bool studentMarks::update_s_name(string name)
{
	for (int i = 0; i < name.length(); i++)				// if entered string have any non alpha then reject 
	{
		if (!isalpha(name[i]))
			return false;
	}
	this->s_name = name;
	return true;
}
bool studentMarks::update_s_m1(int m1)
{
	if (m1 >= 0 && m1 <= 100)
		this->s_marks[0] = m1;
	else return false; 
	return true; 
}
bool studentMarks::update_s_m2(int m2)
{
	if (m2 >= 0 && m2 <= 100)
		this->s_marks[1] = m2;
	else return false;
	return true;
}
bool studentMarks::update_s_m3(int m3)
{
	if (m3 >= 0 && m3 <= 100)	// assigns only if the marks are in range
		this->s_marks[2] = m3;
	else return false;
	return true;
}
int studentMarks::get_s_no()
{
	return s_sno;
}
string studentMarks::get_s_name()
{
	return s_name;
}

int studentMarks::get_s_m1()
{
	return s_marks[0];
}

int studentMarks::get_s_m2()
{
	return s_marks[1];
}

int studentMarks::get_s_m3()
{
	return s_marks[2];
}
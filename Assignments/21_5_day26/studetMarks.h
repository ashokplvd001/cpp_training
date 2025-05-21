#pragma once
//Create a class Student with marks in 3 subjects.
//Add a function calculateAverage() and getGrade() that returns 'A', 'B', or 'C' based on the average.
//Display details using another function.

#include <iostream>
using namespace std;

class studentMarks
{
	int s_sno; 
	string s_name; 
	int s_marks[3];

	double calculateAverage();
	
public :
	void getDetails(int id, string name, int m1, int m2, int m3);
	void displayDetails();
	bool update_s_no(int sno);
	bool update_s_name(string name);
	bool update_s_m1(int m1);
	bool update_s_m2(int m2);
	bool update_s_m3(int m3);
	int get_s_no();
	string get_s_name( );
	int get_s_m1();
	int get_s_m2();
	int get_s_m3();
	char getGrade();
	


	
};




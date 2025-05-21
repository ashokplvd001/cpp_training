//Create a class Student with marks in 3 subjects.
//Add a function calculateAverage() and getGrade() that returns 'A', 'B', or 'C' based on the average.
//Display details using another function.

#include <iostream>
#include "studetMarks.h"
using namespace std;

void program3()
{
	studentMarks sm1;

	sm1.getDetails(101, "okoko", 23, 56, 99);

	sm1.displayDetails();

	int sno = 0;
	cin >> sno;
	sm1.update_s_no( sno );
	string name; 
	cin >> name; 
	sm1.update_s_name( name );
	int mark = 0; 
	cin >> mark; 
	if (sm1.update_s_m1(mark) == false)
		cout<<"somthing went wrong\n";
	cin >> mark;
	if (sm1.update_s_m2(mark) == false)
		cout << "somthing went wrong\n";
	cin >> mark;
	if ( sm1.update_s_m3(mark) == false)
		cout << "somthing went wrong\n";


	cout << "s_no" << sm1.get_s_no() << endl ;
	cout << "s_name = " << sm1.get_s_name() << endl;
	cout << "m1 = " << sm1.get_s_m1() << endl;
	cout << "m2 = " << sm1.get_s_m2()<<endl;
	cout << "m3 = " << sm1.get_s_m3()<<endl;
	
	cout << "grade = " << sm1.getGrade() << endl;

}
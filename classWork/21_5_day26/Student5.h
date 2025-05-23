#ifndef __STUDENT5__
#define __STUDENT5__

#include <iostream>
#include <string>

class Student5
{
	string s_ID;
	string s_name;
	string s_dept;
	string s_phno;
	float semWiseMarks[8] = { 0, };

	float calcAvg() const;

public:
	void setDetails(string id, string name, string dept, string phno);

	void getDetails() const;

	void updatePhno(string phone);

	void updateSemWiseMarks(int sem, float mark);

	void printSemWiseMarks() const;
};



#endif
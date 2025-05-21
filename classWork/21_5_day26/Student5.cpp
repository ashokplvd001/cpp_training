#include <iostream>

#include "Student5.h"

using namespace std;

void Student5::setDetails(string id, string name, string dept, string phone)
{
	this->s_ID = id;
	this->s_name = name;
	this->s_dept = s_dept;
	this->s_phno = phone;
}



void Student5::getDetails() const
{
	cout << "Student Id = " << s_ID << endl;
	cout << "Student Name = " << s_name << endl;
	cout << "Student dept = " << s_dept << endl;
	cout << "Student phno = " << s_phno << endl;
}


void Student5::updatePhno(string phone)
{
	for (int i = 0; i < phone.length(); i++)
	{

		if (!(phone[i] >= '0' && phone[i] <= '9'))
		{
			cout << "Entered input is not pure digits\nfailed to update\n";
			return;
		}
	}
	this->s_phno = phone;

}

void Student5::updateSemWiseMarks(int sem, float mark)
{
	semWiseMarks[sem - 1] = mark;
}
void Student5::printSemWiseMarks() const
{
	cout << "display of 8 sem marks\n";
	for (int i = 0; i < 8; i++)
		cout << "sem" << i << " = " << semWiseMarks[i] << endl;
	cout << "Avg : " << calcAvg() << endl;
	cout << "Done\n";
}

float Student5::calcAvg() const
{
	float sum = 0;
	for (int i = 0; i < 8; i++)
		sum += semWiseMarks[i];

	float res = sum / 8;

	return res;
}


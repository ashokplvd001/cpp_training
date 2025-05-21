#include <iostream>

using namespace std; 

class Student4
{
	string s_ID; 
	string s_name; 
	string s_dept; 
	string s_phno; 
	float semWiseMarks[8] = { 0, } ;

	float calcAvg() const ;
	
public :
	void setDetails(string id, string name, string dept, string phno);
	
	 void getDetails () const;

	void updatePhno(string phone);

	void updateSemWiseMarks(int sem, float mark);

	 void printSemWiseMarks () const ;
};

void Student4::setDetails (string id, string name, string dept, string phone)
{
	this->s_ID = id; 
	this->s_name = name;
	this->s_dept = s_dept; 
	this->s_phno = phone;
}



 void Student4:: getDetails () const
{
	cout << "Student Id = " << s_ID << endl;
	cout << "Student Name = " << s_name << endl; 
	cout << "Student dept = " << s_dept << endl;
	cout << "Student phno = " << s_phno << endl;
}


void Student4::updatePhno(string phone)
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

void Student4::updateSemWiseMarks(int sem, float mark)
{
	semWiseMarks[sem - 1] = mark;
}
 void Student4:: printSemWiseMarks() const
{
	cout << "display of 8 sem marks\n";
	for (int i = 0; i < 8; i++)
		cout << "sem" << i << " = " << semWiseMarks[i] << endl;
	cout << "Avg : " << calcAvg() << endl;
	cout << "Done\n";
}

float Student4::calcAvg() const
{
	float sum =  0; 
	for (int i = 0; i < 8; i++)
		sum += semWiseMarks[i];

	float res = sum / 8;

	return res; 
}




void program4()
{
	Student4 s1;

	s1.setDetails("25UST023", "issokay", "developer" ,  "6306306306" );

	s1.getDetails();

	s1.updateSemWiseMarks(4, 123);
	
	s1.printSemWiseMarks();



}


#include <iostream>

using namespace std;


class Student3
{
	int rollno;
	char name[20];
public :
	void setName(char* s )
	{
		strcpy(name, s);
	}
	char* getName()
	{
		return name; 
	}
	void setRollno(int r)
	{
		rollno = r; 
	}
	int getRollno()
	{
		return rollno;
	}
	void display()
	{
		cout << "Name : " << name << endl;
		cout << "Roll no : " << rollno << endl;
	}
};

void program3()
{
	char n[] = "abc";
	int r = 1011;
	Student3 s1; 
	char str2[1024] = "xyz";
	s1.display();
	s1.setRollno(r);
	s1.setName(n);
	s1.display();
	cout << s1.getName() << endl;
	cout << s1.getRollno() << endl;
	cout << str2 << endl;
	return ; 

	

}
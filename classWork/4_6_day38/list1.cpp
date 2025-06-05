#include <iostream>
#include <list>
using namespace std; 

class Student 
{
	int sId; 
	string sName;
public : 
	Student( int id = 0 , string name = "none") : sId( id ) , sName( name ) {}

	string getName() { return sName; }

	int getId() { return sId ; }

	void setName(string name) { sName = name;  }

	void setId(int id ) { sId = id ; }

	void display()
	{
		cout << "id = " << sId << " | name = " << sName << endl;
	}
	

	int operator < (const Student& s) const
	{
		int flag = 1 ;
		if (this->sId < s.sId)
			flag = 1;
		else
			flag = 0;


		cout << "this->sId = " << this->sId << endl;
		cout << "s.sId = " << s.sId << endl;

		cout << "flag inside class :  " << flag << endl;
		return flag;
	}


	bool operator ==( const Student & s ) const
	{
		return  this->sId == s.sId;
	}


};

template <typename T1 >
void mySort(T1 & list)
{

	for (auto& it : list)
	{
		
		for (auto& j : list)
		{
		
			if (it < j)
			{
				auto temp = it;
				it = j;
				j = temp;
			}

		}
		cout << "....................\n";

	}
}

int main()
{
	std::list<Student> listStudent; 

	listStudent.push_back(Student(101, "aaa"));

	listStudent.emplace_back( 103, "ccc");
	listStudent.push_back(Student(102, "bbb"));
	
	Student s1(102, ":werf");
	Student s2(243, "rge");
	//s2 = s1; 

	

	for (auto ls : listStudent)
		ls.display();
	cout << "====================\n";

//	listStudent.remove(Student(102, "bbb"));

	for (auto ls : listStudent)
		ls.display();
	cout << "====================\n";

//	listStudent.remove_if(  );

	


	for (auto ls : listStudent)
		ls.display();
	cout << "====================\n";

	mySort(listStudent);

	for (auto ls : listStudent)
		ls.display();
	cout << "====================\n";




}


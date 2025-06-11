#include <iostream>
#include <queue>
using namespace std;

class Patient
{
	string name;
	int age;
	int severity;
public:
	Patient() = default; 
	Patient(const Patient& other)
	{
		this->name = other.name; 
		this->age = other.age; 
		this->severity = other.severity;
	}
	Patient(string name, int age, int severity)
	{
		this->name = name;
		this->age = age;
		this->severity = severity;
	}
	friend ostream& operator << (ostream & output, const Patient & p) ;
	
	friend istream& operator >> (istream& input,  Patient& p)
	{
		input >> p.name >> p.age >> p.severity;
		return input; 
	}
	
	bool operator < (const Patient& other) const
	{
		return severity < other.severity;
	}
};

ostream& operator <<(ostream& output, const Patient& p)
{
	output << p.name << " | " << p.age << " | " << p.severity;
	return output;
}



class HospitalManagment
{
	priority_queue <Patient> pq;

public :
	bool add(Patient   p )
	{
		pq.push(p);
		return true;
	}
	bool add(string name, int age, int severity)
	{
		pq.emplace(name, age, severity);
		return true; 
	}
	bool treatment()
	{
		if (pq.empty())
			return false; 
		
		cout << pq.top() << endl;
		pq.pop();
		return true;
	}

};

int main()
{
	HospitalManagment HM;

	Patient p; 

	HM.add( "ssfag" , 23 ,3 );
	HM.add( "sdvsadf" , 21 , 9);

	cin >> p;

	HM.add(p);
	
	while (HM.treatment());

}

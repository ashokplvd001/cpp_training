#include <iostream>
#include <string>
using namespace std;

class Vechical
{
protected :
	string v_id;
	string v_type;	
	int v_rate;
	int distance;
	int days;
public:
	Vechical(string v_id, string v_type, int v_rate , int distance , int days)
	{
		this->v_type = v_type;
		this->v_id = v_id;
		this->v_rate = v_rate;
		this->distance = distance;
		this->days = days;
	}
};

class car : public Vechical
{
	int fair;
public :
	car(string v_id, string v_type, int v_rate, int distance, int days) :
		Vechical(v_id, v_type, v_rate, distance, days)
	{	}

	void calculateFair()
	{
		fair = distance * v_rate;
		cout << "Fare without discount: " << fair<<endl;

		if (days > 2)
		{
			fair = fair * 0.9;
			cout << "Fare with long-term discount: " << fair<<endl;
		}
	}
};
class bike : public Vechical
{
	int fair;
public:
	bike(string v_id, string v_type, int v_rate, int distance, int days) :
		Vechical(v_id, v_type, v_rate, distance, days)
	{	}

	void calculateFair()
	{
		fair = distance * v_rate;
		cout << "Fare without discount: " << fair << endl;

		if (days > 2)
		{
			fair = fair * 0.9;
			cout << "Fare with long-term discount: " << fair << endl;
		}
	}
};





int main()
{
	string v_id;
	string v_type;
	int v_rate;
	int distance;
	int days;

	cout << "Vehicle Type : "; cin >> v_type;
	cout << "Vehicle ID : ";cin >> v_id;
	cout << "Rate : ";cin >> v_rate;
	cout << "Distance : ";cin >> distance;
	cout << "Days : ";cin >> days;

	car c(v_id, v_type, v_rate, distance, days);
	c.calculateFair();
/*
	bike b(v_id, v_type, v_rate, distance, days);
	b.calculateFair();
	*/
}
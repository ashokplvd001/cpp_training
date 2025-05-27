#include <iostream>
using namespace std; 
/*
class Vechical
{
protected :
	int wheels; 
	int seatCapacity;
	string wheelType; 
public : 
	void setWheels(int wheels)
	{
		this->wheels = wheels;
	}
	void setSeatCapacity( int seats)
	{
		this->seatCapacity = seats;
	}
	void setWheelType(string type)
	{
		this->wheelType = type ;
	}
	int getWheels()
	{
		return wheels; 
	}
	int getSeats()
	{
		return seatCapacity; 
	}
	string setWheelType()
	{
		return wheelType ;
	}

};

class Car : public Vechical
{
	string companyName; 
};
*/


class Vechical
{
protected : 
	int wheels; 
	int seats; 
	string material; 
	string color;
	string modeOfCtrl; 
public : 
	Vechical(int wheels, int seats, string material, string color, string modeOfCtrl)
	{
		this->wheels = wheels; 
		this->seats = seats ; 
		this->material = material;
		this->color = color;
		this->modeOfCtrl = modeOfCtrl;
	}
	void display()
	{
		cout << "Vechical Details : ";
		cout << "wheels\t = " << wheels << endl; 
		cout << "seats\t = " << seats << endl;
		cout << "material\t = " << material << endl;
		cout << "color\t = " << color << endl;
		cout << "modeOfCtrl\t = " << modeOfCtrl << endl;
	}
};

class Car : public Vechical
{
private :
	string brand; 
	string fuelType; 
	int doors; 
	int price; 
	string variantType; 
	string model; 
public : 
	Car(string brand, string fuelType, int doors, float price, string variantType, string model,

	
	{

	}
};

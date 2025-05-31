/*
A vehicle company is deciding to hire a programmer to develop a system that will allow the
company to enter the details of the vehicles sold by them. As a programmer, you need to
implement a program that contains a base class called Vehicles that contains a data
member to store the price of the vehicles. Derive two other classes named as Car and
Motorcycle.
• The Car class will contain data members to store details that include seating capacity,
number of doors and fuel type (diesel or petrol).
• The Motorcycle class will contain data members to store details such as the number
of cylinders, the number of gears and the number of wheels.
Derive another subclass named as Audi of Car and Yamaha of Motorcycle.
• The Audi class will contain a data member to store the model type.
• The Yamaha class will contain a data member to store the make – type.
Display the details of an Audi car (price, seating capacity, number of doors, fuel type, model
type) and the details of the Yamaha motorcycle (price, number of cylinders, number of
gears, number of wheels, make – type)
*/


#include <iostream>
using namespace std; 

class Vechical
{
protected : 
	int price;
public :
	Vechical(int price) : price( price){}
};

class Car : public Vechical 
{
protected : 
	int seatCapacity;
	int noOfDoors; 
	string fuelType; 
public :
	Car(int price ,int seatCapacity, int noOfDoors, string fuelType) :
		Vechical( price ) ,
		seatCapacity( seatCapacity) , noOfDoors( noOfDoors) , fuelType( fuelType) {}
};


class Audi : private Car
{
private :
		string modelType; 
public :
	Audi(int price, int seatCapacity, int noOfDoors, string fuelType , string modelType ) :
		Car( price , seatCapacity , noOfDoors , fuelType) , modelType( modelType) {}

	void printDetails()
	{
		cout << "Audi details : \n";
		cout << "price : " << price << endl;
		cout << "seatCapacity : " << seatCapacity << endl;
		cout << "noOfDoors : " << noOfDoors << endl;
		cout << "fuelType : " << fuelType << endl;
		cout << "modelType : " << modelType << endl<<endl;
	}
};

class Bike : public Vechical
{
protected:
	int noOfCilenders;
	int noOfGears;
	int noOfWheels;
public:
	Bike(int price, int noOfCilenders, int noOfGears, int noOfWheels) :
		Vechical(price),
		noOfCilenders(noOfCilenders), noOfGears(noOfGears), noOfWheels(noOfWheels) {}

};

class Yamaha : public Bike
{
protected : 
	string makeType; 
public : 
	Yamaha(int price, int noOfCilenders, int noOfGears, int noOfWheels , string makeType ): 
		Bike( price , noOfCilenders , noOfGears, noOfWheels) , 
		makeType( makeType) {}
	void displayDetails()
	{
		cout << "Yamaha bike details : \n";
		cout << "price : " << price << endl;
		cout << "noOfCilenders : " << noOfCilenders << endl;
		cout << "noOfGears : " << noOfGears << endl;
		cout << "noOfWheels : " << noOfWheels << endl;
		cout << "makeType : " << makeType << endl<<endl;

	}
};

int main()
{
	Audi a(5999999, 5, 4, "petrol", "r8");
	a.printDetails();
	Yamaha y (299999, 2, 6, 2, "fiber");
	y.displayDetails();
}



#include <iostream>

using namespace std; 

class Car
{
protected :
	string model; 
	int price;
public : 
	Car(string model ) : model( model ) , price( 0 ) {}
	virtual void setPrice(int) = 0; 
};

class Color : public Car
{
public:
	Color(string model) : Car(model) {}
	void setPrice(string model, int amount)
	{
		price = amount;
	}
	void display()
	{
		cout << "model = " << model << endl;
		cout << "price = " << price << endl;
	}
};


class Company  : public Car
{
public:
	Company(string model) : Car(model) {}
	void setPrice(string model, int amount)
	{
		price = amount;
	}
	void display()
	{
		cout << "model = " << model << endl;
		cout << "price = " << price << endl;
	}
};


int main()
{
	Color c1("okok");
	c1.display();

	Company c2("safwa");
	c2.display();

}




#include <iostream>
#include <string>

using namespace std;

class Luggage
{
	string L_passengerName;
	int L_weight;
	int L_limit; 
	int excessWeightcal();
public :
	Luggage(string name, int weight);
		void checkOverweight();
};

Luggage::Luggage(string name, int weight)
{
	L_passengerName = name; 
	L_weight = weight;
	L_limit = 20;
}

int Luggage:: excessWeightcal()
{
	return L_weight - L_limit;
}
void Luggage::checkOverweight()
{
	if (L_weight <= L_limit)
		cout << "Luggage within	limit\n";
	else
		cout<<"Overweight! Exceeded by " << excessWeightcal() << " kg.\n";
}


int main()
{
	Luggage	l1("Rita", 18);
	l1.checkOverweight();

	Luggage	l2("Sam", 25);
	l2.checkOverweight();

}
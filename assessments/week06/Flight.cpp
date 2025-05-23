#include <iostream>
#include <string>
#include "Flight.h"

using namespace std;


Flight::Flight(string fname, int fseats)
{
	this->f_flightNumber = fname;
	this->f_totalSeats = fseats;
	this->f_bookedSeats = 0;
}

int Flight::availableSeats()
{
	return (f_totalSeats - f_bookedSeats);
}

bool Flight::bookSeats(int count)
{
	if (count > availableSeats())
	{
		cout << "Booking Failed: Not enough seats.\n";
		return false;
	}

	f_bookedSeats = f_bookedSeats + count;

}

void Flight::showAvailability()
{
	cout << "Flight: " << this->f_flightNumber << " | Seats	Available : " << availableSeats() << endl;
}

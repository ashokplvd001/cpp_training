#pragma once
#include <iostream>
#include <string>

using namespace std;

class Flight
{
private:
	string f_flightNumber;
	int f_totalSeats;
	int f_bookedSeats;
	int availableSeats();
public:
	Flight(string fname, int fseats);		// gives the flight name and number of seats in that flght
	bool bookSeats(int);	// to book the seats 
	void showAvailability();	// to show how many seats left
};
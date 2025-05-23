#pragma once
#include <iostream>
#include <string>
using namespace std;

class HotelRoom
{
	int h_RoomNumber;
	string h_RoomType;
	bool h_IsBooked;
public:
	HotelRoom(int num, string roomType);	// to say which room i want 
	bool bookRoom();		// to book my choosen room 
	void showStatus();		// to see i have booked or not
};
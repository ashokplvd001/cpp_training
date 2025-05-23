
#include <iostream>
#include <string>
#include "BookRoom.h"
using namespace std;

HotelRoom::HotelRoom(int num, string roomType)
{
	h_RoomNumber = num;
	h_RoomType = roomType;
	h_IsBooked = false;
}

bool HotelRoom::bookRoom()
{
	if (h_IsBooked == true)
	{
		cout << "Room already booked.\n";
		return false;
	}
	h_IsBooked = true;
	return true;
}

void  HotelRoom::showStatus()
{
	if (h_IsBooked == true)
		cout << "Room " << h_RoomNumber << " (" << h_RoomType << ")is	now	booked.\n";
	else
		cout << "No room is book\n";
}
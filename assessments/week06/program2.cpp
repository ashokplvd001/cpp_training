#include <iostream>
#include <string>
#include "BookRoom.h"
using namespace std; 

int main()
{
	HotelRoom	h1(201, "AC");
	h1.bookRoom();
	h1.showStatus();

	h1.bookRoom();
}
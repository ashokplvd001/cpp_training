//Create a class DigitalClock with members hour, minute,
//and second.Add a function tick() that increments the time by one second 
//and handles overflow.

#include <iostream>

#include "Clock.h"
using namespace std; 

void program1()
{

	Clock c;

	char opt = 'N';
	cout << "Press any key to increament time , press n to exit\n";

	do {
		c.tick();
		cin >> opt;				// press any key to increment count , press n to exit . 
	} while (opt != 'N' && opt != 'n');	

	cout << "completed\n";

}
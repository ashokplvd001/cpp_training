#pragma once
//Create a class DigitalClock with members hour, minute,
//and second.Add a function tick() that increments the time by one second 
//and handles overflow.

class Clock
{
	int minutes;
	int hours;
	int secs;
	
public :
	Clock();		// constructor to initialise values with 0 ;
	void tick();		// tick function to increment and print when ever the function call happens
};
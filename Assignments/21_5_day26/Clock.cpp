#include <iostream>
#include <iomanip>
#include "Clock.h"
using namespace std; 


void Clock::tick()
{
	// if it secs 60 it will come into loop and increament minute and sec start from 0  
	if (++secs >= 60)	
	{
		secs = 0; 
		// if it minutes 60 it will come into loop and increament hours and mins start from 0  
		if (++minutes >= 60)
		{
			// if hours become 24 , it will starts from 24 
			if (++hours >= 24)
				hours = 0; 
		}
	}

	// setw to set width of the value // setfill is to difine what to fill in the no-occpied space 
	cout << setw(2)<<setfill('0') <<hours << ':' << setw(2) << setfill('0') << minutes << ':' << setw(2) << setfill('0') << secs << endl;
}

Clock::Clock()	// constructor 
{
	secs = minutes = hours = 0;
}



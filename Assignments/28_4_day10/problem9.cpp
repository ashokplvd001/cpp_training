/*
Description :	Write a function that converts hours into minutes and seconds.
Auther : Ashok Giddaluru ( 293950 )
Date of Creation : 28-4-24
DAte of modification : 28-4-24
Vesrion : 0.1
*/


#include <iostream>
int hr_to_min_to_sec(int);

using namespace std;	// using name space to use "cout" and "cin" 

void problem9()
{

	int hr; 

	cout << "Enter the hour : ";
	cin >> hr;

	int mins = hr_to_min_to_sec(hr);
	cout << "mins for "<<hr << " is " << mins << endl;
	int sec = hr_to_min_to_sec(mins);
	cout << "seconds for "<<mins << " is " << sec << endl;
	
}

int hr_to_min_to_sec(int num )
{
	return num * 60;
}


/*
OUTPUT :
Enter the hour : 3
mins for 3 is 180
seconds for 180 is 10800
*/
/*
Description : Main function to call the problem functions
Auther : Ashok Giddaluru ( 293950 )
Date of Creation : 29-4-24
DAte of modification : 29-4-24
Vesrion : 0.1
*/


#include <iostream>
#include "header.h"
using namespace std;	// using name space to use "cout" and "cin" 

int main()
{
	int opt = 2;

	switch (opt)
	{
		case 1 :
			problem1();
			break;
		case 2 :
			problem2();
			break;
		case 3 :
			problem3();
			break;



	}
//	cout << "main end\n";

}
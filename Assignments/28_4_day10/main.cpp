/*
Description : main function to call all the functions .
Auther : Ashok Giddaluru ( 293950 )
Date of Creation : 28-4-24
DAte of modification : 28-4-24
Vesrion : 0.1
*/


#include <iostream>
#include "header.h"

using namespace std;	// using name space to use "cout" and "cin" 

int main()
{

	int opt = 8    ;

	switch (opt)
	{
	case 1:
		problem1();
		break;
	case 2:
		problem2();
		break;
	case 3:
		problem3();
		break;
	case 4:
		problem4();
		break;
	case 5:
		problem5();
		break;
	case 6:
		problem6();
		break;
	case 7:
		problem7();
		break;
	case 8:
		problem8();
		break;
	case 21:
		problem21();
		break;



	}

	cout << "main completed\n";
}

/*
OUTPUT :

hi , this is second largest digit in number
Enter the number : 4648578687
The second largest digit in number 2147483647 is : 7
*/
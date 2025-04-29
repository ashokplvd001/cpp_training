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

	int opt = 29		;

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
	case 9:
		problem9();
		break;
	case 10:
		problem10();
		break;
	case 11:
		problem11();
		break;
	case 12:
		problem12();
		break;
	case 13:
		problem13();
		break;
	case 14:
		problem14();
		break;
	case 15:
		problem15();
		break;
	case 16:
		problem16();
		break;
	case 17:
		problem17();
		break;
	case 18:
		problem18();
		break;
	case 19:
		problem19();
		break;
	case 20:
		problem20();
		break;
	case 21:
		problem21();
		break;
	case 22:
		problem22();
		break;
	case 23:
		problem23();
		break;
	case 24:
		problem24();
		break;
	case 25:
		problem25();
		break;
	case 26:
		problem26();
		break;
	case 27:
		problem27();
		break;
	case 28:
		problem28();
		break;
	case 29:
		problem29();
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
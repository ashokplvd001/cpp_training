#include <iostream>
#include "header.h"
using namespace std; 

int main()
{
	int opt = 4; 
	switch (opt)
	{
		case 0 : 
			ifFun();
			break;
		case 1 :
		 digitsCount();
			break;
		case 2:
			function1();	// function which have example of pass by values
			break;
		case 3:
			function2();	// function which have example of pass by pointers
			break;
		case 4:
			function3();	// function which have example of pass by pointers
			break;
	}

	cout << "main completed\n";
}
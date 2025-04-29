#include <iostream>
#include "header.h"

using namespace std; 


int main()
{

	int opt = 8 ; 

	switch (opt)
	{
	case 1:
		arrayFun1();
			break;
	case 2:
		arrayFun2();
		break;
	case 3:
		arrayFun3();
		break;
	case 4:
		arrayFun4();
		break;
	case 5:
		arrayFun5();
		break;
	case 6:
		arrayFun6();
		break;
	case 7:		// not written
		arrayFun7();
		break;
	case 8:		// not written
		arrayFun8();
		break;

	}

}
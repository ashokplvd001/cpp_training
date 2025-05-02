#include <iostream>
#include "header.h"
using namespace std;

 int tempsize = 5; 
int main()
{
	int opt = 10  ; 

	switch (opt)
	{
	case 1 :
		array2Dfun1();
		break;
	case 2:
		array2DmatrixMul();
		break;
	case 3:
		array2Dfun3();
		break;
	case 4:
		charArray1();
		break;
	case 5:
		charArray2();
		break;
	case 6:
		charArray3();
		break;
	case 7:
		charArray4();
		break;
	case 8:
		arrayFun1();
		break;
	case 9:
		charArray5();
		break;
	case 10:
		charArray6();
		break;

		
	}
}
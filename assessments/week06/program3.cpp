#include <iostream>
#include <string>
#include "DeliveryTip.h"
using namespace std;


int main()
{
	DeliveryTip	d1("ORD1", 500, 3);
	d1.printDetails();

	DeliveryTip	d2("ORD2", 1000, 12);
	d2.printDetails();
}
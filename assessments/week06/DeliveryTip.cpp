
#include <iostream>
#include <string>
#include "DeliveryTip.h"
using namespace std;


DeliveryTip::DeliveryTip(string o_Id, int bill, int distance)
{
	d_orderID = o_Id;
	d_billAmount = bill;
	d_distance = distance;
	d_tip = calculateTip();
}

void DeliveryTip::printDetails()
{
	cout << "Order " << d_orderID << " | Tip:	?" << d_tip << endl;
}

int DeliveryTip::calculateTip()
{

	if (d_distance >= 0 && d_distance <= 5)
		return d_billAmount * 0.05;
	else if (d_distance > 5 && d_distance <= 10)
		return d_billAmount * 0.10;
	else
		return d_billAmount * 0.15;
}

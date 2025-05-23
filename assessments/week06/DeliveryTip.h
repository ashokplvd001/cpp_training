#pragma once

#include <iostream>
#include <string>

using namespace std;
class DeliveryTip
{
	string d_orderID;
	int d_billAmount;
	int d_distance;
	int d_tip;
	int calculateTip();	// to calculate the tip , it is private member
public:
	DeliveryTip(string o_Id, int bill, int distance);	 // constructor
	void printDetails();	// to print details 
};
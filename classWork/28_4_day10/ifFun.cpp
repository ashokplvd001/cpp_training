#include <iostream>

using namespace std; 

void ifFun()
{

	int batteryStatus, mobileStatus;
	cout << "mobile status (1/0) : ";
	cin >> mobileStatus;

	if (mobileStatus == 0)
	{
		cout << "Powering on the mobile\n";
		cout << "mobile status (1/0) : ";
		cin >> mobileStatus;
		if (mobileStatus == 0)
		{
			cout << "your phone is not in good condition, consult in phone repair shop\n";
			return;
		}
	}

		cout << "Battery Status : ";
		cin >> batteryStatus;
		if (batteryStatus <= 10)
		{
			cout << "put the mobile to charging" <<  endl;
		}
		cout << "open bowser and browser\n";
		cout << "open game and play\n";




}
/*
void ifFun()
{

	
	int batteryStatus = 0   ;

	cout << "Enter the charge : ";
	cin >> batteryStatus;

	cout << "software updates available" << endl;

	if (batteryStatus < 10)
	{
		cout << "Plz plug in charge its below 10" << endl;
	}
		
	cout << "Whatsapp : ashok sent msg \"hi ,how r u\""<<endl;
	cout << "wheaterApp : Temperature is 41c today in chennai";
	
}
*/
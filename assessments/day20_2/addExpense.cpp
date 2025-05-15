#include <iostream>
#include "header.h"
#include "dateValidation.h"
#include "memoryAllocation.h"

bool addExpense(databaseStruct* database)
{
	
	int opt = 0; 

	dateStruct date = { 0 , } ;

	cout << "Enter the year : ";
	cin >> date.year;
	cout << "Enter the month : ";
	cin >> date.month;
	cout << "Enter the day : ";
	cin >> date.day;

	if ( dateValidation(date) != true )
		return false; 

	if ( memoryAloctionCheck( database , date ) != true)
		return false;
	

	do
	{

		cout << "Enter the option\n1. Food\n2. Travel\n3. Entertinment\n4. RoomNeeds\n5. Exit\n";
		cin.ignore(numeric_limits<std::streamsize>::max(), '\n');
		cin >> opt; 

		switch (opt)
		{
			default:
				cout << "Invalid input\n";
				break;
			case 5:
				break;
			case 1:
			case 2:
			case 3:
			case 4:
			//	addItems(database, opt);
				break;
		}
	} while (opt != 3);

	return true; 
}




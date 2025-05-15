#include <iostream>
#include "header.h"

const char* category[CATEGORY_LIST_SIZE] = { "Food" , "Travelling" , "Entertinment" , "RoomNeeds" };

int main()
{
	cout << "\n*****************Program Started***********************\n" ;

	databaseStruct database1 = { nullptr , 0 };

	int opt = 0 ; 

	do
	{
		cout << "Enter the option\n1. Add/Modify expense \n2. View expense\n3. Exit\n";
		cin.ignore(numeric_limits<std::streamsize>::max(), '\n');
		cin >> opt; 

		switch (opt)
		{
			default :
				cout << "Invalid option\n";
				break;
			case 3:
				break;
			case 1 : 
				addExpense( &database1 );
				break;
			case 2 :
			//	viewExpense(&database1);
				break;
		}
	} while (opt != 3);

	cout << "*****************Program Ended***********************\n";

}
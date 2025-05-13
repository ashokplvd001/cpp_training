#include "header.h"
bool displayDayAll(int day);
bool displayDay( );
bool displayInRange(int from, int last);
bool displayMonth();
bool displayFromTo();

bool viewExpense()
{

	int opt = 0 ;
	

	do
	{
		cout << "Enter the option 1.In a day 2.FromTo 3.Month 4.exit";
		fflush(stdin);
		cin >> opt;

		switch (opt)
		{
		default : 
			cout << "Invalid option\n";
			break;
		case 1 :
			displayDay();
			break;
		case 2 :
			displayFromTo();
			break;
		case 3 :
			displayMonth();
			break;
		case 4 :
			break; 
		}


	} while (opt != 4);
	
	return true;
}



bool displayFromTo( )
{
	int start = 0 , last = 0;
	cout << "Enter the start day : ";
	fflush(stdin);
	cin >> start; 
	cout<< "Enter the start day : ";
	fflush(stdin);
	cin >> last ;

	if ( !(start >= last && start > 0 && last <= dayCount))
	{
		cout << "Invalid register days\n";
		return false ;
	}

	displayInRange( start  , last);

	return true; 
}


bool displayMonth( )
{

	if (dayCount == 0)
	{
		cout << "no records\n";
		return false; 
	}
	displayInRange(1, dayCount);

}


bool displayInRange(int from, int last)
{
	int totalSum = 0;
	for (int i = from - 1; i < last ; i++)
	{
		displayDayAll(i );
		totalSum += sumArray[i];
	}

	cout << "=======================================\n";
	cout << "Sum of the month expense = " << totalSum << endl;
	return true;
}

bool displayDay( )
{

	int day;
	cout << "enter the day " << endl;
	cin >> day;

	if (day <= 0 || day > dayCount)
	{
		cout << "No records for this day\n";
		return false;
	}
	displayDayAll( day );

}

bool displayDayAll(int day)
{
	int* dayArray = monthArray[day - 1];

	cout << "-------------  day" << day << "  -------------\n";
	
	if (dayArray != nullptr)
	{
		for (int i = 0; i < DAY_ARRAY_SIZE; i++)
			cout << food[i] << " - " << dayArray[i] << endl;
		cout << "total of this day is - " << sumArray[day - 1] << endl;
	}
	else
	{
		for (int i = 0; i < DAY_ARRAY_SIZE; i++)
			cout << food[i] << " - 0\n";
		cout << "total - 0\n";
	}

	return true; 
		
}



#include "header.h"

bool amountAdd(int day, int opt);
bool addExpenseValidation(int day);

bool addExpenseValidation( int day )
{
	if (day > 0 && day <= MONTH_MAX)
	{
		if (day < dayCount)
		{
			while (day > dayCount + 1)
			{
				monthArray = ( int **)  createMemSpace(monthArray, sizeof(int*), day);
				
				sumArray = ( int * )  createMemSpace(sumArray, sizeof(int), day );
				
				sumArray[day - 1] = 0;
				monthArray[day - 1] = nullptr;
				day--;
			}

			if (monthArray[day - 1] == nullptr)
			{
				monthArray[day - 1] =( int * )  createMemSpace(nullptr, sizeof(int), DAY_ARRAY_SIZE);
				for (int i = 0; i < DAY_ARRAY_SIZE; i++)
					monthArray[day - 1][i] = 0;
			}
		}

	}
	else
	{
		
		cout << "You trying to access invalid month day\n";
		return false;
	}
	return true; 
}

bool amountAdd( int day , int opt )
{
	int amount = 0; 
	cout << "Enter the amount : ";
	cin >> amount; 

	monthArray[day - 1][opt - 1] = amount; 

	sumArray[day - 1] = 0;
	for (int i = 0; i < DAY_ARRAY_SIZE; i++)
		sumArray[day - 1] += monthArray[day - 1][i] ;

	return true; 

}

bool addExpense()
{
	int day = 0 ; 
	bool flag = false;
	int opt = 0 ; 

	do
	{
		cout << "Enter the day : ";
		cin >> day;
		flag = addExpenseValidation(day);

		if (flag != true)
		{
			return false;

		}

		dayCount = day; 

		cout << "Enter the option 1.BreakfastAmount 2.LunchAmount 3.DinnerAmount 4.ExtraAmount 5.GoBack : ";
		cin >> opt;


		switch (opt)
		{
		default:
			cout << "Invalid option for\n";
		case 1:
		case 2:
		case 3:
		case 4:
			amountAdd(day, opt);
		case 5 :
			break;
		}

		
	} while (opt != 5);

}

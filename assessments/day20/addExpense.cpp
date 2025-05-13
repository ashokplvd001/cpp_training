#include "header.h"

bool addExpenseValidation( int day )
{
	if (day > 0 && day <= MONTH_MAX)
	{
		if (day < dayCount)
		{
			while (day > dayCount + 1)
			{
				monthArray = createMemSpace(monthArray, sizeof(int*), day);
				sumArray = createMemSpace(sumArray, sizeof(int), day );
				monthArray[day - 1] = nullptr;
				day--;
			}

			if (monthArray[day - 1] == nullptr)
			{
				monthArray[day - 1] = createMemSpace(nullptr, sizeof(int), DAY_ARRAY_SIZE);
				
			}

			
		}

		// some action 

	}
	else
	{
		cout << "You trying to access invalid month day\n";
	}
}


bool addExpense()
{


	int day; 
	cout << "Enter the day : ";
	cin >> day; 
	addExpenseValidation(day);



		





}

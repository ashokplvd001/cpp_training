#include "header.h"
bool view()
{
	char option;
	cout << "1.day" << endl;
	cout << "2.week" << endl;
	cout << "3.sum" << endl;
	cout << "enter which option you want to see" << endl;
	cin >> option;
	if (option == 1)
	{
		int day;
		cout << "enter the day " << endl;
		cin >> day;
		display(day);

	}
	else if (option == 2)
	{
		cout << "enter strart date and end date" << endl;
		int start_date, end_date;
		cin >> start_date >> end_date;
		for (int i = start_date;i <= end_date;i++)
		{
			display(i);
		}

	}
	else
	{

	}
}

void displayMonth()
{
	int totalSum = 0; 
	for (int i = 0; i < daysCount; i++)
	{
		displayDayall(i + 1);
		totalSum += sumArray[i];
	}

	cout << "Sum of the month expense = " << totalSum << endl;


}

bool displaysDayall(int day)
{
	int day;
	cout << "enter the day " << endl;
	cin >> day;

	if (day <= 0 || day > dayCount )
	{
		cout << "No records for this day\n";
	}

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

		
}

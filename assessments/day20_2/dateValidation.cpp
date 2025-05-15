#include <iostream>
#include "header.h"
#include "dateValidation.h"


bool yearleapvalidation(int year)
{
	if ((year % 4 == 0 && year % 100 != 0) || (year % 100 == 0 && year % 400 == 0))
		return true;

	return false;
}

bool yearValidation(int year)
{
	if (year < STARTED_YEAR || year > TODAY_YEAR)
		return false;

	return true;
}

bool monthValidation(int month)
{
	if (month <= 0 || month > 12)
		return false;

	return true;
}

bool dayValidation(dateStruct date)
{
	if (date.month == 2)
	{
		if (yearleapvalidation(date.year) == true)
		{
			if (date.day <= 0 || date.day > LEAP_MONTH_DAYS_MAX)
				return false;
		}
		else
		{
			if (date.day <= 0 || date.day > NON_LEAP_MONTH_DAYS_MAX)
				return false;

		}
	}
	else
	{
		switch (date.month)
		{
		default:
			return false;
			break;
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			if (date.day <= 0 || date.day < M_31_MONTH_DAYS_MAX)
				return false;
			break;
		case 4:
		case 6:
		case 9:
			if (date.day <= 0 || date.day < M_30_MONTH_DAYS_MAX)
				return false;
			break;
		}
	}

	return true;

}


bool dateValidation(dateStruct date)
{
	if (yearValidation(date.year) == true)
	{
		if (monthValidation(date.year) == true)
		{
			if (dayValidation(date) == true)
			{
				return true;
			}
		}
	}

	cout << "Invalid date\n";
	return false;
}
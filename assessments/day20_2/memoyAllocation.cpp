#include <iostream>
#include "header.h"
#include "memoryAllocation.h"


bool memoryAloctionCheck( databaseStruct* database , dateStruct date )
{
	int temp = date.year; 
	if (database->yearsCount + STARTED_YEAR < date.year)
	{

		database->years = (yearStruct*)createMemSpace(database->years, sizeof(yearStruct),
			date.year - STARTED_YEAR + 1);

		temp = date.year;
		while ((database->yearsCount + STARTED_YEAR) < temp--)
		{
			database->years[temp - STARTED_YEAR-1] = { nullptr , 0 };
			temp--;
		}
		database->yearsCount = date.year - STARTED_YEAR ;

	}
	
	if ( database->years[date.year - STARTED_YEAR - 1 ].monthsCount  <  date.month )
	{
		database->years[date.year - STARTED_YEAR - 1 ].months = 
			(monthStruct*)createMemSpace(database->years[date.year - STARTED_YEAR - 1 ].months, 
				sizeof(monthStruct),	date.month - 1);

		temp = date.month ;

		while ( database->years[date.year - STARTED_YEAR - 1].monthsCount  < temp--)
		{
			database->years[date.year - STARTED_YEAR - 1].months[temp-1] = {nullptr , 0};
			temp--;
		}
		database->years[date.year - STARTED_YEAR - 1].monthsCount = date.month;

	}

	if (database->years[date.year - STARTED_YEAR - 1].months[date.month - 1].daysCount < date.day)
	{
		database->years[date.year - STARTED_YEAR - 1].months[date.month - 1].days = (dayStruct*)
			createMemSpace(database->years[date.year - STARTED_YEAR - 1].months[date.month - 1].days ,
				sizeof(dayStruct), date.day - 1);

		temp = date.day;

		while (database->years[date.year - STARTED_YEAR - 1].months[date.month - 1].daysCount < temp--)
		{
			database->years[date.year - STARTED_YEAR - 1].months[date.month].days[temp-1] = {nullptr , 0};
			temp--;
		}
		database->years[date.year - STARTED_YEAR - 1].months[date.month - 1].daysCount = date.month;

	}
	return true ; 

}

void* createMemSpace(void* ptr, int dataTypeSize, int noOfElements)
{
	void* returnPtr = nullptr;

	returnPtr = realloc(ptr, dataTypeSize * noOfElements);

	return returnPtr;
}

#pragma once
#include <limits>
using namespace std;


#define DEBUG 0

#define CATEGORY_LIST_SIZE 4 

#define MONTH_MAX 12 
#define LEAP_MONTH_DAYS_MAX 29
#define NON_LEAP_MONTH_DAYS_MAX 28
#define M_31_MONTH_DAYS_MAX 31 
#define M_30_MONTH_DAYS_MAX 30

#define STARTED_YEAR 2000
#define TODAY_YEAR 2025 

extern const char* category[CATEGORY_LIST_SIZE] ;

typedef struct _category 
{
	char** items;
	int* amount; 
	int total;
	int count;
}categoryStruct;

typedef struct _expense
{
	categoryStruct  category[CATEGORY_LIST_SIZE];
	int total;
}expenseStruct ;


typedef struct _day
{
	expenseStruct* expense;
	int total;
}dayStruct;

typedef struct _month
{
	dayStruct* days;
	int daysCount;
}monthStruct;


typedef struct _year
{	
	monthStruct * months; 
	int monthsCount; 
}yearStruct ;

typedef struct _database
{
	yearStruct* years;
	int yearsCount;
}databaseStruct;




typedef struct  _date
{
	int year; 
	int month;
	int day;
}dateStruct;



bool addExpense(databaseStruct* database);
bool addItems(databaseStruct* database, int opt);



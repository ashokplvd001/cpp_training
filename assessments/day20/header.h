#pragma once
#include <iostream>
using namespace std;

#define MONTH_MAX 31 
#define DAY_ARRAY_SIZE 4
//#define DEBUG 


extern int** monthArray ;
extern int* sumArray ;
extern int dayCount ;

extern const char * food[DAY_ARRAY_SIZE] ;



void* createMemSpace(void* ptr, int dataTypeSize, int sizeOfArra);

bool addExpense();
bool amountAdd(int day, int opt);
bool addExpenseValidation(int day);

bool viewExpense();
bool displayDayAll(int day);
bool displayDay();
bool displayInRange(int from, int last);
bool displayMonth();
bool displayFromTo();




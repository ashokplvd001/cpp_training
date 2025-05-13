#pragma once
#include <iostream>
using namespace std;

#define MONTH_MAX 31 
#define DAY_ARRAY_SIZE 4 


int** monthArray = nullptr;
int* sumArray = nullptr;
int dayCount = 0;

const char * food[DAY_ARRAY_SIZE] = { "BreakFast" , "Lunch" , "Dinner" , "Others " };



void* createMemSpace(void* ptr, int dataTypeSize, int sizeOfArra);




bool addExpense();bool amountAdd(int day, int opt);
bool addExpenseValidation(int day);

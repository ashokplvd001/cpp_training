#pragma once
#include <iostream>

#define MONTH_MAX 31 
#define DAY_ARRAY_SIZE 4 


int** monthArray = nullptr;
int* sumArray = nullptr;
int dayCount = 0;

char * food[DAY_ARRAY_SIZE] = { "BreakFast" , "Lunch" , "Dinner" , "Others " };



void* createMemSpace(void* ptr, int dataTypeSize, int sizeOfArra);

bool addExpense();

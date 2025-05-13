#pragma once
#include <iostream>

#define MONTH_MAX 31 
 
int** MonthArray = nullptr ; 
int* dayArray = nullptr ; 
int* sumArray = nullptr ; 
int dayCount = 0; 

void* createMemSpace(void* ptr, int dataTypeSize, int sizeOfArra);

bool addExpense();

#include "header.h"

int** monthArray = nullptr;
int* sumArray = nullptr;
int dayCount = 0;
const char* food[DAY_ARRAY_SIZE] = { "BreakFast" , "Lunch" , "Dinner" , "Others " };



int main()
{
	cout << "*************Welcome to the program*****************\n";

	int opt = 0;
	
	

	do
	{
		cout << "Enter the option\n1.Add/Modify expense\n2.View expense\n3.exit\n";
		fflush(stdin);
		cin >> opt; 
		switch (opt)
		{
			default:
				cout << "Invalid option\n";
				break;
			case 1:
				addExpense();
				break;
			case 2:
				viewExpense();
				break;
			case 3 :
				break;
		}
	} while (opt != 3);

	cout << "********************Program Ended************************\n";


}
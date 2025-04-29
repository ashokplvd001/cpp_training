#include <iostream>
#define MAXBITES 10 ;
using namespace std; 

void doWhileFun()
{
	int taste = 0; 
	int plateEmpty = MAXBITES;
	do
	{
		cout << "Have a bite of the food\n";
		plateEmpty--;
		cout << "How was the taste of the food ( 0/1)";
		cin >> taste; 
	} while (( taste > 0 ) && ( plateEmpty > 0 ) );

	if (plateEmpty == 0)
	{
		cout << "person stooped eating after plate was empty\n";
		cout << "And the food was awesome\n";
	}

	if (taste == 0)
	{
		cout << "Person stooped eating after having " <<  MAXBITES - plateEmpty;
		cout<< " bites of food\n";
	}
}
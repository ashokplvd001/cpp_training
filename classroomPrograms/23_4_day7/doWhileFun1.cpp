#include <iostream>

using namespace std; 

void doWhileFun1()
{
	/*
	int attempts = 3;
	char check = 'n';	

	do
	{
		cout << "password is right or wrong( y / n ) : ";
		cin >> check;
		attempts--;
	} while ((check != 'y' && check != 'Y') && attempts);

	if (attempts == 0)
	{
		cout << "attempts are finished , u r locked\n";
 	}
	else
	{
		cout << "Successfully logged in\n";
	}
	*/

	int amount = 1000;
	char opt = 'n';

	do
	{
		cout << "bought something\n";
		cout << "want to do shop somemore : ( y / n )";
		cin >> opt;
		amount -= 200 ;
	} while (amount > 100 && ( opt != 'n' && opt !='N' ));

	if (amount > 100)
	{
		cout << "I stopped buying bcz i spent all money and i have not enough money\n";
	}
	if (opt == 'n' && opt == 'N')
	{
		cout << "I stopped buying bcz i didnt find anything more\n";
	}

}
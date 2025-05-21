//Create a class ATMAccount with members balance, accountHolder.Provide functions deposit(), withdraw(), 
//and checkBalance() which modify 
//and show balance.Simulate interaction in main().
#pragma once
#include <iostream>
#include "atmSystem.h"
using namespace std;

void program4()
{
	atmSystem atm1;

	cout << "Available balance - " << atm1.checkBalance() << endl;	// it will return the balance amount value

	int amount = 0; 
	cout<<"Enter the amount to deposit : ";
	cin >> amount;

	if (atm1.deposit(amount) == false)
		cout << "somthing wrong\n";
	cout << "Available balance - " << atm1.checkBalance() << endl;


	cout << "Enter the amount to withdrawal : ";
	cin >> amount;
	if (atm1.withdraw(amount) == false)			// if false then no sufficient money 
		cout << "no suffieint money to wothdrawal this amount\n";

	cout << "Available balance - " << atm1.checkBalance() << endl;



}
//Create a class ATMAccount with members balance, accountHolder.Provide functions deposit(), withdraw(), 
//and checkBalance() which modify 
//and show balance.Simulate interaction in main().
#pragma once
#include <iostream>
using namespace std; 
class atmSystem
{
	string atm_acHolderName;
	int atm_amount; 

public:
	atmSystem();
	bool deposit(int amount);
	bool withdraw(int amount);
	int checkBalance();

};

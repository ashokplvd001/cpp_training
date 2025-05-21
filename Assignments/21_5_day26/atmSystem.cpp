//Create a class ATMAccount with members balance, accountHolder.Provide functions deposit(), withdraw(), 
//and checkBalance() which modify 
//and show balance.Simulate interaction in main().

#include <iostream>
#include "atmSystem.h"

using namespace std;

int atmSystem::checkBalance()
{
	return atm_amount;
}

atmSystem::atmSystem()
{
	atm_acHolderName = "none :";
		atm_amount = 0; 
}

bool atmSystem::deposit(int amount)
{
	this->atm_amount += amount;
	return true; 
}

bool atmSystem::withdraw(int amount)
{

	//  if no sufficient amount return false 
	if (this->atm_amount < amount)
		return false;
	else
		this->atm_amount -= amount;

	return true;
}


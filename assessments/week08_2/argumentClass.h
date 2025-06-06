#pragma once
#include <iostream>
#include "header.h"
//using namespace std;

class argument
{
	string arg;
	_ArgumentStatus is_address();
	_ArgumentStatus is_register();
	_ArgumentStatus is_data();
public :
	argument(string str);
	argument() = default;
		
	void setArgument(string str);
	
	_Instruction checkInstructionType();

	_ArgumentType checkArgumentType();
	string getArgument();

};
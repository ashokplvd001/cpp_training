#pragma once
#include "StorageUnitClass.h"
class CPU : public StorageUnit
{
	string arg1, arg2;
	_Instruction instruction;

	bool storeValue(string arg, _ArgumentType argType, int result);
	int getValue(string arg, _ArgumentType argType);
	_Instruction checkInstructionType(string instruction);

	_ArgumentStatus is_address(string arg);
	_ArgumentStatus is_register(string arg);
	_ArgumentStatus is_data(string arg);
	_ArgumentType checkArgumentType(string arg);

public:
	CPU() = default;
	bool instructionExcutione(string arg1, string arg2, string instruction);
	void printData();


};
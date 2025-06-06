#include <iostream>
#include "header.h"
#include "argumentClass.h"
using namespace std;

int getValue(string str , _ArgumentType argType, StorageUnit& storage );
bool storeValue(string str, _ArgumentType argType, int value , StorageUnit& storage);
 
bool instructionExcutione(argument arg1, argument arg2, _Instruction cmd, StorageUnit& storage)
{

	_ArgumentType arg1Type = arg1.checkArgumentType();
	_ArgumentType arg2Type = arg1.checkArgumentType();

	if (arg1Type == e_Data || arg1Type == e_Error)
	{
		cout << "Invalid arguments for the command\n";
		return false; 
	}
	else if (arg2Type == e_Error)
	{
		cout << "Invalid arguments for the command\n";
		return false;
	}

	int res = 0 ;
	int val1 = getValue(arg1.getArgument(), arg1Type, storage);
	int val2 = getValue(arg2.getArgument(), arg2Type, storage);

	if (cmd == i_ADD)
		res = val1 + val2;
	else if (cmd == i_SUB)
		res = val1 - val2;
	else if (cmd == i_MUL)
		res = val1 * val2;
	else if (cmd == i_DIV)
	{
		try
		{
			if (val2 == 0)
				throw runtime_error("Divide by zero error");
		}
		catch (exception& e)
		{
			cout << "Captures the exception " << e.what() << endl;
			return false;
		}
		catch (...)
		{
			cout << "Divide by zero error\n";
			return false;
		}
	}
	else if (cmd == i_MOV)
		res = val2;


	storeValue(arg1.getArgument(), arg1Type, res, storage);
	
}

bool storeValue(string arg, _ArgumentType argType, int result , StorageUnit& storage)
{


	if (argType == e_Address)
	{
		arg.back() = 0;
		char* ptr = (char*)arg.c_str();
		int index = stoi(arg.c_str());
		storage.storeInMemory( index , result);
	}
	else if (argType == e_Register)
	{
		if (arg == "AX")
			return storage.storeInRegisters( 0 , result );
		else if (arg == "BX")
			return storage.storeInRegisters(1, result);
		else if (arg == "CX")
			return storage.storeInRegisters(2, result);
		else if (arg == "DX")
			return storage.storeInRegisters(3, result);

	}

}





int getValue( string arg, _ArgumentType argType,  StorageUnit&  storage)
{
	

	if (argType == e_Address)
	{
		arg.back() = 0;
		char* ptr = (char*)arg.c_str();
		int index = stoi(arg.c_str());
		return storage.getFromMemory(index);
	}
	else if (argType == e_Register)
	{
		if (arg == "AX")
			return storage.getFromRegisters(0);
		else if (arg == "BX")
			return storage.getFromRegisters(1);
		else if (arg == "CX")
			return storage.getFromRegisters(2);
		else if (arg == "DX")
			return storage.getFromRegisters(3);
		else
			return 0;
	}
	else if (argType == e_Data)
	{
		return stoi(arg);
	}
	else return  0; 

}
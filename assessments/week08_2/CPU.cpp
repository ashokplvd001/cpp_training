#include <iostream>
#include "header.h"
#include "StorageUnitClass.h"
#include "CPU.h"

using namespace std; 




_Instruction  CPU::checkInstructionType(string instruction)
{


	if (instruction == "ADD")
		return i_ADD;
	else if (instruction == "SUB")
		return i_SUB;
	else if (instruction == "MUL")
		return i_MUL;
	else if (instruction == "DIV")
		return i_DIV;
	else if (instruction == "MOV")
		return i_MOV;
	else
		return i_invalid;
}



void CPU::printData()
{
	cout << "Snapshot of the processor\n";

	cout << "AX : " << (int)getFromRegisters(0) << endl;
	cout << "BX : " << (int)getFromRegisters(1) << endl;
	cout << "CX : " << (int)getFromRegisters(2) << endl;
	cout << "DX : " << (int)getFromRegisters(3) << endl;

	cout << "First 16 Memory Contents\n";
	for (int i = 0; i < 16; i++)
	{
		cout << i << " -> " << (int)getFromMemory(i) << endl;
	}

}

bool CPU::instructionExcutione(string arg1, string arg2, string instruction)
{
		this->instruction = checkInstructionType(instruction);

		_ArgumentType arg1Type = checkArgumentType(arg1);
		_ArgumentType arg2Type = checkArgumentType(arg2);

		if (arg1Type == e_Data || arg1Type == e_Error)
		{

			cout << "Invalid argument for the command\n";
			return false;
		}
		else if (arg2Type == e_Error)
		{
			cout << "Invalid arguments for the command\n";
			return false;
		}




		int res = 0;
		int val1 = getValue(arg1, arg1Type);
		int val2 = getValue(arg2, arg2Type);



		if (this->instruction == i_ADD)
			res = val1 + val2;
		else if (this->instruction == i_SUB)
			res = val1 - val2;
		else if (this->instruction == i_MUL)
			res = val1 * val2;
		else if (this->instruction == i_DIV)
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
			res = val1 / val2;
		}
		else if (this->instruction == i_MOV)
		{
			res = val2;
			//	cout <<"mov = ";
		}
		else
		{
			cout << "Ivalid instruction\n";
			return false;
		}
		//	cout << "res = " << res << endl;
			//cout << "Validation done\n";

		 return storeValue(arg1, arg1Type, res);

	
}
bool CPU::storeValue(string arg, _ArgumentType argType, int result)
{


	if (argType == e_Address)
	{
		arg.back() = 0;
		char* ptr = (char*)arg.c_str();
		int index = stoi(ptr + 1);
		storeInMemory(index, result);
		return true; 
	}
	else if (argType == e_Register)
	{
		//cout << arg<< endl;
		if (arg == "AX")
			return storeInRegisters(0, result);
		else if (arg == "BX")
			return storeInRegisters(1, result);
		else if (arg == "CX")
			return storeInRegisters(2, result);
		else if (arg == "DX")
			return storeInRegisters(3, result);

	}
	return false; 
}

int CPU::getValue(string arg, _ArgumentType argType)
{


	if (argType == e_Address)
	{
		arg.back() = 0;
		char* ptr = (char*)arg.c_str();
		int index = stoi(ptr + 1);
		return getFromMemory(index);
	}
	else if (argType == e_Register)
	{
		if (arg == "AX")
			return getFromRegisters(0);
		else if (arg == "BX")
			return getFromRegisters(1);
		else if (arg == "CX")
			return getFromRegisters(2);
		else if (arg == "DX")
			return getFromRegisters(3);
		else
			return 0;
	}
	else if (argType == e_Data)
	{
		return stoi(arg);
	}
	else return  0;

}


_ArgumentStatus CPU::is_address(string arg)
{
	if (arg.front() == '[')
	{
		if (arg.back() == ']')
		{

			auto it = arg.begin() + 1;

			if (it == (arg.end() - 1))
				return a_s_currupted;

			for (; it != (arg.end() - 1); it++)
			{
				if (*it < '0' && *it > '9')
					return a_s_currupted;
			}

			arg.back() = 0;

			int num = stoi(arg.c_str() + 1);

			if (num > unsigned short int(-1))
				return a_s_currupted;
			else
				return a_s_valid;

		}
		else return a_s_currupted;
	}
	else return a_s_invald;


	return a_s_invald;
}



_ArgumentStatus CPU::is_register(string arg)
{
	if ((arg == "AX") || (arg == "BX") || (arg == "CX") || (arg == "DX"))
		return a_s_valid;

	return a_s_invald;

}



_ArgumentStatus CPU::is_data(string arg)
{
	int num = stoi(arg);

	char str[10];

	sprintf(str, "%d", num);

	if (strcmp(str, arg.c_str()) == 0)
	{
		if (num > 65536)
			return a_s_invald;
	}


	return a_s_valid;

}




_ArgumentType CPU::checkArgumentType(string arg)
{

	_ArgumentStatus  status;

	if ((status = is_address(arg)) != a_s_invald)
	{
		if (status == a_s_valid)
		{
			//	cout << "is_address\n";
			return e_Address;
		}


	}
	else if ((status = is_register(arg)) != a_s_invald)
	{
		if (status == a_s_valid)
		{
			//	cout << "isregister\n";
			return e_Register;
		}

	}
	else if ((status = is_data(arg)) != a_s_invald)
	{
		if (status == a_s_valid)
		{
			//	cout << "isData\n";
			return e_Data;
		}


	}

	return e_Error;

}


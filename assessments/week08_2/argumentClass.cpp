#include <iostream>
#include <string>
#include "header.h"
#include "argumentClass.h"
using namespace std; 

argument::argument(string str = "NONE")
{
	arg = str;
}


_Instruction argument::checkInstructionType()
{
	char* ptr = strtok((char*)arg.c_str(), " ");

	if (ptr == nullptr)
		return i_invalid;

	string word = ptr;

	if (word == "ADD")
		return i_ADD;
	else if (word == "SUB")
		return i_SUB;
	else if (word == "MUL")
		return i_MUL;
	else if (word == "DIV")
		return i_DIV;
	else if (word == "MOV")
		return i_MOV;
	else
		return i_invalid;
}


_ArgumentStatus argument::is_address()
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
				if (*it >= '0' && *it <= '9')
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
	else return a_s_currupted;


	return a_s_invald;
}


_ArgumentStatus argument::is_register()
{
	if ((arg == "AX") || (arg == "BX") || (arg == "CX") || (arg == "DX"))
		return a_s_valid;

	return a_s_invald;

}

_ArgumentStatus argument::is_data()
{
	int num = stoi(arg);

	char str[10];

	sprintf(str, "%d", num);

	if (strcmp(str, arg.c_str()) == 0)
	{
		if (num <= 65536)
			return a_s_valid;
	}


	return a_s_invald;

}
string argument::getArgument()
{
	return arg;
}

void argument::setArgument(string str)
{
	arg = str;
}

_ArgumentType argument::checkArgumentType()
{
	_ArgumentStatus  status;

	if ((status = is_address()) != a_s_invald)
	{
		if (status == a_s_valid)
			return e_Address;
		else
			return e_Error;

	}
	else if ((status = is_register()) != a_s_invald)
	{
		if (status == a_s_valid)
			return e_Register;
		else
			return e_Error;
	}
	else if ((status = is_data()) != a_s_invald)
	{
		if (status == a_s_valid)
			return e_Data;
		else
			return e_Error;
	}

	return e_Error;

}
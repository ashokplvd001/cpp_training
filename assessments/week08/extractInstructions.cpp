#include <iostream>
#include <vector>
#include <string>

#include "header.h"
using namespace std; 



bool extractEachLineOFInstruction(vector <string>& instructionsLoader, string& instructionLine , int programCounter)
{ 

	if (programCounter < instructionsLoader.size())
		instructionLine = instructionsLoader[programCounter];
	else
		return false; 

	return true;

}


_Instruction checkInstructionType(string instructionLine)
{
	char * ptr  = strtok((char*)instructionLine.c_str(), " ");

	if (ptr == nullptr)
		return i_invalid ;
	
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


_ArgumentStatus is_address(string arg)
{
	if (arg.front() == '[')
	{
		if (arg.back() == ']')
		{
			
			auto it = arg.begin() + 1;
			
			if( it == (arg.end() - 1) ) 
			 return a_s_currupted;
			 
			for (; it != (arg.end() -1 ); it++)
			{
				if (*it < '0' && *it > '9')
					return a_s_currupted ;
			}
			
			arg.back() = 0 ;

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


_ArgumentStatus is_register(string arg)
{
	if ( (arg == "AX") || (arg == "BX") || (arg =="CX")  || ( arg == "DX") )
		return a_s_valid;

	return a_s_invald;

}

_ArgumentStatus is_data(string arg)
{
	int num = stoi(arg);

	char str[10]  ;

	sprintf(str, "%d", num);

	if (strcmp(str, arg.c_str()) == 0)
	{
		if( num > 65536 )
		return a_s_invald;
	}
		

	return a_s_valid;

}


_ArgumentType checkArgumentType(string arg)
{
	
	_ArgumentStatus  status;

	if ( ( status = is_address(arg) ) != a_s_invald )
	{
		if (status == a_s_valid )
			return e_Address;
		else
			return e_Error;

	}
	else if ( (status = is_register(arg)) != a_s_invald )
	{
		if (status == a_s_valid)
			return e_Register ;
		else
			return e_Error;
	}
	else if ((status = is_data(arg)) != a_s_invald )
	{
		if (status == a_s_valid)
			return e_Data;
		else
			return e_Error;
	}

	return e_Error;

}


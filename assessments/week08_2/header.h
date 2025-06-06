#pragma once
#include <string>
#include <vector>

typedef enum _argumentStatus
{
	a_s_valid ,
	a_s_invald ,
	a_s_currupted
}_ArgumentStatus;

typedef enum _argumentType
{
	e_Error,
	e_Register ,
	e_Address , 
	e_Data ,

}_ArgumentType;

typedef enum _intruction
{
	i_invalid,
	i_MOV,
	i_ADD,
	i_SUB,
	i_MUL,
	i_DIV,
//	i_HLT 
}_Instruction;

class StorageUnit
{
private:
	short int registers[4];
	char * RAM;
public:
	StorageUnit();
	bool storeInMemory(int index, short int data);
	bool storeInRegisters(int index, short int data);
	char getFromMemory(int index);
	short int  getFromRegisters(int index);
};


using namespace std;

// if no HLT then it is invalid file returns false
bool loadInstructions(string fileName, vector <string>& instructionsLoader);	// command line argument 


bool extractEachLineOFInstruction(vector <string>& instructionsLoader, string& instructionLine , int programCounter)  ;

_Instruction checkInstructionType(string instructionLine);

_ArgumentType checkArgumentType(string arg );	// check if it is AX ,bx , cx , dx or any invalid 


// get arguments
//

bool instructionExcutione(string arg1, string arg2, _Instruction cmd , StorageUnit & storage);
/*
bool add(string instuctionLine );
bool sub(string instructionLine);
bool mul(string instructionLine);
bool div(string instructionLine);

bool mov(string instructionLine);
*/
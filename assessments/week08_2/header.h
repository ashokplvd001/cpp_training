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



using namespace std;


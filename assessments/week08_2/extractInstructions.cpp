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



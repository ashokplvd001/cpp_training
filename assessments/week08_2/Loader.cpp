#include <iostream>
#include <fstream>
#include <vector>
#include <string>

#include  "header.h" 
#include "loader.h"

using namespace std; 

bool Loader::loadInstructions(string fileName)
{
	fstream instructionFile((const char*)fileName.c_str(), ios::in );
	
	try
	{
		if (instructionFile.is_open() == false)
			throw ios_base::failure("Failed to open " + fileName );
	}
	catch (exception& e)
	{
		cout << "Capture the exception : " << e.what() << endl;
		return false; 
	}
	string line;

	while (getline(instructionFile, line))
	{
		
		if (is_HLT(line) == true)
			break;
		else if (line == "")
			continue;

		instructionsLoader.push_back(line);
	}

	instructionFile.close();



	if (is_HLT(line) == false)
		return false; 

	/*
	for (auto val : instructionsLoader)
	{
		cout << val << endl;
	}
	*/

	return true;

} 

bool Loader::is_HLT(string line)
{
	if (line.find("HLT") < line.size())
		return true; 

	return false;
}



bool Loader::extractEachLineOFInstruction( string& instructionLine, int programCounter)
{

	if (programCounter < instructionsLoader.size())
		instructionLine = instructionsLoader[programCounter];
	else
		return false;

	return true;

}
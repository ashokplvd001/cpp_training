#include <iostream>
#include <fstream>
#include <vector>
#include <string>

using namespace std; 

bool is_HLT(string line);

bool loadInstructions(string fileName, vector <string>& instructionsLoader)
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

	if (is_HLT(line) == false)
		return false; 

	return true;

} 

bool is_HLT(string line)
{
	if (line.find("HLT") < line.size())
		return true; 

	return false;
}


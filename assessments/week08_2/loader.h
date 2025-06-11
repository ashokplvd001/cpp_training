#pragma once

#include <vector>
#include <string>
using namespace std;

class Loader
{
	vector <string> instructionsLoader;

	bool is_HLT(string line);
public:
	Loader() = default;
	bool loadInstructions(string fileName);
	bool extractEachLineOFInstruction(string & instructionLine, int programCounter);
};
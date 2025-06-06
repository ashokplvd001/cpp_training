
#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include "header.h"
#include "argumentClass.h"
using namespace std;

void printData(StorageUnit &  storageSpace);
// give file in command line
string getFileName(int argc, char* argv[]);

int main(int argc , char * arg[] )
{
	string fileName = getFileName(argc, arg);

	

	vector <string> instructionsLoader;
	string instructionLine;
	int programCounter = 0; 
	StorageUnit storageSpace;


	try
	{
		if( !loadInstructions(fileName, instructionsLoader) )
			throw string("Failed to proceed");
	}
	catch( string s )
	{
		cout << s <<" terminating the application" << endl;
		return 0;
	}
	
	//vector <string> wordList;
	string arg1 , arg2 ; 
	string word;
	argument cmd;
	while (extractEachLineOFInstruction(instructionsLoader, instructionLine, programCounter) == true)
	{
		stringstream linestream(instructionLine);

		cout << "instructionLine = " << instructionLine << endl;

		arg1 = arg2 = "";
	
		getline(linestream, word , ' ');

		//_Instruction instrunction = checkInstructionType(word);

		getline(linestream, arg1 , ' '); 
		cout << " arg1 = " << arg1 << endl;

		getline(linestream, word, ' ');
		cout << " arg2 = " << word << endl;

		if (word != ",")
		{
			cout << "Invalid SYNTAX";
			cout << "program Counter point : " << programCounter << endl;
			printData(storageSpace);
			return -1 ; 
		}

		getline(linestream, arg2, ' ');
		cout << " arg2 = " << arg2 << endl;
		cmd.setArgument(word);
		
		if (instructionExcutione(arg1, arg2, cmd.checkInstructionType(), storageSpace) == false)
			break;
	}


	printData(storageSpace);
}



string getFileName(int argc, char* argv[])
{
	string fileName ;
	if (argc == 2)
		fileName = argv[1];
	else
		fileName = "instructions.txt" ;

	return fileName;
}


void printData ( StorageUnit & storageSpace )
{
	cout << "Snapshot of the processor\n";
	
	cout << "AX : " << storageSpace.getFromRegisters(0)<<endl;
	cout << "BX : " << storageSpace.getFromRegisters(1) << endl;
	cout << "CX : " << storageSpace.getFromRegisters(2)<<endl;
	cout << "DX : " << storageSpace.getFromRegisters(3)<<endl;
	
	cout << "First 16 Memory Contents\n";
	for (int i = 0; i < 16; i++)
	{
		cout << i << " -> " << storageSpace.getFromMemory(i) << endl;
	}

}
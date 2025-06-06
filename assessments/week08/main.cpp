
#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include "header.h"
using namespace std;

void printData(StorageUnit  storageSpace);
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
	string word , arg1 , arg2 ; 
	while (extractEachLineOFInstruction(instructionsLoader, instructionLine, programCounter++) == true)
	{
		stringstream linestream(instructionLine);

	//	cout << "instructionLine = " << instructionLine << endl;

		arg1 = arg2 = "";
	
		getline(linestream, word, ' ');

		_Instruction instrunction = checkInstructionType(word);

		getline(linestream, arg1 , ' '); 
	//	cout << " arg1 = " << arg1 << endl;

		getline(linestream, arg2, ' ');
	//	cout << " arg2 = " << arg2 << endl;

		if (arg2 != ",")
		{
			cout << "Invalid SYNTAX";
	//		cout << "program Counter point : " << programCounter << endl;
			printData(storageSpace);
			return -1 ; 
		}
		
		getline(linestream, arg2, ' ');
	//	cout << " arg2 = " << arg2 << endl;

		if(instructionExcutione(arg1, arg2, checkInstructionType( word), storageSpace) == false)
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


void printData ( StorageUnit  storageSpace )
{
	cout << "Snapshot of the processor\n";
	
	cout << "AX : " << (int)storageSpace.getFromRegisters(0)<<endl;
	cout << "BX : " << (int)storageSpace.getFromRegisters(1) << endl;
	cout << "CX : " << (int)storageSpace.getFromRegisters(2)<<endl;
	cout << "DX : " << (int)storageSpace.getFromRegisters(3)<<endl;
	
	cout << "First 16 Memory Contents\n";
	for (int i = 0; i < 16; i++)
	{
		cout << i << " -> " << (int)storageSpace.getFromMemory(i) << endl;
	}

}

#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include "header.h"
#include "CPU.h"
#include "loader.h"
#include "StorageUnitClass.h"
using namespace std;


string getFileName(int argc, char* argv[]);

int main(int argc , char * arg[] )
{
	string fileName = getFileName(argc, arg);

	string instructionLine;
	int programCounter = 0; 
	
	Loader loader ;
	CPU cpu;


	try
	{
		if( !loader.loadInstructions(fileName) )
			throw string("Failed to proceed");
	}
	catch( string s )
	{
		cout << s <<" terminating the application" << endl;
		return 0;
	}
	
	//vector <string> wordList;
	string instruction , arg1 , arg2 ;
	while (loader.extractEachLineOFInstruction( instructionLine, programCounter++) == true)
	{
		stringstream linestream(instructionLine);

	//	cout << "instructionLine = " << instructionLine << endl;

		arg1 = arg2 = "";
	
		getline(linestream, instruction, ' ');


		getline(linestream, arg1 , ' '); 
	//	cout << " arg1 = " << arg1 << endl;

		getline(linestream, arg2, ' ');
	//	cout << " arg2 = " << arg2 << endl;

		if (arg2 != ",")
		{
			cout << "Invalid SYNTAX";
	//		cout << "program Counter point : " << programCounter << endl;
			cpu.printData();
			return -1 ; 
		}
		
		getline(linestream, arg2, ' ');
	//	cout << " arg2 = " << arg2 << endl;

		if( cpu.instructionExcutione(arg1, arg2 , instruction) == false)
			break;
		
	}


	cpu.printData();
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


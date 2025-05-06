#include <iostream>

using namespace std; 

void charArray1()
{
	char line[] = "This is a CPP Programming Class";
	char ch = 'C' ;

	cout << "address of line : " << (unsigned int)line << endl;

	char* res = strchr(line, ch);

	if (res != nullptr)
		cout << "\t" << res << endl;
	else
		cout << "Character not found\n";

	cout << "address of res : " << (unsigned int)res << endl;

	char * subStr = ( char * )"is" ;
	cout << "address of subStr \"is\" : " << (unsigned int)subStr << endl;

	char* res1 = strstr(line, subStr);


	if (res != nullptr)
		cout << "\t" << res1 << endl;
	else
		cout << "Substring not found\n";

	cout << "address of re1 : " << (unsigned int)res1 << endl;


}
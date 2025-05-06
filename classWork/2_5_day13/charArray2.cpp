#include <iostream>
#include <cstring>

using namespace std;

void charArray2()
{
	char str[40] = "1011,ashok|issokey,chennai";
	cout << "str address -> " << (unsigned int)str << endl;

	char* savePtr = 0;
	char* ptr = strtok(str, "|,");
	

	while(ptr)
	{
		cout << ptr << endl;
		cout << "ptr address -> " << (unsigned int)ptr << endl;
		//ut << "saveptr address -> " << (unsigned int)savePtr << endl;
		ptr = strtok( NULL , "|," );
	}

}
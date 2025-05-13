#include <iostream>

using namespace std; 
int stringlen(char*);
void charArray5()
{
	char name[20] = "hello\n";

	int len = stringlen(name);
	cout << "stirng is - `" << name << endl;
	cout << "length of the sting is  : " << len << endl;

}

int stringlen(char* str)
{
	int count = 0;
	while (str[count])
		count++;
	return count; 
}
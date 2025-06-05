#include <iostream>
#include <set>
//#include <typeinfo>

using namespace std; 

int main()
{
	set<string> visitors;

	string input; 
	string word; 
	input.resize(60, 0);
	word.resize(60, 0);

	char* ptr = nullptr; 


	while (true)
	{
		cin.getline((char*)input.c_str(), 59);

		ptr = strtok((char*)input.c_str(), " ");

		if (ptr == nullptr)
			word = ptr;

		if (word == "VISIT")
		{

		}
		else if (word == "UNIQUE")
		{

		}
		else if (word == "TOP")
		{

		}
		else
		{
			cout<<"Invalid Argument"
		}
	}
	

	
}




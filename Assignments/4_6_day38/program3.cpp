#include <iostream>
#include <forward_list>

using namespace std; 


int main()
{
	forward_list<string> l = { "Hi", "Hello", "DELETED: Spam", "How are you?", "DELETED: Abuse" };


	for (const auto& lT : l)
		cout << lT << endl;
	cout << "====================\n";

	
	l.remove_if([](string s1)
		{ if (strstr(s1.c_str(), "DELETED"))return true; else return false; });

		for (const auto& lT : l)
			cout << lT << endl;
	cout << "====================\n";


	  

}
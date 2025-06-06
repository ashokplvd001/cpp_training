#include <iostream>
#include <set>
#include <string>

using namespace std;

int main()
{
	set <string> dictionary = { "apple" , "application" , "banana" , "apply" , "ball" };

	string input; 
	
	int len = 0; 
	while (true)
	{
		cin >> input;
	
		len = input.size();


//if(  dictionary.upper_bound( inp

		for (auto& temp : dictionary)
		{
			if (input.substr(0, len) == temp.substr(0, len))
			{
				cout << temp << endl;
			}
		}
	}
}
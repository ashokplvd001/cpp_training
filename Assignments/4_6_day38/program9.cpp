#include <iostream>
#include <set>
#include <string>
using namespace std; 

int main()
{
	set<int> rooms;

	string input;
	string word; 

	input.resize(60, 0);
	word.resize(60, 0);

	char* ptr = nullptr; 

	while (1)
	{
		cin.getline( (char * ) input.c_str(), 59);

		ptr = strtok((char*)input.c_str(), " ");

		if (ptr == nullptr)
			continue;
		word = ptr; 

		if (word == "BOOK")
		{
			ptr = strtok( NULL , " ");

			if (ptr == nullptr)
			{
				cout << "Invalid argument\n";
				continue; 
			}
			
			if (ptr == nullptr)
				continue;
			word = ptr;

			int hour = stoi(word);

			if (hour < 0 || hour >= 24)
				continue; 

			if (rooms.find(hour) != rooms.end())
			{
				cout << "Already Booked\n";
				continue; 
			}

			rooms.insert(hour);
			cout << "Booked : " << hour << endl;
 
		}
		else if (word == "CHECK")
		{
			ptr = strtok(NULL, " ");

			if (ptr == nullptr)
			{
				cout << "Invalid argument\n";
				continue;
			}

			if (ptr == nullptr)
				continue;
			word = ptr;

			int hour = stoi(word);

			if (hour < 0 || hour >= 24)
				continue;

			if (rooms.find(hour) != rooms.end())
				cout << "Booked\n";
			else
				cout << "Free\n";

		}
		else
		{
			cout << "Invalid Argument\n";
		}

	}

}

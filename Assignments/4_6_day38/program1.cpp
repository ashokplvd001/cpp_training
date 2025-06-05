#include <iostream>
#include <list>

using namespace std;

int main()
{
	list<string> l;

	auto it = l.begin();

	string input;
	string word;

	input.resize(60, 0);
	word.resize(60, 0);

	char* ptr = nullptr; 

	while (true)
	{
		word = "";
		cin.getline((char*)input.c_str(), 59);
		
		ptr = strtok((char*)input.c_str(), " ");

		if (ptr == nullptr)
			continue; 

		word = ptr;

		if (word == "INSERT")
		{
			ptr = strtok(NULL, " ");

			if (ptr == nullptr)
			{
				cout << "Invalid arguments\n";
				continue;
			}
			word = ptr;


			it = l.insert(it, word);
			it++;
			

		}
		else if (word == "UP")
		{
			if (it == l.begin())
			{
				cout << "Cant move up , its in up most\n";
				continue;
			}
			it--;
		}
		else if (word == "DOWN")
		{
				if (it == l.end())
				{
					cout << "Cant move down , its in down most\n";
					continue;
				}
			it++;
			
		}
		else if (word == "PRINT")
		{
			for (auto& it : l)
				cout << it << endl;
		}
		else
		{
			cout << "Invalid command\n";
		}


	}
	return 0; 
}
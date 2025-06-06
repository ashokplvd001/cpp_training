#include <iostream>
#include <set>
#include <string>


using namespace std; 

int main()
{
	set<int> visitors;

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
			continue; 

		word = ptr;

		if (word == "VISIT")
		{
			ptr = strtok( NULL , " ");
			if (ptr == nullptr)
				continue;

				word = ptr;

				visitors.insert(stoi(word));


		}
		else if (word == "UNIQUE")
		{
			cout << visitors.size();
		}
		else if (word == "TOP")
		{
			for (const auto& temp : visitors)
				cout << temp << ' ';
			cout << endl;
		}
		else
		{
			cout << "Invalid Argument\n";
		}
	}
	

	
}




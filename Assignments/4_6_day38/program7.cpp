#include <iostream>
#include <set>
#include <string>
using namespace std;

int main()
{
	set<int> price;
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

		if (word == "ADD")
		{
			ptr = strtok(NULL, " ");
			if (ptr == nullptr)
				continue;

			word = ptr;

			price.insert(stoi(word));
		}
		else if (word == "REMOVE")
		{
			ptr = strtok(NULL, " ");
			if (ptr == nullptr)
				continue;

			word = ptr;

			price.erase(stoi(word));
		
		}
		else if (word == "MINMAX")
		{
			cout << *price.begin()  << ' ' << *(--price.end()) << endl;
		}
		else
		{
			cout << "Invalid Argument\n";
		}
	}
}

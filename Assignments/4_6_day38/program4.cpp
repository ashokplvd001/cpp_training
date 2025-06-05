#include <iostream>
#include <deque>

using namespace std; 

class HistoryManager
{
	deque<string> dq;
	int N;
	int count;
public:
	HistoryManager(int n = 4) : N(n), count(0) {}
	bool add(string cmd)
	{
		if (count < N)
			count++;
		else
			dq.pop_back();

		dq.push_front(cmd);
		return true;
	}

	void displayAll()
	{
		for (auto& temp : dq)
			cout << temp << endl;
		cout << "==============\n";
	}
};


int main()
{
	string input;
	string word;

	input.resize(60, 0);
	word.resize(60, 0);

	char* ptr = nullptr;

	HistoryManager h; 

	while (true)
	{
		word = "";
		cin.getline((char*)input.c_str(), 59);

		ptr = strtok((char*)input.c_str(), " ");

		if (ptr == nullptr)
			continue;

		word = ptr;

		if (word == "RUN")
		{
			ptr = strtok(NULL, " ");
			if (ptr == nullptr)
			{
				cout << "Invalid arguments\n";
				continue;
			}

			word = ptr;
		
			while (ptr = strtok(NULL, " "))
				word = word + ' ' + ptr; 

			h.add(word);
		}
		else if (word == "HISTORY")
		{
			h.displayAll();
		}
		else
		{
			cout << "Invalid input\n";
		}

	}

}
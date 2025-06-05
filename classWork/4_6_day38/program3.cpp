#include <iostream>
#include <deque>
#include <string>

using namespace std;

class Bhistory
{
	deque<string> first; 
	deque<string> second;
public : 
	bool back()
	{
		
		if ( first.size() <= 1) {
			cout << "This is back most place in history\n";
			return false;
		}
		

		second.push_front( first.back() ) ;
		first.erase(first.end()-1);
		return true;
	}

	bool forward()
	{
		if ( second.size() == 0)
		{
			cout << "This is most recent place in history\n";
			return false; 
		}

		first.push_back( second.front() ) ;
		second.pop_front();

		return true; 
	}

	void add(string site)
	{
		second.clear();
		first.push_back(site);
	}

	string current()
	{
		return first.back();
	}

	void displayAll()
	{
		cout << "Back stack :\n";
		for (auto it = first.begin(); it < first.end() - 1; it++)
		{
			cout << *it << endl;
		}
		cout << "Current : "<<first.back() << endl;


		cout << "Farward stack :\n";
		for (auto it = second.begin(); it < second.end() ; it++)
		{
			cout << *it << endl;
		}

	}


};


int main()
{

	Bhistory history;

	string input ;
	string word;
	input.resize(60, 0);
	word.resize(40, 0);

	char* ptr;
	while (true)
	{
		cin.getline( ( char * ) input.c_str(), 59);
		ptr  = strtok((char*)input.c_str(), " ");

		if (ptr != nullptr)
			word = ptr;

		if (word == string("visit"))
		{
			
			ptr = strtok(NULL, " ");

			if (ptr == nullptr)
			{
				cout << "Invalid input\n";
				continue;
			}
		
			word = ptr;

			history.add(word);
			cout << "Visited " << word << endl;
			
		}
		else if (word == string("back"))
		{
			
			if (history.back())
				cout << "Back to : "<< history.current()<<endl;
			
		}
		else if (word == string("forward"))
		{
			if( history.forward() )
				cout << "forward to : " << history.current() << endl;
		}
		else if (word == string("current"))
		{
			cout << "Current = " << history.current() << endl;
		}
		else if (word == string("history"))
		{
			history.displayAll();
		}
		else
		{
			cout << "Invalid command\n";
		}

	}


}
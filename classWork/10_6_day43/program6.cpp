#include <iostream>
#include <stack>
#include <string>
#include <sstream>
#include <exception>
using namespace std; 

template <typename T >
class Bhistory
{
	stack<T> backQue;
	stack<T> forwardQue; 

	public : 
		bool add(T val)
		{
			 backQue.push(val);
			 return true;
		}
		bool back()
		{
			if (backQue.empty())
				return false; 

			forwardQue.push(backQue.top());
			 backQue.pop();
			 return true; 
		}
		T current()
		{
			if (backQue.empty())
				throw invalid_argument("no elements in stack");

			return backQue.top();
		}
		bool forward()
		{
			if (forwardQue.empty())
				return false;

			backQue.push(forwardQue.top());
			 forwardQue.pop();
			 return true;
		}
};





int main()
{
	
	Bhistory<string> h;
	string word, line; 

	do
	{
		getline(cin,line);
		
		stringstream cmd(line);

		cmd >> word;

		if (word == "visit")
		{
			if (!(cmd >> word))
				continue;
			h.add(word);
			
		}
		else if (word == "back")
		{
			h.back();
			
		}
		else if (word == "forward")
		{
			h.forward();
			
		}
		else 
		{
			cout << "Invalid command\n";
		}

		try
		{
			cout << h.current() << endl;
		}
		catch (exception& e)
		{
			cout << "Caught exception : " << e.what() << endl;
		}
		


	} while (word != "Q" && word != "q");

	
}
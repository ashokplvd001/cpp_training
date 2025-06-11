#include <iostream>
#include <queue>
#include <string>
#include <sstream>

using namespace std; 

class printerQueue
{
	queue < pair<string , int  >> jobs;
public : 
	bool enque(string name, int count)
	{ 
		while (count > 10 )
		{
			jobs.push({ name , 10 });
			count -= 10;
		}
		jobs.push({ name , count });
		return true;
	}
	bool deque()
	{
		if (jobs.empty())
			return false; 
		cout << jobs.front().first << " - " <<jobs.front().second << " : running\n";
		jobs.pop();
		return true;
	}

};

int main()
{
	printerQueue jobs;

	jobs.enque( "as" , 23 );
	jobs.enque("Alice", 15);
	jobs.enque("Bob", 8);

	while (jobs.deque());

	
}

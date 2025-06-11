#include  <iostream>
#include <queue>

using namespace std; 

struct task
{
	string description;
	int priority; 

	bool operator >(const task & a )const
	{
		return  this->priority > a.priority;
	}

	bool operator <(const task& a)const
	{
		return this->priority < a.priority ;
	}

};

class taskSheduler
{
	priority_queue<task> jobs;
public : 
	bool add(string description, int priority)
	{
		jobs.push({ description , priority });
		return true;
	}
	bool execute()
	{
		if (jobs.empty())
			return false; 
		cout << "excuting -> " << jobs.top().description << " - " << jobs.top().priority << endl;
		jobs.pop();
		return true; 
	}
};


int main()
{
	taskSheduler jobs;

	jobs.add("sdfsg", 2);
	jobs.add("s34fsg", 4);
	jobs.add("sddfgsg", 2);
	jobs.add("sddgsg", 5);
	jobs.add("sdgsdg", 3);
	jobs.add("sdsdfgg", 1);
	jobs.add("sdsdfg", 3);


	while (jobs.execute());
}
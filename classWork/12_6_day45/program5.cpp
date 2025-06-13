#include <iostream>
#include <thread>
#include <queue>
#include <string>
#include <deque>
#include <list>
#include <chrono>

using namespace std;

typedef struct _task
{
	string threadId;
	int load;

}Task;


class Sheduler
{
	int cores; 
	char * coresFlag; 
	list < Task> tasksq;
public:
	Sheduler(int cores )
	{
		this->cores = cores;
		coresFlag = new char[cores];
	}

	~Sheduler()
	{
		delete [] coresFlag;
	}

	bool getTaskesList(list < Task> addTasks)
	{
		tasksq.splice(tasksq.end(), addTasks);
		return true;
	}

	bool excution()
	{
		Task task;
		for (int i = 0; i < cores; i++)
		{
			if (coresFlag[i] == 1)
			{
				if (tasksq.empty())
					return false; 

				task = tasksq.front();
				cout << "CPU - " << i + 1 << " picked Task " << task.threadId << " (Load: " << i + 1 << ")\n";
				thread t( &Sheduler::threadFun, this ,  i , task );
				coresFlag[i] = 1;
			}
		}
	}

	void threadFun(Task task , int coreId )
	{
		this_thread::sleep_for(chrono::seconds(task.load));
		cout << "CPU - " << coreId + 1 << " finished Task " << task.threadId << endl;
		coresFlag[coreId] = 1;
	}

	bool allcompleted()
	{
		for (int i = 0; i < cores; i++)
		{
			if(coresFlag[i] == 0 )
				return false ;
		}
		return true ; 
	}

	void threadFun()



};


class getTasksList
{
	list <Task> tasksList;


};
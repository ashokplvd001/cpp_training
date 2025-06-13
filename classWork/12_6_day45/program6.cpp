#include <iostream>
#include <thread>
#include <queue>
#include <string>
#include <deque>
#include <list>
#include <chrono>
#include <mutex>
#include <fstream>
#include <sstream>

using namespace std;

typedef struct _task
{
	string threadId;
	int load;

}Task;

mutex m; 

class CPU
{
	int cores; 
	queue <Task> tasksq;
	vector < thread* > threadslist;

public : 
	CPU(int cores, queue <Task>& tasklist)
	{
		this->tasksq = move(tasklist);
		this->cores = cores; 
	}


	~CPU()
	{
		
		for (int i = 0; i < cores; i++)
		{
			delete threadslist.at(0);
			threadslist.erase(threadslist.begin());
		}
			
	}

	void excute()
	{
		
		for (int i = 0; i < cores; i++)
		{
			thread* t = new thread( &CPU::core , this , i + 1);
			threadslist.push_back(t);
		}
		for (int i = 0; i < cores; i++)
			threadslist.at(i)->join();
		cout << "All tasks completed\n";
	}



	void core(int coreId)
	{
		Task task; 

		while (true)
		{
			m.lock();

			if (tasksq.empty())
			{
				m.unlock();
				break;
			}

			task = tasksq.front();
			tasksq.pop();

			m.unlock();

			m.lock();
			cout << "CPU - " << coreId << " picked Task " << task.threadId << " (Load: " << task.load << ")\n";
			m.unlock();
			
			this_thread::sleep_for(chrono::seconds(task.load));

			m.lock();
			cout << "CPU - " << coreId  << " finished Task " << task.threadId << endl;
			m.unlock();
		}
		
	}


};


class extractTasks
{
	queue<Task> taskslist; 
	int core; 
public :
	extractTasks() = default; 

//	pair<int , queue <Task> > getQue(string fileName)
	queue <Task> getQue(string fileName)
	{
		fstream file((char *)fileName.c_str(), ios::in);

		if (!file.is_open())
			cout << "Failed to open file\n";

		string line; 
		string word;
		string threadId;
		Task task;
		int load = 0; 
		

		getline(file, line);

		stringstream ss(line);
		
		ss >> word;
		ss >> core; 

		while (getline(file, line))
		{
			stringstream ss(line);
			ss >> threadId;
			(threadId).erase(remove_if(threadId.begin(), threadId.end(), [](char ch) { return ch == ':';}), threadId.end());
				task.threadId = threadId;
			ss >> word;
			ss >> task.load; 


			taskslist.push(task);
		}
		
		file.close();
		return taskslist;
		//return pair<core, taskslist>;
	}
	int getCore()
	{
		return core;
	}
	

};


int main()
{
	int cores = 2; 

	queue < Task> tasklist; 

#if 0 
	Task t = { "T1", 6 };
	tasklist.push(t);
	t = { "T2", 3 };
	tasklist.push(t);
	t = { "T3", 2 };
	tasklist.push(t);
	t = { "T4", 5 };
	tasklist.push(t);
#else 
	extractTasks et;
	tasklist = et.getQue("task.txt");
	cores = et.getCore();
	//cout << "cores : " << cores << endl;
	
#endif 


	CPU cpu( cores , tasklist);

	cpu.excute();
	//this_thread::sleep_for(chrono::seconds(20));
}
#include <iostream>
#include <chrono>
#include <fstream>
#include <vector>
#include <string>
#include <thread>
#include <ctime>
#include <algorithm>

using namespace std;

class job
{
	int jobId;
	int executionTime;
	int priority;
public:
	job(int jobId, int executionTime, int priority) : jobId(jobId), executionTime(executionTime), priority(priority) {}

	string jobExcute()
	{
		auto start = chrono::high_resolution_clock::now();
		this_thread::sleep_for(chrono::milliseconds(executionTime));
		auto end = chrono::high_resolution_clock::now();
		auto duration = chrono::duration_cast<chrono::milliseconds>(end - start);
		string msg = "job " + to_string(jobId) + "  | priority " + to_string( priority) + " | execution " + to_string(duration.count());
		return msg;
	}
	int getJobId()
	{
		return jobId;
	}
	int getExcutionTime()
	{
		return executionTime;
	}
	int getPriority()
	{
		return priority;
	}

};

enum logLevel
{
	DEBUG = 1,
	INFO,
	WARNING,
	ERROR
};

class logClass
{
	fstream logFile;

	string levelToString(logLevel level)
	{
		switch (level)
		{
		default:
			return "UNKNOWN";
		case 1:
			return "DEBUG";
		case 2:
			return "INFO";
		case 3:
			return "WARNING";
		case 4:
			return "ERROR";

		}
	}

	string getTime()
	{
		time_t now = time(nullptr);
		return  asctime(localtime(&now));
	}

public:
	logClass()
	{
		// logFile.open("job_log.txt", ios::out | ios::app);
		logFile.open("job_log.txt", ios::out | ios::trunc );

		if (!logFile.is_open())
		{
			cerr << "Failed to open file\n";
			return;
		}

		string time_string = getTime();
		if (time_string[time_string.size() - 1] == '\n')
			time_string[time_string.size() - 1] = '\0';

		logFile << "\n [ " << levelToString(INFO) << " ]  \" " << time_string << " \" " << "Opened job_log.txt" 
			<< "\n****        ***        ****" << endl;
		//logfile << " [ " << levelToString(log_value) << " ]  " << "logs saved to job_log.txt" << endl;

	}

	bool openStatus()
	{
		return logFile.is_open();
	}

	void logWrite(logLevel log_value, string logInfo)
	{
		string time_string = getTime();
		if (time_string[time_string.size() - 1] == '\n')
			time_string[time_string.size() - 1] = '\0';

		logFile << "[ " << levelToString(log_value) << " ]  \" " << time_string << " \" " << logInfo << endl;
		//logFile << " [ " << levelToString(log_value) << " ] " << logInfo << endl;
	}

	~logClass()
	{
		string time_string = getTime();
		if (time_string[time_string.size() - 1] == '\n')
			time_string[time_string.size() - 1] = '\0';

		logFile << " [ " << levelToString(INFO) << " ]  \" " << time_string << " \" " << "logs saved to job_log.txt" << endl;
		//logfile << " [ " << levelToString(log_value) << " ]  " << "logs saved to job_log.txt" << endl;
		
		logFile << "---------------------------\n";
		logFile.close();
	}



};

bool readThejobList(vector  <job>& v_jobs);

bool excuteAll(vector  <job>& v_jobs, logClass& log, bool (*)(job&, job&)) ;
 
bool  prioritySortDescending(job& a, job& b );
bool  fcfsSortAscending(job& a, job& b );

int main()
{
	vector  <job> v_jobs;

	logClass log;

	if (!log.openStatus())
		cout << "XXXXXXXXXXXXXX   Log filed failed to open   XXXXXXXXXXXXXXXX\n";


	if (!readThejobList(v_jobs))
	{
		cout << "Failed to read the jobs from source\n";
		log.logWrite(DEBUG, "Failed to read the jobs from source\n------------------------------------------");
	}
	else
	{
		cout << "Successfully read the jobs from source\n";
		log.logWrite(DEBUG , "Succesfully read the jobs from source\n------------------------------------------");
	}

	int opt;
	cout << "Choose sheduler algorithm\n";
	cout << "\t1. FCFS\t2. priority based\n";

	cin >> opt;

	bool (*fptr)(job&, job& ) = nullptr;

	if (opt == 2)
	{
		fptr = prioritySortDescending;
		excuteAll(v_jobs, log, fptr);
	}
	else
	{
		fptr = fcfsSortAscending ;
		excuteAll(v_jobs, log, fptr);
	}
}




bool  prioritySortDescending (job& a, job& b)
	{
		return a.getPriority() > b.getPriority();
	};

bool  fcfsSortAscending (job& a, job& b)
	{
		return a.getJobId() < b.getJobId();
	};

bool excuteAll(vector  <job>& v_jobs, logClass& log, bool (*fptr )( job & a , job & b )   )
{

	
	if (!v_jobs.size())
	{
		log.logWrite(ERROR, "No jobs to shedule and run");
		return false ;
	}

	std::sort(v_jobs.begin(), v_jobs.end(), fptr );

	if (fptr == fcfsSortAscending)
		log.logWrite(INFO, "Sorted based on FCFS");
	else
		log.logWrite(INFO, "Sorted based on priority");

	auto allstart = chrono::high_resolution_clock::now();


	for (auto j : v_jobs)
	{
		log.logWrite( INFO , j.jobExcute() ) ;
	}

	auto allend = chrono::high_resolution_clock::now();
	auto allduration = chrono::duration_cast<chrono::milliseconds>(allend - allstart);
	string  msg = "Time taken to finish all requested jobs : " + to_string(allduration.count()) ;
	log.logWrite(INFO, msg  );

	return true; 
}




bool readThejobList(vector  <job>& v_jobs)
{
	fstream inputFileIn("jobFile.txt" , ios::in);

	if (!inputFileIn.is_open())
	{
		cout << "Failed to open the file\n";
		return false;
	}

	int jobId;
	int executionTime;
	int priority;


	while (!inputFileIn.eof())
	{
		
		if (!(inputFileIn >> jobId >> executionTime >> priority))
			break;

		job j(jobId, executionTime, priority);

		v_jobs.push_back( j );
		

	}

	inputFileIn.close();

	if ( !v_jobs.size())
		return false;
	else
		return true;


}





#include <iostream>
#include <chrono>
#include <fstream>
#include <vector>
#include <string>
#include <thread>
 
using namespace std ; 

class job 
{
	int jobId ; 
	int executionTime ; 
	int priority ; 
public : 
	job( int jobId , int executionTime , int priority ) : jobId( jobId ) , executionTime(executionTime) , priority( priority ) {}

	int jobExcute()
	{
		auto start = chrono::high_resolution_clock::now();
		this_thread::sleep_for(chrono::milliseconds(executionTime)) ; 
		auto end = chrono::high_resolution_clock::now();
		auto duration = chrono::duration_cast<chrono::milliseconds>( end - start ) ; 
 		return duration.count();	
	}

};

enum logLevel
{
	DEBUG ,
	INFO  ,
	WARNING , 
	ERROR 
};

class log
{
	ostream logFile ; 
	
	string levelToString(level )
	{
		switch( level )
		{
			default :
				return "UNKNOWN" ;
				break;
			case 1 : 
				return "DEBUG" ;
				break ;
			case 2:
				return "INFO" ;
				break ;
			case 3 : 
				return "WARNING" ;
				break ;
			case 4:
				return "ERROR" ;
				break ;
		}	
	}
	
	string calculate Time( int )
	{
		
	}

public : 
	log( )
	{	
		logFile.open( "logfile.txt" , ios::out | ios::app );  
		
		if( ! logFile.is_open() )
		{
			cerr<<"Failed to open file\n" ;
		} 
	
	}
	
	~log()
	{
		logfile.close();
	}
	
	

}



int main()
{
	vector  <job> v_jobs ; 

	readThejobList( jobs );
// write to log ; 
	
			
	


}




bool readThejobList( vector  <job> & v_jobs  )
{
	istream inputFileIn( logfile.txt );
	
	if( ! inputFileIn.is_open() ) 
	{
		cout<<"Failed to open the file\n" ;
		return false ; 
	}

	int jobId ; 
	int executionTime ; 
	int priority ;


	while( ! inputFileIn.eof() ) 
	{
		if ( !  ( inputFileIn >> jobId >>  executionTime >> priority ) ) 
			break ;
		
		job j( jobId , executionTime , priority ) ;
		
		v_jobs.push_back( j ) ;
		 
	}

	inputFileIn.close();

	if( ! v_jobs.size() ) 
		return false;
	else
		return true ; 

	
}





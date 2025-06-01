#include <iostream>
#include <map>
#include <string>
#include <vector>
#include <thread>

using namespace ; 

class Packet
{
	int packetId ; 
	string protocol ; 
	int p_size ; 
public : 
	inline Packet( int packetId , string protocol , int size ) 
	{
		this->packetId = packetId ; 
		this->protocol = protocol ;
		this->p_size = size ;	
	} 
	inline int getPacketId () noexcept
	{
		return packetId ; 
 	}
	inline string getProtocol() noexcept
	{
		return protocol ; 
 	}
	inline int get_P_size() noexcept
	{
		return size ; 
 	}
	void display()
	{
		cout<<"Packet "<<packetId<<" | " <<protocol <<" | " 
			<< p_size <<" bytes<<endl; 
	}
};
////////////////////////////////////
enum LogLevel
{
	INFO ,
	DEBUG , 
	WARNIG ,
	ERROR 
};
//////////////////////////////////////
class Logger 
{
	ofstream logFile ;

	string levelToString( LogLevel level );
	string getPresentTime() ;
public : 
	Logger( const string & fileName );		
	inline ~Logger();
	bool writeLog( LogLevel level , string content ) ;
	
};

Logger::Logger( const string & fileName )
	{	
		logFile.open( fileName , ios::app );
		//logFile.open( fileName , ios::tranc );
		
		try {
			if( logFile.is_open() )
			throw ios_base::failure ("Failed to open logFile") ; 
		}
		catch( const ios_base::failure & e  )
		{
			cerr<<"Caught ios_base::failure : "<<e.what()<<endl ;
			return ;
		}
		catch(...)
		{	
			cout<<"Some error occured in Log file opening block\n" ;
		}	
		logFile <<"\n========================================\n" ;
		writeLog( DEBUG , "Log file opened\n---------------------------------" );
	}



inline Logger::~Logger() noexcept
{	
	try
	{
		if( !logfile.is_open() )
		throw ios_base::failure("Failed to close error bcz the file discripter not existed" ; 

	}	 
	catch( const ios_base::failure & e )
	{
		cout<<"Caught ios_base::failure "<<e.what()<<endl;
		return ;
	}
	
	logFile<<"---------------------------------\n" ;
	writeLog( DEBUG , "closing log file\n========================================\n\n" ;
 
		logfile.close ;
}


Logger::string levelToString( LogLevel level )
{
	switch( level )
	{
		default : return "UNKNOWN" ;
		case 0 : return "INFO" ;
		case 1 : return "DEBUG" ;
		case 2 : return "WARNIG" ;
		case 3 : return "ERROR" ;
	}
}

Logger::string getPresentTime() 
{
	auto now = chrono::system_clock::now() ;
	time_t timeNow = chrono::system_clock::to_time_t( now );
	return c_time( &timeNow ) ;
}

bool writeLog( LogLevel level , string content ) 
{	
	try 
	{	
		if( ! logFile.is_open() ) 
			throw ios_base::failure ("Log file not opened connot write log" ) ;
	}
	catch(const ios_base::failure & e )
	{
		cout<<"Caught ios_base::failure : <<e.what() <<endl ;
		return false ; 
	}
	catch(...)
	{	
			cout<<"Some error occured in write Log block\n" ;
	}	

	string time_now = getPresentTime();

	if( time_now[ time_now.size() - 1 ] == '\n' ) 		// if new line existed at end remove it
		time_now[ time_now.size() -1 ] == '\0' ;
	
	logFile << " [ "<< levelTostring( level ) << " ] " << time_now << " | " << content << endl ;
	return true ; 
}

//////////////////////////

class PacketManager
{
	map <sting ,vector<Packet>> packetList ;
	public:
	PacketManager() {  packetList.clear(); } 
	~PacketManager() { packetList.clear(); } 

	bool ReadFromFile( string packetsFileNAme)
	{	
		ifstream packetFile( packetsFileNAme , ios::in ) ;
		
		try 
		{	
			if(  ! packetFile.is_open() )
				throw ios_base::failure packetsFileName + " Failed to open" ;
		}
		catch( const ios_bas::failure & e )
		{
			cout<<"Captured ios_base::failure exeption " << e.what() <<endl;
			return false ;
		}
		catch( ... )
		{
			cout<<"Error occured in file opening block"<<endl ;
			return false ;
		}

		int packetId , p_size ;
		string protocol ;

		while( ! packetFile.eof() )
		{
			if( !(packetFile << packetId << protocol << p_size ) )
				break ;

			Packet p( packetId , protocol , p_size ) ;

			// key and value
			packetList[protocol].push_back( p ) ;
		}
		
		packetFile.close() ;		
	}
		
	void showList( string protocol )
	{
		auto temp = packetList.find( protocol ) ;
			
		try 
		{
			if( temp.empty() )
			throw invalid_argument( "Packet list dont have the requested protocol" ) ;
		}
		catch( const exception & e ) 
		{
			cout<<"Caught invalid_argument exception "<<e.what()<<endl;
			return ;
		}
		catch( ... )
		{	
			cout<<"No packets in the list with this protocol\n";
			return ;
		}

		for( 




	
	}

}




